#include "Element.h"

Element::Element()
{
    this->data = 0;
    this->pointer = nullptr;
}

Element::Element(int data)
{
    this->data = data;
    this->pointer = nullptr;
}

Element::~Element()
{

}