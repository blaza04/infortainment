#include "themes.h"

Themes::Themes(QObject *parent)
    : QObject{parent}
{}

bool Themes::Istheme() const
{
    return m_Istheme;
}

void Themes::setIstheme(bool newIstheme)
{
    if (m_Istheme == newIstheme)
        return;
    m_Istheme = newIstheme;
    emit IsthemeChanged();
}
