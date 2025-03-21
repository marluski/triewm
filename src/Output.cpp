// SPDX-License-Identifier: GPL-3.0-only

#include "Output.h"
#include <LPainter.h>

Output::Output(const void *params) : LOutput(params) {}

void Output::initializeGL()
{
	painter()->setClearColor(0.1f, 0.3f, 0.8f, 1.f);
	repaint();
}

void Output::moveGL()
{
	repaint();
}

void Output::resizeGL()
{
	repaint();
}

void Output::paintGL()
{
	painter()->clearScreen();
}

void Output::uninitializeGL() {}
