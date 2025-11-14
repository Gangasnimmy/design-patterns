#pragma once

//UI button interface
class button {
    public:
        virtual ~button() = default;
        virtual void render() = 0;
};

//UI checkbox interface
class checkBox {
    public:
        virtual ~checkBox() = default;
        virtual void render() = 0;
};

//UI textBox interface
class textBox {
    public:
        virtual ~textBox() = default;
        virtual void render() = 0;
};