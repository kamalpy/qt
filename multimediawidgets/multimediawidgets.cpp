#include "multimediawidgets.h"
#include "_cgo_export.h"

#include <QAction>
#include <QActionEvent>
#include <QCamera>
#include <QCameraViewfinder>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDrag>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsVideoItem>
#include <QHideEvent>
#include <QInputMethod>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPointF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTabletEvent>
#include <QTime>
#include <QTimer>
#include <QTimerEvent>
#include <QVideoWidget>
#include <QVideoWidgetControl>
#include <QWheelEvent>
#include <QWidget>

class MyQCameraViewfinder: public QCameraViewfinder {
public:
	MyQCameraViewfinder(QWidget *parent) : QCameraViewfinder(parent) {};
	void setVisible(bool visible) { if (!callbackQCameraViewfinderSetVisible(this->objectName().toUtf8().data(), visible)) { QCameraViewfinder::setVisible(visible); }; };
protected:
	void hideEvent(QHideEvent * event) { if (!callbackQCameraViewfinderHideEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::hideEvent(event); }; };
	void moveEvent(QMoveEvent * event) { if (!callbackQCameraViewfinderMoveEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::moveEvent(event); }; };
	void paintEvent(QPaintEvent * event) { if (!callbackQCameraViewfinderPaintEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::paintEvent(event); }; };
	void resizeEvent(QResizeEvent * event) { if (!callbackQCameraViewfinderResizeEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::resizeEvent(event); }; };
	void showEvent(QShowEvent * event) { if (!callbackQCameraViewfinderShowEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::showEvent(event); }; };
	void actionEvent(QActionEvent * event) { if (!callbackQCameraViewfinderActionEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::actionEvent(event); }; };
	void dragEnterEvent(QDragEnterEvent * event) { if (!callbackQCameraViewfinderDragEnterEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::dragEnterEvent(event); }; };
	void dragLeaveEvent(QDragLeaveEvent * event) { if (!callbackQCameraViewfinderDragLeaveEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::dragLeaveEvent(event); }; };
	void dragMoveEvent(QDragMoveEvent * event) { if (!callbackQCameraViewfinderDragMoveEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::dragMoveEvent(event); }; };
	void dropEvent(QDropEvent * event) { if (!callbackQCameraViewfinderDropEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::dropEvent(event); }; };
	void enterEvent(QEvent * event) { if (!callbackQCameraViewfinderEnterEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::enterEvent(event); }; };
	void focusInEvent(QFocusEvent * event) { if (!callbackQCameraViewfinderFocusInEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::focusInEvent(event); }; };
	void focusOutEvent(QFocusEvent * event) { if (!callbackQCameraViewfinderFocusOutEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::focusOutEvent(event); }; };
	void leaveEvent(QEvent * event) { if (!callbackQCameraViewfinderLeaveEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::leaveEvent(event); }; };
	void changeEvent(QEvent * event) { if (!callbackQCameraViewfinderChangeEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::changeEvent(event); }; };
	void closeEvent(QCloseEvent * event) { if (!callbackQCameraViewfinderCloseEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::closeEvent(event); }; };
	void contextMenuEvent(QContextMenuEvent * event) { if (!callbackQCameraViewfinderContextMenuEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::contextMenuEvent(event); }; };
	void initPainter(QPainter * painter) const { if (!callbackQCameraViewfinderInitPainter(this->objectName().toUtf8().data(), painter)) { QCameraViewfinder::initPainter(painter); }; };
	void inputMethodEvent(QInputMethodEvent * event) { if (!callbackQCameraViewfinderInputMethodEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::inputMethodEvent(event); }; };
	void keyPressEvent(QKeyEvent * event) { if (!callbackQCameraViewfinderKeyPressEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::keyPressEvent(event); }; };
	void keyReleaseEvent(QKeyEvent * event) { if (!callbackQCameraViewfinderKeyReleaseEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::keyReleaseEvent(event); }; };
	void mouseDoubleClickEvent(QMouseEvent * event) { if (!callbackQCameraViewfinderMouseDoubleClickEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::mouseDoubleClickEvent(event); }; };
	void mouseMoveEvent(QMouseEvent * event) { if (!callbackQCameraViewfinderMouseMoveEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::mouseMoveEvent(event); }; };
	void mousePressEvent(QMouseEvent * event) { if (!callbackQCameraViewfinderMousePressEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::mousePressEvent(event); }; };
	void mouseReleaseEvent(QMouseEvent * event) { if (!callbackQCameraViewfinderMouseReleaseEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::mouseReleaseEvent(event); }; };
	void tabletEvent(QTabletEvent * event) { if (!callbackQCameraViewfinderTabletEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::tabletEvent(event); }; };
	void wheelEvent(QWheelEvent * event) { if (!callbackQCameraViewfinderWheelEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::wheelEvent(event); }; };
	void timerEvent(QTimerEvent * event) { if (!callbackQCameraViewfinderTimerEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::timerEvent(event); }; };
	void childEvent(QChildEvent * event) { if (!callbackQCameraViewfinderChildEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::childEvent(event); }; };
	void customEvent(QEvent * event) { if (!callbackQCameraViewfinderCustomEvent(this->objectName().toUtf8().data(), event)) { QCameraViewfinder::customEvent(event); }; };
};

