// SPDX-License-Identifier: GPL-3.0-only

#include "Triewm.h"
#include <LLauncher.h>
#include <LCompositor.h>
#include <LLog.h>

using namespace Louvre;

int main()
{
    setenv("LOUVRE_DEBUG", "4", 0);

    // make so apps (firefox, qt, gtk, etc) can run without any special setup
    setenv("MOZ_ENABLE_WAYLAND", "1", 1);
    setenv("QT_QPA_PLATFORM", "wayland-egl", 1);
    setenv("GDK_BACKEND", "wayland", 1);
    LLauncher::startDaemon();

    Triewm compositor;

    if (!compositor.start())
    {
        LLog::fatal("[triewm] Failed to start compositor.");
        return 1;
    }

    while (compositor.state() != LCompositor::Uninitialized)
        compositor.processLoop(-1);

    return 0;
}
