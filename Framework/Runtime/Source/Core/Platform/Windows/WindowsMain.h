#pragma once

#include <windows.h>
#include <iostream>
#include <print>

#include "Core/Application/Application.h"

extern Loom::Application* CreateApplication();

int main(int argc, char *argv[])
{
    std::println("Windows Main");

    using namespace Loom;
    Application* App = CreateApplication();

    delete App;

    return EXIT_SUCCESS;
}
