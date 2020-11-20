#pragma once

class Layer
{
public:
    virtual void Attach() = 0;
    virtual void Detach() = 0;
    virtual void Update() = 0;
};
