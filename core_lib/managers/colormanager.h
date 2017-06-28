/*

Pencil - Traditional Animation Software
Copyright (C) 2005-2007 Patrick Corrieri & Pascal Naidon
Copyright (C) 2012-2017 Matthew Chiawen Chang

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation;

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

*/

#ifndef COLORMANAGER_H
#define COLORMANAGER_H

#include <QColor>
#include "basemanager.h"



class ColorManager : public BaseManager
{
    Q_OBJECT
public:
    ColorManager( QObject* parent );
    ~ColorManager();
    
    bool init() override;
    Status load( Object* ) override;
	Status save( Object* ) override;

    QColor frontColor();
    int frontColorNumber();
    void setColor(const QColor& color);
    void setColorNumber( int n );

Q_SIGNALS:
    void colorChanged(QColor);
    void colorNumberChanged(int);

private:
    QColor mCurrentFrontColor { 33, 33, 33 };
    int mCurrentColorIndex = 0;
};

#endif // COLORMANAGER_H
