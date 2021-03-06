/**
 ******************************************************************************
 *
 * @file       gpsconstellationwidget.h
 * @author     Edouard Lafargue Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup GPSGadgetPlugin GPS Gadget Plugin
 * @{
 * @brief A widget which displays the GPS constellation
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */

#ifndef GPSCONSTELLATIONWIDGET_H_
#define GPSCONSTELLATIONWIDGET_H_

#include <QGraphicsView>
#include <QtSvg/QSvgRenderer>
#include <QtSvg/QGraphicsSvgItem>


class GpsConstellationWidget : public QGraphicsView
{
    Q_OBJECT

public:
   explicit GpsConstellationWidget(QWidget *parent = 0);
   ~GpsConstellationWidget();

public slots:
   void updateSat(int index, int prn, int elevation, int azimuth, int snr);


private slots:

private:
   static const int MAX_SATELLITES = 32;
   int satellites[MAX_SATELLITES][4];
   QGraphicsScene *scene;
   QSvgRenderer *renderer;
   QGraphicsSvgItem* world;
   QGraphicsSvgItem* satIcons[MAX_SATELLITES];
   QGraphicsSimpleTextItem* satTexts[MAX_SATELLITES];

   QPointF polarToCoord(int elevation, int azimuth);

protected:
    void showEvent(QShowEvent *event);
    void resizeEvent(QResizeEvent *event);


};
#endif /* GPSCONSTELLATIONWIDGET_H_ */