void* QCameraViewfinder_NewQCameraViewfinder(void* parent){
	return new MyQCameraViewfinder(static_cast<QWidget*>(parent));
}

void* QCameraViewfinder_MediaObject(void* ptr){
	return static_cast<QCameraViewfinder*>(ptr)->mediaObject();
}

void QCameraViewfinder_DestroyQCameraViewfinder(void* ptr){
	static_cast<QCameraViewfinder*>(ptr)->~QCameraViewfinder();
}

class MyQGraphicsVideoItem: public QGraphicsVideoItem {
public:
	MyQGraphicsVideoItem(QGraphicsItem *parent) : QGraphicsVideoItem(parent) {};
	void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) { if (!callbackQGraphicsVideoItemPaint(this->objectName().toUtf8().data(), painter, const_cast<QStyleOptionGraphicsItem*>(option), widget)) { QGraphicsVideoItem::paint(painter, option, widget); }; };
protected:
	void timerEvent(QTimerEvent * event) { if (!callbackQGraphicsVideoItemTimerEvent(this->objectName().toUtf8().data(), event)) { QGraphicsVideoItem::timerEvent(event); }; };
	void childEvent(QChildEvent * event) { if (!callbackQGraphicsVideoItemChildEvent(this->objectName().toUtf8().data(), event)) { QGraphicsVideoItem::childEvent(event); }; };
	void customEvent(QEvent * event) { if (!callbackQGraphicsVideoItemCustomEvent(this->objectName().toUtf8().data(), event)) { QGraphicsVideoItem::customEvent(event); }; };
};

void* QGraphicsVideoItem_NewQGraphicsVideoItem(void* parent){
	return new MyQGraphicsVideoItem(static_cast<QGraphicsItem*>(parent));
}

int QGraphicsVideoItem_AspectRatioMode(void* ptr){
	return static_cast<QGraphicsVideoItem*>(ptr)->aspectRatioMode();
}

void* QGraphicsVideoItem_MediaObject(void* ptr){
	return static_cast<QGraphicsVideoItem*>(ptr)->mediaObject();
}

void QGraphicsVideoItem_Paint(void* ptr, void* painter, void* option, void* widget){
	static_cast<QGraphicsVideoItem*>(ptr)->paint(static_cast<QPainter*>(painter), static_cast<QStyleOptionGraphicsItem*>(option), static_cast<QWidget*>(widget));
}

