#include "qt_widgets_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT bool ctr_qt_widgets_ffi_QProgressDialog_autoReset(QProgressDialog const * this_ptr) {
  return this_ptr->autoReset();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setAutoClose(QProgressDialog * this_ptr, bool close) {
  this_ptr->setAutoClose(close);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QProgressDialog_autoClose(QProgressDialog const * this_ptr) {
  return this_ptr->autoClose();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_open(QProgressDialog * this_ptr, QObject * receiver, char const * member) {
  this_ptr->open(receiver, member);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_cancel(QProgressDialog * this_ptr) {
  this_ptr->cancel();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_reset(QProgressDialog * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setMaximum(QProgressDialog * this_ptr, int maximum) {
  this_ptr->setMaximum(maximum);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setMinimum(QProgressDialog * this_ptr, int minimum) {
  this_ptr->setMinimum(minimum);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setRange(QProgressDialog * this_ptr, int minimum, int maximum) {
  this_ptr->setRange(minimum, maximum);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setValue(QProgressDialog * this_ptr, int progress) {
  this_ptr->setValue(progress);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setLabelText(QProgressDialog * this_ptr, QString const * text) {
  this_ptr->setLabelText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setCancelButtonText(QProgressDialog * this_ptr, QString const * text) {
  this_ptr->setCancelButtonText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setMinimumDuration(QProgressDialog * this_ptr, int ms) {
  this_ptr->setMinimumDuration(ms);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QProxyStyle_metaObject(QProxyStyle const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QProxyStyle_qt_metacast(QProxyStyle * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_qt_metacall(QProxyStyle * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QProxyStyle_tr(char const * s, char const * c, int n) {
  return new QString(QProxyStyle::tr(s, c, n));
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_QProxyStyle_QProxyStyle(QStyle * style) {
  return new QProxyStyle(style);
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_QProxyStyle_QProxyStyle1(QString const * key) {
  return new QProxyStyle(*key);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_dQProxyStyle(QProxyStyle * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QProxyStyle_baseStyle(QProxyStyle const * this_ptr) {
  return this_ptr->baseStyle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_setBaseStyle(QProxyStyle * this_ptr, QStyle * style) {
  this_ptr->setBaseStyle(style);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawPrimitive(QProxyStyle const * this_ptr, QStyle::PrimitiveElement element, QStyleOption const * option, QPainter * painter, QWidget const * widget) {
  this_ptr->drawPrimitive(element, option, painter, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawControl(QProxyStyle const * this_ptr, QStyle::ControlElement element, QStyleOption const * option, QPainter * painter, QWidget const * widget) {
  this_ptr->drawControl(element, option, painter, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawComplexControl(QProxyStyle const * this_ptr, QStyle::ComplexControl control, QStyleOptionComplex const * option, QPainter * painter, QWidget const * widget) {
  this_ptr->drawComplexControl(control, option, painter, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawItemText(QProxyStyle const * this_ptr, QPainter * painter, QRect const * rect, int flags, QPalette const * pal, bool enabled, QString const * text, QPalette::ColorRole textRole) {
  this_ptr->drawItemText(painter, *rect, flags, *pal, enabled, *text, textRole);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawItemPixmap(QProxyStyle const * this_ptr, QPainter * painter, QRect const * rect, int alignment, QPixmap const * pixmap) {
  this_ptr->drawItemPixmap(painter, *rect, alignment, *pixmap);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QProxyStyle_sizeFromContents(QProxyStyle const * this_ptr, QStyle::ContentsType type, QStyleOption const * option, QSize const * size, QWidget const * widget) {
  return new QSize(this_ptr->sizeFromContents(type, option, *size, widget));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QProxyStyle_subElementRect(QProxyStyle const * this_ptr, QStyle::SubElement element, QStyleOption const * option, QWidget const * widget) {
  return new QRect(this_ptr->subElementRect(element, option, widget));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QProxyStyle_subControlRect(QProxyStyle const * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt, QStyle::SubControl sc, QWidget const * widget) {
  return new QRect(this_ptr->subControlRect(cc, opt, sc, widget));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QProxyStyle_itemTextRect(QProxyStyle const * this_ptr, QFontMetrics const * fm, QRect const * r, int flags, bool enabled, QString const * text) {
  return new QRect(this_ptr->itemTextRect(*fm, *r, flags, enabled, *text));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QProxyStyle_itemPixmapRect(QProxyStyle const * this_ptr, QRect const * r, int flags, QPixmap const * pixmap) {
  return new QRect(this_ptr->itemPixmapRect(*r, flags, *pixmap));
}


RITUAL_EXPORT QStyle::SubControl ctr_qt_widgets_ffi_QProxyStyle_hitTestComplexControl(QProxyStyle const * this_ptr, QStyle::ComplexControl control, QStyleOptionComplex const * option, QPoint const * pos, QWidget const * widget) {
  return this_ptr->hitTestComplexControl(control, option, *pos, widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_styleHint(QProxyStyle const * this_ptr, QStyle::StyleHint hint, QStyleOption const * option, QWidget const * widget, QStyleHintReturn * returnData) {
  return this_ptr->styleHint(hint, option, widget, returnData);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_pixelMetric(QProxyStyle const * this_ptr, QStyle::PixelMetric metric, QStyleOption const * option, QWidget const * widget) {
  return this_ptr->pixelMetric(metric, option, widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_layoutSpacing(QProxyStyle const * this_ptr, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, QStyleOption const * option, QWidget const * widget) {
  return this_ptr->layoutSpacing(control1, control2, orientation, option, widget);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QProxyStyle_standardIcon(QProxyStyle const * this_ptr, QStyle::StandardPixmap standardIcon, QStyleOption const * option, QWidget const * widget) {
  return new QIcon(this_ptr->standardIcon(standardIcon, option, widget));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QProxyStyle_standardPixmap(QProxyStyle const * this_ptr, QStyle::StandardPixmap standardPixmap, QStyleOption const * opt, QWidget const * widget) {
  return new QPixmap(this_ptr->standardPixmap(standardPixmap, opt, widget));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QProxyStyle_generatedIconPixmap(QProxyStyle const * this_ptr, QIcon::Mode iconMode, QPixmap const * pixmap, QStyleOption const * opt) {
  return new QPixmap(this_ptr->generatedIconPixmap(iconMode, *pixmap, opt));
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QProxyStyle_standardPalette(QProxyStyle const * this_ptr) {
  return new QPalette(this_ptr->standardPalette());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_polish(QProxyStyle * this_ptr, QWidget * widget) {
  this_ptr->polish(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_polish1(QProxyStyle * this_ptr, QPalette * pal) {
  this_ptr->polish(*pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_polish2(QProxyStyle * this_ptr, QApplication * app) {
  this_ptr->polish(app);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_unpolish(QProxyStyle * this_ptr, QWidget * widget) {
  this_ptr->unpolish(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_unpolish1(QProxyStyle * this_ptr, QApplication * app) {
  this_ptr->unpolish(app);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QRadioButton_metaObject(QRadioButton const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QRadioButton_qt_metacast(QRadioButton * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QRadioButton_qt_metacall(QRadioButton * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QRadioButton_tr(char const * s, char const * c, int n) {
  return new QString(QRadioButton::tr(s, c, n));
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_QRadioButton_QRadioButton(QWidget * parent) {
  return new QRadioButton(parent);
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_QRadioButton_QRadioButton1(QString const * text, QWidget * parent) {
  return new QRadioButton(*text, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRadioButton_dQRadioButton(QRadioButton * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QRadioButton_sizeHint(QRadioButton const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QRadioButton_minimumSizeHint(QRadioButton const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QRhiWidget_metaObject(QRhiWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QRhiWidget_qt_metacast(QRhiWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QRhiWidget_qt_metacall(QRhiWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QRhiWidget_tr(char const * s, char const * c, int n) {
  return new QString(QRhiWidget::tr(s, c, n));
}


RITUAL_EXPORT QRhiWidget * ctr_qt_widgets_ffi_QRhiWidget_QRhiWidget(QWidget * parent, int f) {
  return new QRhiWidget(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_dQRhiWidget(QRhiWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRhiWidget::Api ctr_qt_widgets_ffi_QRhiWidget_api(QRhiWidget const * this_ptr) {
  return this_ptr->api();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_setApi(QRhiWidget * this_ptr, QRhiWidget::Api api) {
  this_ptr->setApi(api);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QRhiWidget_isDebugLayerEnabled(QRhiWidget const * this_ptr) {
  return this_ptr->isDebugLayerEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_setDebugLayerEnabled(QRhiWidget * this_ptr, bool enable) {
  this_ptr->setDebugLayerEnabled(enable);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QRhiWidget_sampleCount(QRhiWidget const * this_ptr) {
  return this_ptr->sampleCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_setSampleCount(QRhiWidget * this_ptr, int samples) {
  this_ptr->setSampleCount(samples);
}


RITUAL_EXPORT QRhiWidget::TextureFormat ctr_qt_widgets_ffi_QRhiWidget_colorBufferFormat(QRhiWidget const * this_ptr) {
  return this_ptr->colorBufferFormat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_setColorBufferFormat(QRhiWidget * this_ptr, QRhiWidget::TextureFormat format) {
  this_ptr->setColorBufferFormat(format);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QRhiWidget_fixedColorBufferSize(QRhiWidget const * this_ptr) {
  return new QSize(this_ptr->fixedColorBufferSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_setFixedColorBufferSize(QRhiWidget * this_ptr, QSize const * pixelSize) {
  this_ptr->setFixedColorBufferSize(*pixelSize);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_setFixedColorBufferSize1(QRhiWidget * this_ptr, int w, int h) {
  this_ptr->setFixedColorBufferSize(w, h);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QRhiWidget_isMirrorVerticallyEnabled(QRhiWidget const * this_ptr) {
  return this_ptr->isMirrorVerticallyEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRhiWidget_setMirrorVertically(QRhiWidget * this_ptr, bool enabled) {
  this_ptr->setMirrorVertically(enabled);
}


RITUAL_EXPORT QImage * ctr_qt_widgets_ffi_QRhiWidget_grabFramebuffer(QRhiWidget const * this_ptr) {
  return new QImage(this_ptr->grabFramebuffer());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QScrollBar_metaObject(QScrollBar const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QScrollBar_qt_metacast(QScrollBar * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QScrollBar_qt_metacall(QScrollBar * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QScrollBar_tr(char const * s, char const * c, int n) {
  return new QString(QScrollBar::tr(s, c, n));
}


RITUAL_EXPORT QScrollBar * ctr_qt_widgets_ffi_QScrollBar_QScrollBar(QWidget * parent) {
  return new QScrollBar(parent);
}


RITUAL_EXPORT QScrollBar * ctr_qt_widgets_ffi_QScrollBar_QScrollBar1(Qt::Orientation arg1, QWidget * parent) {
  return new QScrollBar(arg1, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollBar_dQScrollBar(QScrollBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QScrollBar_sizeHint(QScrollBar const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QScrollBar_event(QScrollBar * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QScrollBar_createStandardContextMenu(QScrollBar * this_ptr, QPoint const * position) {
  return this_ptr->createStandardContextMenu(*position);
}


RITUAL_EXPORT QScrollerProperties * ctr_qt_widgets_ffi_QScrollerProperties_QScrollerProperties() {
  return new QScrollerProperties();
}


RITUAL_EXPORT QScrollerProperties * ctr_qt_widgets_ffi_QScrollerProperties_QScrollerProperties1(QScrollerProperties const * sp) {
  return new QScrollerProperties(*sp);
}


RITUAL_EXPORT QScrollerProperties * ctr_qt_widgets_ffi_QScrollerProperties_operator_(QScrollerProperties * this_ptr, QScrollerProperties const * sp) {
  return &this_ptr->operator=(*sp);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollerProperties_dQScrollerProperties(QScrollerProperties * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QScrollerProperties_operator__(QScrollerProperties const * this_ptr, QScrollerProperties const * sp) {
  return this_ptr->operator==(*sp);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollerProperties_setDefaultScrollerProperties(QScrollerProperties const * sp) {
  QScrollerProperties::setDefaultScrollerProperties(*sp);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollerProperties_unsetDefaultScrollerProperties() {
  QScrollerProperties::unsetDefaultScrollerProperties();
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QScrollerProperties_scrollMetric(QScrollerProperties const * this_ptr, QScrollerProperties::ScrollMetric metric) {
  return new QVariant(this_ptr->scrollMetric(metric));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollerProperties_setScrollMetric(QScrollerProperties * this_ptr, QScrollerProperties::ScrollMetric metric, QVariant const * value) {
  this_ptr->setScrollMetric(metric, *value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_qRegisterNormalizedMetaType_QScrollerProperties__OvershootPolicy(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QScrollerProperties__OvershootPolicy(*arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_qRegisterNormalizedMetaType_QScrollerProperties__FrameRates(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QScrollerProperties__FrameRates(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QScroller_metaObject(QScroller const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QScroller_qt_metacast(QScroller * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QScroller_qt_metacall(QScroller * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QScroller_tr(char const * s, char const * c, int n) {
  return new QString(QScroller::tr(s, c, n));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QScroller_hasScroller(QObject * target) {
  return QScroller::hasScroller(target);
}


RITUAL_EXPORT QScroller * ctr_qt_widgets_ffi_QScroller_scroller(QObject * target) {
  return QScroller::scroller(target);
}


RITUAL_EXPORT QScroller const * ctr_qt_widgets_ffi_QScroller_scroller1(QObject const * target) {
  return QScroller::scroller(target);
}


RITUAL_EXPORT Qt::GestureType ctr_qt_widgets_ffi_QScroller_grabGesture(QObject * target, QScroller::ScrollerGestureType gestureType) {
  return QScroller::grabGesture(target, gestureType);
}


RITUAL_EXPORT Qt::GestureType ctr_qt_widgets_ffi_QScroller_grabbedGesture(QObject * target) {
  return QScroller::grabbedGesture(target);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_ungrabGesture(QObject * target) {
  QScroller::ungrabGesture(target);
}


RITUAL_EXPORT QList< QScroller * > * ctr_qt_widgets_ffi_QScroller_activeScrollers() {
  return new QList< QScroller * >(QScroller::activeScrollers());
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_QScroller_target(QScroller const * this_ptr) {
  return this_ptr->target();
}


RITUAL_EXPORT QScroller::State ctr_qt_widgets_ffi_QScroller_state(QScroller const * this_ptr) {
  return this_ptr->state();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QScroller_handleInput(QScroller * this_ptr, QScroller::Input input, QPointF const * position, long long timestamp) {
  return this_ptr->handleInput(input, *position, timestamp);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_stop(QScroller * this_ptr) {
  this_ptr->stop();
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QScroller_velocity(QScroller const * this_ptr) {
  return new QPointF(this_ptr->velocity());
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QScroller_finalPosition(QScroller const * this_ptr) {
  return new QPointF(this_ptr->finalPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QScroller_pixelPerMeter(QScroller const * this_ptr) {
  return new QPointF(this_ptr->pixelPerMeter());
}


RITUAL_EXPORT QScrollerProperties * ctr_qt_widgets_ffi_QScroller_scrollerProperties(QScroller const * this_ptr) {
  return new QScrollerProperties(this_ptr->scrollerProperties());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_setSnapPositionsX(QScroller * this_ptr, QList< double > const * positions) {
  this_ptr->setSnapPositionsX(*positions);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_setSnapPositionsX1(QScroller * this_ptr, double first, double interval) {
  this_ptr->setSnapPositionsX(first, interval);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_setSnapPositionsY(QScroller * this_ptr, QList< double > const * positions) {
  this_ptr->setSnapPositionsY(*positions);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_setSnapPositionsY1(QScroller * this_ptr, double first, double interval) {
  this_ptr->setSnapPositionsY(first, interval);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_setScrollerProperties(QScroller * this_ptr, QScrollerProperties const * prop) {
  this_ptr->setScrollerProperties(*prop);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_scrollTo(QScroller * this_ptr, QPointF const * pos) {
  this_ptr->scrollTo(*pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_scrollTo1(QScroller * this_ptr, QPointF const * pos, int scrollTime) {
  this_ptr->scrollTo(*pos, scrollTime);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_ensureVisible(QScroller * this_ptr, QRectF const * rect, double xmargin, double ymargin) {
  this_ptr->ensureVisible(*rect, xmargin, ymargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_ensureVisible1(QScroller * this_ptr, QRectF const * rect, double xmargin, double ymargin, int scrollTime) {
  this_ptr->ensureVisible(*rect, xmargin, ymargin, scrollTime);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScroller_resendPrepareEvent(QScroller * this_ptr) {
  this_ptr->resendPrepareEvent();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSizeGrip_metaObject(QSizeGrip const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSizeGrip_qt_metacast(QSizeGrip * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSizeGrip_qt_metacall(QSizeGrip * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSizeGrip_tr(char const * s, char const * c, int n) {
  return new QString(QSizeGrip::tr(s, c, n));
}


RITUAL_EXPORT QSizeGrip * ctr_qt_widgets_ffi_QSizeGrip_QSizeGrip(QWidget * parent) {
  return new QSizeGrip(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizeGrip_dQSizeGrip(QSizeGrip * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSizeGrip_sizeHint(QSizeGrip const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizeGrip_setVisible(QSizeGrip * this_ptr, bool arg1) {
  this_ptr->setVisible(arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSpinBox_metaObject(QSpinBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSpinBox_qt_metacast(QSpinBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSpinBox_qt_metacall(QSpinBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSpinBox_tr(char const * s, char const * c, int n) {
  return new QString(QSpinBox::tr(s, c, n));
}


RITUAL_EXPORT QSpinBox * ctr_qt_widgets_ffi_QSpinBox_QSpinBox(QWidget * parent) {
  return new QSpinBox(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_dQSpinBox(QSpinBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSpinBox_value(QSpinBox const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSpinBox_prefix(QSpinBox const * this_ptr) {
  return new QString(this_ptr->prefix());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setPrefix(QSpinBox * this_ptr, QString const * prefix) {
  this_ptr->setPrefix(*prefix);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSpinBox_suffix(QSpinBox const * this_ptr) {
  return new QString(this_ptr->suffix());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setSuffix(QSpinBox * this_ptr, QString const * suffix) {
  this_ptr->setSuffix(*suffix);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSpinBox_cleanText(QSpinBox const * this_ptr) {
  return new QString(this_ptr->cleanText());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSpinBox_singleStep(QSpinBox const * this_ptr) {
  return this_ptr->singleStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setSingleStep(QSpinBox * this_ptr, int val) {
  this_ptr->setSingleStep(val);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSpinBox_minimum(QSpinBox const * this_ptr) {
  return this_ptr->minimum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setMinimum(QSpinBox * this_ptr, int min) {
  this_ptr->setMinimum(min);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSpinBox_maximum(QSpinBox const * this_ptr) {
  return this_ptr->maximum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setMaximum(QSpinBox * this_ptr, int max) {
  this_ptr->setMaximum(max);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setRange(QSpinBox * this_ptr, int min, int max) {
  this_ptr->setRange(min, max);
}


RITUAL_EXPORT QAbstractSpinBox::StepType ctr_qt_widgets_ffi_QSpinBox_stepType(QSpinBox const * this_ptr) {
  return this_ptr->stepType();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setStepType(QSpinBox * this_ptr, QAbstractSpinBox::StepType stepType) {
  this_ptr->setStepType(stepType);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSpinBox_displayIntegerBase(QSpinBox const * this_ptr) {
  return this_ptr->displayIntegerBase();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setDisplayIntegerBase(QSpinBox * this_ptr, int base) {
  this_ptr->setDisplayIntegerBase(base);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpinBox_setValue(QSpinBox * this_ptr, int val) {
  this_ptr->setValue(val);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDoubleSpinBox_metaObject(QDoubleSpinBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDoubleSpinBox_qt_metacast(QDoubleSpinBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDoubleSpinBox_qt_metacall(QDoubleSpinBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDoubleSpinBox_tr(char const * s, char const * c, int n) {
  return new QString(QDoubleSpinBox::tr(s, c, n));
}


RITUAL_EXPORT QDoubleSpinBox * ctr_qt_widgets_ffi_QDoubleSpinBox_QDoubleSpinBox(QWidget * parent) {
  return new QDoubleSpinBox(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_dQDoubleSpinBox(QDoubleSpinBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QDoubleSpinBox_value(QDoubleSpinBox const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDoubleSpinBox_prefix(QDoubleSpinBox const * this_ptr) {
  return new QString(this_ptr->prefix());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setPrefix(QDoubleSpinBox * this_ptr, QString const * prefix) {
  this_ptr->setPrefix(*prefix);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDoubleSpinBox_suffix(QDoubleSpinBox const * this_ptr) {
  return new QString(this_ptr->suffix());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setSuffix(QDoubleSpinBox * this_ptr, QString const * suffix) {
  this_ptr->setSuffix(*suffix);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDoubleSpinBox_cleanText(QDoubleSpinBox const * this_ptr) {
  return new QString(this_ptr->cleanText());
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QDoubleSpinBox_singleStep(QDoubleSpinBox const * this_ptr) {
  return this_ptr->singleStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setSingleStep(QDoubleSpinBox * this_ptr, double val) {
  this_ptr->setSingleStep(val);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QDoubleSpinBox_minimum(QDoubleSpinBox const * this_ptr) {
  return this_ptr->minimum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setMinimum(QDoubleSpinBox * this_ptr, double min) {
  this_ptr->setMinimum(min);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QDoubleSpinBox_maximum(QDoubleSpinBox const * this_ptr) {
  return this_ptr->maximum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setMaximum(QDoubleSpinBox * this_ptr, double max) {
  this_ptr->setMaximum(max);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setRange(QDoubleSpinBox * this_ptr, double min, double max) {
  this_ptr->setRange(min, max);
}


RITUAL_EXPORT QAbstractSpinBox::StepType ctr_qt_widgets_ffi_QDoubleSpinBox_stepType(QDoubleSpinBox const * this_ptr) {
  return this_ptr->stepType();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setStepType(QDoubleSpinBox * this_ptr, QAbstractSpinBox::StepType stepType) {
  this_ptr->setStepType(stepType);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDoubleSpinBox_decimals(QDoubleSpinBox const * this_ptr) {
  return this_ptr->decimals();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setDecimals(QDoubleSpinBox * this_ptr, int prec) {
  this_ptr->setDecimals(prec);
}


RITUAL_EXPORT QValidator::State ctr_qt_widgets_ffi_QDoubleSpinBox_validate(QDoubleSpinBox const * this_ptr, QString * input, int * pos) {
  return this_ptr->validate(*input, *pos);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QDoubleSpinBox_valueFromText(QDoubleSpinBox const * this_ptr, QString const * text) {
  return this_ptr->valueFromText(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDoubleSpinBox_textFromValue(QDoubleSpinBox const * this_ptr, double val) {
  return new QString(this_ptr->textFromValue(val));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_fixup(QDoubleSpinBox const * this_ptr, QString * str) {
  this_ptr->fixup(*str);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDoubleSpinBox_setValue(QDoubleSpinBox * this_ptr, double val) {
  this_ptr->setValue(val);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSplashScreen_metaObject(QSplashScreen const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSplashScreen_qt_metacast(QSplashScreen * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSplashScreen_qt_metacall(QSplashScreen * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSplashScreen_tr(char const * s, char const * c, int n) {
  return new QString(QSplashScreen::tr(s, c, n));
}


RITUAL_EXPORT QSplashScreen * ctr_qt_widgets_ffi_QSplashScreen_QSplashScreen(QPixmap const * pixmap, int f) {
  return new QSplashScreen(*pixmap, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT QSplashScreen * ctr_qt_widgets_ffi_QSplashScreen_QSplashScreen1(QScreen * screen, QPixmap const * pixmap, int f) {
  return new QSplashScreen(screen, *pixmap, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_dQSplashScreen(QSplashScreen * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_setPixmap(QSplashScreen * this_ptr, QPixmap const * pixmap) {
  this_ptr->setPixmap(*pixmap);
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QSplashScreen_pixmap(QSplashScreen const * this_ptr) {
  return new QPixmap(this_ptr->pixmap());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_finish(QSplashScreen * this_ptr, QWidget * w) {
  this_ptr->finish(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_repaint(QSplashScreen * this_ptr) {
  this_ptr->repaint();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSplashScreen_message(QSplashScreen const * this_ptr) {
  return new QString(this_ptr->message());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_showMessage(QSplashScreen * this_ptr, QString const * message, int alignment, QColor const * color) {
  this_ptr->showMessage(*message, alignment, *color);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_clearMessage(QSplashScreen * this_ptr) {
  this_ptr->clearMessage();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSplitter_metaObject(QSplitter const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSplitter_qt_metacast(QSplitter * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSplitter_qt_metacall(QSplitter * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSplitter_tr(char const * s, char const * c, int n) {
  return new QString(QSplitter::tr(s, c, n));
}


RITUAL_EXPORT QSplitter * ctr_qt_widgets_ffi_QSplitter_QSplitter(QWidget * parent) {
  return new QSplitter(parent);
}


RITUAL_EXPORT QSplitter * ctr_qt_widgets_ffi_QSplitter_QSplitter1(Qt::Orientation arg1, QWidget * parent) {
  return new QSplitter(arg1, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_dQSplitter(QSplitter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_addWidget(QSplitter * this_ptr, QWidget * widget) {
  this_ptr->addWidget(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_insertWidget(QSplitter * this_ptr, int index, QWidget * widget) {
  this_ptr->insertWidget(index, widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QSplitter_replaceWidget(QSplitter * this_ptr, int index, QWidget * widget) {
  return this_ptr->replaceWidget(index, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setOrientation(QSplitter * this_ptr, Qt::Orientation arg1) {
  this_ptr->setOrientation(arg1);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QSplitter_orientation(QSplitter const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setChildrenCollapsible(QSplitter * this_ptr, bool arg1) {
  this_ptr->setChildrenCollapsible(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSplitter_childrenCollapsible(QSplitter const * this_ptr) {
  return this_ptr->childrenCollapsible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setCollapsible(QSplitter * this_ptr, int index, bool arg2) {
  this_ptr->setCollapsible(index, arg2);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSplitter_isCollapsible(QSplitter const * this_ptr, int index) {
  return this_ptr->isCollapsible(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setOpaqueResize(QSplitter * this_ptr, bool opaque) {
  this_ptr->setOpaqueResize(opaque);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSplitter_opaqueResize(QSplitter const * this_ptr) {
  return this_ptr->opaqueResize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_refresh(QSplitter * this_ptr) {
  this_ptr->refresh();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSplitter_sizeHint(QSplitter const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSplitter_minimumSizeHint(QSplitter const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT QList< int > * ctr_qt_widgets_ffi_QSplitter_sizes(QSplitter const * this_ptr) {
  return new QList< int >(this_ptr->sizes());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setSizes(QSplitter * this_ptr, QList< int > const * list) {
  this_ptr->setSizes(*list);
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QSplitter_saveState(QSplitter const * this_ptr) {
  return new QByteArray(this_ptr->saveState());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSplitter_restoreState(QSplitter * this_ptr, QByteArray const * state) {
  return this_ptr->restoreState(*state);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSplitter_handleWidth(QSplitter const * this_ptr) {
  return this_ptr->handleWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setHandleWidth(QSplitter * this_ptr, int arg1) {
  this_ptr->setHandleWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSplitter_indexOf(QSplitter const * this_ptr, QWidget * w) {
  return this_ptr->indexOf(w);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QSplitter_widget(QSplitter const * this_ptr, int index) {
  return this_ptr->widget(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSplitter_count(QSplitter const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_getRange(QSplitter const * this_ptr, int index, int * arg2, int * arg3) {
  this_ptr->getRange(index, arg2, arg3);
}


RITUAL_EXPORT QSplitterHandle * ctr_qt_widgets_ffi_QSplitter_handle(QSplitter const * this_ptr, int index) {
  return this_ptr->handle(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setStretchFactor(QSplitter * this_ptr, int index, int stretch) {
  this_ptr->setStretchFactor(index, stretch);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSplitterHandle_metaObject(QSplitterHandle const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSplitterHandle_qt_metacast(QSplitterHandle * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSplitterHandle_qt_metacall(QSplitterHandle * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSplitterHandle_tr(char const * s, char const * c, int n) {
  return new QString(QSplitterHandle::tr(s, c, n));
}


RITUAL_EXPORT QSplitterHandle * ctr_qt_widgets_ffi_QSplitterHandle_QSplitterHandle(Qt::Orientation o, QSplitter * parent) {
  return new QSplitterHandle(o, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitterHandle_dQSplitterHandle(QSplitterHandle * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitterHandle_setOrientation(QSplitterHandle * this_ptr, Qt::Orientation o) {
  this_ptr->setOrientation(o);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QSplitterHandle_orientation(QSplitterHandle const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSplitterHandle_opaqueResize(QSplitterHandle const * this_ptr) {
  return this_ptr->opaqueResize();
}


RITUAL_EXPORT QSplitter * ctr_qt_widgets_ffi_QSplitterHandle_splitter(QSplitterHandle const * this_ptr) {
  return this_ptr->splitter();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSplitterHandle_sizeHint(QSplitterHandle const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStackedLayout_metaObject(QStackedLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QStackedLayout_qt_metacast(QStackedLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedLayout_qt_metacall(QStackedLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStackedLayout_tr(char const * s, char const * c, int n) {
  return new QString(QStackedLayout::tr(s, c, n));
}


RITUAL_EXPORT QStackedLayout * ctr_qt_widgets_ffi_QStackedLayout_QStackedLayout() {
  return new QStackedLayout();
}


RITUAL_EXPORT QStackedLayout * ctr_qt_widgets_ffi_QStackedLayout_QStackedLayout1(QWidget * parent) {
  return new QStackedLayout(parent);
}


RITUAL_EXPORT QStackedLayout * ctr_qt_widgets_ffi_QStackedLayout_QStackedLayout2(QLayout * parentLayout) {
  return new QStackedLayout(parentLayout);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedLayout_dQStackedLayout(QStackedLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedLayout_addWidget(QStackedLayout * this_ptr, QWidget * w) {
  return this_ptr->addWidget(w);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedLayout_insertWidget(QStackedLayout * this_ptr, int index, QWidget * w) {
  return this_ptr->insertWidget(index, w);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QStackedLayout_currentWidget(QStackedLayout const * this_ptr) {
  return this_ptr->currentWidget();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedLayout_currentIndex(QStackedLayout const * this_ptr) {
  return this_ptr->currentIndex();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QStackedLayout_widget(QStackedLayout const * this_ptr, int arg1) {
  return this_ptr->widget(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedLayout_count(QStackedLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QStackedLayout::StackingMode ctr_qt_widgets_ffi_QStackedLayout_stackingMode(QStackedLayout const * this_ptr) {
  return this_ptr->stackingMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedLayout_setStackingMode(QStackedLayout * this_ptr, QStackedLayout::StackingMode stackingMode) {
  this_ptr->setStackingMode(stackingMode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedLayout_addItem(QStackedLayout * this_ptr, QLayoutItem * item) {
  this_ptr->addItem(item);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStackedLayout_sizeHint(QStackedLayout const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStackedLayout_minimumSize(QStackedLayout const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QStackedLayout_itemAt(QStackedLayout const * this_ptr, int arg1) {
  return this_ptr->itemAt(arg1);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QStackedLayout_takeAt(QStackedLayout * this_ptr, int arg1) {
  return this_ptr->takeAt(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedLayout_setGeometry(QStackedLayout * this_ptr, QRect const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStackedLayout_hasHeightForWidth(QStackedLayout const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedLayout_heightForWidth(QStackedLayout const * this_ptr, int width) {
  return this_ptr->heightForWidth(width);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedLayout_setCurrentIndex(QStackedLayout * this_ptr, int index) {
  this_ptr->setCurrentIndex(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedLayout_setCurrentWidget(QStackedLayout * this_ptr, QWidget * w) {
  this_ptr->setCurrentWidget(w);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStackedWidget_metaObject(QStackedWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QStackedWidget_qt_metacast(QStackedWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedWidget_qt_metacall(QStackedWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStackedWidget_tr(char const * s, char const * c, int n) {
  return new QString(QStackedWidget::tr(s, c, n));
}


RITUAL_EXPORT QStackedWidget * ctr_qt_widgets_ffi_QStackedWidget_QStackedWidget(QWidget * parent) {
  return new QStackedWidget(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedWidget_dQStackedWidget(QStackedWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedWidget_addWidget(QStackedWidget * this_ptr, QWidget * w) {
  return this_ptr->addWidget(w);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedWidget_insertWidget(QStackedWidget * this_ptr, int index, QWidget * w) {
  return this_ptr->insertWidget(index, w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedWidget_removeWidget(QStackedWidget * this_ptr, QWidget * w) {
  this_ptr->removeWidget(w);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QStackedWidget_currentWidget(QStackedWidget const * this_ptr) {
  return this_ptr->currentWidget();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedWidget_currentIndex(QStackedWidget const * this_ptr) {
  return this_ptr->currentIndex();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedWidget_indexOf(QStackedWidget const * this_ptr, QWidget const * arg1) {
  return this_ptr->indexOf(arg1);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QStackedWidget_widget(QStackedWidget const * this_ptr, int arg1) {
  return this_ptr->widget(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStackedWidget_count(QStackedWidget const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedWidget_setCurrentIndex(QStackedWidget * this_ptr, int index) {
  this_ptr->setCurrentIndex(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStackedWidget_setCurrentWidget(QStackedWidget * this_ptr, QWidget * w) {
  this_ptr->setCurrentWidget(w);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStatusBar_metaObject(QStatusBar const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QStatusBar_qt_metacast(QStatusBar * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStatusBar_qt_metacall(QStatusBar * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStatusBar_tr(char const * s, char const * c, int n) {
  return new QString(QStatusBar::tr(s, c, n));
}


RITUAL_EXPORT QStatusBar * ctr_qt_widgets_ffi_QStatusBar_QStatusBar(QWidget * parent) {
  return new QStatusBar(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_dQStatusBar(QStatusBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_addWidget(QStatusBar * this_ptr, QWidget * widget, int stretch) {
  this_ptr->addWidget(widget, stretch);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStatusBar_insertWidget(QStatusBar * this_ptr, int index, QWidget * widget, int stretch) {
  return this_ptr->insertWidget(index, widget, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_addPermanentWidget(QStatusBar * this_ptr, QWidget * widget, int stretch) {
  this_ptr->addPermanentWidget(widget, stretch);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStatusBar_insertPermanentWidget(QStatusBar * this_ptr, int index, QWidget * widget, int stretch) {
  return this_ptr->insertPermanentWidget(index, widget, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_removeWidget(QStatusBar * this_ptr, QWidget * widget) {
  this_ptr->removeWidget(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_setSizeGripEnabled(QStatusBar * this_ptr, bool arg1) {
  this_ptr->setSizeGripEnabled(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStatusBar_isSizeGripEnabled(QStatusBar const * this_ptr) {
  return this_ptr->isSizeGripEnabled();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStatusBar_currentMessage(QStatusBar const * this_ptr) {
  return new QString(this_ptr->currentMessage());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_showMessage(QStatusBar * this_ptr, QString const * text, int timeout) {
  this_ptr->showMessage(*text, timeout);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_clearMessage(QStatusBar * this_ptr) {
  this_ptr->clearMessage();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStyledItemDelegate_metaObject(QStyledItemDelegate const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QStyledItemDelegate_qt_metacast(QStyledItemDelegate * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyledItemDelegate_qt_metacall(QStyledItemDelegate * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyledItemDelegate_tr(char const * s, char const * c, int n) {
  return new QString(QStyledItemDelegate::tr(s, c, n));
}


RITUAL_EXPORT QStyledItemDelegate * ctr_qt_widgets_ffi_QStyledItemDelegate_QStyledItemDelegate(QObject * parent) {
  return new QStyledItemDelegate(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyledItemDelegate_dQStyledItemDelegate(QStyledItemDelegate * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyledItemDelegate_paint(QStyledItemDelegate const * this_ptr, QPainter * painter, QStyleOptionViewItem const * option, QModelIndex const * index) {
  this_ptr->paint(painter, *option, *index);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyledItemDelegate_sizeHint(QStyledItemDelegate const * this_ptr, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return new QSize(this_ptr->sizeHint(*option, *index));
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QStyledItemDelegate_createEditor(QStyledItemDelegate const * this_ptr, QWidget * parent, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return this_ptr->createEditor(parent, *option, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyledItemDelegate_setEditorData(QStyledItemDelegate const * this_ptr, QWidget * editor, QModelIndex const * index) {
  this_ptr->setEditorData(editor, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyledItemDelegate_setModelData(QStyledItemDelegate const * this_ptr, QWidget * editor, QAbstractItemModel * model, QModelIndex const * index) {
  this_ptr->setModelData(editor, model, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyledItemDelegate_updateEditorGeometry(QStyledItemDelegate const * this_ptr, QWidget * editor, QStyleOptionViewItem const * option, QModelIndex const * index) {
  this_ptr->updateEditorGeometry(editor, *option, *index);
}


RITUAL_EXPORT QItemEditorFactory * ctr_qt_widgets_ffi_QStyledItemDelegate_itemEditorFactory(QStyledItemDelegate const * this_ptr) {
  return this_ptr->itemEditorFactory();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyledItemDelegate_setItemEditorFactory(QStyledItemDelegate * this_ptr, QItemEditorFactory * factory) {
  this_ptr->setItemEditorFactory(factory);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyledItemDelegate_displayText(QStyledItemDelegate const * this_ptr, QVariant const * value, QLocale const * locale) {
  return new QString(this_ptr->displayText(*value, *locale));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QStyleFactory_keys() {
  return new QList< QString >(QStyleFactory::keys());
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QStyleFactory_create(QString const * arg1) {
  return QStyleFactory::create(*arg1);
}


RITUAL_EXPORT QStylePainter * ctr_qt_widgets_ffi_QStylePainter_QStylePainter() {
  return new QStylePainter();
}


RITUAL_EXPORT QStylePainter * ctr_qt_widgets_ffi_QStylePainter_QStylePainter1(QWidget * w) {
  return new QStylePainter(w);
}


RITUAL_EXPORT QStylePainter * ctr_qt_widgets_ffi_QStylePainter_QStylePainter2(QPaintDevice * pd, QWidget * w) {
  return new QStylePainter(pd, w);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStylePainter_begin(QStylePainter * this_ptr, QWidget * w) {
  return this_ptr->begin(w);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStylePainter_begin1(QStylePainter * this_ptr, QPaintDevice * pd, QWidget * w) {
  return this_ptr->begin(pd, w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePainter_drawPrimitive(QStylePainter * this_ptr, QStyle::PrimitiveElement pe, QStyleOption const * opt) {
  this_ptr->drawPrimitive(pe, *opt);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePainter_drawControl(QStylePainter * this_ptr, QStyle::ControlElement ce, QStyleOption const * opt) {
  this_ptr->drawControl(ce, *opt);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePainter_drawComplexControl(QStylePainter * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt) {
  this_ptr->drawComplexControl(cc, *opt);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePainter_drawItemText(QStylePainter * this_ptr, QRect const * r, int flags, QPalette const * pal, bool enabled, QString const * text, QPalette::ColorRole textRole) {
  this_ptr->drawItemText(*r, flags, *pal, enabled, *text, textRole);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePainter_drawItemPixmap(QStylePainter * this_ptr, QRect const * r, int flags, QPixmap const * pixmap) {
  this_ptr->drawItemPixmap(*r, flags, *pixmap);
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QStylePainter_style(QStylePainter const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStylePlugin_metaObject(QStylePlugin const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QStylePlugin_qt_metacast(QStylePlugin * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStylePlugin_qt_metacall(QStylePlugin * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStylePlugin_tr(char const * s, char const * c, int n) {
  return new QString(QStylePlugin::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePlugin_dQStylePlugin(QStylePlugin * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QStylePlugin_create(QStylePlugin * this_ptr, QString const * key) {
  return this_ptr->create(*key);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSystemTrayIcon_metaObject(QSystemTrayIcon const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSystemTrayIcon_qt_metacast(QSystemTrayIcon * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSystemTrayIcon_qt_metacall(QSystemTrayIcon * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSystemTrayIcon_tr(char const * s, char const * c, int n) {
  return new QString(QSystemTrayIcon::tr(s, c, n));
}


RITUAL_EXPORT QSystemTrayIcon * ctr_qt_widgets_ffi_QSystemTrayIcon_QSystemTrayIcon(QObject * parent) {
  return new QSystemTrayIcon(parent);
}


RITUAL_EXPORT QSystemTrayIcon * ctr_qt_widgets_ffi_QSystemTrayIcon_QSystemTrayIcon1(QIcon const * icon, QObject * parent) {
  return new QSystemTrayIcon(*icon, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_dQSystemTrayIcon(QSystemTrayIcon * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_setContextMenu(QSystemTrayIcon * this_ptr, QMenu * menu) {
  this_ptr->setContextMenu(menu);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QSystemTrayIcon_contextMenu(QSystemTrayIcon const * this_ptr) {
  return this_ptr->contextMenu();
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QSystemTrayIcon_icon(QSystemTrayIcon const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_setIcon(QSystemTrayIcon * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSystemTrayIcon_toolTip(QSystemTrayIcon const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_setToolTip(QSystemTrayIcon * this_ptr, QString const * tip) {
  this_ptr->setToolTip(*tip);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSystemTrayIcon_isSystemTrayAvailable() {
  return QSystemTrayIcon::isSystemTrayAvailable();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSystemTrayIcon_supportsMessages() {
  return QSystemTrayIcon::supportsMessages();
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QSystemTrayIcon_geometry(QSystemTrayIcon const * this_ptr) {
  return new QRect(this_ptr->geometry());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSystemTrayIcon_isVisible(QSystemTrayIcon const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_setVisible(QSystemTrayIcon * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_show(QSystemTrayIcon * this_ptr) {
  this_ptr->show();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_hide(QSystemTrayIcon * this_ptr) {
  this_ptr->hide();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_showMessage(QSystemTrayIcon * this_ptr, QString const * title, QString const * msg, QIcon const * icon, int msecs) {
  this_ptr->showMessage(*title, *msg, *icon, msecs);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_showMessage1(QSystemTrayIcon * this_ptr, QString const * title, QString const * msg, QSystemTrayIcon::MessageIcon icon, int msecs) {
  this_ptr->showMessage(*title, *msg, icon, msecs);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTableView_metaObject(QTableView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTableView_qt_metacast(QTableView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_qt_metacall(QTableView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTableView_tr(char const * s, char const * c, int n) {
  return new QString(QTableView::tr(s, c, n));
}


RITUAL_EXPORT QTableView * ctr_qt_widgets_ffi_QTableView_QTableView(QWidget * parent) {
  return new QTableView(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_dQTableView(QTableView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setModel(QTableView * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setRootIndex(QTableView * this_ptr, QModelIndex const * index) {
  this_ptr->setRootIndex(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setSelectionModel(QTableView * this_ptr, QItemSelectionModel * selectionModel) {
  this_ptr->setSelectionModel(selectionModel);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_doItemsLayout(QTableView * this_ptr) {
  this_ptr->doItemsLayout();
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_QTableView_horizontalHeader(QTableView const * this_ptr) {
  return this_ptr->horizontalHeader();
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_QTableView_verticalHeader(QTableView const * this_ptr) {
  return this_ptr->verticalHeader();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setHorizontalHeader(QTableView * this_ptr, QHeaderView * header) {
  this_ptr->setHorizontalHeader(header);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setVerticalHeader(QTableView * this_ptr, QHeaderView * header) {
  this_ptr->setVerticalHeader(header);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_rowViewportPosition(QTableView const * this_ptr, int row) {
  return this_ptr->rowViewportPosition(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_rowAt(QTableView const * this_ptr, int y) {
  return this_ptr->rowAt(y);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setRowHeight(QTableView * this_ptr, int row, int height) {
  this_ptr->setRowHeight(row, height);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_rowHeight(QTableView const * this_ptr, int row) {
  return this_ptr->rowHeight(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_columnViewportPosition(QTableView const * this_ptr, int column) {
  return this_ptr->columnViewportPosition(column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_columnAt(QTableView const * this_ptr, int x) {
  return this_ptr->columnAt(x);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setColumnWidth(QTableView * this_ptr, int column, int width) {
  this_ptr->setColumnWidth(column, width);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_columnWidth(QTableView const * this_ptr, int column) {
  return this_ptr->columnWidth(column);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableView_isRowHidden(QTableView const * this_ptr, int row) {
  return this_ptr->isRowHidden(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setRowHidden(QTableView * this_ptr, int row, bool hide) {
  this_ptr->setRowHidden(row, hide);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableView_isColumnHidden(QTableView const * this_ptr, int column) {
  return this_ptr->isColumnHidden(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setColumnHidden(QTableView * this_ptr, int column, bool hide) {
  this_ptr->setColumnHidden(column, hide);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setSortingEnabled(QTableView * this_ptr, bool enable) {
  this_ptr->setSortingEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableView_isSortingEnabled(QTableView const * this_ptr) {
  return this_ptr->isSortingEnabled();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableView_showGrid(QTableView const * this_ptr) {
  return this_ptr->showGrid();
}


RITUAL_EXPORT Qt::PenStyle ctr_qt_widgets_ffi_QTableView_gridStyle(QTableView const * this_ptr) {
  return this_ptr->gridStyle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setGridStyle(QTableView * this_ptr, Qt::PenStyle style) {
  this_ptr->setGridStyle(style);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setWordWrap(QTableView * this_ptr, bool on) {
  this_ptr->setWordWrap(on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableView_wordWrap(QTableView const * this_ptr) {
  return this_ptr->wordWrap();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setCornerButtonEnabled(QTableView * this_ptr, bool enable) {
  this_ptr->setCornerButtonEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableView_isCornerButtonEnabled(QTableView const * this_ptr) {
  return this_ptr->isCornerButtonEnabled();
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QTableView_visualRect(QTableView const * this_ptr, QModelIndex const * index) {
  return new QRect(this_ptr->visualRect(*index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_scrollTo(QTableView * this_ptr, QModelIndex const * index, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollTo(*index, hint);
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QTableView_indexAt(QTableView const * this_ptr, QPoint const * p) {
  return new QModelIndex(this_ptr->indexAt(*p));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setSpan(QTableView * this_ptr, int row, int column, int rowSpan, int columnSpan) {
  this_ptr->setSpan(row, column, rowSpan, columnSpan);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_rowSpan(QTableView const * this_ptr, int row, int column) {
  return this_ptr->rowSpan(row, column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableView_columnSpan(QTableView const * this_ptr, int row, int column) {
  return this_ptr->columnSpan(row, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_clearSpans(QTableView * this_ptr) {
  this_ptr->clearSpans();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_selectRow(QTableView * this_ptr, int row) {
  this_ptr->selectRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_selectColumn(QTableView * this_ptr, int column) {
  this_ptr->selectColumn(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_hideRow(QTableView * this_ptr, int row) {
  this_ptr->hideRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_hideColumn(QTableView * this_ptr, int column) {
  this_ptr->hideColumn(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_showRow(QTableView * this_ptr, int row) {
  this_ptr->showRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_showColumn(QTableView * this_ptr, int column) {
  this_ptr->showColumn(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_resizeRowToContents(QTableView * this_ptr, int row) {
  this_ptr->resizeRowToContents(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_resizeRowsToContents(QTableView * this_ptr) {
  this_ptr->resizeRowsToContents();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_resizeColumnToContents(QTableView * this_ptr, int column) {
  this_ptr->resizeColumnToContents(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_resizeColumnsToContents(QTableView * this_ptr) {
  this_ptr->resizeColumnsToContents();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_sortByColumn(QTableView * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sortByColumn(column, order);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_setShowGrid(QTableView * this_ptr, bool show) {
  this_ptr->setShowGrid(show);
}


RITUAL_EXPORT QTableWidgetSelectionRange * ctr_qt_widgets_ffi_QTableWidgetSelectionRange_QTableWidgetSelectionRange() {
  return new QTableWidgetSelectionRange();
}


RITUAL_EXPORT QTableWidgetSelectionRange * ctr_qt_widgets_ffi_QTableWidgetSelectionRange_QTableWidgetSelectionRange1(int top, int left, int bottom, int right) {
  return new QTableWidgetSelectionRange(top, left, bottom, right);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetSelectionRange_topRow(QTableWidgetSelectionRange const * this_ptr) {
  return this_ptr->topRow();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetSelectionRange_bottomRow(QTableWidgetSelectionRange const * this_ptr) {
  return this_ptr->bottomRow();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetSelectionRange_leftColumn(QTableWidgetSelectionRange const * this_ptr) {
  return this_ptr->leftColumn();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetSelectionRange_rightColumn(QTableWidgetSelectionRange const * this_ptr) {
  return this_ptr->rightColumn();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetSelectionRange_rowCount(QTableWidgetSelectionRange const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetSelectionRange_columnCount(QTableWidgetSelectionRange const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_QTableWidgetItem(int type) {
  return new QTableWidgetItem(type);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_QTableWidgetItem1(QString const * text, int type) {
  return new QTableWidgetItem(*text, type);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_QTableWidgetItem2(QIcon const * icon, QString const * text, int type) {
  return new QTableWidgetItem(*icon, *text, type);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_QTableWidgetItem3(QTableWidgetItem const * other) {
  return new QTableWidgetItem(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_dQTableWidgetItem(QTableWidgetItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_clone(QTableWidgetItem const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT QTableWidget * ctr_qt_widgets_ffi_QTableWidgetItem_tableWidget(QTableWidgetItem const * this_ptr) {
  return this_ptr->tableWidget();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetItem_row(QTableWidgetItem const * this_ptr) {
  return this_ptr->row();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetItem_column(QTableWidgetItem const * this_ptr) {
  return this_ptr->column();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setSelected(QTableWidgetItem * this_ptr, bool select) {
  this_ptr->setSelected(select);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableWidgetItem_isSelected(QTableWidgetItem const * this_ptr) {
  return this_ptr->isSelected();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetItem_flags(QTableWidgetItem const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setFlags(QTableWidgetItem * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< Qt::ItemFlag >(flags));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTableWidgetItem_text(QTableWidgetItem const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setText(QTableWidgetItem * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QTableWidgetItem_icon(QTableWidgetItem const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setIcon(QTableWidgetItem * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTableWidgetItem_statusTip(QTableWidgetItem const * this_ptr) {
  return new QString(this_ptr->statusTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setStatusTip(QTableWidgetItem * this_ptr, QString const * statusTip) {
  this_ptr->setStatusTip(*statusTip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTableWidgetItem_toolTip(QTableWidgetItem const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setToolTip(QTableWidgetItem * this_ptr, QString const * toolTip) {
  this_ptr->setToolTip(*toolTip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTableWidgetItem_whatsThis(QTableWidgetItem const * this_ptr) {
  return new QString(this_ptr->whatsThis());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setWhatsThis(QTableWidgetItem * this_ptr, QString const * whatsThis) {
  this_ptr->setWhatsThis(*whatsThis);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QTableWidgetItem_font(QTableWidgetItem const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setFont(QTableWidgetItem * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetItem_textAlignment(QTableWidgetItem const * this_ptr) {
  return this_ptr->textAlignment();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setTextAlignment(QTableWidgetItem * this_ptr, int alignment) {
  this_ptr->setTextAlignment(alignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setTextAlignment1(QTableWidgetItem * this_ptr, Qt::AlignmentFlag alignment) {
  this_ptr->setTextAlignment(alignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setTextAlignment2(QTableWidgetItem * this_ptr, int alignment) {
  this_ptr->setTextAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QTableWidgetItem_background(QTableWidgetItem const * this_ptr) {
  return new QBrush(this_ptr->background());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setBackground(QTableWidgetItem * this_ptr, QBrush const * brush) {
  this_ptr->setBackground(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QTableWidgetItem_foreground(QTableWidgetItem const * this_ptr) {
  return new QBrush(this_ptr->foreground());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setForeground(QTableWidgetItem * this_ptr, QBrush const * brush) {
  this_ptr->setForeground(*brush);
}


RITUAL_EXPORT Qt::CheckState ctr_qt_widgets_ffi_QTableWidgetItem_checkState(QTableWidgetItem const * this_ptr) {
  return this_ptr->checkState();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setCheckState(QTableWidgetItem * this_ptr, Qt::CheckState state) {
  this_ptr->setCheckState(state);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTableWidgetItem_sizeHint(QTableWidgetItem const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setSizeHint(QTableWidgetItem * this_ptr, QSize const * size) {
  this_ptr->setSizeHint(*size);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QTableWidgetItem_data(QTableWidgetItem const * this_ptr, int role) {
  return new QVariant(this_ptr->data(role));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_setData(QTableWidgetItem * this_ptr, int role, QVariant const * value) {
  this_ptr->setData(role, *value);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableWidgetItem_operator_(QTableWidgetItem const * this_ptr, QTableWidgetItem const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_read(QTableWidgetItem * this_ptr, QDataStream * in) {
  this_ptr->read(*in);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetItem_write(QTableWidgetItem const * this_ptr, QDataStream * out) {
  this_ptr->write(*out);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_operator_1(QTableWidgetItem * this_ptr, QTableWidgetItem const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidgetItem_type(QTableWidgetItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__15(QDataStream * in, QTableWidgetItem * item) {
  return &operator>>(*in, *item);
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__16(QDataStream * out, QTableWidgetItem const * item) {
  return &operator<<(*out, *item);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTableWidget_metaObject(QTableWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTableWidget_qt_metacast(QTableWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_qt_metacall(QTableWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTableWidget_tr(char const * s, char const * c, int n) {
  return new QString(QTableWidget::tr(s, c, n));
}


RITUAL_EXPORT QTableWidget * ctr_qt_widgets_ffi_QTableWidget_QTableWidget(QWidget * parent) {
  return new QTableWidget(parent);
}


RITUAL_EXPORT QTableWidget * ctr_qt_widgets_ffi_QTableWidget_QTableWidget1(int rows, int columns, QWidget * parent) {
  return new QTableWidget(rows, columns, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_dQTableWidget(QTableWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setRowCount(QTableWidget * this_ptr, int rows) {
  this_ptr->setRowCount(rows);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_rowCount(QTableWidget const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setColumnCount(QTableWidget * this_ptr, int columns) {
  this_ptr->setColumnCount(columns);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_columnCount(QTableWidget const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_row(QTableWidget const * this_ptr, QTableWidgetItem const * item) {
  return this_ptr->row(item);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_column(QTableWidget const * this_ptr, QTableWidgetItem const * item) {
  return this_ptr->column(item);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_item(QTableWidget const * this_ptr, int row, int column) {
  return this_ptr->item(row, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setItem(QTableWidget * this_ptr, int row, int column, QTableWidgetItem * item) {
  this_ptr->setItem(row, column, item);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_takeItem(QTableWidget * this_ptr, int row, int column) {
  return this_ptr->takeItem(row, column);
}


RITUAL_EXPORT QList< QTableWidgetItem * > * ctr_qt_widgets_ffi_QTableWidget_items(QTableWidget const * this_ptr, QMimeData const * data) {
  return new QList< QTableWidgetItem * >(this_ptr->items(data));
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QTableWidget_indexFromItem(QTableWidget const * this_ptr, QTableWidgetItem const * item) {
  return new QModelIndex(this_ptr->indexFromItem(item));
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_itemFromIndex(QTableWidget const * this_ptr, QModelIndex const * index) {
  return this_ptr->itemFromIndex(*index);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_verticalHeaderItem(QTableWidget const * this_ptr, int row) {
  return this_ptr->verticalHeaderItem(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setVerticalHeaderItem(QTableWidget * this_ptr, int row, QTableWidgetItem * item) {
  this_ptr->setVerticalHeaderItem(row, item);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_takeVerticalHeaderItem(QTableWidget * this_ptr, int row) {
  return this_ptr->takeVerticalHeaderItem(row);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_horizontalHeaderItem(QTableWidget const * this_ptr, int column) {
  return this_ptr->horizontalHeaderItem(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setHorizontalHeaderItem(QTableWidget * this_ptr, int column, QTableWidgetItem * item) {
  this_ptr->setHorizontalHeaderItem(column, item);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_takeHorizontalHeaderItem(QTableWidget * this_ptr, int column) {
  return this_ptr->takeHorizontalHeaderItem(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setVerticalHeaderLabels(QTableWidget * this_ptr, QList< QString > const * labels) {
  this_ptr->setVerticalHeaderLabels(*labels);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setHorizontalHeaderLabels(QTableWidget * this_ptr, QList< QString > const * labels) {
  this_ptr->setHorizontalHeaderLabels(*labels);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_currentRow(QTableWidget const * this_ptr) {
  return this_ptr->currentRow();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_currentColumn(QTableWidget const * this_ptr) {
  return this_ptr->currentColumn();
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_currentItem(QTableWidget const * this_ptr) {
  return this_ptr->currentItem();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setCurrentItem(QTableWidget * this_ptr, QTableWidgetItem * item) {
  this_ptr->setCurrentItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setCurrentItem1(QTableWidget * this_ptr, QTableWidgetItem * item, int command) {
  this_ptr->setCurrentItem(item, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setCurrentCell(QTableWidget * this_ptr, int row, int column) {
  this_ptr->setCurrentCell(row, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setCurrentCell1(QTableWidget * this_ptr, int row, int column, int command) {
  this_ptr->setCurrentCell(row, column, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_sortItems(QTableWidget * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sortItems(column, order);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setSortingEnabled(QTableWidget * this_ptr, bool enable) {
  this_ptr->setSortingEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableWidget_isSortingEnabled(QTableWidget const * this_ptr) {
  return this_ptr->isSortingEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_editItem(QTableWidget * this_ptr, QTableWidgetItem * item) {
  this_ptr->editItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_openPersistentEditor(QTableWidget * this_ptr, QTableWidgetItem * item) {
  this_ptr->openPersistentEditor(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_closePersistentEditor(QTableWidget * this_ptr, QTableWidgetItem * item) {
  this_ptr->closePersistentEditor(item);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTableWidget_isPersistentEditorOpen(QTableWidget const * this_ptr, QTableWidgetItem * item) {
  return this_ptr->isPersistentEditorOpen(item);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QTableWidget_cellWidget(QTableWidget const * this_ptr, int row, int column) {
  return this_ptr->cellWidget(row, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setCellWidget(QTableWidget * this_ptr, int row, int column, QWidget * widget) {
  this_ptr->setCellWidget(row, column, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_removeCellWidget(QTableWidget * this_ptr, int row, int column) {
  this_ptr->removeCellWidget(row, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setRangeSelected(QTableWidget * this_ptr, QTableWidgetSelectionRange const * range, bool select) {
  this_ptr->setRangeSelected(*range, select);
}


RITUAL_EXPORT QList< QTableWidgetSelectionRange > * ctr_qt_widgets_ffi_QTableWidget_selectedRanges(QTableWidget const * this_ptr) {
  return new QList< QTableWidgetSelectionRange >(this_ptr->selectedRanges());
}


RITUAL_EXPORT QList< QTableWidgetItem * > * ctr_qt_widgets_ffi_QTableWidget_selectedItems(QTableWidget const * this_ptr) {
  return new QList< QTableWidgetItem * >(this_ptr->selectedItems());
}


RITUAL_EXPORT QList< QTableWidgetItem * > * ctr_qt_widgets_ffi_QTableWidget_findItems(QTableWidget const * this_ptr, QString const * text, int flags) {
  return new QList< QTableWidgetItem * >(this_ptr->findItems(*text, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_visualRow(QTableWidget const * this_ptr, int logicalRow) {
  return this_ptr->visualRow(logicalRow);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_visualColumn(QTableWidget const * this_ptr, int logicalColumn) {
  return this_ptr->visualColumn(logicalColumn);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_itemAt(QTableWidget const * this_ptr, QPoint const * p) {
  return this_ptr->itemAt(*p);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidget_itemAt1(QTableWidget const * this_ptr, int x, int y) {
  return this_ptr->itemAt(x, y);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QTableWidget_visualItemRect(QTableWidget const * this_ptr, QTableWidgetItem const * item) {
  return new QRect(this_ptr->visualItemRect(item));
}


RITUAL_EXPORT QTableWidgetItem const * ctr_qt_widgets_ffi_QTableWidget_itemPrototype(QTableWidget const * this_ptr) {
  return this_ptr->itemPrototype();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setItemPrototype(QTableWidget * this_ptr, QTableWidgetItem const * item) {
  this_ptr->setItemPrototype(item);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTableWidget_supportedDragActions(QTableWidget const * this_ptr) {
  return int(this_ptr->supportedDragActions());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_setSupportedDragActions(QTableWidget * this_ptr, int actions) {
  this_ptr->setSupportedDragActions(QFlags< Qt::DropAction >(actions));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_scrollToItem(QTableWidget * this_ptr, QTableWidgetItem const * item, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollToItem(item, hint);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_insertRow(QTableWidget * this_ptr, int row) {
  this_ptr->insertRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_insertColumn(QTableWidget * this_ptr, int column) {
  this_ptr->insertColumn(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_removeRow(QTableWidget * this_ptr, int row) {
  this_ptr->removeRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_removeColumn(QTableWidget * this_ptr, int column) {
  this_ptr->removeColumn(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_clear(QTableWidget * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_clearContents(QTableWidget * this_ptr) {
  this_ptr->clearContents();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTextBrowser_metaObject(QTextBrowser const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTextBrowser_qt_metacast(QTextBrowser * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextBrowser_qt_metacall(QTextBrowser * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextBrowser_tr(char const * s, char const * c, int n) {
  return new QString(QTextBrowser::tr(s, c, n));
}


RITUAL_EXPORT QTextBrowser * ctr_qt_widgets_ffi_QTextBrowser_QTextBrowser(QWidget * parent) {
  return new QTextBrowser(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_dQTextBrowser(QTextBrowser * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QTextBrowser_source(QTextBrowser const * this_ptr) {
  return new QUrl(this_ptr->source());
}


RITUAL_EXPORT QTextDocument::ResourceType ctr_qt_widgets_ffi_QTextBrowser_sourceType(QTextBrowser const * this_ptr) {
  return this_ptr->sourceType();
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QTextBrowser_searchPaths(QTextBrowser const * this_ptr) {
  return new QList< QString >(this_ptr->searchPaths());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_setSearchPaths(QTextBrowser * this_ptr, QList< QString > const * paths) {
  this_ptr->setSearchPaths(*paths);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QTextBrowser_loadResource(QTextBrowser * this_ptr, int type, QUrl const * name) {
  return new QVariant(this_ptr->loadResource(type, *name));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextBrowser_isBackwardAvailable(QTextBrowser const * this_ptr) {
  return this_ptr->isBackwardAvailable();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextBrowser_isForwardAvailable(QTextBrowser const * this_ptr) {
  return this_ptr->isForwardAvailable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_clearHistory(QTextBrowser * this_ptr) {
  this_ptr->clearHistory();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextBrowser_historyTitle(QTextBrowser const * this_ptr, int arg1) {
  return new QString(this_ptr->historyTitle(arg1));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QTextBrowser_historyUrl(QTextBrowser const * this_ptr, int arg1) {
  return new QUrl(this_ptr->historyUrl(arg1));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextBrowser_backwardHistoryCount(QTextBrowser const * this_ptr) {
  return this_ptr->backwardHistoryCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextBrowser_forwardHistoryCount(QTextBrowser const * this_ptr) {
  return this_ptr->forwardHistoryCount();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextBrowser_openExternalLinks(QTextBrowser const * this_ptr) {
  return this_ptr->openExternalLinks();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_setOpenExternalLinks(QTextBrowser * this_ptr, bool open) {
  this_ptr->setOpenExternalLinks(open);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextBrowser_openLinks(QTextBrowser const * this_ptr) {
  return this_ptr->openLinks();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_setOpenLinks(QTextBrowser * this_ptr, bool open) {
  this_ptr->setOpenLinks(open);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_setSource(QTextBrowser * this_ptr, QUrl const * name, QTextDocument::ResourceType type) {
  this_ptr->setSource(*name, type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_backward(QTextBrowser * this_ptr) {
  this_ptr->backward();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_forward(QTextBrowser * this_ptr) {
  this_ptr->forward();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_home(QTextBrowser * this_ptr) {
  this_ptr->home();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_reload(QTextBrowser * this_ptr) {
  this_ptr->reload();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QToolBar_metaObject(QToolBar const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QToolBar_qt_metacast(QToolBar * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBar_qt_metacall(QToolBar * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QToolBar_tr(char const * s, char const * c, int n) {
  return new QString(QToolBar::tr(s, c, n));
}


RITUAL_EXPORT QToolBar * ctr_qt_widgets_ffi_QToolBar_QToolBar(QString const * title, QWidget * parent) {
  return new QToolBar(*title, parent);
}


RITUAL_EXPORT QToolBar * ctr_qt_widgets_ffi_QToolBar_QToolBar1(QWidget * parent) {
  return new QToolBar(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_dQToolBar(QToolBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_setMovable(QToolBar * this_ptr, bool movable) {
  this_ptr->setMovable(movable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QToolBar_isMovable(QToolBar const * this_ptr) {
  return this_ptr->isMovable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_setAllowedAreas(QToolBar * this_ptr, int areas) {
  this_ptr->setAllowedAreas(QFlags< Qt::ToolBarArea >(areas));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBar_allowedAreas(QToolBar const * this_ptr) {
  return int(this_ptr->allowedAreas());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QToolBar_isAreaAllowed(QToolBar const * this_ptr, Qt::ToolBarArea area) {
  return this_ptr->isAreaAllowed(area);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_setOrientation(QToolBar * this_ptr, Qt::Orientation orientation) {
  this_ptr->setOrientation(orientation);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QToolBar_orientation(QToolBar const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_clear(QToolBar * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolBar_addSeparator(QToolBar * this_ptr) {
  return this_ptr->addSeparator();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolBar_insertSeparator(QToolBar * this_ptr, QAction * before) {
  return this_ptr->insertSeparator(before);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolBar_addWidget(QToolBar * this_ptr, QWidget * widget) {
  return this_ptr->addWidget(widget);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolBar_insertWidget(QToolBar * this_ptr, QAction * before, QWidget * widget) {
  return this_ptr->insertWidget(before, widget);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QToolBar_actionGeometry(QToolBar const * this_ptr, QAction * action) {
  return new QRect(this_ptr->actionGeometry(action));
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolBar_actionAt(QToolBar const * this_ptr, QPoint const * p) {
  return this_ptr->actionAt(*p);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolBar_actionAt1(QToolBar const * this_ptr, int x, int y) {
  return this_ptr->actionAt(x, y);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolBar_toggleViewAction(QToolBar const * this_ptr) {
  return this_ptr->toggleViewAction();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QToolBar_iconSize(QToolBar const * this_ptr) {
  return new QSize(this_ptr->iconSize());
}


RITUAL_EXPORT Qt::ToolButtonStyle ctr_qt_widgets_ffi_QToolBar_toolButtonStyle(QToolBar const * this_ptr) {
  return this_ptr->toolButtonStyle();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QToolBar_widgetForAction(QToolBar const * this_ptr, QAction * action) {
  return this_ptr->widgetForAction(action);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QToolBar_isFloatable(QToolBar const * this_ptr) {
  return this_ptr->isFloatable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_setFloatable(QToolBar * this_ptr, bool floatable) {
  this_ptr->setFloatable(floatable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QToolBar_isFloating(QToolBar const * this_ptr) {
  return this_ptr->isFloating();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_setIconSize(QToolBar * this_ptr, QSize const * iconSize) {
  this_ptr->setIconSize(*iconSize);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBar_setToolButtonStyle(QToolBar * this_ptr, Qt::ToolButtonStyle toolButtonStyle) {
  this_ptr->setToolButtonStyle(toolButtonStyle);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QToolBox_metaObject(QToolBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QToolBox_qt_metacast(QToolBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_qt_metacall(QToolBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QToolBox_tr(char const * s, char const * c, int n) {
  return new QString(QToolBox::tr(s, c, n));
}


RITUAL_EXPORT QToolBox * ctr_qt_widgets_ffi_QToolBox_QToolBox(QWidget * parent, int f) {
  return new QToolBox(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_dQToolBox(QToolBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_addItem(QToolBox * this_ptr, QWidget * widget, QString const * text) {
  return this_ptr->addItem(widget, *text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_addItem1(QToolBox * this_ptr, QWidget * widget, QIcon const * icon, QString const * text) {
  return this_ptr->addItem(widget, *icon, *text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_insertItem(QToolBox * this_ptr, int index, QWidget * widget, QString const * text) {
  return this_ptr->insertItem(index, widget, *text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_insertItem1(QToolBox * this_ptr, int index, QWidget * widget, QIcon const * icon, QString const * text) {
  return this_ptr->insertItem(index, widget, *icon, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_removeItem(QToolBox * this_ptr, int index) {
  this_ptr->removeItem(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_setItemEnabled(QToolBox * this_ptr, int index, bool enabled) {
  this_ptr->setItemEnabled(index, enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QToolBox_isItemEnabled(QToolBox const * this_ptr, int index) {
  return this_ptr->isItemEnabled(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_setItemText(QToolBox * this_ptr, int index, QString const * text) {
  this_ptr->setItemText(index, *text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QToolBox_itemText(QToolBox const * this_ptr, int index) {
  return new QString(this_ptr->itemText(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_setItemIcon(QToolBox * this_ptr, int index, QIcon const * icon) {
  this_ptr->setItemIcon(index, *icon);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QToolBox_itemIcon(QToolBox const * this_ptr, int index) {
  return new QIcon(this_ptr->itemIcon(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_setItemToolTip(QToolBox * this_ptr, int index, QString const * toolTip) {
  this_ptr->setItemToolTip(index, *toolTip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QToolBox_itemToolTip(QToolBox const * this_ptr, int index) {
  return new QString(this_ptr->itemToolTip(index));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_currentIndex(QToolBox const * this_ptr) {
  return this_ptr->currentIndex();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QToolBox_currentWidget(QToolBox const * this_ptr) {
  return this_ptr->currentWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QToolBox_widget(QToolBox const * this_ptr, int index) {
  return this_ptr->widget(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_indexOf(QToolBox const * this_ptr, QWidget const * widget) {
  return this_ptr->indexOf(widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolBox_count(QToolBox const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_setCurrentIndex(QToolBox * this_ptr, int index) {
  this_ptr->setCurrentIndex(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolBox_setCurrentWidget(QToolBox * this_ptr, QWidget * widget) {
  this_ptr->setCurrentWidget(widget);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QToolButton_metaObject(QToolButton const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QToolButton_qt_metacast(QToolButton * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QToolButton_qt_metacall(QToolButton * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QToolButton_tr(char const * s, char const * c, int n) {
  return new QString(QToolButton::tr(s, c, n));
}


RITUAL_EXPORT QToolButton * ctr_qt_widgets_ffi_QToolButton_QToolButton(QWidget * parent) {
  return new QToolButton(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_dQToolButton(QToolButton * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QToolButton_sizeHint(QToolButton const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QToolButton_minimumSizeHint(QToolButton const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT Qt::ToolButtonStyle ctr_qt_widgets_ffi_QToolButton_toolButtonStyle(QToolButton const * this_ptr) {
  return this_ptr->toolButtonStyle();
}


RITUAL_EXPORT Qt::ArrowType ctr_qt_widgets_ffi_QToolButton_arrowType(QToolButton const * this_ptr) {
  return this_ptr->arrowType();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_setArrowType(QToolButton * this_ptr, Qt::ArrowType type) {
  this_ptr->setArrowType(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_setMenu(QToolButton * this_ptr, QMenu * menu) {
  this_ptr->setMenu(menu);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QToolButton_menu(QToolButton const * this_ptr) {
  return this_ptr->menu();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_setPopupMode(QToolButton * this_ptr, QToolButton::ToolButtonPopupMode mode) {
  this_ptr->setPopupMode(mode);
}


RITUAL_EXPORT QToolButton::ToolButtonPopupMode ctr_qt_widgets_ffi_QToolButton_popupMode(QToolButton const * this_ptr) {
  return this_ptr->popupMode();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QToolButton_defaultAction(QToolButton const * this_ptr) {
  return this_ptr->defaultAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_setAutoRaise(QToolButton * this_ptr, bool enable) {
  this_ptr->setAutoRaise(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QToolButton_autoRaise(QToolButton const * this_ptr) {
  return this_ptr->autoRaise();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_showMenu(QToolButton * this_ptr) {
  this_ptr->showMenu();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_setToolButtonStyle(QToolButton * this_ptr, Qt::ToolButtonStyle style) {
  this_ptr->setToolButtonStyle(style);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolButton_setDefaultAction(QToolButton * this_ptr, QAction * arg1) {
  this_ptr->setDefaultAction(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_showText(QPoint const * pos, QString const * text, QWidget * w, QRect const * rect, int msecShowTime) {
  QToolTip::showText(*pos, *text, w, *rect, msecShowTime);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_hideText() {
  QToolTip::hideText();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QToolTip_isVisible() {
  return QToolTip::isVisible();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QToolTip_text() {
  return new QString(QToolTip::text());
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QToolTip_palette() {
  return new QPalette(QToolTip::palette());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_setPalette(QPalette const * arg1) {
  QToolTip::setPalette(*arg1);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QToolTip_font() {
  return new QFont(QToolTip::font());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_setFont(QFont const * arg1) {
  QToolTip::setFont(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTreeView_metaObject(QTreeView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTreeView_qt_metacast(QTreeView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeView_qt_metacall(QTreeView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTreeView_tr(char const * s, char const * c, int n) {
  return new QString(QTreeView::tr(s, c, n));
}


RITUAL_EXPORT QTreeView * ctr_qt_widgets_ffi_QTreeView_QTreeView(QWidget * parent) {
  return new QTreeView(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_dQTreeView(QTreeView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setModel(QTreeView * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setRootIndex(QTreeView * this_ptr, QModelIndex const * index) {
  this_ptr->setRootIndex(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setSelectionModel(QTreeView * this_ptr, QItemSelectionModel * selectionModel) {
  this_ptr->setSelectionModel(selectionModel);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_QTreeView_header(QTreeView const * this_ptr) {
  return this_ptr->header();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setHeader(QTreeView * this_ptr, QHeaderView * header) {
  this_ptr->setHeader(header);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeView_autoExpandDelay(QTreeView const * this_ptr) {
  return this_ptr->autoExpandDelay();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setAutoExpandDelay(QTreeView * this_ptr, int delay) {
  this_ptr->setAutoExpandDelay(delay);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeView_indentation(QTreeView const * this_ptr) {
  return this_ptr->indentation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setIndentation(QTreeView * this_ptr, int i) {
  this_ptr->setIndentation(i);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_resetIndentation(QTreeView * this_ptr) {
  this_ptr->resetIndentation();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_rootIsDecorated(QTreeView const * this_ptr) {
  return this_ptr->rootIsDecorated();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setRootIsDecorated(QTreeView * this_ptr, bool show) {
  this_ptr->setRootIsDecorated(show);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_uniformRowHeights(QTreeView const * this_ptr) {
  return this_ptr->uniformRowHeights();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setUniformRowHeights(QTreeView * this_ptr, bool uniform) {
  this_ptr->setUniformRowHeights(uniform);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_itemsExpandable(QTreeView const * this_ptr) {
  return this_ptr->itemsExpandable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setItemsExpandable(QTreeView * this_ptr, bool enable) {
  this_ptr->setItemsExpandable(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_expandsOnDoubleClick(QTreeView const * this_ptr) {
  return this_ptr->expandsOnDoubleClick();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setExpandsOnDoubleClick(QTreeView * this_ptr, bool enable) {
  this_ptr->setExpandsOnDoubleClick(enable);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeView_columnViewportPosition(QTreeView const * this_ptr, int column) {
  return this_ptr->columnViewportPosition(column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeView_columnWidth(QTreeView const * this_ptr, int column) {
  return this_ptr->columnWidth(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setColumnWidth(QTreeView * this_ptr, int column, int width) {
  this_ptr->setColumnWidth(column, width);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeView_columnAt(QTreeView const * this_ptr, int x) {
  return this_ptr->columnAt(x);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_isColumnHidden(QTreeView const * this_ptr, int column) {
  return this_ptr->isColumnHidden(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setColumnHidden(QTreeView * this_ptr, int column, bool hide) {
  this_ptr->setColumnHidden(column, hide);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_isHeaderHidden(QTreeView const * this_ptr) {
  return this_ptr->isHeaderHidden();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setHeaderHidden(QTreeView * this_ptr, bool hide) {
  this_ptr->setHeaderHidden(hide);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_isRowHidden(QTreeView const * this_ptr, int row, QModelIndex const * parent) {
  return this_ptr->isRowHidden(row, *parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setRowHidden(QTreeView * this_ptr, int row, QModelIndex const * parent, bool hide) {
  this_ptr->setRowHidden(row, *parent, hide);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_isFirstColumnSpanned(QTreeView const * this_ptr, int row, QModelIndex const * parent) {
  return this_ptr->isFirstColumnSpanned(row, *parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setFirstColumnSpanned(QTreeView * this_ptr, int row, QModelIndex const * parent, bool span) {
  this_ptr->setFirstColumnSpanned(row, *parent, span);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_isExpanded(QTreeView const * this_ptr, QModelIndex const * index) {
  return this_ptr->isExpanded(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setExpanded(QTreeView * this_ptr, QModelIndex const * index, bool expand) {
  this_ptr->setExpanded(*index, expand);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setSortingEnabled(QTreeView * this_ptr, bool enable) {
  this_ptr->setSortingEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_isSortingEnabled(QTreeView const * this_ptr) {
  return this_ptr->isSortingEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setAnimated(QTreeView * this_ptr, bool enable) {
  this_ptr->setAnimated(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_isAnimated(QTreeView const * this_ptr) {
  return this_ptr->isAnimated();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setAllColumnsShowFocus(QTreeView * this_ptr, bool enable) {
  this_ptr->setAllColumnsShowFocus(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_allColumnsShowFocus(QTreeView const * this_ptr) {
  return this_ptr->allColumnsShowFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setWordWrap(QTreeView * this_ptr, bool on) {
  this_ptr->setWordWrap(on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeView_wordWrap(QTreeView const * this_ptr) {
  return this_ptr->wordWrap();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_setTreePosition(QTreeView * this_ptr, int logicalIndex) {
  this_ptr->setTreePosition(logicalIndex);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeView_treePosition(QTreeView const * this_ptr) {
  return this_ptr->treePosition();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_keyboardSearch(QTreeView * this_ptr, QString const * search) {
  this_ptr->keyboardSearch(*search);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QTreeView_visualRect(QTreeView const * this_ptr, QModelIndex const * index) {
  return new QRect(this_ptr->visualRect(*index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_scrollTo(QTreeView * this_ptr, QModelIndex const * index, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollTo(*index, hint);
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QTreeView_indexAt(QTreeView const * this_ptr, QPoint const * p) {
  return new QModelIndex(this_ptr->indexAt(*p));
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QTreeView_indexAbove(QTreeView const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->indexAbove(*index));
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QTreeView_indexBelow(QTreeView const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->indexBelow(*index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_doItemsLayout(QTreeView * this_ptr) {
  this_ptr->doItemsLayout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_reset(QTreeView * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_dataChanged(QTreeView * this_ptr, QModelIndex const * topLeft, QModelIndex const * bottomRight, QList< int > const * roles) {
  this_ptr->dataChanged(*topLeft, *bottomRight, *roles);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_selectAll(QTreeView * this_ptr) {
  this_ptr->selectAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_hideColumn(QTreeView * this_ptr, int column) {
  this_ptr->hideColumn(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_showColumn(QTreeView * this_ptr, int column) {
  this_ptr->showColumn(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_expand(QTreeView * this_ptr, QModelIndex const * index) {
  this_ptr->expand(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_collapse(QTreeView * this_ptr, QModelIndex const * index) {
  this_ptr->collapse(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_resizeColumnToContents(QTreeView * this_ptr, int column) {
  this_ptr->resizeColumnToContents(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_sortByColumn(QTreeView * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sortByColumn(column, order);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_expandAll(QTreeView * this_ptr) {
  this_ptr->expandAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_expandRecursively(QTreeView * this_ptr, QModelIndex const * index, int depth) {
  this_ptr->expandRecursively(*index, depth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_collapseAll(QTreeView * this_ptr) {
  this_ptr->collapseAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_expandToDepth(QTreeView * this_ptr, int depth) {
  this_ptr->expandToDepth(depth);
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_QTreeWidgetItemIterator(QTreeWidgetItemIterator const * it) {
  return new QTreeWidgetItemIterator(*it);
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_QTreeWidgetItemIterator1(QTreeWidget * widget, int flags) {
  return new QTreeWidgetItemIterator(widget, QFlags< QTreeWidgetItemIterator::IteratorFlag >(flags));
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_QTreeWidgetItemIterator2(QTreeWidgetItem * item, int flags) {
  return new QTreeWidgetItemIterator(item, QFlags< QTreeWidgetItemIterator::IteratorFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItemIterator_dQTreeWidgetItemIterator(QTreeWidgetItemIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator_(QTreeWidgetItemIterator * this_ptr, QTreeWidgetItemIterator const * it) {
  return &this_ptr->operator=(*it);
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator__(QTreeWidgetItemIterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator__1(QTreeWidgetItemIterator * this_ptr, int arg1) {
  return new QTreeWidgetItemIterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator__2(QTreeWidgetItemIterator * this_ptr, int n) {
  return &this_ptr->operator+=(n);
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator__3(QTreeWidgetItemIterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator__4(QTreeWidgetItemIterator * this_ptr, int arg1) {
  return new QTreeWidgetItemIterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator__5(QTreeWidgetItemIterator * this_ptr, int n) {
  return &this_ptr->operator-=(n);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_operator_1(QTreeWidgetItemIterator const * this_ptr) {
  return this_ptr->operator*();
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem(int type) {
  return new QTreeWidgetItem(type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem1(QList< QString > const * strings, int type) {
  return new QTreeWidgetItem(*strings, type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem2(QTreeWidget * treeview, int type) {
  return new QTreeWidgetItem(treeview, type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem3(QTreeWidget * treeview, QList< QString > const * strings, int type) {
  return new QTreeWidgetItem(treeview, *strings, type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem4(QTreeWidget * treeview, QTreeWidgetItem * after, int type) {
  return new QTreeWidgetItem(treeview, after, type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem5(QTreeWidgetItem * parent, int type) {
  return new QTreeWidgetItem(parent, type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem6(QTreeWidgetItem * parent, QList< QString > const * strings, int type) {
  return new QTreeWidgetItem(parent, *strings, type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem7(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type) {
  return new QTreeWidgetItem(parent, after, type);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem8(QTreeWidgetItem const * other) {
  return new QTreeWidgetItem(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_dQTreeWidgetItem(QTreeWidgetItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_clone(QTreeWidgetItem const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT QTreeWidget * ctr_qt_widgets_ffi_QTreeWidgetItem_treeWidget(QTreeWidgetItem const * this_ptr) {
  return this_ptr->treeWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setSelected(QTreeWidgetItem * this_ptr, bool select) {
  this_ptr->setSelected(select);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidgetItem_isSelected(QTreeWidgetItem const * this_ptr) {
  return this_ptr->isSelected();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setHidden(QTreeWidgetItem * this_ptr, bool hide) {
  this_ptr->setHidden(hide);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidgetItem_isHidden(QTreeWidgetItem const * this_ptr) {
  return this_ptr->isHidden();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setExpanded(QTreeWidgetItem * this_ptr, bool expand) {
  this_ptr->setExpanded(expand);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidgetItem_isExpanded(QTreeWidgetItem const * this_ptr) {
  return this_ptr->isExpanded();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setFirstColumnSpanned(QTreeWidgetItem * this_ptr, bool span) {
  this_ptr->setFirstColumnSpanned(span);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidgetItem_isFirstColumnSpanned(QTreeWidgetItem const * this_ptr) {
  return this_ptr->isFirstColumnSpanned();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setDisabled(QTreeWidgetItem * this_ptr, bool disabled) {
  this_ptr->setDisabled(disabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidgetItem_isDisabled(QTreeWidgetItem const * this_ptr) {
  return this_ptr->isDisabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setChildIndicatorPolicy(QTreeWidgetItem * this_ptr, QTreeWidgetItem::ChildIndicatorPolicy policy) {
  this_ptr->setChildIndicatorPolicy(policy);
}


RITUAL_EXPORT QTreeWidgetItem::ChildIndicatorPolicy ctr_qt_widgets_ffi_QTreeWidgetItem_childIndicatorPolicy(QTreeWidgetItem const * this_ptr) {
  return this_ptr->childIndicatorPolicy();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidgetItem_flags(QTreeWidgetItem const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setFlags(QTreeWidgetItem * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< Qt::ItemFlag >(flags));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTreeWidgetItem_text(QTreeWidgetItem const * this_ptr, int column) {
  return new QString(this_ptr->text(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setText(QTreeWidgetItem * this_ptr, int column, QString const * text) {
  this_ptr->setText(column, *text);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QTreeWidgetItem_icon(QTreeWidgetItem const * this_ptr, int column) {
  return new QIcon(this_ptr->icon(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setIcon(QTreeWidgetItem * this_ptr, int column, QIcon const * icon) {
  this_ptr->setIcon(column, *icon);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTreeWidgetItem_statusTip(QTreeWidgetItem const * this_ptr, int column) {
  return new QString(this_ptr->statusTip(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setStatusTip(QTreeWidgetItem * this_ptr, int column, QString const * statusTip) {
  this_ptr->setStatusTip(column, *statusTip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTreeWidgetItem_toolTip(QTreeWidgetItem const * this_ptr, int column) {
  return new QString(this_ptr->toolTip(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setToolTip(QTreeWidgetItem * this_ptr, int column, QString const * toolTip) {
  this_ptr->setToolTip(column, *toolTip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTreeWidgetItem_whatsThis(QTreeWidgetItem const * this_ptr, int column) {
  return new QString(this_ptr->whatsThis(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setWhatsThis(QTreeWidgetItem * this_ptr, int column, QString const * whatsThis) {
  this_ptr->setWhatsThis(column, *whatsThis);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QTreeWidgetItem_font(QTreeWidgetItem const * this_ptr, int column) {
  return new QFont(this_ptr->font(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setFont(QTreeWidgetItem * this_ptr, int column, QFont const * font) {
  this_ptr->setFont(column, *font);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidgetItem_textAlignment(QTreeWidgetItem const * this_ptr, int column) {
  return this_ptr->textAlignment(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setTextAlignment(QTreeWidgetItem * this_ptr, int column, int alignment) {
  this_ptr->setTextAlignment(column, alignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setTextAlignment1(QTreeWidgetItem * this_ptr, int column, Qt::AlignmentFlag alignment) {
  this_ptr->setTextAlignment(column, alignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setTextAlignment2(QTreeWidgetItem * this_ptr, int column, int alignment) {
  this_ptr->setTextAlignment(column, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QTreeWidgetItem_background(QTreeWidgetItem const * this_ptr, int column) {
  return new QBrush(this_ptr->background(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setBackground(QTreeWidgetItem * this_ptr, int column, QBrush const * brush) {
  this_ptr->setBackground(column, *brush);
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QTreeWidgetItem_foreground(QTreeWidgetItem const * this_ptr, int column) {
  return new QBrush(this_ptr->foreground(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setForeground(QTreeWidgetItem * this_ptr, int column, QBrush const * brush) {
  this_ptr->setForeground(column, *brush);
}


RITUAL_EXPORT Qt::CheckState ctr_qt_widgets_ffi_QTreeWidgetItem_checkState(QTreeWidgetItem const * this_ptr, int column) {
  return this_ptr->checkState(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setCheckState(QTreeWidgetItem * this_ptr, int column, Qt::CheckState state) {
  this_ptr->setCheckState(column, state);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTreeWidgetItem_sizeHint(QTreeWidgetItem const * this_ptr, int column) {
  return new QSize(this_ptr->sizeHint(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setSizeHint(QTreeWidgetItem * this_ptr, int column, QSize const * size) {
  this_ptr->setSizeHint(column, *size);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QTreeWidgetItem_data(QTreeWidgetItem const * this_ptr, int column, int role) {
  return new QVariant(this_ptr->data(column, role));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_setData(QTreeWidgetItem * this_ptr, int column, int role, QVariant const * value) {
  this_ptr->setData(column, role, *value);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidgetItem_operator_(QTreeWidgetItem const * this_ptr, QTreeWidgetItem const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_read(QTreeWidgetItem * this_ptr, QDataStream * in) {
  this_ptr->read(*in);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_write(QTreeWidgetItem const * this_ptr, QDataStream * out) {
  this_ptr->write(*out);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_operator_1(QTreeWidgetItem * this_ptr, QTreeWidgetItem const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_parent(QTreeWidgetItem const * this_ptr) {
  return this_ptr->parent();
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_child(QTreeWidgetItem const * this_ptr, int index) {
  return this_ptr->child(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidgetItem_childCount(QTreeWidgetItem const * this_ptr) {
  return this_ptr->childCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidgetItem_columnCount(QTreeWidgetItem const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidgetItem_indexOfChild(QTreeWidgetItem const * this_ptr, QTreeWidgetItem * child) {
  return this_ptr->indexOfChild(child);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_addChild(QTreeWidgetItem * this_ptr, QTreeWidgetItem * child) {
  this_ptr->addChild(child);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_insertChild(QTreeWidgetItem * this_ptr, int index, QTreeWidgetItem * child) {
  this_ptr->insertChild(index, child);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_removeChild(QTreeWidgetItem * this_ptr, QTreeWidgetItem * child) {
  this_ptr->removeChild(child);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_takeChild(QTreeWidgetItem * this_ptr, int index) {
  return this_ptr->takeChild(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_addChildren(QTreeWidgetItem * this_ptr, QList< QTreeWidgetItem * > const * children) {
  this_ptr->addChildren(*children);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_insertChildren(QTreeWidgetItem * this_ptr, int index, QList< QTreeWidgetItem * > const * children) {
  this_ptr->insertChildren(index, *children);
}


RITUAL_EXPORT QList< QTreeWidgetItem * > * ctr_qt_widgets_ffi_QTreeWidgetItem_takeChildren(QTreeWidgetItem * this_ptr) {
  return new QList< QTreeWidgetItem * >(this_ptr->takeChildren());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidgetItem_type(QTreeWidgetItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidgetItem_sortChildren(QTreeWidgetItem * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sortChildren(column, order);
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__17(QDataStream * out, QTreeWidgetItem const * item) {
  return &operator<<(*out, *item);
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__18(QDataStream * in, QTreeWidgetItem * item) {
  return &operator>>(*in, *item);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTreeWidget_metaObject(QTreeWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTreeWidget_qt_metacast(QTreeWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidget_qt_metacall(QTreeWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTreeWidget_tr(char const * s, char const * c, int n) {
  return new QString(QTreeWidget::tr(s, c, n));
}


RITUAL_EXPORT QTreeWidget * ctr_qt_widgets_ffi_QTreeWidget_QTreeWidget(QWidget * parent) {
  return new QTreeWidget(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_dQTreeWidget(QTreeWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidget_columnCount(QTreeWidget const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setColumnCount(QTreeWidget * this_ptr, int columns) {
  this_ptr->setColumnCount(columns);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_invisibleRootItem(QTreeWidget const * this_ptr) {
  return this_ptr->invisibleRootItem();
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_topLevelItem(QTreeWidget const * this_ptr, int index) {
  return this_ptr->topLevelItem(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidget_topLevelItemCount(QTreeWidget const * this_ptr) {
  return this_ptr->topLevelItemCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_insertTopLevelItem(QTreeWidget * this_ptr, int index, QTreeWidgetItem * item) {
  this_ptr->insertTopLevelItem(index, item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_addTopLevelItem(QTreeWidget * this_ptr, QTreeWidgetItem * item) {
  this_ptr->addTopLevelItem(item);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_takeTopLevelItem(QTreeWidget * this_ptr, int index) {
  return this_ptr->takeTopLevelItem(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidget_indexOfTopLevelItem(QTreeWidget const * this_ptr, QTreeWidgetItem * item) {
  return this_ptr->indexOfTopLevelItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_insertTopLevelItems(QTreeWidget * this_ptr, int index, QList< QTreeWidgetItem * > const * items) {
  this_ptr->insertTopLevelItems(index, *items);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_addTopLevelItems(QTreeWidget * this_ptr, QList< QTreeWidgetItem * > const * items) {
  this_ptr->addTopLevelItems(*items);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_headerItem(QTreeWidget const * this_ptr) {
  return this_ptr->headerItem();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setHeaderItem(QTreeWidget * this_ptr, QTreeWidgetItem * item) {
  this_ptr->setHeaderItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setHeaderLabels(QTreeWidget * this_ptr, QList< QString > const * labels) {
  this_ptr->setHeaderLabels(*labels);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setHeaderLabel(QTreeWidget * this_ptr, QString const * label) {
  this_ptr->setHeaderLabel(*label);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_currentItem(QTreeWidget const * this_ptr) {
  return this_ptr->currentItem();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidget_currentColumn(QTreeWidget const * this_ptr) {
  return this_ptr->currentColumn();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setCurrentItem(QTreeWidget * this_ptr, QTreeWidgetItem * item) {
  this_ptr->setCurrentItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setCurrentItem1(QTreeWidget * this_ptr, QTreeWidgetItem * item, int column) {
  this_ptr->setCurrentItem(item, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setCurrentItem2(QTreeWidget * this_ptr, QTreeWidgetItem * item, int column, int command) {
  this_ptr->setCurrentItem(item, column, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_itemAt(QTreeWidget const * this_ptr, QPoint const * p) {
  return this_ptr->itemAt(*p);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_itemAt1(QTreeWidget const * this_ptr, int x, int y) {
  return this_ptr->itemAt(x, y);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QTreeWidget_visualItemRect(QTreeWidget const * this_ptr, QTreeWidgetItem const * item) {
  return new QRect(this_ptr->visualItemRect(item));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidget_sortColumn(QTreeWidget const * this_ptr) {
  return this_ptr->sortColumn();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_sortItems(QTreeWidget * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sortItems(column, order);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_editItem(QTreeWidget * this_ptr, QTreeWidgetItem * item, int column) {
  this_ptr->editItem(item, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_openPersistentEditor(QTreeWidget * this_ptr, QTreeWidgetItem * item, int column) {
  this_ptr->openPersistentEditor(item, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_closePersistentEditor(QTreeWidget * this_ptr, QTreeWidgetItem * item, int column) {
  this_ptr->closePersistentEditor(item, column);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidget_isPersistentEditorOpen(QTreeWidget const * this_ptr, QTreeWidgetItem * item, int column) {
  return this_ptr->isPersistentEditorOpen(item, column);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QTreeWidget_itemWidget(QTreeWidget const * this_ptr, QTreeWidgetItem * item, int column) {
  return this_ptr->itemWidget(item, column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setItemWidget(QTreeWidget * this_ptr, QTreeWidgetItem * item, int column, QWidget * widget) {
  this_ptr->setItemWidget(item, column, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_removeItemWidget(QTreeWidget * this_ptr, QTreeWidgetItem * item, int column) {
  this_ptr->removeItemWidget(item, column);
}


RITUAL_EXPORT QList< QTreeWidgetItem * > * ctr_qt_widgets_ffi_QTreeWidget_selectedItems(QTreeWidget const * this_ptr) {
  return new QList< QTreeWidgetItem * >(this_ptr->selectedItems());
}


RITUAL_EXPORT QList< QTreeWidgetItem * > * ctr_qt_widgets_ffi_QTreeWidget_findItems(QTreeWidget const * this_ptr, QString const * text, int flags, int column) {
  return new QList< QTreeWidgetItem * >(this_ptr->findItems(*text, QFlags< Qt::MatchFlag >(flags), column));
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_itemAbove(QTreeWidget const * this_ptr, QTreeWidgetItem const * item) {
  return this_ptr->itemAbove(item);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_itemBelow(QTreeWidget const * this_ptr, QTreeWidgetItem const * item) {
  return this_ptr->itemBelow(item);
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QTreeWidget_indexFromItem(QTreeWidget const * this_ptr, QTreeWidgetItem const * item, int column) {
  return new QModelIndex(this_ptr->indexFromItem(item, column));
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidget_itemFromIndex(QTreeWidget const * this_ptr, QModelIndex const * index) {
  return this_ptr->itemFromIndex(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setSelectionModel(QTreeWidget * this_ptr, QItemSelectionModel * selectionModel) {
  this_ptr->setSelectionModel(selectionModel);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTreeWidget_supportedDragActions(QTreeWidget const * this_ptr) {
  return int(this_ptr->supportedDragActions());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_setSupportedDragActions(QTreeWidget * this_ptr, int actions) {
  this_ptr->setSupportedDragActions(QFlags< Qt::DropAction >(actions));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_scrollToItem(QTreeWidget * this_ptr, QTreeWidgetItem const * item, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollToItem(item, hint);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_expandItem(QTreeWidget * this_ptr, QTreeWidgetItem const * item) {
  this_ptr->expandItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_collapseItem(QTreeWidget * this_ptr, QTreeWidgetItem const * item) {
  this_ptr->collapseItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_clear(QTreeWidget * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QUndoView_metaObject(QUndoView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QUndoView_qt_metacast(QUndoView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QUndoView_qt_metacall(QUndoView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QUndoView_tr(char const * s, char const * c, int n) {
  return new QString(QUndoView::tr(s, c, n));
}


RITUAL_EXPORT QUndoView * ctr_qt_widgets_ffi_QUndoView_QUndoView(QWidget * parent) {
  return new QUndoView(parent);
}


RITUAL_EXPORT QUndoView * ctr_qt_widgets_ffi_QUndoView_QUndoView1(QUndoStack * stack, QWidget * parent) {
  return new QUndoView(stack, parent);
}


RITUAL_EXPORT QUndoView * ctr_qt_widgets_ffi_QUndoView_QUndoView2(QUndoGroup * group, QWidget * parent) {
  return new QUndoView(group, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QUndoView_dQUndoView(QUndoView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QUndoStack * ctr_qt_widgets_ffi_QUndoView_stack(QUndoView const * this_ptr) {
  return this_ptr->stack();
}


RITUAL_EXPORT QUndoGroup * ctr_qt_widgets_ffi_QUndoView_group(QUndoView const * this_ptr) {
  return this_ptr->group();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QUndoView_setEmptyLabel(QUndoView * this_ptr, QString const * label) {
  this_ptr->setEmptyLabel(*label);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QUndoView_emptyLabel(QUndoView const * this_ptr) {
  return new QString(this_ptr->emptyLabel());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QUndoView_setCleanIcon(QUndoView * this_ptr, QIcon const * icon) {
  this_ptr->setCleanIcon(*icon);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QUndoView_cleanIcon(QUndoView const * this_ptr) {
  return new QIcon(this_ptr->cleanIcon());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QUndoView_setStack(QUndoView * this_ptr, QUndoStack * stack) {
  this_ptr->setStack(stack);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QUndoView_setGroup(QUndoView * this_ptr, QUndoGroup * group) {
  this_ptr->setGroup(group);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWhatsThis_enterWhatsThisMode() {
  QWhatsThis::enterWhatsThisMode();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWhatsThis_inWhatsThisMode() {
  return QWhatsThis::inWhatsThisMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWhatsThis_leaveWhatsThisMode() {
  QWhatsThis::leaveWhatsThisMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWhatsThis_showText(QPoint const * pos, QString const * text, QWidget * w) {
  QWhatsThis::showText(*pos, *text, w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWhatsThis_hideText() {
  QWhatsThis::hideText();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWhatsThis_createAction(QObject * parent) {
  return QWhatsThis::createAction(parent);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWidgetAction_metaObject(QWidgetAction const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QWidgetAction_qt_metacast(QWidgetAction * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidgetAction_qt_metacall(QWidgetAction * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidgetAction_tr(char const * s, char const * c, int n) {
  return new QString(QWidgetAction::tr(s, c, n));
}


RITUAL_EXPORT QWidgetAction * ctr_qt_widgets_ffi_QWidgetAction_QWidgetAction(QObject * parent) {
  return new QWidgetAction(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidgetAction_dQWidgetAction(QWidgetAction * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidgetAction_setDefaultWidget(QWidgetAction * this_ptr, QWidget * w) {
  this_ptr->setDefaultWidget(w);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidgetAction_defaultWidget(QWidgetAction const * this_ptr) {
  return this_ptr->defaultWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidgetAction_requestWidget(QWidgetAction * this_ptr, QWidget * parent) {
  return this_ptr->requestWidget(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidgetAction_releaseWidget(QWidgetAction * this_ptr, QWidget * widget) {
  this_ptr->releaseWidget(widget);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWizard_metaObject(QWizard const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QWizard_qt_metacast(QWizard * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizard_qt_metacall(QWizard * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWizard_tr(char const * s, char const * c, int n) {
  return new QString(QWizard::tr(s, c, n));
}


RITUAL_EXPORT QWizard * ctr_qt_widgets_ffi_QWizard_QWizard(QWidget * parent, int flags) {
  return new QWizard(parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_dQWizard(QWizard * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizard_addPage(QWizard * this_ptr, QWizardPage * page) {
  return this_ptr->addPage(page);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setPage(QWizard * this_ptr, int id, QWizardPage * page) {
  this_ptr->setPage(id, page);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_removePage(QWizard * this_ptr, int id) {
  this_ptr->removePage(id);
}


RITUAL_EXPORT QWizardPage * ctr_qt_widgets_ffi_QWizard_page(QWizard const * this_ptr, int id) {
  return this_ptr->page(id);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWizard_hasVisitedPage(QWizard const * this_ptr, int id) {
  return this_ptr->hasVisitedPage(id);
}


RITUAL_EXPORT QList< int > * ctr_qt_widgets_ffi_QWizard_visitedIds(QWizard const * this_ptr) {
  return new QList< int >(this_ptr->visitedIds());
}


RITUAL_EXPORT QList< int > * ctr_qt_widgets_ffi_QWizard_pageIds(QWizard const * this_ptr) {
  return new QList< int >(this_ptr->pageIds());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setStartId(QWizard * this_ptr, int id) {
  this_ptr->setStartId(id);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizard_startId(QWizard const * this_ptr) {
  return this_ptr->startId();
}


RITUAL_EXPORT QWizardPage * ctr_qt_widgets_ffi_QWizard_currentPage(QWizard const * this_ptr) {
  return this_ptr->currentPage();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizard_currentId(QWizard const * this_ptr) {
  return this_ptr->currentId();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWizard_validateCurrentPage(QWizard * this_ptr) {
  return this_ptr->validateCurrentPage();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizard_nextId(QWizard const * this_ptr) {
  return this_ptr->nextId();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setField(QWizard * this_ptr, QString const * name, QVariant const * value) {
  this_ptr->setField(*name, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QWizard_field(QWizard const * this_ptr, QString const * name) {
  return new QVariant(this_ptr->field(*name));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setWizardStyle(QWizard * this_ptr, QWizard::WizardStyle style) {
  this_ptr->setWizardStyle(style);
}


RITUAL_EXPORT QWizard::WizardStyle ctr_qt_widgets_ffi_QWizard_wizardStyle(QWizard const * this_ptr) {
  return this_ptr->wizardStyle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setOption(QWizard * this_ptr, QWizard::WizardOption option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWizard_testOption(QWizard const * this_ptr, QWizard::WizardOption option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setOptions(QWizard * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QWizard::WizardOption >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizard_options(QWizard const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setButtonText(QWizard * this_ptr, QWizard::WizardButton which, QString const * text) {
  this_ptr->setButtonText(which, *text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWizard_buttonText(QWizard const * this_ptr, QWizard::WizardButton which) {
  return new QString(this_ptr->buttonText(which));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setButtonLayout(QWizard * this_ptr, QList< QWizard::WizardButton > const * layout) {
  this_ptr->setButtonLayout(*layout);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setButton(QWizard * this_ptr, QWizard::WizardButton which, QAbstractButton * button) {
  this_ptr->setButton(which, button);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_QWizard_button(QWizard const * this_ptr, QWizard::WizardButton which) {
  return this_ptr->button(which);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setTitleFormat(QWizard * this_ptr, Qt::TextFormat format) {
  this_ptr->setTitleFormat(format);
}


RITUAL_EXPORT Qt::TextFormat ctr_qt_widgets_ffi_QWizard_titleFormat(QWizard const * this_ptr) {
  return this_ptr->titleFormat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setSubTitleFormat(QWizard * this_ptr, Qt::TextFormat format) {
  this_ptr->setSubTitleFormat(format);
}


RITUAL_EXPORT Qt::TextFormat ctr_qt_widgets_ffi_QWizard_subTitleFormat(QWizard const * this_ptr) {
  return this_ptr->subTitleFormat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setPixmap(QWizard * this_ptr, QWizard::WizardPixmap which, QPixmap const * pixmap) {
  this_ptr->setPixmap(which, *pixmap);
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QWizard_pixmap(QWizard const * this_ptr, QWizard::WizardPixmap which) {
  return new QPixmap(this_ptr->pixmap(which));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setSideWidget(QWizard * this_ptr, QWidget * widget) {
  this_ptr->setSideWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWizard_sideWidget(QWizard const * this_ptr) {
  return this_ptr->sideWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setDefaultProperty(QWizard * this_ptr, char const * className, char const * property, char const * changedSignal) {
  this_ptr->setDefaultProperty(className, property, changedSignal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setVisible(QWizard * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWizard_sizeHint(QWizard const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_back(QWizard * this_ptr) {
  this_ptr->back();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_next(QWizard * this_ptr) {
  this_ptr->next();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setCurrentId(QWizard * this_ptr, int id) {
  this_ptr->setCurrentId(id);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_restart(QWizard * this_ptr) {
  this_ptr->restart();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWizardPage_metaObject(QWizardPage const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QWizardPage_qt_metacast(QWizardPage * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizardPage_qt_metacall(QWizardPage * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWizardPage_tr(char const * s, char const * c, int n) {
  return new QString(QWizardPage::tr(s, c, n));
}


RITUAL_EXPORT QWizardPage * ctr_qt_widgets_ffi_QWizardPage_QWizardPage(QWidget * parent) {
  return new QWizardPage(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_dQWizardPage(QWizardPage * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_setTitle(QWizardPage * this_ptr, QString const * title) {
  this_ptr->setTitle(*title);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWizardPage_title(QWizardPage const * this_ptr) {
  return new QString(this_ptr->title());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_setSubTitle(QWizardPage * this_ptr, QString const * subTitle) {
  this_ptr->setSubTitle(*subTitle);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWizardPage_subTitle(QWizardPage const * this_ptr) {
  return new QString(this_ptr->subTitle());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_setPixmap(QWizardPage * this_ptr, QWizard::WizardPixmap which, QPixmap const * pixmap) {
  this_ptr->setPixmap(which, *pixmap);
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QWizardPage_pixmap(QWizardPage const * this_ptr, QWizard::WizardPixmap which) {
  return new QPixmap(this_ptr->pixmap(which));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_setFinalPage(QWizardPage * this_ptr, bool finalPage) {
  this_ptr->setFinalPage(finalPage);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWizardPage_isFinalPage(QWizardPage const * this_ptr) {
  return this_ptr->isFinalPage();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_setCommitPage(QWizardPage * this_ptr, bool commitPage) {
  this_ptr->setCommitPage(commitPage);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWizardPage_isCommitPage(QWizardPage const * this_ptr) {
  return this_ptr->isCommitPage();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_setButtonText(QWizardPage * this_ptr, QWizard::WizardButton which, QString const * text) {
  this_ptr->setButtonText(which, *text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWizardPage_buttonText(QWizardPage const * this_ptr, QWizard::WizardButton which) {
  return new QString(this_ptr->buttonText(which));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_initializePage(QWizardPage * this_ptr) {
  this_ptr->initializePage();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizardPage_cleanupPage(QWizardPage * this_ptr) {
  this_ptr->cleanupPage();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWizardPage_validatePage(QWizardPage * this_ptr) {
  return this_ptr->validatePage();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWizardPage_isComplete(QWizardPage const * this_ptr) {
  return this_ptr->isComplete();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWizardPage_nextId(QWizardPage const * this_ptr) {
  return this_ptr->nextId();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_dQSizePolicy(QSizePolicy * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QSizePolicy_QSizePolicy2(QSizePolicy const * other) {
  return new QSizePolicy(*other);
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QSizePolicy_operator_(QSizePolicy * this_ptr, QSizePolicy const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_QWidget1() {
  return new QWidget();
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_QAbstractSpinBox_QAbstractSpinBox1() {
  return new QAbstractSpinBox();
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_QAbstractSlider_QAbstractSlider1() {
  return new QAbstractSlider();
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_QSlider_QSlider2() {
  return new QSlider();
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_QTabBar_QTabBar1() {
  return new QTabBar();
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_QTabWidget_QTabWidget1() {
  return new QTabWidget();
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_QFrame_QFrame1() {
  return new QFrame();
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_QStyleOption_QStyleOption2() {
  return new QStyleOption();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionFocusRect_dQStyleOptionFocusRect(QStyleOptionFocusRect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionFrame_dQStyleOptionFrame(QStyleOptionFrame * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_dQStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionTabBarBase_dQStyleOptionTabBarBase(QStyleOptionTabBarBase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionHeader_dQStyleOptionHeader(QStyleOptionHeader * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionHeaderV2_dQStyleOptionHeaderV2(QStyleOptionHeaderV2 * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionButton_dQStyleOptionButton(QStyleOptionButton * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionTab_dQStyleOptionTab(QStyleOptionTab * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionToolBar_dQStyleOptionToolBar(QStyleOptionToolBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionProgressBar_dQStyleOptionProgressBar(QStyleOptionProgressBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionMenuItem_dQStyleOptionMenuItem(QStyleOptionMenuItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionDockWidget_dQStyleOptionDockWidget(QStyleOptionDockWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionViewItem_dQStyleOptionViewItem(QStyleOptionViewItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionToolBox_dQStyleOptionToolBox(QStyleOptionToolBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionRubberBand_dQStyleOptionRubberBand(QStyleOptionRubberBand * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionComplex_dQStyleOptionComplex(QStyleOptionComplex * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_QStyleOptionComplex_QStyleOptionComplex2() {
  return new QStyleOptionComplex();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionSlider_dQStyleOptionSlider(QStyleOptionSlider * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionSpinBox_dQStyleOptionSpinBox(QStyleOptionSpinBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionToolButton_dQStyleOptionToolButton(QStyleOptionToolButton * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionComboBox_dQStyleOptionComboBox(QStyleOptionComboBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionTitleBar_dQStyleOptionTitleBar(QStyleOptionTitleBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionGroupBox_dQStyleOptionGroupBox(QStyleOptionGroupBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionSizeGrip_dQStyleOptionSizeGrip(QStyleOptionSizeGrip * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOptionGraphicsItem_dQStyleOptionGraphicsItem(QStyleOptionGraphicsItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyleHintReturn * ctr_qt_widgets_ffi_QStyleHintReturn_QStyleHintReturn1() {
  return new QStyleHintReturn();
}


RITUAL_EXPORT QStyleHintReturn * ctr_qt_widgets_ffi_QStyleHintReturn_QStyleHintReturn2(QStyleHintReturn const * other) {
  return new QStyleHintReturn(*other);
}


RITUAL_EXPORT QStyleHintReturn * ctr_qt_widgets_ffi_QStyleHintReturn_operator_(QStyleHintReturn * this_ptr, QStyleHintReturn const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QStyleHintReturnMask * ctr_qt_widgets_ffi_QStyleHintReturnMask_QStyleHintReturnMask1(QStyleHintReturnMask const * other) {
  return new QStyleHintReturnMask(*other);
}


RITUAL_EXPORT QStyleHintReturnMask * ctr_qt_widgets_ffi_QStyleHintReturnMask_operator_(QStyleHintReturnMask * this_ptr, QStyleHintReturnMask const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QStyleHintReturnVariant * ctr_qt_widgets_ffi_QStyleHintReturnVariant_QStyleHintReturnVariant1(QStyleHintReturnVariant const * other) {
  return new QStyleHintReturnVariant(*other);
}


RITUAL_EXPORT QStyleHintReturnVariant * ctr_qt_widgets_ffi_QStyleHintReturnVariant_operator_(QStyleHintReturnVariant * this_ptr, QStyleHintReturnVariant const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_QAbstractScrollArea_QAbstractScrollArea1() {
  return new QAbstractScrollArea();
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QLayoutItem_operator_(QLayoutItem * this_ptr, QLayoutItem const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QSpacerItem * ctr_qt_widgets_ffi_QSpacerItem_QSpacerItem2(QSpacerItem const * other) {
  return new QSpacerItem(*other);
}


RITUAL_EXPORT QSpacerItem * ctr_qt_widgets_ffi_QSpacerItem_operator_(QSpacerItem * this_ptr, QSpacerItem const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_QGridLayout_QGridLayout1() {
  return new QGridLayout();
}


RITUAL_EXPORT QButtonGroup * ctr_qt_widgets_ffi_QButtonGroup_QButtonGroup1() {
  return new QButtonGroup();
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_QCalendarWidget_QCalendarWidget1() {
  return new QCalendarWidget();
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_QCheckBox_QCheckBox2() {
  return new QCheckBox();
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_QDialog_QDialog1() {
  return new QDialog();
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_QColorDialog_QColorDialog2() {
  return new QColorDialog();
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_QColumnView_QColumnView1() {
  return new QColumnView();
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_QComboBox_QComboBox1() {
  return new QComboBox();
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QPushButton_QPushButton3() {
  return new QPushButton();
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_QCommandLinkButton_QCommandLinkButton3() {
  return new QCommandLinkButton();
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_QCompleter_QCompleter3() {
  return new QCompleter();
}


RITUAL_EXPORT QDataWidgetMapper * ctr_qt_widgets_ffi_QDataWidgetMapper_QDataWidgetMapper1() {
  return new QDataWidgetMapper();
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_QDateTimeEdit_QDateTimeEdit4() {
  return new QDateTimeEdit();
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_QTimeEdit_QTimeEdit2() {
  return new QTimeEdit();
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_QDateEdit_QDateEdit2() {
  return new QDateEdit();
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_QDial_QDial1() {
  return new QDial();
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_QDialogButtonBox_QDialogButtonBox4() {
  return new QDialogButtonBox();
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_QDockWidget_QDockWidget2() {
  return new QDockWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTileRules_dQTileRules(QTileRules * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTileRules * ctr_qt_widgets_ffi_QTileRules_QTileRules2() {
  return new QTileRules();
}


RITUAL_EXPORT QTileRules * ctr_qt_widgets_ffi_QTileRules_QTileRules3(QTileRules const * other) {
  return new QTileRules(*other);
}


RITUAL_EXPORT QTileRules * ctr_qt_widgets_ffi_QTileRules_operator_(QTileRules * this_ptr, QTileRules const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_QErrorMessage_QErrorMessage1() {
  return new QErrorMessage();
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_QFileDialog_QFileDialog2() {
  return new QFileDialog();
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_QFocusFrame_QFocusFrame1() {
  return new QFocusFrame();
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_QFontComboBox_QFontComboBox1() {
  return new QFontComboBox();
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_QFontDialog_QFontDialog2() {
  return new QFontDialog();
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_QFormLayout_QFormLayout1() {
  return new QFormLayout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_TakeRowResult_dTakeRowResult(QFormLayout::TakeRowResult * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFormLayout::TakeRowResult * ctr_qt_widgets_ffi_QFormLayout_TakeRowResult_TakeRowResult() {
  return new QFormLayout::TakeRowResult();
}


RITUAL_EXPORT QFormLayout::TakeRowResult * ctr_qt_widgets_ffi_QFormLayout_TakeRowResult_TakeRowResult1(QFormLayout::TakeRowResult const * other) {
  return new QFormLayout::TakeRowResult(*other);
}


RITUAL_EXPORT QFormLayout::TakeRowResult * ctr_qt_widgets_ffi_QFormLayout_TakeRowResult_operator_(QFormLayout::TakeRowResult * this_ptr, QFormLayout::TakeRowResult const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_QGesture_QGesture1() {
  return new QGesture();
}


RITUAL_EXPORT QPanGesture * ctr_qt_widgets_ffi_QPanGesture_QPanGesture1() {
  return new QPanGesture();
}


RITUAL_EXPORT QPinchGesture * ctr_qt_widgets_ffi_QPinchGesture_QPinchGesture1() {
  return new QPinchGesture();
}


RITUAL_EXPORT QSwipeGesture * ctr_qt_widgets_ffi_QSwipeGesture_QSwipeGesture1() {
  return new QSwipeGesture();
}


RITUAL_EXPORT QTapGesture * ctr_qt_widgets_ffi_QTapGesture_QTapGesture1() {
  return new QTapGesture();
}


RITUAL_EXPORT QTapAndHoldGesture * ctr_qt_widgets_ffi_QTapAndHoldGesture_QTapAndHoldGesture1() {
  return new QTapAndHoldGesture();
}


RITUAL_EXPORT QGestureEvent * ctr_qt_widgets_ffi_QGestureEvent_QGestureEvent2(QGestureEvent const * other) {
  return new QGestureEvent(*other);
}


RITUAL_EXPORT QGestureEvent * ctr_qt_widgets_ffi_QGestureEvent_operator_(QGestureEvent * this_ptr, QGestureEvent const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QGestureRecognizer * ctr_qt_widgets_ffi_QGestureRecognizer_operator_(QGestureRecognizer * this_ptr, QGestureRecognizer const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_QGraphicsPathItem_QGraphicsPathItem2() {
  return new QGraphicsPathItem();
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsRectItem_QGraphicsRectItem3() {
  return new QGraphicsRectItem();
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsEllipseItem_QGraphicsEllipseItem3() {
  return new QGraphicsEllipseItem();
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_QGraphicsPolygonItem_QGraphicsPolygonItem2() {
  return new QGraphicsPolygonItem();
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsLineItem_QGraphicsLineItem3() {
  return new QGraphicsLineItem();
}


RITUAL_EXPORT QGraphicsPixmapItem * ctr_qt_widgets_ffi_QGraphicsPixmapItem_QGraphicsPixmapItem2() {
  return new QGraphicsPixmapItem();
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_QGraphicsTextItem_QGraphicsTextItem2() {
  return new QGraphicsTextItem();
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_QGraphicsSimpleTextItem2() {
  return new QGraphicsSimpleTextItem();
}


RITUAL_EXPORT QGraphicsItemGroup * ctr_qt_widgets_ffi_QGraphicsItemGroup_QGraphicsItemGroup1() {
  return new QGraphicsItemGroup();
}


RITUAL_EXPORT QGraphicsAnchorLayout * ctr_qt_widgets_ffi_QGraphicsAnchorLayout_QGraphicsAnchorLayout1() {
  return new QGraphicsAnchorLayout();
}


RITUAL_EXPORT QGraphicsColorizeEffect * ctr_qt_widgets_ffi_QGraphicsColorizeEffect_QGraphicsColorizeEffect1() {
  return new QGraphicsColorizeEffect();
}


RITUAL_EXPORT QGraphicsBlurEffect * ctr_qt_widgets_ffi_QGraphicsBlurEffect_QGraphicsBlurEffect1() {
  return new QGraphicsBlurEffect();
}


RITUAL_EXPORT QGraphicsDropShadowEffect * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect1() {
  return new QGraphicsDropShadowEffect();
}


RITUAL_EXPORT QGraphicsOpacityEffect * ctr_qt_widgets_ffi_QGraphicsOpacityEffect_QGraphicsOpacityEffect1() {
  return new QGraphicsOpacityEffect();
}


RITUAL_EXPORT QGraphicsGridLayout * ctr_qt_widgets_ffi_QGraphicsGridLayout_QGraphicsGridLayout1() {
  return new QGraphicsGridLayout();
}


RITUAL_EXPORT QGraphicsItemAnimation * ctr_qt_widgets_ffi_QGraphicsItemAnimation_QGraphicsItemAnimation1() {
  return new QGraphicsItemAnimation();
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_QGraphicsLinearLayout_QGraphicsLinearLayout2() {
  return new QGraphicsLinearLayout();
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsWidget_QGraphicsWidget1() {
  return new QGraphicsWidget();
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_QGraphicsProxyWidget_QGraphicsProxyWidget1() {
  return new QGraphicsProxyWidget();
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsScene_QGraphicsScene3() {
  return new QGraphicsScene();
}


RITUAL_EXPORT QGraphicsSceneMouseEvent * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_QGraphicsSceneMouseEvent1() {
  return new QGraphicsSceneMouseEvent();
}


RITUAL_EXPORT QGraphicsSceneWheelEvent * ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent1() {
  return new QGraphicsSceneWheelEvent();
}


RITUAL_EXPORT QGraphicsSceneContextMenuEvent * ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_QGraphicsSceneContextMenuEvent1() {
  return new QGraphicsSceneContextMenuEvent();
}


RITUAL_EXPORT QGraphicsSceneHoverEvent * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_QGraphicsSceneHoverEvent1() {
  return new QGraphicsSceneHoverEvent();
}


RITUAL_EXPORT QGraphicsSceneHelpEvent * ctr_qt_widgets_ffi_QGraphicsSceneHelpEvent_QGraphicsSceneHelpEvent1() {
  return new QGraphicsSceneHelpEvent();
}


RITUAL_EXPORT QGraphicsSceneDragDropEvent * ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_QGraphicsSceneDragDropEvent1() {
  return new QGraphicsSceneDragDropEvent();
}


RITUAL_EXPORT QGraphicsScale * ctr_qt_widgets_ffi_QGraphicsScale_QGraphicsScale1() {
  return new QGraphicsScale();
}


RITUAL_EXPORT QGraphicsRotation * ctr_qt_widgets_ffi_QGraphicsRotation_QGraphicsRotation1() {
  return new QGraphicsRotation();
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_QScrollArea_QScrollArea1() {
  return new QScrollArea();
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_QGraphicsView_QGraphicsView2() {
  return new QGraphicsView();
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_QGroupBox_QGroupBox2() {
  return new QGroupBox();
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_QLineEdit_QLineEdit2() {
  return new QLineEdit();
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_QInputDialog_QInputDialog1() {
  return new QInputDialog();
}


RITUAL_EXPORT QItemDelegate * ctr_qt_widgets_ffi_QItemDelegate_QItemDelegate1() {
  return new QItemDelegate();
}


RITUAL_EXPORT QItemEditorCreatorBase * ctr_qt_widgets_ffi_QItemEditorCreatorBase_operator_(QItemEditorCreatorBase * this_ptr, QItemEditorCreatorBase const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QItemEditorFactory * ctr_qt_widgets_ffi_QItemEditorFactory_QItemEditorFactory1(QItemEditorFactory const * other) {
  return new QItemEditorFactory(*other);
}


RITUAL_EXPORT QItemEditorFactory * ctr_qt_widgets_ffi_QItemEditorFactory_operator_(QItemEditorFactory * this_ptr, QItemEditorFactory const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_QKeySequenceEdit_QKeySequenceEdit2() {
  return new QKeySequenceEdit();
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_QLabel_QLabel2() {
  return new QLabel();
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_QLCDNumber_QLCDNumber2() {
  return new QLCDNumber();
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_QListView_QListView1() {
  return new QListView();
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem4() {
  return new QListWidgetItem();
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_QListWidget_QListWidget1() {
  return new QListWidget();
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_QMainWindow_QMainWindow1() {
  return new QMainWindow();
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_QMdiArea_QMdiArea1() {
  return new QMdiArea();
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_QMdiSubWindow_QMdiSubWindow1() {
  return new QMdiSubWindow();
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenu_QMenu2() {
  return new QMenu();
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_QMenuBar_QMenuBar1() {
  return new QMenuBar();
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox3() {
  return new QMessageBox();
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_QTextEdit_QTextEdit2() {
  return new QTextEdit();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_dExtraSelection(QTextEdit::ExtraSelection * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextEdit::ExtraSelection * ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_ExtraSelection() {
  return new QTextEdit::ExtraSelection();
}


RITUAL_EXPORT QTextEdit::ExtraSelection * ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_ExtraSelection1(QTextEdit::ExtraSelection const * other) {
  return new QTextEdit::ExtraSelection(*other);
}


RITUAL_EXPORT QTextEdit::ExtraSelection * ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_operator_(QTextEdit::ExtraSelection * this_ptr, QTextEdit::ExtraSelection const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_QPlainTextEdit_QPlainTextEdit2() {
  return new QPlainTextEdit();
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_QProgressBar_QProgressBar1() {
  return new QProgressBar();
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_QProgressDialog_QProgressDialog2() {
  return new QProgressDialog();
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_QProxyStyle_QProxyStyle2() {
  return new QProxyStyle();
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_QRadioButton_QRadioButton2() {
  return new QRadioButton();
}


RITUAL_EXPORT QRhiWidget * ctr_qt_widgets_ffi_QRhiWidget_QRhiWidget1() {
  return new QRhiWidget();
}


RITUAL_EXPORT QScrollBar * ctr_qt_widgets_ffi_QScrollBar_QScrollBar2() {
  return new QScrollBar();
}


RITUAL_EXPORT QSpinBox * ctr_qt_widgets_ffi_QSpinBox_QSpinBox1() {
  return new QSpinBox();
}


RITUAL_EXPORT QDoubleSpinBox * ctr_qt_widgets_ffi_QDoubleSpinBox_QDoubleSpinBox1() {
  return new QDoubleSpinBox();
}


RITUAL_EXPORT QSplashScreen * ctr_qt_widgets_ffi_QSplashScreen_QSplashScreen2() {
  return new QSplashScreen();
}


RITUAL_EXPORT QSplitter * ctr_qt_widgets_ffi_QSplitter_QSplitter2() {
  return new QSplitter();
}


RITUAL_EXPORT QStackedWidget * ctr_qt_widgets_ffi_QStackedWidget_QStackedWidget1() {
  return new QStackedWidget();
}


RITUAL_EXPORT QStatusBar * ctr_qt_widgets_ffi_QStatusBar_QStatusBar1() {
  return new QStatusBar();
}


RITUAL_EXPORT QStyledItemDelegate * ctr_qt_widgets_ffi_QStyledItemDelegate_QStyledItemDelegate1() {
  return new QStyledItemDelegate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleFactory_dQStyleFactory(QStyleFactory * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyleFactory * ctr_qt_widgets_ffi_QStyleFactory_QStyleFactory() {
  return new QStyleFactory();
}


RITUAL_EXPORT QStyleFactory * ctr_qt_widgets_ffi_QStyleFactory_QStyleFactory1(QStyleFactory const * other) {
  return new QStyleFactory(*other);
}


RITUAL_EXPORT QStyleFactory * ctr_qt_widgets_ffi_QStyleFactory_operator_(QStyleFactory * this_ptr, QStyleFactory const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePainter_dQStylePainter(QStylePainter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSystemTrayIcon * ctr_qt_widgets_ffi_QSystemTrayIcon_QSystemTrayIcon2() {
  return new QSystemTrayIcon();
}


RITUAL_EXPORT QTableView * ctr_qt_widgets_ffi_QTableView_QTableView1() {
  return new QTableView();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidgetSelectionRange_dQTableWidgetSelectionRange(QTableWidgetSelectionRange * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTableWidgetSelectionRange * ctr_qt_widgets_ffi_QTableWidgetSelectionRange_QTableWidgetSelectionRange2(QTableWidgetSelectionRange const * other) {
  return new QTableWidgetSelectionRange(*other);
}


RITUAL_EXPORT QTableWidgetSelectionRange * ctr_qt_widgets_ffi_QTableWidgetSelectionRange_operator_(QTableWidgetSelectionRange * this_ptr, QTableWidgetSelectionRange const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_QTableWidgetItem4() {
  return new QTableWidgetItem();
}


RITUAL_EXPORT QTableWidget * ctr_qt_widgets_ffi_QTableWidget_QTableWidget2() {
  return new QTableWidget();
}


RITUAL_EXPORT QTextBrowser * ctr_qt_widgets_ffi_QTextBrowser_QTextBrowser1() {
  return new QTextBrowser();
}


RITUAL_EXPORT QToolBar * ctr_qt_widgets_ffi_QToolBar_QToolBar2() {
  return new QToolBar();
}


RITUAL_EXPORT QToolBox * ctr_qt_widgets_ffi_QToolBox_QToolBox1() {
  return new QToolBox();
}


RITUAL_EXPORT QToolButton * ctr_qt_widgets_ffi_QToolButton_QToolButton1() {
  return new QToolButton();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_dQToolTip(QToolTip * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QToolTip * ctr_qt_widgets_ffi_QToolTip_QToolTip(QToolTip const * other) {
  return new QToolTip(*other);
}


RITUAL_EXPORT QToolTip * ctr_qt_widgets_ffi_QToolTip_operator_(QToolTip * this_ptr, QToolTip const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QTreeView * ctr_qt_widgets_ffi_QTreeView_QTreeView1() {
  return new QTreeView();
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem9() {
  return new QTreeWidgetItem();
}


RITUAL_EXPORT QTreeWidget * ctr_qt_widgets_ffi_QTreeWidget_QTreeWidget1() {
  return new QTreeWidget();
}


RITUAL_EXPORT QUndoView * ctr_qt_widgets_ffi_QUndoView_QUndoView3() {
  return new QUndoView();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWhatsThis_dQWhatsThis(QWhatsThis * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWhatsThis * ctr_qt_widgets_ffi_QWhatsThis_QWhatsThis(QWhatsThis const * other) {
  return new QWhatsThis(*other);
}


RITUAL_EXPORT QWhatsThis * ctr_qt_widgets_ffi_QWhatsThis_operator_(QWhatsThis * this_ptr, QWhatsThis const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QWizard * ctr_qt_widgets_ffi_QWizard_QWizard1() {
  return new QWizard();
}


RITUAL_EXPORT QWizardPage * ctr_qt_widgets_ffi_QWizardPage_QWizardPage1() {
  return new QWizardPage();
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash(int flags, unsigned long seed) {
  return qHash(QFlags< QStyle::StateFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash1(int flags, unsigned long seed) {
  return qHash(QFlags< QStyleOptionFrame::FrameFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash2(int flags, unsigned long seed) {
  return qHash(QFlags< QStyleOptionButton::ButtonFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash3(int flags, unsigned long seed) {
  return qHash(QFlags< QStyleOptionTab::CornerWidget >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash4(int flags, unsigned long seed) {
  return qHash(QFlags< QStyleOptionTab::TabFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash5(int flags, unsigned long seed) {
  return qHash(QFlags< QStyleOptionToolBar::ToolBarFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash6(int flags, unsigned long seed) {
  return qHash(QFlags< QStyleOptionViewItem::ViewItemFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash7(int flags, unsigned long seed) {
  return qHash(QFlags< QStyle::SubControl >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash8(int flags, unsigned long seed) {
  return qHash(QFlags< QAbstractSpinBox::StepEnabledFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash9(int flags, unsigned long seed) {
  return qHash(QFlags< QStyleOptionToolButton::ToolButtonFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash10(int flags, unsigned long seed) {
  return qHash(QFlags< QTreeWidgetItemIterator::IteratorFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash11(int flags, unsigned long seed) {
  return qHash(QFlags< QSizePolicy::ControlType >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash12(int flags, unsigned long seed) {
  return qHash(QFlags< QWidget::RenderFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash13(int flags, unsigned long seed) {
  return qHash(QFlags< QAbstractItemView::EditTrigger >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash14(int flags, unsigned long seed) {
  return qHash(QFlags< QColorDialog::ColorDialogOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash15(int flags, unsigned long seed) {
  return qHash(QFlags< QDateTimeEdit::Section >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash16(int flags, unsigned long seed) {
  return qHash(QFlags< QDialogButtonBox::StandardButton >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash17(int flags, unsigned long seed) {
  return qHash(QFlags< QDockWidget::DockWidgetFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash18(int flags, unsigned long seed) {
  return qHash(QFlags< QDrawBorderPixmap::DrawingHint >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash19(int flags, unsigned long seed) {
  return qHash(QFlags< QFileDialog::Option >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash20(int flags, unsigned long seed) {
  return qHash(QFlags< QFontComboBox::FontFilter >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash21(int flags, unsigned long seed) {
  return qHash(QFlags< QFontDialog::FontDialogOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash22(int flags, unsigned long seed) {
  return qHash(QFlags< QPinchGesture::ChangeFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash23(int flags, unsigned long seed) {
  return qHash(QFlags< QGestureRecognizer::ResultFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash24(int flags, unsigned long seed) {
  return qHash(QFlags< QGraphicsItem::GraphicsItemFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash25(int flags, unsigned long seed) {
  return qHash(QFlags< QGraphicsEffect::ChangeFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash26(int flags, unsigned long seed) {
  return qHash(QFlags< QGraphicsBlurEffect::BlurHint >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash27(int flags, unsigned long seed) {
  return qHash(QFlags< QGraphicsScene::SceneLayer >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash28(int flags, unsigned long seed) {
  return qHash(QFlags< QGraphicsView::OptimizationFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash29(int flags, unsigned long seed) {
  return qHash(QFlags< QGraphicsView::CacheModeFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash30(int flags, unsigned long seed) {
  return qHash(QFlags< QInputDialog::InputDialogOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash31(int flags, unsigned long seed) {
  return qHash(QFlags< QMainWindow::DockOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash32(int flags, unsigned long seed) {
  return qHash(QFlags< QMdiArea::AreaOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash33(int flags, unsigned long seed) {
  return qHash(QFlags< QMdiSubWindow::SubWindowOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash34(int flags, unsigned long seed) {
  return qHash(QFlags< QMessageBox::StandardButton >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash35(int flags, unsigned long seed) {
  return qHash(QFlags< QMessageBox::Option >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash36(int flags, unsigned long seed) {
  return qHash(QFlags< QTextEdit::AutoFormattingFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_widgets_ffi_qHash37(int flags, unsigned long seed) {
  return qHash(QFlags< QWizard::WizardOption >(flags), seed);
}


RITUAL_EXPORT QList< QGesture * >::iterator * ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_iterator() {
  return new QList< QGesture * >::iterator();
}


RITUAL_EXPORT QList< QTreeWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_iterator() {
  return new QList< QTreeWidgetItem * >::iterator();
}


RITUAL_EXPORT QList< QWidget * >::iterator * ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_iterator() {
  return new QList< QWidget * >::iterator();
}


RITUAL_EXPORT QList< QAbstractButton * >::iterator * ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_iterator() {
  return new QList< QAbstractButton * >::iterator();
}


RITUAL_EXPORT QList< QColor >::iterator * ctr_qt_widgets_ffi_QList_QColor_iterator_iterator() {
  return new QList< QColor >::iterator();
}


RITUAL_EXPORT QList< QGraphicsItem * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_iterator() {
  return new QList< QGraphicsItem * >::iterator();
}


RITUAL_EXPORT QList< QGraphicsTransform * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_iterator() {
  return new QList< QGraphicsTransform * >::iterator();
}


RITUAL_EXPORT QList< QGraphicsView * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_iterator() {
  return new QList< QGraphicsView * >::iterator();
}


RITUAL_EXPORT QList< QKeyCombination >::iterator * ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_iterator() {
  return new QList< QKeyCombination >::iterator();
}


RITUAL_EXPORT QList< QListWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_iterator() {
  return new QList< QListWidgetItem * >::iterator();
}


RITUAL_EXPORT QList< QDockWidget * >::iterator * ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_iterator() {
  return new QList< QDockWidget * >::iterator();
}


RITUAL_EXPORT QList< QMdiSubWindow * >::iterator * ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_iterator() {
  return new QList< QMdiSubWindow * >::iterator();
}


RITUAL_EXPORT QList< QTextEdit::ExtraSelection >::iterator * ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_iterator() {
  return new QList< QTextEdit::ExtraSelection >::iterator();
}


RITUAL_EXPORT QList< QScroller * >::iterator * ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_iterator() {
  return new QList< QScroller * >::iterator();
}


RITUAL_EXPORT QList< QTableWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_iterator() {
  return new QList< QTableWidgetItem * >::iterator();
}


RITUAL_EXPORT QList< QTableWidgetSelectionRange >::iterator * ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_iterator() {
  return new QList< QTableWidgetSelectionRange >::iterator();
}


RITUAL_EXPORT QList< QWizard::WizardButton >::iterator * ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_iterator() {
  return new QList< QWizard::WizardButton >::iterator();
}


RITUAL_EXPORT QGesture * * ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator_(QList< QGesture * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTreeWidgetItem * * ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator_(QList< QTreeWidgetItem * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QWidget * * ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator_(QList< QWidget * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAbstractButton * * ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator_(QList< QAbstractButton * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QList_QColor_iterator_operator_(QList< QColor >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QGraphicsItem * * ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator_(QList< QGraphicsItem * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QGraphicsTransform * * ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator_(QList< QGraphicsTransform * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QGraphicsView * * ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator_(QList< QGraphicsView * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QKeyCombination * ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator_(QList< QKeyCombination >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QListWidgetItem * * ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator_(QList< QListWidgetItem * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QDockWidget * * ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator_(QList< QDockWidget * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QMdiSubWindow * * ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator_(QList< QMdiSubWindow * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextEdit::ExtraSelection * ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator_(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QScroller * * ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator_(QList< QScroller * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTableWidgetItem * * ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator_(QList< QTableWidgetItem * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTableWidgetSelectionRange * ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator_(QList< QTableWidgetSelectionRange >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QWizard::WizardButton * ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator_(QList< QWizard::WizardButton >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QGesture * * ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__(QList< QGesture * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTreeWidgetItem * * ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__(QList< QTreeWidgetItem * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QWidget * * ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__(QList< QWidget * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAbstractButton * * ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__(QList< QAbstractButton * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QList_QColor_iterator_operator__(QList< QColor >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QGraphicsItem * * ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__(QList< QGraphicsItem * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QGraphicsTransform * * ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__(QList< QGraphicsTransform * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QGraphicsView * * ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__(QList< QGraphicsView * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QKeyCombination * ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__(QList< QKeyCombination >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QListWidgetItem * * ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__(QList< QListWidgetItem * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QDockWidget * * ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__(QList< QDockWidget * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QMdiSubWindow * * ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__(QList< QMdiSubWindow * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTextEdit::ExtraSelection * ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QScroller * * ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__(QList< QScroller * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTableWidgetItem * * ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__(QList< QTableWidgetItem * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTableWidgetSelectionRange * ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__(QList< QTableWidgetSelectionRange >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QWizard::WizardButton * ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__(QList< QWizard::WizardButton >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QGesture * * ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__1(QList< QGesture * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTreeWidgetItem * * ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__1(QList< QTreeWidgetItem * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QWidget * * ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__1(QList< QWidget * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAbstractButton * * ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__1(QList< QAbstractButton * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QList_QColor_iterator_operator__1(QList< QColor >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QGraphicsItem * * ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__1(QList< QGraphicsItem * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QGraphicsTransform * * ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__1(QList< QGraphicsTransform * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QGraphicsView * * ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__1(QList< QGraphicsView * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QKeyCombination * ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__1(QList< QKeyCombination >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QListWidgetItem * * ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__1(QList< QListWidgetItem * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QDockWidget * * ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__1(QList< QDockWidget * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QMdiSubWindow * * ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__1(QList< QMdiSubWindow * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTextEdit::ExtraSelection * ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__1(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QScroller * * ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__1(QList< QScroller * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTableWidgetItem * * ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__1(QList< QTableWidgetItem * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTableWidgetSelectionRange * ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__1(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QWizard::WizardButton * ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__1(QList< QWizard::WizardButton >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__2(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__2(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__2(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__2(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator__2(QList< QColor >::iterator const * this_ptr, QList< QColor >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__2(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__2(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__2(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__2(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__2(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__2(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__2(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__2(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__2(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__2(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__2(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__2(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator_1(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator_1(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator_1(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator_1(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator_1(QList< QColor >::iterator const * this_ptr, QList< QColor >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator_1(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator_1(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator_1(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator_1(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator_1(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator_1(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator_1(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator_1(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator_1(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator_1(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator_1(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator_1(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__4(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__4(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__4(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__4(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator__4(QList< QColor >::iterator const * this_ptr, QList< QColor >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__4(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__4(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__4(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__4(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__4(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__4(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__4(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__4(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__4(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__4(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__4(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__4(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator_2(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator_2(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator_2(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator_2(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator_2(QList< QColor >::iterator const * this_ptr, QList< QColor >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator_2(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator_2(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator_2(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator_2(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator_2(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator_2(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator_2(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator_2(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator_2(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator_2(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator_2(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator_2(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__5(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__5(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__5(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__5(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator__5(QList< QColor >::iterator const * this_ptr, QList< QColor >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__5(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__5(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__5(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__5(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__5(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__5(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__5(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__5(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__5(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__5(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__5(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__5(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__6(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__6(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__6(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__6(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator__6(QList< QColor >::iterator const * this_ptr, QList< QColor >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__6(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__6(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__6(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__6(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__6(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__6(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__6(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__6(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__6(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__6(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__6(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__6(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator_3(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator_3(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator_3(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator_3(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator_3(QList< QColor >::iterator const * this_ptr, QList< QColor >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator_3(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator_3(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator_3(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator_3(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator_3(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator_3(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator_3(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator_3(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator_3(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator_3(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator_3(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator_3(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__8(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__8(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__8(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__8(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator__8(QList< QColor >::iterator const * this_ptr, QList< QColor >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__8(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__8(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__8(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__8(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__8(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__8(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__8(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__8(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__8(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__8(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__8(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__8(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator_4(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator_4(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator_4(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator_4(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator_4(QList< QColor >::iterator const * this_ptr, QList< QColor >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator_4(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator_4(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator_4(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator_4(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator_4(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator_4(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator_4(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator_4(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator_4(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator_4(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator_4(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator_4(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__9(QList< QGesture * >::iterator const * this_ptr, QList< QGesture * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__9(QList< QTreeWidgetItem * >::iterator const * this_ptr, QList< QTreeWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__9(QList< QWidget * >::iterator const * this_ptr, QList< QWidget * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__9(QList< QAbstractButton * >::iterator const * this_ptr, QList< QAbstractButton * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator__9(QList< QColor >::iterator const * this_ptr, QList< QColor >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__9(QList< QGraphicsItem * >::iterator const * this_ptr, QList< QGraphicsItem * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__9(QList< QGraphicsTransform * >::iterator const * this_ptr, QList< QGraphicsTransform * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__9(QList< QGraphicsView * >::iterator const * this_ptr, QList< QGraphicsView * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__9(QList< QKeyCombination >::iterator const * this_ptr, QList< QKeyCombination >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__9(QList< QListWidgetItem * >::iterator const * this_ptr, QList< QListWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__9(QList< QDockWidget * >::iterator const * this_ptr, QList< QDockWidget * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__9(QList< QMdiSubWindow * >::iterator const * this_ptr, QList< QMdiSubWindow * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__9(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QList< QTextEdit::ExtraSelection >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__9(QList< QScroller * >::iterator const * this_ptr, QList< QScroller * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__9(QList< QTableWidgetItem * >::iterator const * this_ptr, QList< QTableWidgetItem * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__9(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QList< QTableWidgetSelectionRange >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__9(QList< QWizard::WizardButton >::iterator const * this_ptr, QList< QWizard::WizardButton >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__10(QList< QGesture * >::iterator const * this_ptr, QGesture * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__10(QList< QTreeWidgetItem * >::iterator const * this_ptr, QTreeWidgetItem * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__10(QList< QWidget * >::iterator const * this_ptr, QWidget * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__10(QList< QAbstractButton * >::iterator const * this_ptr, QAbstractButton * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QColor_iterator_operator__10(QList< QColor >::iterator const * this_ptr, QColor * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__10(QList< QGraphicsItem * >::iterator const * this_ptr, QGraphicsItem * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__10(QList< QGraphicsTransform * >::iterator const * this_ptr, QGraphicsTransform * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__10(QList< QGraphicsView * >::iterator const * this_ptr, QGraphicsView * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__10(QList< QKeyCombination >::iterator const * this_ptr, QKeyCombination * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__10(QList< QListWidgetItem * >::iterator const * this_ptr, QListWidgetItem * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__10(QList< QDockWidget * >::iterator const * this_ptr, QDockWidget * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__10(QList< QMdiSubWindow * >::iterator const * this_ptr, QMdiSubWindow * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__10(QList< QTextEdit::ExtraSelection >::iterator const * this_ptr, QTextEdit::ExtraSelection * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__10(QList< QScroller * >::iterator const * this_ptr, QScroller * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__10(QList< QTableWidgetItem * >::iterator const * this_ptr, QTableWidgetItem * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__10(QList< QTableWidgetSelectionRange >::iterator const * this_ptr, QTableWidgetSelectionRange * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__10(QList< QWizard::WizardButton >::iterator const * this_ptr, QWizard::WizardButton * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT QList< QGesture * >::iterator * ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__12(QList< QGesture * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTreeWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__12(QList< QTreeWidgetItem * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QWidget * >::iterator * ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__12(QList< QWidget * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QAbstractButton * >::iterator * ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__12(QList< QAbstractButton * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QColor >::iterator * ctr_qt_widgets_ffi_QList_QColor_iterator_operator__12(QList< QColor >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QGraphicsItem * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__12(QList< QGraphicsItem * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QGraphicsTransform * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__12(QList< QGraphicsTransform * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QGraphicsView * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__12(QList< QGraphicsView * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QKeyCombination >::iterator * ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__12(QList< QKeyCombination >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QListWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__12(QList< QListWidgetItem * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QDockWidget * >::iterator * ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__12(QList< QDockWidget * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QMdiSubWindow * >::iterator * ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__12(QList< QMdiSubWindow * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTextEdit::ExtraSelection >::iterator * ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__12(QList< QTextEdit::ExtraSelection >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QScroller * >::iterator * ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__12(QList< QScroller * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTableWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__12(QList< QTableWidgetItem * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTableWidgetSelectionRange >::iterator * ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__12(QList< QTableWidgetSelectionRange >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QWizard::WizardButton >::iterator * ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__12(QList< QWizard::WizardButton >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QGesture * >::iterator * ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__13(QList< QGesture * >::iterator * this_ptr, int arg1) {
  return new QList< QGesture * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTreeWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__13(QList< QTreeWidgetItem * >::iterator * this_ptr, int arg1) {
  return new QList< QTreeWidgetItem * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QWidget * >::iterator * ctr_qt_widgets_ffi_QList_QWidget_ptr_iterator_operator__13(QList< QWidget * >::iterator * this_ptr, int arg1) {
  return new QList< QWidget * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QAbstractButton * >::iterator * ctr_qt_widgets_ffi_QList_QAbstractButton_ptr_iterator_operator__13(QList< QAbstractButton * >::iterator * this_ptr, int arg1) {
  return new QList< QAbstractButton * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QColor >::iterator * ctr_qt_widgets_ffi_QList_QColor_iterator_operator__13(QList< QColor >::iterator * this_ptr, int arg1) {
  return new QList< QColor >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QGraphicsItem * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsItem_ptr_iterator_operator__13(QList< QGraphicsItem * >::iterator * this_ptr, int arg1) {
  return new QList< QGraphicsItem * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QGraphicsTransform * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsTransform_ptr_iterator_operator__13(QList< QGraphicsTransform * >::iterator * this_ptr, int arg1) {
  return new QList< QGraphicsTransform * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QGraphicsView * >::iterator * ctr_qt_widgets_ffi_QList_QGraphicsView_ptr_iterator_operator__13(QList< QGraphicsView * >::iterator * this_ptr, int arg1) {
  return new QList< QGraphicsView * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QKeyCombination >::iterator * ctr_qt_widgets_ffi_QList_QKeyCombination_iterator_operator__13(QList< QKeyCombination >::iterator * this_ptr, int arg1) {
  return new QList< QKeyCombination >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QListWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QListWidgetItem_ptr_iterator_operator__13(QList< QListWidgetItem * >::iterator * this_ptr, int arg1) {
  return new QList< QListWidgetItem * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QDockWidget * >::iterator * ctr_qt_widgets_ffi_QList_QDockWidget_ptr_iterator_operator__13(QList< QDockWidget * >::iterator * this_ptr, int arg1) {
  return new QList< QDockWidget * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QMdiSubWindow * >::iterator * ctr_qt_widgets_ffi_QList_QMdiSubWindow_ptr_iterator_operator__13(QList< QMdiSubWindow * >::iterator * this_ptr, int arg1) {
  return new QList< QMdiSubWindow * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTextEdit::ExtraSelection >::iterator * ctr_qt_widgets_ffi_QList_QTextEdit_ExtraSelection_iterator_operator__13(QList< QTextEdit::ExtraSelection >::iterator * this_ptr, int arg1) {
  return new QList< QTextEdit::ExtraSelection >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QScroller * >::iterator * ctr_qt_widgets_ffi_QList_QScroller_ptr_iterator_operator__13(QList< QScroller * >::iterator * this_ptr, int arg1) {
  return new QList< QScroller * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTableWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QTableWidgetItem_ptr_iterator_operator__13(QList< QTableWidgetItem * >::iterator * this_ptr, int arg1) {
  return new QList< QTableWidgetItem * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTableWidgetSelectionRange >::iterator * ctr_qt_widgets_ffi_QList_QTableWidgetSelectionRange_iterator_operator__13(QList< QTableWidgetSelectionRange >::iterator * this_ptr, int arg1) {
  return new QList< QTableWidgetSelectionRange >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QWizard::WizardButton >::iterator * ctr_qt_widgets_ffi_QList_QWizard_WizardButton_iterator_operator__13(QList< QWizard::WizardButton >::iterator * this_ptr, int arg1) {
  return new QList< QWizard::WizardButton >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QGesture * >::iterator * ctr_qt_widgets_ffi_QList_QGesture_ptr_iterator_operator__14(QList< QGesture * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QTreeWidgetItem * >::iterator * ctr_qt_widgets_ffi_QList_QTreeWidgetItem_ptr_iterator_operator__14(QList< QTreeWidgetItem * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


} // extern "C"
