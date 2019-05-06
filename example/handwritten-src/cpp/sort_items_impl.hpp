#pragma once

#include "sort_items.hpp"
#include "textbox_listener.hpp"

namespace textsort {

class SortItemsImpl : public SortItems {

public:
    SortItemsImpl(const std::shared_ptr<TextboxListener> & listener);
    virtual void sort(sort_order order, const ItemList & items) override;
    virtual int32_t count() override;

private:
    std::shared_ptr<TextboxListener> m_listener;

};

}
