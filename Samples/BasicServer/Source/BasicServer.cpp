// Copyright (c) Marco Silva 2026. All rights reserved.

#include "Core/Core.h"

#include <iostream>
#include <print>

class BasicServerApp : public Loom::Application
{
public:
    BasicServerApp()
    {
        std::println("Basic Server Application created!");
    }

    ~BasicServerApp() override = default;
};

/** This is where the application is actually created. */
Loom::Application* CreateApplication()
{
    return new BasicServerApp;
}
