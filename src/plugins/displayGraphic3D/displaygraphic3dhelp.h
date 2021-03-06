/****************************************************************************
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor,
** Boston, MA  02110-1301, USA.
**
** ---
** Copyright (c) 2010, gpsbook-team
**
****************************************************************************/
#ifndef DISPLAYGRAPHIC3DHELP_H
#define DISPLAYGRAPHIC3DHELP_H

#include <QTextBrowser>

namespace Ui {
    class DisplayGraphic3DHelp;
}

class DisplayGraphic3DHelp : public QTextBrowser
{
    Q_OBJECT

public:
    explicit DisplayGraphic3DHelp(QWidget *parent = 0);
    ~DisplayGraphic3DHelp();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DisplayGraphic3DHelp *ui;
};

#endif // DISPLAYGRAPHIC3DHELP_H
