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
** Copyright (C) 2009, gpsbook-team
**
****************************************************************************/
#ifndef DISPLAYTEMPLATE_H
#define DISPLAYTEMPLATE_H

#include "interface.h"
#include "displaytemplatehelp.h"
#include "displaytemplateframe.h"
#include "displaytemplateoptionsframe.h"

using namespace GPSBook;

namespace PluginDisplayTemplate {

    class DisplayTemplate: public DisplayPluginInterface
    {
        Q_OBJECT
        Q_INTERFACES(DisplayPluginInterface)

    private:
        DisplayTemplateFrame*        mView;
        DisplayTemplateHelp*         mHelp;
        DisplayTemplateOptionsFrame* mOptions;

    public:
        DisplayTemplate();

        QString getName();
        QIcon getIcon();
        QWidget* getHelp();
        QWidget* getOptions();
        QWidget* getWidget();
        void init(QWidget*, GPSData* ){}
        QStringList getServiceList(){
            return mServicesList;
        }
        QStringList getServicePropertyList(const char * serviceName ){
            return mServicesPropertiesList[serviceName];
        }
        ServiceInterface* getService(const char * serviceName ) {
            serviceName = serviceName;
            return NULL;
        }
        void loadFile(QString filename);

    public slots:
        void on_gpsdataGPXChanged(){}
        void on_gpsdataTracksChanged(){}
        void on_gpsdataRoutesChanged(){}
        void on_gpsdataWaypointsChanged(){}

        void on_selectionChanged() {}
		void on_fileLoaded(){}
        void on_about();
        void on_showPlugin(){}
        void on_hidePlugin() {}
        void on_all_plugins_loaded(){}

    };
}

#endif // DISPLAYTEMPLATE_H
