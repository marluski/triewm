// SPDX-License-Identifier: GPL-3.0-only

#include <LOutput.h>
#include <LSeat.h>
#include <LKeyboard.h>
#include "Triewm.h"
#include "Output.h"
#include "LNamespaces.h"
#include "LTransform.h"

Triewm::Triewm() {}

void Triewm::initialized() {
	// Add the keyboard layout (for now spanish, as it is the one I use)
	seat()->keyboard()->setKeymap(nullptr, nullptr, "es", nullptr);

	Int32 totalWidth { 0 }; // Total width of all outputs
	for (LOutput *output: seat()->outputs()) { // For each output
		// Set the output's scale to 2.0 if dpi is >= 200, otherwise 1.0
		output->setScale(output->dpi() >= 200 ? 2.f : 1.f);

		// Set the orientation of the output
		output->setTransform(LTransform::Normal); // TODO: Make this configurable

		output->setPos(LPoint(totalWidth, 0));
		totalWidth += output->size().w();

		addOutput(output);
		output->repaint();
	}
}

LOutput *Triewm::createOutputRequest(const void *params)
{
	return new Output(params);
}