void QGraphicsVideoItem_SetAspectRatioMode(void* ptr, int mode){
	static_cast<QGraphicsVideoItem*>(ptr)->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QGraphicsVideoItem_SetOffset(void* ptr, void* offset){
	static_cast<QGraphicsVideoItem*>(ptr)->setOffset(*static_cast<QPointF*>(offset));
}

void QGraphicsVideoItem_SetSize(void* ptr, void* size){
	static_cast<QGraphicsVideoItem*>(ptr)->setSize(*static_cast<QSizeF*>(size));
}

void QGraphicsVideoItem_DestroyQGraphicsVideoItem(void* ptr){
	static_cast<QGraphicsVideoItem*>(ptr)->~QGraphicsVideoItem();
}

class MyQVideoWidget: public QVideoWidget {
public:
	MyQVideoWidget(QWidget *parent) : QVideoWidget(parent) {};
	void Signal_BrightnessChanged(int brightness) { callbackQVideoWidgetBrightnessChanged(this->objectName().toUtf8().data(), brightness); };
	void Signal_ContrastChanged(int contrast) { callbackQVideoWidgetContrastChanged(this->objectName().toUtf8().data(), contrast); };
	void Signal_FullScreenChanged(bool fullScreen) { callbackQVideoWidgetFullScreenChanged(this->objectName().toUtf8().data(), fullScreen); };
	void Signal_HueChanged(int hue) { callbackQVideoWidgetHueChanged(this->objectName().toUtf8().data(), hue); };
	void Signal_SaturationChanged(int saturation) { callbackQVideoWidgetSaturationChanged(this->objectName().toUtf8().data(), saturation); };
	void setVisible(bool visible) { if (!callbackQVideoWidgetSetVisible(this->objectName().toUtf8().data(), visible)) { QVideoWidget::setVisible(visible); }; };
protected:
	void hideEvent(QHideEvent * event) { if (!callbackQVideoWidgetHideEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::hideEvent(event); }; };
	void moveEvent(QMoveEvent * event) { if (!callbackQVideoWidgetMoveEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::moveEvent(event); }; };
	void paintEvent(QPaintEvent * event) { if (!callbackQVideoWidgetPaintEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::paintEvent(event); }; };
	void resizeEvent(QResizeEvent * event) { if (!callbackQVideoWidgetResizeEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::resizeEvent(event); }; };
	void showEvent(QShowEvent * event) { if (!callbackQVideoWidgetShowEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::showEvent(event); }; };
	void actionEvent(QActionEvent * event) { if (!callbackQVideoWidgetActionEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::actionEvent(event); }; };
	void dragEnterEvent(QDragEnterEvent * event) { if (!callbackQVideoWidgetDragEnterEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::dragEnterEvent(event); }; };
	void dragLeaveEvent(QDragLeaveEvent * event) { if (!callbackQVideoWidgetDragLeaveEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::dragLeaveEvent(event); }; };
	void dragMoveEvent(QDragMoveEvent * event) { if (!callbackQVideoWidgetDragMoveEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::dragMoveEvent(event); }; };
	void dropEvent(QDropEvent * event) { if (!callbackQVideoWidgetDropEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::dropEvent(event); }; };
	void enterEvent(QEvent * event) { if (!callbackQVideoWidgetEnterEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::enterEvent(event); }; };
	void focusInEvent(QFocusEvent * event) { if (!callbackQVideoWidgetFocusInEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::focusInEvent(event); }; };
	void focusOutEvent(QFocusEvent * event) { if (!callbackQVideoWidgetFocusOutEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::focusOutEvent(event); }; };
	void leaveEvent(QEvent * event) { if (!callbackQVideoWidgetLeaveEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::leaveEvent(event); }; };
	void changeEvent(QEvent * event) { if (!callbackQVideoWidgetChangeEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::changeEvent(event); }; };
	void closeEvent(QCloseEvent * event) { if (!callbackQVideoWidgetCloseEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::closeEvent(event); }; };
	void contextMenuEvent(QContextMenuEvent * event) { if (!callbackQVideoWidgetContextMenuEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::contextMenuEvent(event); }; };
	void initPainter(QPainter * painter) const { if (!callbackQVideoWidgetInitPainter(this->objectName().toUtf8().data(), painter)) { QVideoWidget::initPainter(painter); }; };
	void inputMethodEvent(QInputMethodEvent * event) { if (!callbackQVideoWidgetInputMethodEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::inputMethodEvent(event); }; };
	void keyPressEvent(QKeyEvent * event) { if (!callbackQVideoWidgetKeyPressEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::keyPressEvent(event); }; };
	void keyReleaseEvent(QKeyEvent * event) { if (!callbackQVideoWidgetKeyReleaseEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::keyReleaseEvent(event); }; };
	void mouseDoubleClickEvent(QMouseEvent * event) { if (!callbackQVideoWidgetMouseDoubleClickEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::mouseDoubleClickEvent(event); }; };
	void mouseMoveEvent(QMouseEvent * event) { if (!callbackQVideoWidgetMouseMoveEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::mouseMoveEvent(event); }; };
	void mousePressEvent(QMouseEvent * event) { if (!callbackQVideoWidgetMousePressEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::mousePressEvent(event); }; };
	void mouseReleaseEvent(QMouseEvent * event) { if (!callbackQVideoWidgetMouseReleaseEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::mouseReleaseEvent(event); }; };
	void tabletEvent(QTabletEvent * event) { if (!callbackQVideoWidgetTabletEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::tabletEvent(event); }; };
	void wheelEvent(QWheelEvent * event) { if (!callbackQVideoWidgetWheelEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::wheelEvent(event); }; };
	void timerEvent(QTimerEvent * event) { if (!callbackQVideoWidgetTimerEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::timerEvent(event); }; };
	void childEvent(QChildEvent * event) { if (!callbackQVideoWidgetChildEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::childEvent(event); }; };
	void customEvent(QEvent * event) { if (!callbackQVideoWidgetCustomEvent(this->objectName().toUtf8().data(), event)) { QVideoWidget::customEvent(event); }; };
};

int QVideoWidget_AspectRatioMode(void* ptr){
	return static_cast<QVideoWidget*>(ptr)->aspectRatioMode();
}

int QVideoWidget_Brightness(void* ptr){
	return static_cast<QVideoWidget*>(ptr)->brightness();
}

int QVideoWidget_Contrast(void* ptr){
	return static_cast<QVideoWidget*>(ptr)->contrast();
}

int QVideoWidget_Hue(void* ptr){
	return static_cast<QVideoWidget*>(ptr)->hue();
}

void* QVideoWidget_MediaObject(void* ptr){
	return static_cast<QVideoWidget*>(ptr)->mediaObject();
}

int QVideoWidget_Saturation(void* ptr){
	return static_cast<QVideoWidget*>(ptr)->saturation();
}

void QVideoWidget_SetAspectRatioMode(void* ptr, int mode){
	QMetaObject::invokeMethod(static_cast<QVideoWidget*>(ptr), "setAspectRatioMode", Q_ARG(Qt::AspectRatioMode, static_cast<Qt::AspectRatioMode>(mode)));
}

void QVideoWidget_SetBrightness(void* ptr, int brightness){
	QMetaObject::invokeMethod(static_cast<QVideoWidget*>(ptr), "setBrightness", Q_ARG(int, brightness));
}

void QVideoWidget_SetContrast(void* ptr, int contrast){
	QMetaObject::invokeMethod(static_cast<QVideoWidget*>(ptr), "setContrast", Q_ARG(int, contrast));
}

void QVideoWidget_SetFullScreen(void* ptr, int fullScreen){
	QMetaObject::invokeMethod(static_cast<QVideoWidget*>(ptr), "setFullScreen", Q_ARG(bool, fullScreen != 0));
}

void QVideoWidget_SetHue(void* ptr, int hue){
	QMetaObject::invokeMethod(static_cast<QVideoWidget*>(ptr), "setHue", Q_ARG(int, hue));
}

void QVideoWidget_SetSaturation(void* ptr, int saturation){
	QMetaObject::invokeMethod(static_cast<QVideoWidget*>(ptr), "setSaturation", Q_ARG(int, saturation));
}

void* QVideoWidget_NewQVideoWidget(void* parent){
	return new MyQVideoWidget(static_cast<QWidget*>(parent));
}

void QVideoWidget_ConnectBrightnessChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::brightnessChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_BrightnessChanged));;
}

