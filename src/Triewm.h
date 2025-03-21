// SPDX-License-Identifier: GPL-3.0-only

#ifndef TRIEWM_H
#define TRIEWM_H

#include <LCompositor.h>

using namespace Louvre;

class Triewm : public LCompositor
{
public:
	Triewm();
	void initialized() override;

	// Virtual constructors
	LOutput *createOutputRequest(const void *params) override;
};

#endif // TRIEWM_H
