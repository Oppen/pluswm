/*
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <LibButton.h>

Button::Button(unsigned int modmask, unsigned int button, const char* action)
    : m_modmask(modmask)
    , m_button(button)
    , m_action(action)
{
}

unsigned int Button::modmask() const
{
    return m_modmask;
}

unsigned int Button::button() const
{
    return m_button;
}

std::string Button::action() const
{
    return m_action;
}