void QVideoWidget_DisconnectBrightnessChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::brightnessChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_BrightnessChanged));;
}

void QVideoWidget_ConnectContrastChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::contrastChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_ContrastChanged));;
}

void QVideoWidget_DisconnectContrastChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::contrastChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_ContrastChanged));;
}

void QVideoWidget_ConnectFullScreenChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(bool)>(&MyQVideoWidget::Signal_FullScreenChanged));;
}

void QVideoWidget_DisconnectFullScreenChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(bool)>(&MyQVideoWidget::Signal_FullScreenChanged));;
}

void QVideoWidget_ConnectHueChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::hueChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_HueChanged));;
}

void QVideoWidget_DisconnectHueChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::hueChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_HueChanged));;
}

int QVideoWidget_IsFullScreen(void* ptr){
	return static_cast<QVideoWidget*>(ptr)->isFullScreen();
}

void QVideoWidget_ConnectSaturationChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::saturationChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_SaturationChanged));;
}

void QVideoWidget_DisconnectSaturationChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidget*>(ptr), static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::saturationChanged), static_cast<MyQVideoWidget*>(ptr), static_cast<void (MyQVideoWidget::*)(int)>(&MyQVideoWidget::Signal_SaturationChanged));;
}

void* QVideoWidget_SizeHint(void* ptr){
	return new QSize(static_cast<QSize>(static_cast<QVideoWidget*>(ptr)->sizeHint()).width(), static_cast<QSize>(static_cast<QVideoWidget*>(ptr)->sizeHint()).height());
}

void QVideoWidget_DestroyQVideoWidget(void* ptr){
	static_cast<QVideoWidget*>(ptr)->~QVideoWidget();
}

