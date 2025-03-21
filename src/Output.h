// SPDX-License-Identifier: GPL-3.0-only

#ifndef OUTPUT_H
#define OUTPUT_H

#include "LTexture.h"
#include <LOutput.h>

using namespace Louvre;

class Output : public LOutput
{
public:
	Output(const void *params);

	void initializeGL() override;
	void moveGL() override;
	void resizeGL() override;
	void paintGL() override;
	void uninitializeGL() override;

	LTexture *wallpaper { nullptr };

};

#endif // OUTPUT_H
