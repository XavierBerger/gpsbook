/*************************************************************************
*   Copyright (C) 2006 by Christoph Eckert                                *
*   ce@christeck.de                                                       *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
***************************************************************************/

#ifndef LISTITEM_H
#define LISTITEM_H

#include <iostream>

#include <QtGui>
#include "SettingsManager.h"

using namespace std;



class ListItem : public QObject
{
    Q_OBJECT

private:
    QString DataType;
    QString Type;
    QString DisplayType;
    QString Value;
    QString DisplayValue;
    QString GpsBabelWorkingDir;
    QString CharSet;
    QStringList Options;
    QTreeWidgetItem * ListViewItem;
    bool FileExists;
    bool IsDevice;

    void updateGuiItem();

public:
    ListItem( QTreeWidget * );
    ~ListItem();

public slots:
    void setup( QString, QString );
    QString tellType();
    QStringList tellOptions();
    QString tellCharSet();
    QString tellValue();
    QStringList content();
    QTreeWidgetItem * tellListViewItem();
    bool isAlright();

signals:


};



#endif