class MyQVideoWidgetControl: public QVideoWidgetControl {
public:
	void Signal_BrightnessChanged(int brightness) { callbackQVideoWidgetControlBrightnessChanged(this->objectName().toUtf8().data(), brightness); };
	void Signal_ContrastChanged(int contrast) { callbackQVideoWidgetControlContrastChanged(this->objectName().toUtf8().data(), contrast); };
	void Signal_FullScreenChanged(bool fullScreen) { callbackQVideoWidgetControlFullScreenChanged(this->objectName().toUtf8().data(), fullScreen); };
	void Signal_HueChanged(int hue) { callbackQVideoWidgetControlHueChanged(this->objectName().toUtf8().data(), hue); };
	void Signal_SaturationChanged(int saturation) { callbackQVideoWidgetControlSaturationChanged(this->objectName().toUtf8().data(), saturation); };
protected:
	void timerEvent(QTimerEvent * event) { if (!callbackQVideoWidgetControlTimerEvent(this->objectName().toUtf8().data(), event)) { QVideoWidgetControl::timerEvent(event); }; };
	void childEvent(QChildEvent * event) { if (!callbackQVideoWidgetControlChildEvent(this->objectName().toUtf8().data(), event)) { QVideoWidgetControl::childEvent(event); }; };
	void customEvent(QEvent * event) { if (!callbackQVideoWidgetControlCustomEvent(this->objectName().toUtf8().data(), event)) { QVideoWidgetControl::customEvent(event); }; };
};

int QVideoWidgetControl_AspectRatioMode(void* ptr){
	return static_cast<QVideoWidgetControl*>(ptr)->aspectRatioMode();
}

int QVideoWidgetControl_Brightness(void* ptr){
	return static_cast<QVideoWidgetControl*>(ptr)->brightness();
}

void QVideoWidgetControl_ConnectBrightnessChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::brightnessChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_BrightnessChanged));;
}

void QVideoWidgetControl_DisconnectBrightnessChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::brightnessChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_BrightnessChanged));;
}

int QVideoWidgetControl_Contrast(void* ptr){
	return static_cast<QVideoWidgetControl*>(ptr)->contrast();
}

void QVideoWidgetControl_ConnectContrastChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::contrastChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_ContrastChanged));;
}

void QVideoWidgetControl_DisconnectContrastChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::contrastChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_ContrastChanged));;
}

void QVideoWidgetControl_ConnectFullScreenChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(bool)>(&QVideoWidgetControl::fullScreenChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(bool)>(&MyQVideoWidgetControl::Signal_FullScreenChanged));;
}

void QVideoWidgetControl_DisconnectFullScreenChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(bool)>(&QVideoWidgetControl::fullScreenChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(bool)>(&MyQVideoWidgetControl::Signal_FullScreenChanged));;
}

int QVideoWidgetControl_Hue(void* ptr){
	return static_cast<QVideoWidgetControl*>(ptr)->hue();
}

void QVideoWidgetControl_ConnectHueChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::hueChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_HueChanged));;
}

void QVideoWidgetControl_DisconnectHueChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::hueChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_HueChanged));;
}

int QVideoWidgetControl_IsFullScreen(void* ptr){
	return static_cast<QVideoWidgetControl*>(ptr)->isFullScreen();
}

int QVideoWidgetControl_Saturation(void* ptr){
	return static_cast<QVideoWidgetControl*>(ptr)->saturation();
}

void QVideoWidgetControl_ConnectSaturationChanged(void* ptr){
	QObject::connect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::saturationChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_SaturationChanged));;
}

void QVideoWidgetControl_DisconnectSaturationChanged(void* ptr){
	QObject::disconnect(static_cast<QVideoWidgetControl*>(ptr), static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::saturationChanged), static_cast<MyQVideoWidgetControl*>(ptr), static_cast<void (MyQVideoWidgetControl::*)(int)>(&MyQVideoWidgetControl::Signal_SaturationChanged));;
}

void QVideoWidgetControl_SetAspectRatioMode(void* ptr, int mode){
	static_cast<QVideoWidgetControl*>(ptr)->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidgetControl_SetBrightness(void* ptr, int brightness){
	static_cast<QVideoWidgetControl*>(ptr)->setBrightness(brightness);
}

void QVideoWidgetControl_SetContrast(void* ptr, int contrast){
	static_cast<QVideoWidgetControl*>(ptr)->setContrast(contrast);
}

void QVideoWidgetControl_SetFullScreen(void* ptr, int fullScreen){
	static_cast<QVideoWidgetControl*>(ptr)->setFullScreen(fullScreen != 0);
}

void QVideoWidgetControl_SetHue(void* ptr, int hue){
	static_cast<QVideoWidgetControl*>(ptr)->setHue(hue);
}

void QVideoWidgetControl_SetSaturation(void* ptr, int saturation){
	static_cast<QVideoWidgetControl*>(ptr)->setSaturation(saturation);
}

void* QVideoWidgetControl_VideoWidget(void* ptr){
	return static_cast<QVideoWidgetControl*>(ptr)->videoWidget();
}

void QVideoWidgetControl_DestroyQVideoWidgetControl(void* ptr){
	static_cast<QVideoWidgetControl*>(ptr)->~QVideoWidgetControl();
}
