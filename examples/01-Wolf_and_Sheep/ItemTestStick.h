#ifndef WELT_ITEMTESTSTICK_H
#define WELT_ITEMTESTSTICK_H

#include "../../src/universal.h"
#include "../../src/material.h"
#include "../../src/Iitem.h"
#include <typeinfo>
#include <vector>

class ItemTestStick : public Iitem {
public:
    ItemTestStick();

    ~ItemTestStick() override = default;

    std::vector<std::size_t> GetItemTypeHash() override;

    Material getMaterial() override;

    DisplayID getDisplayID() override;

protected:
    std::vector<std::size_t> testStickHash();

private:
    Material selfMaterial;
    DisplayID itemDisplay;
};


#endif //WELT_ITEMTESTSTICK_H
