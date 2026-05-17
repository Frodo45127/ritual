#include "qt_widgets_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_QGraphicsGridLayout_itemAt1(QGraphicsGridLayout const * this_ptr, int index) {
  return this_ptr->itemAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_removeAt(QGraphicsGridLayout * this_ptr, int index) {
  this_ptr->removeAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_removeItem(QGraphicsGridLayout * this_ptr, QGraphicsLayoutItem * item) {
  this_ptr->removeItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_invalidate(QGraphicsGridLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setGeometry(QGraphicsGridLayout * this_ptr, QRectF const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsGridLayout_sizeHint(QGraphicsGridLayout const * this_ptr, Qt::SizeHint which, QSizeF const * constraint) {
  return new QSizeF(this_ptr->sizeHint(which, *constraint));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsItemAnimation_metaObject(QGraphicsItemAnimation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsItemAnimation_qt_metacast(QGraphicsItemAnimation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsItemAnimation_qt_metacall(QGraphicsItemAnimation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsItemAnimation_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsItemAnimation::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsItemAnimation * ctr_qt_widgets_ffi_QGraphicsItemAnimation_QGraphicsItemAnimation(QObject * parent) {
  return new QGraphicsItemAnimation(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_dQGraphicsItemAnimation(QGraphicsItemAnimation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItemAnimation_item(QGraphicsItemAnimation const * this_ptr) {
  return this_ptr->item();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setItem(QGraphicsItemAnimation * this_ptr, QGraphicsItem * item) {
  this_ptr->setItem(item);
}


RITUAL_EXPORT QTimeLine * ctr_qt_widgets_ffi_QGraphicsItemAnimation_timeLine(QGraphicsItemAnimation const * this_ptr) {
  return this_ptr->timeLine();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setTimeLine(QGraphicsItemAnimation * this_ptr, QTimeLine * timeLine) {
  this_ptr->setTimeLine(timeLine);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItemAnimation_posAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return new QPointF(this_ptr->posAt(step));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setPosAt(QGraphicsItemAnimation * this_ptr, double step, QPointF const * pos) {
  this_ptr->setPosAt(step, *pos);
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsItemAnimation_transformAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return new QTransform(this_ptr->transformAt(step));
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItemAnimation_rotationAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return this_ptr->rotationAt(step);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setRotationAt(QGraphicsItemAnimation * this_ptr, double step, double angle) {
  this_ptr->setRotationAt(step, angle);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItemAnimation_xTranslationAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return this_ptr->xTranslationAt(step);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItemAnimation_yTranslationAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return this_ptr->yTranslationAt(step);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setTranslationAt(QGraphicsItemAnimation * this_ptr, double step, double dx, double dy) {
  this_ptr->setTranslationAt(step, dx, dy);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItemAnimation_verticalScaleAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return this_ptr->verticalScaleAt(step);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItemAnimation_horizontalScaleAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return this_ptr->horizontalScaleAt(step);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setScaleAt(QGraphicsItemAnimation * this_ptr, double step, double sx, double sy) {
  this_ptr->setScaleAt(step, sx, sy);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItemAnimation_verticalShearAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return this_ptr->verticalShearAt(step);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItemAnimation_horizontalShearAt(QGraphicsItemAnimation const * this_ptr, double step) {
  return this_ptr->horizontalShearAt(step);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setShearAt(QGraphicsItemAnimation * this_ptr, double step, double sh, double sv) {
  this_ptr->setShearAt(step, sh, sv);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_clear(QGraphicsItemAnimation * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemAnimation_setStep(QGraphicsItemAnimation * this_ptr, double x) {
  this_ptr->setStep(x);
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_QGraphicsLinearLayout_QGraphicsLinearLayout(QGraphicsLayoutItem * parent) {
  return new QGraphicsLinearLayout(parent);
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_QGraphicsLinearLayout_QGraphicsLinearLayout1(Qt::Orientation orientation, QGraphicsLayoutItem * parent) {
  return new QGraphicsLinearLayout(orientation, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_dQGraphicsLinearLayout(QGraphicsLinearLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_setOrientation(QGraphicsLinearLayout * this_ptr, Qt::Orientation orientation) {
  this_ptr->setOrientation(orientation);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QGraphicsLinearLayout_orientation(QGraphicsLinearLayout const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_addItem(QGraphicsLinearLayout * this_ptr, QGraphicsLayoutItem * item) {
  this_ptr->addItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_addStretch(QGraphicsLinearLayout * this_ptr, int stretch) {
  this_ptr->addStretch(stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_insertItem(QGraphicsLinearLayout * this_ptr, int index, QGraphicsLayoutItem * item) {
  this_ptr->insertItem(index, item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_insertStretch(QGraphicsLinearLayout * this_ptr, int index, int stretch) {
  this_ptr->insertStretch(index, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_removeItem(QGraphicsLinearLayout * this_ptr, QGraphicsLayoutItem * item) {
  this_ptr->removeItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_removeAt(QGraphicsLinearLayout * this_ptr, int index) {
  this_ptr->removeAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_setSpacing(QGraphicsLinearLayout * this_ptr, double spacing) {
  this_ptr->setSpacing(spacing);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLinearLayout_spacing(QGraphicsLinearLayout const * this_ptr) {
  return this_ptr->spacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_setItemSpacing(QGraphicsLinearLayout * this_ptr, int index, double spacing) {
  this_ptr->setItemSpacing(index, spacing);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLinearLayout_itemSpacing(QGraphicsLinearLayout const * this_ptr, int index) {
  return this_ptr->itemSpacing(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_setStretchFactor(QGraphicsLinearLayout * this_ptr, QGraphicsLayoutItem * item, int stretch) {
  this_ptr->setStretchFactor(item, stretch);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsLinearLayout_stretchFactor(QGraphicsLinearLayout const * this_ptr, QGraphicsLayoutItem * item) {
  return this_ptr->stretchFactor(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_setAlignment(QGraphicsLinearLayout * this_ptr, QGraphicsLayoutItem * item, int alignment) {
  this_ptr->setAlignment(item, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsLinearLayout_alignment(QGraphicsLinearLayout const * this_ptr, QGraphicsLayoutItem * item) {
  return int(this_ptr->alignment(item));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_setGeometry(QGraphicsLinearLayout * this_ptr, QRectF const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsLinearLayout_count(QGraphicsLinearLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_QGraphicsLinearLayout_itemAt(QGraphicsLinearLayout const * this_ptr, int index) {
  return this_ptr->itemAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_invalidate(QGraphicsLinearLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsLinearLayout_sizeHint(QGraphicsLinearLayout const * this_ptr, Qt::SizeHint which, QSizeF const * constraint) {
  return new QSizeF(this_ptr->sizeHint(which, *constraint));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_dump(QGraphicsLinearLayout const * this_ptr, int indent) {
  this_ptr->dump(indent);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsWidget_metaObject(QGraphicsWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsWidget_qt_metacast(QGraphicsWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsWidget_qt_metacall(QGraphicsWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsWidget_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsWidget::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsWidget_QGraphicsWidget(QGraphicsItem * parent, int wFlags) {
  return new QGraphicsWidget(parent, QFlags< Qt::WindowType >(wFlags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_dQGraphicsWidget(QGraphicsWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGraphicsLayout * ctr_qt_widgets_ffi_QGraphicsWidget_layout(QGraphicsWidget const * this_ptr) {
  return this_ptr->layout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setLayout(QGraphicsWidget * this_ptr, QGraphicsLayout * layout) {
  this_ptr->setLayout(layout);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_adjustSize(QGraphicsWidget * this_ptr) {
  this_ptr->adjustSize();
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_widgets_ffi_QGraphicsWidget_layoutDirection(QGraphicsWidget const * this_ptr) {
  return this_ptr->layoutDirection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setLayoutDirection(QGraphicsWidget * this_ptr, Qt::LayoutDirection direction) {
  this_ptr->setLayoutDirection(direction);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_unsetLayoutDirection(QGraphicsWidget * this_ptr) {
  this_ptr->unsetLayoutDirection();
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QGraphicsWidget_style(QGraphicsWidget const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setStyle(QGraphicsWidget * this_ptr, QStyle * style) {
  this_ptr->setStyle(style);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QGraphicsWidget_font(QGraphicsWidget const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setFont(QGraphicsWidget * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QGraphicsWidget_palette(QGraphicsWidget const * this_ptr) {
  return new QPalette(this_ptr->palette());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setPalette(QGraphicsWidget * this_ptr, QPalette const * palette) {
  this_ptr->setPalette(*palette);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsWidget_autoFillBackground(QGraphicsWidget const * this_ptr) {
  return this_ptr->autoFillBackground();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setAutoFillBackground(QGraphicsWidget * this_ptr, bool enabled) {
  this_ptr->setAutoFillBackground(enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_resize(QGraphicsWidget * this_ptr, QSizeF const * size) {
  this_ptr->resize(*size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_resize1(QGraphicsWidget * this_ptr, double w, double h) {
  this_ptr->resize(w, h);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsWidget_size(QGraphicsWidget const * this_ptr) {
  return new QSizeF(this_ptr->size());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setGeometry(QGraphicsWidget * this_ptr, QRectF const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setGeometry1(QGraphicsWidget * this_ptr, double x, double y, double w, double h) {
  this_ptr->setGeometry(x, y, w, h);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsWidget_rect(QGraphicsWidget const * this_ptr) {
  return new QRectF(this_ptr->rect());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setContentsMargins(QGraphicsWidget * this_ptr, double left, double top, double right, double bottom) {
  this_ptr->setContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setContentsMargins1(QGraphicsWidget * this_ptr, QMarginsF const * margins) {
  this_ptr->setContentsMargins(*margins);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_getContentsMargins(QGraphicsWidget const * this_ptr, double * left, double * top, double * right, double * bottom) {
  this_ptr->getContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setWindowFrameMargins(QGraphicsWidget * this_ptr, double left, double top, double right, double bottom) {
  this_ptr->setWindowFrameMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setWindowFrameMargins1(QGraphicsWidget * this_ptr, QMarginsF const * margins) {
  this_ptr->setWindowFrameMargins(*margins);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_getWindowFrameMargins(QGraphicsWidget const * this_ptr, double * left, double * top, double * right, double * bottom) {
  this_ptr->getWindowFrameMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_unsetWindowFrameMargins(QGraphicsWidget * this_ptr) {
  this_ptr->unsetWindowFrameMargins();
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsWidget_windowFrameGeometry(QGraphicsWidget const * this_ptr) {
  return new QRectF(this_ptr->windowFrameGeometry());
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsWidget_windowFrameRect(QGraphicsWidget const * this_ptr) {
  return new QRectF(this_ptr->windowFrameRect());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsWidget_windowFlags(QGraphicsWidget const * this_ptr) {
  return int(this_ptr->windowFlags());
}


RITUAL_EXPORT Qt::WindowType ctr_qt_widgets_ffi_QGraphicsWidget_windowType(QGraphicsWidget const * this_ptr) {
  return this_ptr->windowType();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setWindowFlags(QGraphicsWidget * this_ptr, int wFlags) {
  this_ptr->setWindowFlags(QFlags< Qt::WindowType >(wFlags));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsWidget_isActiveWindow(QGraphicsWidget const * this_ptr) {
  return this_ptr->isActiveWindow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setWindowTitle(QGraphicsWidget * this_ptr, QString const * title) {
  this_ptr->setWindowTitle(*title);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsWidget_windowTitle(QGraphicsWidget const * this_ptr) {
  return new QString(this_ptr->windowTitle());
}


RITUAL_EXPORT Qt::FocusPolicy ctr_qt_widgets_ffi_QGraphicsWidget_focusPolicy(QGraphicsWidget const * this_ptr) {
  return this_ptr->focusPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setFocusPolicy(QGraphicsWidget * this_ptr, Qt::FocusPolicy policy) {
  this_ptr->setFocusPolicy(policy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setTabOrder(QGraphicsWidget * first, QGraphicsWidget * second) {
  QGraphicsWidget::setTabOrder(first, second);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsWidget_focusWidget(QGraphicsWidget const * this_ptr) {
  return this_ptr->focusWidget();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsWidget_grabShortcut(QGraphicsWidget * this_ptr, QKeySequence const * sequence, Qt::ShortcutContext context) {
  return this_ptr->grabShortcut(*sequence, context);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_releaseShortcut(QGraphicsWidget * this_ptr, int id) {
  this_ptr->releaseShortcut(id);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setShortcutEnabled(QGraphicsWidget * this_ptr, int id, bool enabled) {
  this_ptr->setShortcutEnabled(id, enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setShortcutAutoRepeat(QGraphicsWidget * this_ptr, int id, bool enabled) {
  this_ptr->setShortcutAutoRepeat(id, enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_addAction(QGraphicsWidget * this_ptr, QAction * action) {
  this_ptr->addAction(action);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_addActions(QGraphicsWidget * this_ptr, QList< QAction * > const * actions) {
  this_ptr->addActions(*actions);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_insertActions(QGraphicsWidget * this_ptr, QAction * before, QList< QAction * > const * actions) {
  this_ptr->insertActions(before, *actions);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_insertAction(QGraphicsWidget * this_ptr, QAction * before, QAction * action) {
  this_ptr->insertAction(before, action);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_removeAction(QGraphicsWidget * this_ptr, QAction * action) {
  this_ptr->removeAction(action);
}


RITUAL_EXPORT QList< QAction * > * ctr_qt_widgets_ffi_QGraphicsWidget_actions(QGraphicsWidget const * this_ptr) {
  return new QList< QAction * >(this_ptr->actions());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setAttribute(QGraphicsWidget * this_ptr, Qt::WidgetAttribute attribute, bool on) {
  this_ptr->setAttribute(attribute, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsWidget_testAttribute(QGraphicsWidget const * this_ptr, Qt::WidgetAttribute attribute) {
  return this_ptr->testAttribute(attribute);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsWidget_type(QGraphicsWidget const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_paint(QGraphicsWidget * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_paintWindowFrame(QGraphicsWidget * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paintWindowFrame(painter, option, widget);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsWidget_boundingRect(QGraphicsWidget const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsWidget_shape(QGraphicsWidget const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsWidget_close(QGraphicsWidget * this_ptr) {
  return this_ptr->close();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsProxyWidget_metaObject(QGraphicsProxyWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsProxyWidget_qt_metacast(QGraphicsProxyWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsProxyWidget_qt_metacall(QGraphicsProxyWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsProxyWidget_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsProxyWidget::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_QGraphicsProxyWidget_QGraphicsProxyWidget(QGraphicsItem * parent, int wFlags) {
  return new QGraphicsProxyWidget(parent, QFlags< Qt::WindowType >(wFlags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsProxyWidget_dQGraphicsProxyWidget(QGraphicsProxyWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsProxyWidget_setWidget(QGraphicsProxyWidget * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QGraphicsProxyWidget_widget(QGraphicsProxyWidget const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsProxyWidget_subWidgetRect(QGraphicsProxyWidget const * this_ptr, QWidget const * widget) {
  return new QRectF(this_ptr->subWidgetRect(widget));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsProxyWidget_setGeometry(QGraphicsProxyWidget * this_ptr, QRectF const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsProxyWidget_paint(QGraphicsProxyWidget * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsProxyWidget_type(QGraphicsProxyWidget const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_QGraphicsProxyWidget_createProxyForChildWidget(QGraphicsProxyWidget * this_ptr, QWidget * child) {
  return this_ptr->createProxyForChildWidget(child);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsScene_metaObject(QGraphicsScene const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsScene_qt_metacast(QGraphicsScene * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsScene_qt_metacall(QGraphicsScene * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsScene_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsScene::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsScene_QGraphicsScene(QObject * parent) {
  return new QGraphicsScene(parent);
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsScene_QGraphicsScene1(QRectF const * sceneRect, QObject * parent) {
  return new QGraphicsScene(*sceneRect, parent);
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsScene_QGraphicsScene2(double x, double y, double width, double height, QObject * parent) {
  return new QGraphicsScene(x, y, width, height, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_dQGraphicsScene(QGraphicsScene * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsScene_sceneRect(QGraphicsScene const * this_ptr) {
  return new QRectF(this_ptr->sceneRect());
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsScene_width(QGraphicsScene const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsScene_height(QGraphicsScene const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setSceneRect(QGraphicsScene * this_ptr, QRectF const * rect) {
  this_ptr->setSceneRect(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setSceneRect1(QGraphicsScene * this_ptr, double x, double y, double w, double h) {
  this_ptr->setSceneRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_render(QGraphicsScene * this_ptr, QPainter * painter, QRectF const * target, QRectF const * source, Qt::AspectRatioMode aspectRatioMode) {
  this_ptr->render(painter, *target, *source, aspectRatioMode);
}


RITUAL_EXPORT QGraphicsScene::ItemIndexMethod ctr_qt_widgets_ffi_QGraphicsScene_itemIndexMethod(QGraphicsScene const * this_ptr) {
  return this_ptr->itemIndexMethod();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setItemIndexMethod(QGraphicsScene * this_ptr, QGraphicsScene::ItemIndexMethod method) {
  this_ptr->setItemIndexMethod(method);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsScene_bspTreeDepth(QGraphicsScene const * this_ptr) {
  return this_ptr->bspTreeDepth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setBspTreeDepth(QGraphicsScene * this_ptr, int depth) {
  this_ptr->setBspTreeDepth(depth);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsScene_itemsBoundingRect(QGraphicsScene const * this_ptr) {
  return new QRectF(this_ptr->itemsBoundingRect());
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items(QGraphicsScene const * this_ptr, Qt::SortOrder order) {
  return new QList< QGraphicsItem * >(this_ptr->items(order));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items1(QGraphicsScene const * this_ptr, QPointF const * pos, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform const * deviceTransform) {
  return new QList< QGraphicsItem * >(this_ptr->items(*pos, mode, order, *deviceTransform));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items2(QGraphicsScene const * this_ptr, QRectF const * rect, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform const * deviceTransform) {
  return new QList< QGraphicsItem * >(this_ptr->items(*rect, mode, order, *deviceTransform));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items3(QGraphicsScene const * this_ptr, QPolygonF const * polygon, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform const * deviceTransform) {
  return new QList< QGraphicsItem * >(this_ptr->items(*polygon, mode, order, *deviceTransform));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items4(QGraphicsScene const * this_ptr, QPainterPath const * path, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform const * deviceTransform) {
  return new QList< QGraphicsItem * >(this_ptr->items(*path, mode, order, *deviceTransform));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items5(QGraphicsScene const * this_ptr, double x, double y, double w, double h, Qt::ItemSelectionMode mode, Qt::SortOrder order, QTransform const * deviceTransform) {
  return new QList< QGraphicsItem * >(this_ptr->items(x, y, w, h, mode, order, *deviceTransform));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_collidingItems(QGraphicsScene const * this_ptr, QGraphicsItem const * item, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->collidingItems(item, mode));
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsScene_itemAt(QGraphicsScene const * this_ptr, QPointF const * pos, QTransform const * deviceTransform) {
  return this_ptr->itemAt(*pos, *deviceTransform);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsScene_itemAt1(QGraphicsScene const * this_ptr, double x, double y, QTransform const * deviceTransform) {
  return this_ptr->itemAt(x, y, *deviceTransform);
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_selectedItems(QGraphicsScene const * this_ptr) {
  return new QList< QGraphicsItem * >(this_ptr->selectedItems());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsScene_selectionArea(QGraphicsScene const * this_ptr) {
  return new QPainterPath(this_ptr->selectionArea());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setSelectionArea(QGraphicsScene * this_ptr, QPainterPath const * path, QTransform const * deviceTransform) {
  this_ptr->setSelectionArea(*path, *deviceTransform);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setSelectionArea1(QGraphicsScene * this_ptr, QPainterPath const * path, Qt::ItemSelectionOperation selectionOperation, Qt::ItemSelectionMode mode, QTransform const * deviceTransform) {
  this_ptr->setSelectionArea(*path, selectionOperation, mode, *deviceTransform);
}


RITUAL_EXPORT QGraphicsItemGroup * ctr_qt_widgets_ffi_QGraphicsScene_createItemGroup(QGraphicsScene * this_ptr, QList< QGraphicsItem * > const * items) {
  return this_ptr->createItemGroup(*items);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_destroyItemGroup(QGraphicsScene * this_ptr, QGraphicsItemGroup * group) {
  this_ptr->destroyItemGroup(group);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_addItem(QGraphicsScene * this_ptr, QGraphicsItem * item) {
  this_ptr->addItem(item);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsScene_addEllipse(QGraphicsScene * this_ptr, QRectF const * rect, QPen const * pen, QBrush const * brush) {
  return this_ptr->addEllipse(*rect, *pen, *brush);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsScene_addLine(QGraphicsScene * this_ptr, QLineF const * line, QPen const * pen) {
  return this_ptr->addLine(*line, *pen);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_QGraphicsScene_addPath(QGraphicsScene * this_ptr, QPainterPath const * path, QPen const * pen, QBrush const * brush) {
  return this_ptr->addPath(*path, *pen, *brush);
}


RITUAL_EXPORT QGraphicsPixmapItem * ctr_qt_widgets_ffi_QGraphicsScene_addPixmap(QGraphicsScene * this_ptr, QPixmap const * pixmap) {
  return this_ptr->addPixmap(*pixmap);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_QGraphicsScene_addPolygon(QGraphicsScene * this_ptr, QPolygonF const * polygon, QPen const * pen, QBrush const * brush) {
  return this_ptr->addPolygon(*polygon, *pen, *brush);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsScene_addRect(QGraphicsScene * this_ptr, QRectF const * rect, QPen const * pen, QBrush const * brush) {
  return this_ptr->addRect(*rect, *pen, *brush);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_QGraphicsScene_addText(QGraphicsScene * this_ptr, QString const * text, QFont const * font) {
  return this_ptr->addText(*text, *font);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_QGraphicsScene_addSimpleText(QGraphicsScene * this_ptr, QString const * text, QFont const * font) {
  return this_ptr->addSimpleText(*text, *font);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_QGraphicsScene_addWidget(QGraphicsScene * this_ptr, QWidget * widget, int wFlags) {
  return this_ptr->addWidget(widget, QFlags< Qt::WindowType >(wFlags));
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsScene_addEllipse1(QGraphicsScene * this_ptr, double x, double y, double w, double h, QPen const * pen, QBrush const * brush) {
  return this_ptr->addEllipse(x, y, w, h, *pen, *brush);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsScene_addLine1(QGraphicsScene * this_ptr, double x1, double y1, double x2, double y2, QPen const * pen) {
  return this_ptr->addLine(x1, y1, x2, y2, *pen);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsScene_addRect1(QGraphicsScene * this_ptr, double x, double y, double w, double h, QPen const * pen, QBrush const * brush) {
  return this_ptr->addRect(x, y, w, h, *pen, *brush);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_removeItem(QGraphicsScene * this_ptr, QGraphicsItem * item) {
  this_ptr->removeItem(item);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsScene_focusItem(QGraphicsScene const * this_ptr) {
  return this_ptr->focusItem();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setFocusItem(QGraphicsScene * this_ptr, QGraphicsItem * item, Qt::FocusReason focusReason) {
  this_ptr->setFocusItem(item, focusReason);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsScene_hasFocus(QGraphicsScene const * this_ptr) {
  return this_ptr->hasFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setFocus(QGraphicsScene * this_ptr, Qt::FocusReason focusReason) {
  this_ptr->setFocus(focusReason);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_clearFocus(QGraphicsScene * this_ptr) {
  this_ptr->clearFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setStickyFocus(QGraphicsScene * this_ptr, bool enabled) {
  this_ptr->setStickyFocus(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsScene_stickyFocus(QGraphicsScene const * this_ptr) {
  return this_ptr->stickyFocus();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsScene_mouseGrabberItem(QGraphicsScene const * this_ptr) {
  return this_ptr->mouseGrabberItem();
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QGraphicsScene_backgroundBrush(QGraphicsScene const * this_ptr) {
  return new QBrush(this_ptr->backgroundBrush());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setBackgroundBrush(QGraphicsScene * this_ptr, QBrush const * brush) {
  this_ptr->setBackgroundBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QGraphicsScene_foregroundBrush(QGraphicsScene const * this_ptr) {
  return new QBrush(this_ptr->foregroundBrush());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setForegroundBrush(QGraphicsScene * this_ptr, QBrush const * brush) {
  this_ptr->setForegroundBrush(*brush);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QGraphicsScene_inputMethodQuery(QGraphicsScene const * this_ptr, Qt::InputMethodQuery query) {
  return new QVariant(this_ptr->inputMethodQuery(query));
}


RITUAL_EXPORT QList< QGraphicsView * > * ctr_qt_widgets_ffi_QGraphicsScene_views(QGraphicsScene const * this_ptr) {
  return new QList< QGraphicsView * >(this_ptr->views());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_update(QGraphicsScene * this_ptr, double x, double y, double w, double h) {
  this_ptr->update(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_invalidate(QGraphicsScene * this_ptr, double x, double y, double w, double h, int layers) {
  this_ptr->invalidate(x, y, w, h, QFlags< QGraphicsScene::SceneLayer >(layers));
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QGraphicsScene_style(QGraphicsScene const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setStyle(QGraphicsScene * this_ptr, QStyle * style) {
  this_ptr->setStyle(style);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QGraphicsScene_font(QGraphicsScene const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setFont(QGraphicsScene * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QGraphicsScene_palette(QGraphicsScene const * this_ptr) {
  return new QPalette(this_ptr->palette());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setPalette(QGraphicsScene * this_ptr, QPalette const * palette) {
  this_ptr->setPalette(*palette);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsScene_isActive(QGraphicsScene const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsScene_activePanel(QGraphicsScene const * this_ptr) {
  return this_ptr->activePanel();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setActivePanel(QGraphicsScene * this_ptr, QGraphicsItem * item) {
  this_ptr->setActivePanel(item);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsScene_activeWindow(QGraphicsScene const * this_ptr) {
  return this_ptr->activeWindow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setActiveWindow(QGraphicsScene * this_ptr, QGraphicsWidget * widget) {
  this_ptr->setActiveWindow(widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsScene_sendEvent(QGraphicsScene * this_ptr, QGraphicsItem * item, QEvent * event) {
  return this_ptr->sendEvent(item, event);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsScene_minimumRenderSize(QGraphicsScene const * this_ptr) {
  return this_ptr->minimumRenderSize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setMinimumRenderSize(QGraphicsScene * this_ptr, double minSize) {
  this_ptr->setMinimumRenderSize(minSize);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsScene_focusOnTouch(QGraphicsScene const * this_ptr) {
  return this_ptr->focusOnTouch();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setFocusOnTouch(QGraphicsScene * this_ptr, bool enabled) {
  this_ptr->setFocusOnTouch(enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_update1(QGraphicsScene * this_ptr, QRectF const * rect) {
  this_ptr->update(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_invalidate1(QGraphicsScene * this_ptr, QRectF const * rect, int layers) {
  this_ptr->invalidate(*rect, QFlags< QGraphicsScene::SceneLayer >(layers));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_advance(QGraphicsScene * this_ptr) {
  this_ptr->advance();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_clearSelection(QGraphicsScene * this_ptr) {
  this_ptr->clearSelection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_clear(QGraphicsScene * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_QGraphicsSceneEvent_QGraphicsSceneEvent(QEvent::Type type) {
  return new QGraphicsSceneEvent(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneEvent_dQGraphicsSceneEvent(QGraphicsSceneEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QGraphicsSceneEvent_widget(QGraphicsSceneEvent const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneEvent_setWidget(QGraphicsSceneEvent * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT unsigned long long ctr_qt_widgets_ffi_QGraphicsSceneEvent_timestamp(QGraphicsSceneEvent const * this_ptr) {
  return this_ptr->timestamp();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneEvent_setTimestamp(QGraphicsSceneEvent * this_ptr, unsigned long long ts) {
  this_ptr->setTimestamp(ts);
}


RITUAL_EXPORT QGraphicsSceneMouseEvent * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_QGraphicsSceneMouseEvent(QEvent::Type type) {
  return new QGraphicsSceneMouseEvent(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_dQGraphicsSceneMouseEvent(QGraphicsSceneMouseEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_pos(QGraphicsSceneMouseEvent const * this_ptr) {
  return new QPointF(this_ptr->pos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setPos(QGraphicsSceneMouseEvent * this_ptr, QPointF const * pos) {
  this_ptr->setPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_scenePos(QGraphicsSceneMouseEvent const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setScenePos(QGraphicsSceneMouseEvent * this_ptr, QPointF const * pos) {
  this_ptr->setScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_screenPos(QGraphicsSceneMouseEvent const * this_ptr) {
  return new QPoint(this_ptr->screenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setScreenPos(QGraphicsSceneMouseEvent * this_ptr, QPoint const * pos) {
  this_ptr->setScreenPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_buttonDownPos(QGraphicsSceneMouseEvent const * this_ptr, Qt::MouseButton button) {
  return new QPointF(this_ptr->buttonDownPos(button));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setButtonDownPos(QGraphicsSceneMouseEvent * this_ptr, Qt::MouseButton button, QPointF const * pos) {
  this_ptr->setButtonDownPos(button, *pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_buttonDownScenePos(QGraphicsSceneMouseEvent const * this_ptr, Qt::MouseButton button) {
  return new QPointF(this_ptr->buttonDownScenePos(button));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setButtonDownScenePos(QGraphicsSceneMouseEvent * this_ptr, Qt::MouseButton button, QPointF const * pos) {
  this_ptr->setButtonDownScenePos(button, *pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_buttonDownScreenPos(QGraphicsSceneMouseEvent const * this_ptr, Qt::MouseButton button) {
  return new QPoint(this_ptr->buttonDownScreenPos(button));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setButtonDownScreenPos(QGraphicsSceneMouseEvent * this_ptr, Qt::MouseButton button, QPoint const * pos) {
  this_ptr->setButtonDownScreenPos(button, *pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_lastPos(QGraphicsSceneMouseEvent const * this_ptr) {
  return new QPointF(this_ptr->lastPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setLastPos(QGraphicsSceneMouseEvent * this_ptr, QPointF const * pos) {
  this_ptr->setLastPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_lastScenePos(QGraphicsSceneMouseEvent const * this_ptr) {
  return new QPointF(this_ptr->lastScenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setLastScenePos(QGraphicsSceneMouseEvent * this_ptr, QPointF const * pos) {
  this_ptr->setLastScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_lastScreenPos(QGraphicsSceneMouseEvent const * this_ptr) {
  return new QPoint(this_ptr->lastScreenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setLastScreenPos(QGraphicsSceneMouseEvent * this_ptr, QPoint const * pos) {
  this_ptr->setLastScreenPos(*pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_buttons(QGraphicsSceneMouseEvent const * this_ptr) {
  return int(this_ptr->buttons());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setButtons(QGraphicsSceneMouseEvent * this_ptr, int buttons) {
  this_ptr->setButtons(QFlags< Qt::MouseButton >(buttons));
}


RITUAL_EXPORT Qt::MouseButton ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_button(QGraphicsSceneMouseEvent const * this_ptr) {
  return this_ptr->button();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setButton(QGraphicsSceneMouseEvent * this_ptr, Qt::MouseButton button) {
  this_ptr->setButton(button);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_modifiers(QGraphicsSceneMouseEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setModifiers(QGraphicsSceneMouseEvent * this_ptr, int modifiers) {
  this_ptr->setModifiers(QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT Qt::MouseEventSource ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_source(QGraphicsSceneMouseEvent const * this_ptr) {
  return this_ptr->source();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setSource(QGraphicsSceneMouseEvent * this_ptr, Qt::MouseEventSource source) {
  this_ptr->setSource(source);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_flags(QGraphicsSceneMouseEvent const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMouseEvent_setFlags(QGraphicsSceneMouseEvent * this_ptr, int arg1) {
  this_ptr->setFlags(QFlags< Qt::MouseEventFlag >(arg1));
}


RITUAL_EXPORT QGraphicsSceneWheelEvent * ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent(QEvent::Type type) {
  return new QGraphicsSceneWheelEvent(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_dQGraphicsSceneWheelEvent(QGraphicsSceneWheelEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_pos(QGraphicsSceneWheelEvent const * this_ptr) {
  return new QPointF(this_ptr->pos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setPos(QGraphicsSceneWheelEvent * this_ptr, QPointF const * pos) {
  this_ptr->setPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_scenePos(QGraphicsSceneWheelEvent const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setScenePos(QGraphicsSceneWheelEvent * this_ptr, QPointF const * pos) {
  this_ptr->setScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_screenPos(QGraphicsSceneWheelEvent const * this_ptr) {
  return new QPoint(this_ptr->screenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setScreenPos(QGraphicsSceneWheelEvent * this_ptr, QPoint const * pos) {
  this_ptr->setScreenPos(*pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_buttons(QGraphicsSceneWheelEvent const * this_ptr) {
  return int(this_ptr->buttons());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setButtons(QGraphicsSceneWheelEvent * this_ptr, int buttons) {
  this_ptr->setButtons(QFlags< Qt::MouseButton >(buttons));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_modifiers(QGraphicsSceneWheelEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setModifiers(QGraphicsSceneWheelEvent * this_ptr, int modifiers) {
  this_ptr->setModifiers(QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_delta(QGraphicsSceneWheelEvent const * this_ptr) {
  return this_ptr->delta();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setDelta(QGraphicsSceneWheelEvent * this_ptr, int delta) {
  this_ptr->setDelta(delta);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_orientation(QGraphicsSceneWheelEvent const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setOrientation(QGraphicsSceneWheelEvent * this_ptr, Qt::Orientation orientation) {
  this_ptr->setOrientation(orientation);
}


RITUAL_EXPORT Qt::ScrollPhase ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_phase(QGraphicsSceneWheelEvent const * this_ptr) {
  return this_ptr->phase();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setPhase(QGraphicsSceneWheelEvent * this_ptr, Qt::ScrollPhase scrollPhase) {
  this_ptr->setPhase(scrollPhase);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_pixelDelta(QGraphicsSceneWheelEvent const * this_ptr) {
  return new QPoint(this_ptr->pixelDelta());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setPixelDelta(QGraphicsSceneWheelEvent * this_ptr, QPoint const * delta) {
  this_ptr->setPixelDelta(*delta);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_isInverted(QGraphicsSceneWheelEvent const * this_ptr) {
  return this_ptr->isInverted();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneWheelEvent_setInverted(QGraphicsSceneWheelEvent * this_ptr, bool inverted) {
  this_ptr->setInverted(inverted);
}


RITUAL_EXPORT QGraphicsSceneContextMenuEvent * ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_QGraphicsSceneContextMenuEvent(QEvent::Type type) {
  return new QGraphicsSceneContextMenuEvent(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_dQGraphicsSceneContextMenuEvent(QGraphicsSceneContextMenuEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_pos(QGraphicsSceneContextMenuEvent const * this_ptr) {
  return new QPointF(this_ptr->pos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_setPos(QGraphicsSceneContextMenuEvent * this_ptr, QPointF const * pos) {
  this_ptr->setPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_scenePos(QGraphicsSceneContextMenuEvent const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_setScenePos(QGraphicsSceneContextMenuEvent * this_ptr, QPointF const * pos) {
  this_ptr->setScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_screenPos(QGraphicsSceneContextMenuEvent const * this_ptr) {
  return new QPoint(this_ptr->screenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_setScreenPos(QGraphicsSceneContextMenuEvent * this_ptr, QPoint const * pos) {
  this_ptr->setScreenPos(*pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_modifiers(QGraphicsSceneContextMenuEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_setModifiers(QGraphicsSceneContextMenuEvent * this_ptr, int modifiers) {
  this_ptr->setModifiers(QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT QGraphicsSceneContextMenuEvent::Reason ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_reason(QGraphicsSceneContextMenuEvent const * this_ptr) {
  return this_ptr->reason();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneContextMenuEvent_setReason(QGraphicsSceneContextMenuEvent * this_ptr, QGraphicsSceneContextMenuEvent::Reason reason) {
  this_ptr->setReason(reason);
}


RITUAL_EXPORT QGraphicsSceneHoverEvent * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_QGraphicsSceneHoverEvent(QEvent::Type type) {
  return new QGraphicsSceneHoverEvent(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_dQGraphicsSceneHoverEvent(QGraphicsSceneHoverEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_pos(QGraphicsSceneHoverEvent const * this_ptr) {
  return new QPointF(this_ptr->pos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_setPos(QGraphicsSceneHoverEvent * this_ptr, QPointF const * pos) {
  this_ptr->setPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_scenePos(QGraphicsSceneHoverEvent const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_setScenePos(QGraphicsSceneHoverEvent * this_ptr, QPointF const * pos) {
  this_ptr->setScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_screenPos(QGraphicsSceneHoverEvent const * this_ptr) {
  return new QPoint(this_ptr->screenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_setScreenPos(QGraphicsSceneHoverEvent * this_ptr, QPoint const * pos) {
  this_ptr->setScreenPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_lastPos(QGraphicsSceneHoverEvent const * this_ptr) {
  return new QPointF(this_ptr->lastPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_setLastPos(QGraphicsSceneHoverEvent * this_ptr, QPointF const * pos) {
  this_ptr->setLastPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_lastScenePos(QGraphicsSceneHoverEvent const * this_ptr) {
  return new QPointF(this_ptr->lastScenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_setLastScenePos(QGraphicsSceneHoverEvent * this_ptr, QPointF const * pos) {
  this_ptr->setLastScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_lastScreenPos(QGraphicsSceneHoverEvent const * this_ptr) {
  return new QPoint(this_ptr->lastScreenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_setLastScreenPos(QGraphicsSceneHoverEvent * this_ptr, QPoint const * pos) {
  this_ptr->setLastScreenPos(*pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_modifiers(QGraphicsSceneHoverEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHoverEvent_setModifiers(QGraphicsSceneHoverEvent * this_ptr, int modifiers) {
  this_ptr->setModifiers(QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT QGraphicsSceneHelpEvent * ctr_qt_widgets_ffi_QGraphicsSceneHelpEvent_QGraphicsSceneHelpEvent(QEvent::Type type) {
  return new QGraphicsSceneHelpEvent(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHelpEvent_dQGraphicsSceneHelpEvent(QGraphicsSceneHelpEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneHelpEvent_scenePos(QGraphicsSceneHelpEvent const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHelpEvent_setScenePos(QGraphicsSceneHelpEvent * this_ptr, QPointF const * pos) {
  this_ptr->setScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneHelpEvent_screenPos(QGraphicsSceneHelpEvent const * this_ptr) {
  return new QPoint(this_ptr->screenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneHelpEvent_setScreenPos(QGraphicsSceneHelpEvent * this_ptr, QPoint const * pos) {
  this_ptr->setScreenPos(*pos);
}


RITUAL_EXPORT QGraphicsSceneDragDropEvent * ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_QGraphicsSceneDragDropEvent(QEvent::Type type) {
  return new QGraphicsSceneDragDropEvent(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_dQGraphicsSceneDragDropEvent(QGraphicsSceneDragDropEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_pos(QGraphicsSceneDragDropEvent const * this_ptr) {
  return new QPointF(this_ptr->pos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setPos(QGraphicsSceneDragDropEvent * this_ptr, QPointF const * pos) {
  this_ptr->setPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_scenePos(QGraphicsSceneDragDropEvent const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setScenePos(QGraphicsSceneDragDropEvent * this_ptr, QPointF const * pos) {
  this_ptr->setScenePos(*pos);
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_screenPos(QGraphicsSceneDragDropEvent const * this_ptr) {
  return new QPoint(this_ptr->screenPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setScreenPos(QGraphicsSceneDragDropEvent * this_ptr, QPoint const * pos) {
  this_ptr->setScreenPos(*pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_buttons(QGraphicsSceneDragDropEvent const * this_ptr) {
  return int(this_ptr->buttons());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setButtons(QGraphicsSceneDragDropEvent * this_ptr, int buttons) {
  this_ptr->setButtons(QFlags< Qt::MouseButton >(buttons));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_modifiers(QGraphicsSceneDragDropEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setModifiers(QGraphicsSceneDragDropEvent * this_ptr, int modifiers) {
  this_ptr->setModifiers(QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_possibleActions(QGraphicsSceneDragDropEvent const * this_ptr) {
  return int(this_ptr->possibleActions());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setPossibleActions(QGraphicsSceneDragDropEvent * this_ptr, int actions) {
  this_ptr->setPossibleActions(QFlags< Qt::DropAction >(actions));
}


RITUAL_EXPORT Qt::DropAction ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_proposedAction(QGraphicsSceneDragDropEvent const * this_ptr) {
  return this_ptr->proposedAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setProposedAction(QGraphicsSceneDragDropEvent * this_ptr, Qt::DropAction action) {
  this_ptr->setProposedAction(action);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_acceptProposedAction(QGraphicsSceneDragDropEvent * this_ptr) {
  this_ptr->acceptProposedAction();
}


RITUAL_EXPORT Qt::DropAction ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_dropAction(QGraphicsSceneDragDropEvent const * this_ptr) {
  return this_ptr->dropAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setDropAction(QGraphicsSceneDragDropEvent * this_ptr, Qt::DropAction action) {
  this_ptr->setDropAction(action);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_source(QGraphicsSceneDragDropEvent const * this_ptr) {
  return this_ptr->source();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setSource(QGraphicsSceneDragDropEvent * this_ptr, QWidget * source) {
  this_ptr->setSource(source);
}


RITUAL_EXPORT QMimeData const * ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_mimeData(QGraphicsSceneDragDropEvent const * this_ptr) {
  return this_ptr->mimeData();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneDragDropEvent_setMimeData(QGraphicsSceneDragDropEvent * this_ptr, QMimeData const * data) {
  this_ptr->setMimeData(data);
}


RITUAL_EXPORT QGraphicsSceneResizeEvent * ctr_qt_widgets_ffi_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent() {
  return new QGraphicsSceneResizeEvent();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneResizeEvent_dQGraphicsSceneResizeEvent(QGraphicsSceneResizeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsSceneResizeEvent_oldSize(QGraphicsSceneResizeEvent const * this_ptr) {
  return new QSizeF(this_ptr->oldSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneResizeEvent_setOldSize(QGraphicsSceneResizeEvent * this_ptr, QSizeF const * size) {
  this_ptr->setOldSize(*size);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsSceneResizeEvent_newSize(QGraphicsSceneResizeEvent const * this_ptr) {
  return new QSizeF(this_ptr->newSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneResizeEvent_setNewSize(QGraphicsSceneResizeEvent * this_ptr, QSizeF const * size) {
  this_ptr->setNewSize(*size);
}


RITUAL_EXPORT QGraphicsSceneMoveEvent * ctr_qt_widgets_ffi_QGraphicsSceneMoveEvent_QGraphicsSceneMoveEvent() {
  return new QGraphicsSceneMoveEvent();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMoveEvent_dQGraphicsSceneMoveEvent(QGraphicsSceneMoveEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMoveEvent_oldPos(QGraphicsSceneMoveEvent const * this_ptr) {
  return new QPointF(this_ptr->oldPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMoveEvent_setOldPos(QGraphicsSceneMoveEvent * this_ptr, QPointF const * pos) {
  this_ptr->setOldPos(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsSceneMoveEvent_newPos(QGraphicsSceneMoveEvent const * this_ptr) {
  return new QPointF(this_ptr->newPos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSceneMoveEvent_setNewPos(QGraphicsSceneMoveEvent * this_ptr, QPointF const * pos) {
  this_ptr->setNewPos(*pos);
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__12(QDebug const * arg1, QGraphicsSceneEvent const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsTransform_metaObject(QGraphicsTransform const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsTransform_qt_metacast(QGraphicsTransform * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsTransform_qt_metacall(QGraphicsTransform * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsTransform_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsTransform::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTransform_dQGraphicsTransform(QGraphicsTransform * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTransform_applyTo(QGraphicsTransform const * this_ptr, QMatrix4x4 * matrix) {
  this_ptr->applyTo(matrix);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsScale_metaObject(QGraphicsScale const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsScale_qt_metacast(QGraphicsScale * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsScale_qt_metacall(QGraphicsScale * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsScale_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsScale::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsScale * ctr_qt_widgets_ffi_QGraphicsScale_QGraphicsScale(QObject * parent) {
  return new QGraphicsScale(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScale_dQGraphicsScale(QGraphicsScale * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVector3D * ctr_qt_widgets_ffi_QGraphicsScale_origin(QGraphicsScale const * this_ptr) {
  return new QVector3D(this_ptr->origin());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScale_setOrigin(QGraphicsScale * this_ptr, QVector3D const * point) {
  this_ptr->setOrigin(*point);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsScale_xScale(QGraphicsScale const * this_ptr) {
  return this_ptr->xScale();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScale_setXScale(QGraphicsScale * this_ptr, double arg1) {
  this_ptr->setXScale(arg1);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsScale_yScale(QGraphicsScale const * this_ptr) {
  return this_ptr->yScale();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScale_setYScale(QGraphicsScale * this_ptr, double arg1) {
  this_ptr->setYScale(arg1);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsScale_zScale(QGraphicsScale const * this_ptr) {
  return this_ptr->zScale();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScale_setZScale(QGraphicsScale * this_ptr, double arg1) {
  this_ptr->setZScale(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScale_applyTo(QGraphicsScale const * this_ptr, QMatrix4x4 * matrix) {
  this_ptr->applyTo(matrix);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsRotation_metaObject(QGraphicsRotation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsRotation_qt_metacast(QGraphicsRotation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsRotation_qt_metacall(QGraphicsRotation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsRotation_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsRotation::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsRotation * ctr_qt_widgets_ffi_QGraphicsRotation_QGraphicsRotation(QObject * parent) {
  return new QGraphicsRotation(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRotation_dQGraphicsRotation(QGraphicsRotation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVector3D * ctr_qt_widgets_ffi_QGraphicsRotation_origin(QGraphicsRotation const * this_ptr) {
  return new QVector3D(this_ptr->origin());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRotation_setOrigin(QGraphicsRotation * this_ptr, QVector3D const * point) {
  this_ptr->setOrigin(*point);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsRotation_angle(QGraphicsRotation const * this_ptr) {
  return this_ptr->angle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRotation_setAngle(QGraphicsRotation * this_ptr, double arg1) {
  this_ptr->setAngle(arg1);
}


RITUAL_EXPORT QVector3D * ctr_qt_widgets_ffi_QGraphicsRotation_axis(QGraphicsRotation const * this_ptr) {
  return new QVector3D(this_ptr->axis());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRotation_setAxis(QGraphicsRotation * this_ptr, QVector3D const * axis) {
  this_ptr->setAxis(*axis);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRotation_setAxis1(QGraphicsRotation * this_ptr, Qt::Axis axis) {
  this_ptr->setAxis(axis);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRotation_applyTo(QGraphicsRotation const * this_ptr, QMatrix4x4 * matrix) {
  this_ptr->applyTo(matrix);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QScrollArea_metaObject(QScrollArea const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QScrollArea_qt_metacast(QScrollArea * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QScrollArea_qt_metacall(QScrollArea * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QScrollArea_tr(char const * s, char const * c, int n) {
  return new QString(QScrollArea::tr(s, c, n));
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_QScrollArea_QScrollArea(QWidget * parent) {
  return new QScrollArea(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_dQScrollArea(QScrollArea * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QScrollArea_widget(QScrollArea const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_setWidget(QScrollArea * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QScrollArea_takeWidget(QScrollArea * this_ptr) {
  return this_ptr->takeWidget();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QScrollArea_widgetResizable(QScrollArea const * this_ptr) {
  return this_ptr->widgetResizable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_setWidgetResizable(QScrollArea * this_ptr, bool resizable) {
  this_ptr->setWidgetResizable(resizable);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QScrollArea_sizeHint(QScrollArea const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QScrollArea_focusNextPrevChild(QScrollArea * this_ptr, bool next) {
  return this_ptr->focusNextPrevChild(next);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QScrollArea_alignment(QScrollArea const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_setAlignment(QScrollArea * this_ptr, int arg1) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(arg1));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_ensureVisible(QScrollArea * this_ptr, int x, int y, int xmargin, int ymargin) {
  this_ptr->ensureVisible(x, y, xmargin, ymargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_ensureWidgetVisible(QScrollArea * this_ptr, QWidget * childWidget, int xmargin, int ymargin) {
  this_ptr->ensureWidgetVisible(childWidget, xmargin, ymargin);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsView_metaObject(QGraphicsView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsView_qt_metacast(QGraphicsView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsView_qt_metacall(QGraphicsView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsView_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsView::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_QGraphicsView_QGraphicsView(QWidget * parent) {
  return new QGraphicsView(parent);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_QGraphicsView_QGraphicsView1(QGraphicsScene * scene, QWidget * parent) {
  return new QGraphicsView(scene, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_dQGraphicsView(QGraphicsView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QGraphicsView_sizeHint(QGraphicsView const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsView_renderHints(QGraphicsView const * this_ptr) {
  return int(this_ptr->renderHints());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setRenderHint(QGraphicsView * this_ptr, QPainter::RenderHint hint, bool enabled) {
  this_ptr->setRenderHint(hint, enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setRenderHints(QGraphicsView * this_ptr, int hints) {
  this_ptr->setRenderHints(QFlags< QPainter::RenderHint >(hints));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsView_alignment(QGraphicsView const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setAlignment(QGraphicsView * this_ptr, int alignment) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT QGraphicsView::ViewportAnchor ctr_qt_widgets_ffi_QGraphicsView_transformationAnchor(QGraphicsView const * this_ptr) {
  return this_ptr->transformationAnchor();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setTransformationAnchor(QGraphicsView * this_ptr, QGraphicsView::ViewportAnchor anchor) {
  this_ptr->setTransformationAnchor(anchor);
}


RITUAL_EXPORT QGraphicsView::ViewportAnchor ctr_qt_widgets_ffi_QGraphicsView_resizeAnchor(QGraphicsView const * this_ptr) {
  return this_ptr->resizeAnchor();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setResizeAnchor(QGraphicsView * this_ptr, QGraphicsView::ViewportAnchor anchor) {
  this_ptr->setResizeAnchor(anchor);
}


RITUAL_EXPORT QGraphicsView::ViewportUpdateMode ctr_qt_widgets_ffi_QGraphicsView_viewportUpdateMode(QGraphicsView const * this_ptr) {
  return this_ptr->viewportUpdateMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setViewportUpdateMode(QGraphicsView * this_ptr, QGraphicsView::ViewportUpdateMode mode) {
  this_ptr->setViewportUpdateMode(mode);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsView_optimizationFlags(QGraphicsView const * this_ptr) {
  return int(this_ptr->optimizationFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setOptimizationFlag(QGraphicsView * this_ptr, QGraphicsView::OptimizationFlag flag, bool enabled) {
  this_ptr->setOptimizationFlag(flag, enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setOptimizationFlags(QGraphicsView * this_ptr, int flags) {
  this_ptr->setOptimizationFlags(QFlags< QGraphicsView::OptimizationFlag >(flags));
}


RITUAL_EXPORT QGraphicsView::DragMode ctr_qt_widgets_ffi_QGraphicsView_dragMode(QGraphicsView const * this_ptr) {
  return this_ptr->dragMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setDragMode(QGraphicsView * this_ptr, QGraphicsView::DragMode mode) {
  this_ptr->setDragMode(mode);
}


RITUAL_EXPORT Qt::ItemSelectionMode ctr_qt_widgets_ffi_QGraphicsView_rubberBandSelectionMode(QGraphicsView const * this_ptr) {
  return this_ptr->rubberBandSelectionMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setRubberBandSelectionMode(QGraphicsView * this_ptr, Qt::ItemSelectionMode mode) {
  this_ptr->setRubberBandSelectionMode(mode);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QGraphicsView_rubberBandRect(QGraphicsView const * this_ptr) {
  return new QRect(this_ptr->rubberBandRect());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsView_cacheMode(QGraphicsView const * this_ptr) {
  return int(this_ptr->cacheMode());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setCacheMode(QGraphicsView * this_ptr, int mode) {
  this_ptr->setCacheMode(QFlags< QGraphicsView::CacheModeFlag >(mode));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_resetCachedContent(QGraphicsView * this_ptr) {
  this_ptr->resetCachedContent();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsView_isInteractive(QGraphicsView const * this_ptr) {
  return this_ptr->isInteractive();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setInteractive(QGraphicsView * this_ptr, bool allowed) {
  this_ptr->setInteractive(allowed);
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsView_scene(QGraphicsView const * this_ptr) {
  return this_ptr->scene();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setScene(QGraphicsView * this_ptr, QGraphicsScene * scene) {
  this_ptr->setScene(scene);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsView_sceneRect(QGraphicsView const * this_ptr) {
  return new QRectF(this_ptr->sceneRect());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setSceneRect(QGraphicsView * this_ptr, QRectF const * rect) {
  this_ptr->setSceneRect(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setSceneRect1(QGraphicsView * this_ptr, double x, double y, double w, double h) {
  this_ptr->setSceneRect(x, y, w, h);
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsView_transform(QGraphicsView const * this_ptr) {
  return new QTransform(this_ptr->transform());
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsView_viewportTransform(QGraphicsView const * this_ptr) {
  return new QTransform(this_ptr->viewportTransform());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsView_isTransformed(QGraphicsView const * this_ptr) {
  return this_ptr->isTransformed();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setTransform(QGraphicsView * this_ptr, QTransform const * matrix, bool combine) {
  this_ptr->setTransform(*matrix, combine);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_resetTransform(QGraphicsView * this_ptr) {
  this_ptr->resetTransform();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_rotate(QGraphicsView * this_ptr, double angle) {
  this_ptr->rotate(angle);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_scale(QGraphicsView * this_ptr, double sx, double sy) {
  this_ptr->scale(sx, sy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_shear(QGraphicsView * this_ptr, double sh, double sv) {
  this_ptr->shear(sh, sv);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_translate(QGraphicsView * this_ptr, double dx, double dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_centerOn(QGraphicsView * this_ptr, QPointF const * pos) {
  this_ptr->centerOn(*pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_centerOn1(QGraphicsView * this_ptr, double x, double y) {
  this_ptr->centerOn(x, y);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_centerOn2(QGraphicsView * this_ptr, QGraphicsItem const * item) {
  this_ptr->centerOn(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible(QGraphicsView * this_ptr, QRectF const * rect, int xmargin, int ymargin) {
  this_ptr->ensureVisible(*rect, xmargin, ymargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible1(QGraphicsView * this_ptr, double x, double y, double w, double h, int xmargin, int ymargin) {
  this_ptr->ensureVisible(x, y, w, h, xmargin, ymargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible2(QGraphicsView * this_ptr, QGraphicsItem const * item, int xmargin, int ymargin) {
  this_ptr->ensureVisible(item, xmargin, ymargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_fitInView(QGraphicsView * this_ptr, QRectF const * rect, Qt::AspectRatioMode aspectRadioMode) {
  this_ptr->fitInView(*rect, aspectRadioMode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_fitInView1(QGraphicsView * this_ptr, double x, double y, double w, double h, Qt::AspectRatioMode aspectRadioMode) {
  this_ptr->fitInView(x, y, w, h, aspectRadioMode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_fitInView2(QGraphicsView * this_ptr, QGraphicsItem const * item, Qt::AspectRatioMode aspectRadioMode) {
  this_ptr->fitInView(item, aspectRadioMode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_render(QGraphicsView * this_ptr, QPainter * painter, QRectF const * target, QRect const * source, Qt::AspectRatioMode aspectRatioMode) {
  this_ptr->render(painter, *target, *source, aspectRatioMode);
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items(QGraphicsView const * this_ptr) {
  return new QList< QGraphicsItem * >(this_ptr->items());
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items1(QGraphicsView const * this_ptr, QPoint const * pos) {
  return new QList< QGraphicsItem * >(this_ptr->items(*pos));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items2(QGraphicsView const * this_ptr, int x, int y) {
  return new QList< QGraphicsItem * >(this_ptr->items(x, y));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items3(QGraphicsView const * this_ptr, QRect const * rect, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(*rect, mode));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items4(QGraphicsView const * this_ptr, int x, int y, int w, int h, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(x, y, w, h, mode));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items5(QGraphicsView const * this_ptr, QPolygon const * polygon, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(*polygon, mode));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items6(QGraphicsView const * this_ptr, QPainterPath const * path, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(*path, mode));
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsView_itemAt(QGraphicsView const * this_ptr, QPoint const * pos) {
  return this_ptr->itemAt(*pos);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsView_itemAt1(QGraphicsView const * this_ptr, int x, int y) {
  return this_ptr->itemAt(x, y);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsView_mapToScene(QGraphicsView const * this_ptr, QPoint const * point) {
  return new QPointF(this_ptr->mapToScene(*point));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsView_mapToScene1(QGraphicsView const * this_ptr, QRect const * rect) {
  return new QPolygonF(this_ptr->mapToScene(*rect));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsView_mapToScene2(QGraphicsView const * this_ptr, QPolygon const * polygon) {
  return new QPolygonF(this_ptr->mapToScene(*polygon));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsView_mapToScene3(QGraphicsView const * this_ptr, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapToScene(*path));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsView_mapFromScene(QGraphicsView const * this_ptr, QPointF const * point) {
  return new QPoint(this_ptr->mapFromScene(*point));
}


RITUAL_EXPORT QPolygon * ctr_qt_widgets_ffi_QGraphicsView_mapFromScene1(QGraphicsView const * this_ptr, QRectF const * rect) {
  return new QPolygon(this_ptr->mapFromScene(*rect));
}


RITUAL_EXPORT QPolygon * ctr_qt_widgets_ffi_QGraphicsView_mapFromScene2(QGraphicsView const * this_ptr, QPolygonF const * polygon) {
  return new QPolygon(this_ptr->mapFromScene(*polygon));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsView_mapFromScene3(QGraphicsView const * this_ptr, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapFromScene(*path));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsView_mapToScene4(QGraphicsView const * this_ptr, int x, int y) {
  return new QPointF(this_ptr->mapToScene(x, y));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsView_mapToScene5(QGraphicsView const * this_ptr, int x, int y, int w, int h) {
  return new QPolygonF(this_ptr->mapToScene(x, y, w, h));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QGraphicsView_mapFromScene4(QGraphicsView const * this_ptr, double x, double y) {
  return new QPoint(this_ptr->mapFromScene(x, y));
}


RITUAL_EXPORT QPolygon * ctr_qt_widgets_ffi_QGraphicsView_mapFromScene5(QGraphicsView const * this_ptr, double x, double y, double w, double h) {
  return new QPolygon(this_ptr->mapFromScene(x, y, w, h));
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QGraphicsView_inputMethodQuery(QGraphicsView const * this_ptr, Qt::InputMethodQuery query) {
  return new QVariant(this_ptr->inputMethodQuery(query));
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QGraphicsView_backgroundBrush(QGraphicsView const * this_ptr) {
  return new QBrush(this_ptr->backgroundBrush());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setBackgroundBrush(QGraphicsView * this_ptr, QBrush const * brush) {
  this_ptr->setBackgroundBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QGraphicsView_foregroundBrush(QGraphicsView const * this_ptr) {
  return new QBrush(this_ptr->foregroundBrush());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setForegroundBrush(QGraphicsView * this_ptr, QBrush const * brush) {
  this_ptr->setForegroundBrush(*brush);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_updateScene(QGraphicsView * this_ptr, QList< QRectF > const * rects) {
  this_ptr->updateScene(*rects);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_invalidateScene(QGraphicsView * this_ptr, QRectF const * rect, int layers) {
  this_ptr->invalidateScene(*rect, QFlags< QGraphicsScene::SceneLayer >(layers));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_updateSceneRect(QGraphicsView * this_ptr, QRectF const * rect) {
  this_ptr->updateSceneRect(*rect);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGroupBox_metaObject(QGroupBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGroupBox_qt_metacast(QGroupBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGroupBox_qt_metacall(QGroupBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGroupBox_tr(char const * s, char const * c, int n) {
  return new QString(QGroupBox::tr(s, c, n));
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_QGroupBox_QGroupBox(QWidget * parent) {
  return new QGroupBox(parent);
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_QGroupBox_QGroupBox1(QString const * title, QWidget * parent) {
  return new QGroupBox(*title, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGroupBox_dQGroupBox(QGroupBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGroupBox_title(QGroupBox const * this_ptr) {
  return new QString(this_ptr->title());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGroupBox_setTitle(QGroupBox * this_ptr, QString const * title) {
  this_ptr->setTitle(*title);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGroupBox_alignment(QGroupBox const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGroupBox_setAlignment(QGroupBox * this_ptr, int alignment) {
  this_ptr->setAlignment(alignment);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QGroupBox_minimumSizeHint(QGroupBox const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGroupBox_isFlat(QGroupBox const * this_ptr) {
  return this_ptr->isFlat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGroupBox_setFlat(QGroupBox * this_ptr, bool flat) {
  this_ptr->setFlat(flat);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGroupBox_isCheckable(QGroupBox const * this_ptr) {
  return this_ptr->isCheckable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGroupBox_setCheckable(QGroupBox * this_ptr, bool checkable) {
  this_ptr->setCheckable(checkable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGroupBox_isChecked(QGroupBox const * this_ptr) {
  return this_ptr->isChecked();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGroupBox_setChecked(QGroupBox * this_ptr, bool checked) {
  this_ptr->setChecked(checked);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QHeaderView_metaObject(QHeaderView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QHeaderView_qt_metacast(QHeaderView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_qt_metacall(QHeaderView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QHeaderView_tr(char const * s, char const * c, int n) {
  return new QString(QHeaderView::tr(s, c, n));
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_QHeaderView_QHeaderView(Qt::Orientation orientation, QWidget * parent) {
  return new QHeaderView(orientation, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_dQHeaderView(QHeaderView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setModel(QHeaderView * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QHeaderView_orientation(QHeaderView const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_offset(QHeaderView const * this_ptr) {
  return this_ptr->offset();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_length(QHeaderView const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QHeaderView_sizeHint(QHeaderView const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setVisible(QHeaderView * this_ptr, bool v) {
  this_ptr->setVisible(v);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_sectionSizeHint(QHeaderView const * this_ptr, int logicalIndex) {
  return this_ptr->sectionSizeHint(logicalIndex);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_visualIndexAt(QHeaderView const * this_ptr, int position) {
  return this_ptr->visualIndexAt(position);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_logicalIndexAt(QHeaderView const * this_ptr, int position) {
  return this_ptr->logicalIndexAt(position);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_logicalIndexAt1(QHeaderView const * this_ptr, int x, int y) {
  return this_ptr->logicalIndexAt(x, y);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_logicalIndexAt2(QHeaderView const * this_ptr, QPoint const * pos) {
  return this_ptr->logicalIndexAt(*pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_sectionSize(QHeaderView const * this_ptr, int logicalIndex) {
  return this_ptr->sectionSize(logicalIndex);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_sectionPosition(QHeaderView const * this_ptr, int logicalIndex) {
  return this_ptr->sectionPosition(logicalIndex);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_sectionViewportPosition(QHeaderView const * this_ptr, int logicalIndex) {
  return this_ptr->sectionViewportPosition(logicalIndex);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_moveSection(QHeaderView * this_ptr, int from, int to) {
  this_ptr->moveSection(from, to);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_swapSections(QHeaderView * this_ptr, int first, int second) {
  this_ptr->swapSections(first, second);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_resizeSection(QHeaderView * this_ptr, int logicalIndex, int size) {
  this_ptr->resizeSection(logicalIndex, size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_resizeSections(QHeaderView * this_ptr, QHeaderView::ResizeMode mode) {
  this_ptr->resizeSections(mode);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_isSectionHidden(QHeaderView const * this_ptr, int logicalIndex) {
  return this_ptr->isSectionHidden(logicalIndex);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSectionHidden(QHeaderView * this_ptr, int logicalIndex, bool hide) {
  this_ptr->setSectionHidden(logicalIndex, hide);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_hiddenSectionCount(QHeaderView const * this_ptr) {
  return this_ptr->hiddenSectionCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_hideSection(QHeaderView * this_ptr, int logicalIndex) {
  this_ptr->hideSection(logicalIndex);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_showSection(QHeaderView * this_ptr, int logicalIndex) {
  this_ptr->showSection(logicalIndex);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_count(QHeaderView const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_visualIndex(QHeaderView const * this_ptr, int logicalIndex) {
  return this_ptr->visualIndex(logicalIndex);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_logicalIndex(QHeaderView const * this_ptr, int visualIndex) {
  return this_ptr->logicalIndex(visualIndex);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSectionsMovable(QHeaderView * this_ptr, bool movable) {
  this_ptr->setSectionsMovable(movable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_sectionsMovable(QHeaderView const * this_ptr) {
  return this_ptr->sectionsMovable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setFirstSectionMovable(QHeaderView * this_ptr, bool movable) {
  this_ptr->setFirstSectionMovable(movable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_isFirstSectionMovable(QHeaderView const * this_ptr) {
  return this_ptr->isFirstSectionMovable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSectionsClickable(QHeaderView * this_ptr, bool clickable) {
  this_ptr->setSectionsClickable(clickable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_sectionsClickable(QHeaderView const * this_ptr) {
  return this_ptr->sectionsClickable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setHighlightSections(QHeaderView * this_ptr, bool highlight) {
  this_ptr->setHighlightSections(highlight);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_highlightSections(QHeaderView const * this_ptr) {
  return this_ptr->highlightSections();
}


RITUAL_EXPORT QHeaderView::ResizeMode ctr_qt_widgets_ffi_QHeaderView_sectionResizeMode(QHeaderView const * this_ptr, int logicalIndex) {
  return this_ptr->sectionResizeMode(logicalIndex);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSectionResizeMode(QHeaderView * this_ptr, QHeaderView::ResizeMode mode) {
  this_ptr->setSectionResizeMode(mode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSectionResizeMode1(QHeaderView * this_ptr, int logicalIndex, QHeaderView::ResizeMode mode) {
  this_ptr->setSectionResizeMode(logicalIndex, mode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setResizeContentsPrecision(QHeaderView * this_ptr, int precision) {
  this_ptr->setResizeContentsPrecision(precision);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_resizeContentsPrecision(QHeaderView const * this_ptr) {
  return this_ptr->resizeContentsPrecision();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_stretchSectionCount(QHeaderView const * this_ptr) {
  return this_ptr->stretchSectionCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSortIndicatorShown(QHeaderView * this_ptr, bool show) {
  this_ptr->setSortIndicatorShown(show);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_isSortIndicatorShown(QHeaderView const * this_ptr) {
  return this_ptr->isSortIndicatorShown();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSortIndicator(QHeaderView * this_ptr, int logicalIndex, Qt::SortOrder order) {
  this_ptr->setSortIndicator(logicalIndex, order);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_sortIndicatorSection(QHeaderView const * this_ptr) {
  return this_ptr->sortIndicatorSection();
}


RITUAL_EXPORT Qt::SortOrder ctr_qt_widgets_ffi_QHeaderView_sortIndicatorOrder(QHeaderView const * this_ptr) {
  return this_ptr->sortIndicatorOrder();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setSortIndicatorClearable(QHeaderView * this_ptr, bool clearable) {
  this_ptr->setSortIndicatorClearable(clearable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_isSortIndicatorClearable(QHeaderView const * this_ptr) {
  return this_ptr->isSortIndicatorClearable();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_stretchLastSection(QHeaderView const * this_ptr) {
  return this_ptr->stretchLastSection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setStretchLastSection(QHeaderView * this_ptr, bool stretch) {
  this_ptr->setStretchLastSection(stretch);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_cascadingSectionResizes(QHeaderView const * this_ptr) {
  return this_ptr->cascadingSectionResizes();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setCascadingSectionResizes(QHeaderView * this_ptr, bool enable) {
  this_ptr->setCascadingSectionResizes(enable);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_defaultSectionSize(QHeaderView const * this_ptr) {
  return this_ptr->defaultSectionSize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setDefaultSectionSize(QHeaderView * this_ptr, int size) {
  this_ptr->setDefaultSectionSize(size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_resetDefaultSectionSize(QHeaderView * this_ptr) {
  this_ptr->resetDefaultSectionSize();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_minimumSectionSize(QHeaderView const * this_ptr) {
  return this_ptr->minimumSectionSize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setMinimumSectionSize(QHeaderView * this_ptr, int size) {
  this_ptr->setMinimumSectionSize(size);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_maximumSectionSize(QHeaderView const * this_ptr) {
  return this_ptr->maximumSectionSize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setMaximumSectionSize(QHeaderView * this_ptr, int size) {
  this_ptr->setMaximumSectionSize(size);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHeaderView_defaultAlignment(QHeaderView const * this_ptr) {
  return int(this_ptr->defaultAlignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setDefaultAlignment(QHeaderView * this_ptr, int alignment) {
  this_ptr->setDefaultAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_doItemsLayout(QHeaderView * this_ptr) {
  this_ptr->doItemsLayout();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_sectionsMoved(QHeaderView const * this_ptr) {
  return this_ptr->sectionsMoved();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_sectionsHidden(QHeaderView const * this_ptr) {
  return this_ptr->sectionsHidden();
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QHeaderView_saveState(QHeaderView const * this_ptr) {
  return new QByteArray(this_ptr->saveState());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QHeaderView_restoreState(QHeaderView * this_ptr, QByteArray const * state) {
  return this_ptr->restoreState(*state);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_reset(QHeaderView * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setOffset(QHeaderView * this_ptr, int offset) {
  this_ptr->setOffset(offset);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setOffsetToSectionPosition(QHeaderView * this_ptr, int visualIndex) {
  this_ptr->setOffsetToSectionPosition(visualIndex);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_setOffsetToLastSection(QHeaderView * this_ptr) {
  this_ptr->setOffsetToLastSection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHeaderView_headerDataChanged(QHeaderView * this_ptr, Qt::Orientation orientation, int logicalFirst, int logicalLast) {
  this_ptr->headerDataChanged(orientation, logicalFirst, logicalLast);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLineEdit_metaObject(QLineEdit const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QLineEdit_qt_metacast(QLineEdit * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_qt_metacall(QLineEdit * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLineEdit_tr(char const * s, char const * c, int n) {
  return new QString(QLineEdit::tr(s, c, n));
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_QLineEdit_QLineEdit(QWidget * parent) {
  return new QLineEdit(parent);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_QLineEdit_QLineEdit1(QString const * arg1, QWidget * parent) {
  return new QLineEdit(*arg1, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_dQLineEdit(QLineEdit * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLineEdit_text(QLineEdit const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLineEdit_displayText(QLineEdit const * this_ptr) {
  return new QString(this_ptr->displayText());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLineEdit_placeholderText(QLineEdit const * this_ptr) {
  return new QString(this_ptr->placeholderText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setPlaceholderText(QLineEdit * this_ptr, QString const * arg1) {
  this_ptr->setPlaceholderText(*arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_maxLength(QLineEdit const * this_ptr) {
  return this_ptr->maxLength();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setMaxLength(QLineEdit * this_ptr, int arg1) {
  this_ptr->setMaxLength(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setFrame(QLineEdit * this_ptr, bool arg1) {
  this_ptr->setFrame(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_hasFrame(QLineEdit const * this_ptr) {
  return this_ptr->hasFrame();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setClearButtonEnabled(QLineEdit * this_ptr, bool enable) {
  this_ptr->setClearButtonEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_isClearButtonEnabled(QLineEdit const * this_ptr) {
  return this_ptr->isClearButtonEnabled();
}


RITUAL_EXPORT QLineEdit::EchoMode ctr_qt_widgets_ffi_QLineEdit_echoMode(QLineEdit const * this_ptr) {
  return this_ptr->echoMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setEchoMode(QLineEdit * this_ptr, QLineEdit::EchoMode arg1) {
  this_ptr->setEchoMode(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_isReadOnly(QLineEdit const * this_ptr) {
  return this_ptr->isReadOnly();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setReadOnly(QLineEdit * this_ptr, bool arg1) {
  this_ptr->setReadOnly(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setValidator(QLineEdit * this_ptr, QValidator const * arg1) {
  this_ptr->setValidator(arg1);
}


RITUAL_EXPORT QValidator const * ctr_qt_widgets_ffi_QLineEdit_validator(QLineEdit const * this_ptr) {
  return this_ptr->validator();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setCompleter(QLineEdit * this_ptr, QCompleter * completer) {
  this_ptr->setCompleter(completer);
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_QLineEdit_completer(QLineEdit const * this_ptr) {
  return this_ptr->completer();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLineEdit_sizeHint(QLineEdit const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLineEdit_minimumSizeHint(QLineEdit const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_cursorPosition(QLineEdit const * this_ptr) {
  return this_ptr->cursorPosition();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setCursorPosition(QLineEdit * this_ptr, int arg1) {
  this_ptr->setCursorPosition(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_cursorPositionAt(QLineEdit * this_ptr, QPoint const * pos) {
  return this_ptr->cursorPositionAt(*pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setAlignment(QLineEdit * this_ptr, int flag) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(flag));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_alignment(QLineEdit const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_cursorForward(QLineEdit * this_ptr, bool mark, int steps) {
  this_ptr->cursorForward(mark, steps);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_cursorBackward(QLineEdit * this_ptr, bool mark, int steps) {
  this_ptr->cursorBackward(mark, steps);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_cursorWordForward(QLineEdit * this_ptr, bool mark) {
  this_ptr->cursorWordForward(mark);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_cursorWordBackward(QLineEdit * this_ptr, bool mark) {
  this_ptr->cursorWordBackward(mark);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_backspace(QLineEdit * this_ptr) {
  this_ptr->backspace();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_del(QLineEdit * this_ptr) {
  this_ptr->del();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_home(QLineEdit * this_ptr, bool mark) {
  this_ptr->home(mark);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_end(QLineEdit * this_ptr, bool mark) {
  this_ptr->end(mark);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_isModified(QLineEdit const * this_ptr) {
  return this_ptr->isModified();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setModified(QLineEdit * this_ptr, bool arg1) {
  this_ptr->setModified(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setSelection(QLineEdit * this_ptr, int arg1, int arg2) {
  this_ptr->setSelection(arg1, arg2);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_hasSelectedText(QLineEdit const * this_ptr) {
  return this_ptr->hasSelectedText();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLineEdit_selectedText(QLineEdit const * this_ptr) {
  return new QString(this_ptr->selectedText());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_selectionStart(QLineEdit const * this_ptr) {
  return this_ptr->selectionStart();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_selectionEnd(QLineEdit const * this_ptr) {
  return this_ptr->selectionEnd();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLineEdit_selectionLength(QLineEdit const * this_ptr) {
  return this_ptr->selectionLength();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_isUndoAvailable(QLineEdit const * this_ptr) {
  return this_ptr->isUndoAvailable();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_isRedoAvailable(QLineEdit const * this_ptr) {
  return this_ptr->isRedoAvailable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setDragEnabled(QLineEdit * this_ptr, bool b) {
  this_ptr->setDragEnabled(b);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_dragEnabled(QLineEdit const * this_ptr) {
  return this_ptr->dragEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setCursorMoveStyle(QLineEdit * this_ptr, Qt::CursorMoveStyle style) {
  this_ptr->setCursorMoveStyle(style);
}


RITUAL_EXPORT Qt::CursorMoveStyle ctr_qt_widgets_ffi_QLineEdit_cursorMoveStyle(QLineEdit const * this_ptr) {
  return this_ptr->cursorMoveStyle();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLineEdit_inputMask(QLineEdit const * this_ptr) {
  return new QString(this_ptr->inputMask());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setInputMask(QLineEdit * this_ptr, QString const * inputMask) {
  this_ptr->setInputMask(*inputMask);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_hasAcceptableInput(QLineEdit const * this_ptr) {
  return this_ptr->hasAcceptableInput();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setTextMargins(QLineEdit * this_ptr, int left, int top, int right, int bottom) {
  this_ptr->setTextMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setTextMargins1(QLineEdit * this_ptr, QMargins const * margins) {
  this_ptr->setTextMargins(*margins);
}


RITUAL_EXPORT QMargins * ctr_qt_widgets_ffi_QLineEdit_textMargins(QLineEdit const * this_ptr) {
  return new QMargins(this_ptr->textMargins());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_addAction(QLineEdit * this_ptr, QAction * action, QLineEdit::ActionPosition position) {
  this_ptr->addAction(action, position);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QLineEdit_addAction1(QLineEdit * this_ptr, QIcon const * icon, QLineEdit::ActionPosition position) {
  return this_ptr->addAction(*icon, position);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_setText(QLineEdit * this_ptr, QString const * arg1) {
  this_ptr->setText(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_clear(QLineEdit * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_selectAll(QLineEdit * this_ptr) {
  this_ptr->selectAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_undo(QLineEdit * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_redo(QLineEdit * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_cut(QLineEdit * this_ptr) {
  this_ptr->cut();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_copy(QLineEdit const * this_ptr) {
  this_ptr->copy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_paste(QLineEdit * this_ptr) {
  this_ptr->paste();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_deselect(QLineEdit * this_ptr) {
  this_ptr->deselect();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_insert(QLineEdit * this_ptr, QString const * arg1) {
  this_ptr->insert(*arg1);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QLineEdit_createStandardContextMenu(QLineEdit * this_ptr) {
  return this_ptr->createStandardContextMenu();
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QLineEdit_inputMethodQuery(QLineEdit const * this_ptr, Qt::InputMethodQuery arg1) {
  return new QVariant(this_ptr->inputMethodQuery(arg1));
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QLineEdit_inputMethodQuery1(QLineEdit const * this_ptr, Qt::InputMethodQuery property, QVariant const * argument) {
  return new QVariant(this_ptr->inputMethodQuery(property, *argument));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_timerEvent(QLineEdit * this_ptr, QTimerEvent * arg1) {
  this_ptr->timerEvent(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLineEdit_event(QLineEdit * this_ptr, QEvent * arg1) {
  return this_ptr->event(arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QInputDialog_metaObject(QInputDialog const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QInputDialog_qt_metacast(QInputDialog * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_qt_metacall(QInputDialog * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_tr(char const * s, char const * c, int n) {
  return new QString(QInputDialog::tr(s, c, n));
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_QInputDialog_QInputDialog(QWidget * parent, int flags) {
  return new QInputDialog(parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_dQInputDialog(QInputDialog * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setInputMode(QInputDialog * this_ptr, QInputDialog::InputMode mode) {
  this_ptr->setInputMode(mode);
}


RITUAL_EXPORT QInputDialog::InputMode ctr_qt_widgets_ffi_QInputDialog_inputMode(QInputDialog const * this_ptr) {
  return this_ptr->inputMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setLabelText(QInputDialog * this_ptr, QString const * text) {
  this_ptr->setLabelText(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_labelText(QInputDialog const * this_ptr) {
  return new QString(this_ptr->labelText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setOption(QInputDialog * this_ptr, QInputDialog::InputDialogOption option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QInputDialog_testOption(QInputDialog const * this_ptr, QInputDialog::InputDialogOption option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setOptions(QInputDialog * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QInputDialog::InputDialogOption >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_options(QInputDialog const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setTextValue(QInputDialog * this_ptr, QString const * text) {
  this_ptr->setTextValue(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_textValue(QInputDialog const * this_ptr) {
  return new QString(this_ptr->textValue());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setTextEchoMode(QInputDialog * this_ptr, QLineEdit::EchoMode mode) {
  this_ptr->setTextEchoMode(mode);
}


RITUAL_EXPORT QLineEdit::EchoMode ctr_qt_widgets_ffi_QInputDialog_textEchoMode(QInputDialog const * this_ptr) {
  return this_ptr->textEchoMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setComboBoxEditable(QInputDialog * this_ptr, bool editable) {
  this_ptr->setComboBoxEditable(editable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QInputDialog_isComboBoxEditable(QInputDialog const * this_ptr) {
  return this_ptr->isComboBoxEditable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setComboBoxItems(QInputDialog * this_ptr, QList< QString > const * items) {
  this_ptr->setComboBoxItems(*items);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QInputDialog_comboBoxItems(QInputDialog const * this_ptr) {
  return new QList< QString >(this_ptr->comboBoxItems());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setIntValue(QInputDialog * this_ptr, int value) {
  this_ptr->setIntValue(value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_intValue(QInputDialog const * this_ptr) {
  return this_ptr->intValue();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setIntMinimum(QInputDialog * this_ptr, int min) {
  this_ptr->setIntMinimum(min);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_intMinimum(QInputDialog const * this_ptr) {
  return this_ptr->intMinimum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setIntMaximum(QInputDialog * this_ptr, int max) {
  this_ptr->setIntMaximum(max);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_intMaximum(QInputDialog const * this_ptr) {
  return this_ptr->intMaximum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setIntRange(QInputDialog * this_ptr, int min, int max) {
  this_ptr->setIntRange(min, max);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setIntStep(QInputDialog * this_ptr, int step) {
  this_ptr->setIntStep(step);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_intStep(QInputDialog const * this_ptr) {
  return this_ptr->intStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setDoubleValue(QInputDialog * this_ptr, double value) {
  this_ptr->setDoubleValue(value);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_doubleValue(QInputDialog const * this_ptr) {
  return this_ptr->doubleValue();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setDoubleMinimum(QInputDialog * this_ptr, double min) {
  this_ptr->setDoubleMinimum(min);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_doubleMinimum(QInputDialog const * this_ptr) {
  return this_ptr->doubleMinimum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setDoubleMaximum(QInputDialog * this_ptr, double max) {
  this_ptr->setDoubleMaximum(max);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_doubleMaximum(QInputDialog const * this_ptr) {
  return this_ptr->doubleMaximum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setDoubleRange(QInputDialog * this_ptr, double min, double max) {
  this_ptr->setDoubleRange(min, max);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setDoubleDecimals(QInputDialog * this_ptr, int decimals) {
  this_ptr->setDoubleDecimals(decimals);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_doubleDecimals(QInputDialog const * this_ptr) {
  return this_ptr->doubleDecimals();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setOkButtonText(QInputDialog * this_ptr, QString const * text) {
  this_ptr->setOkButtonText(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_okButtonText(QInputDialog const * this_ptr) {
  return new QString(this_ptr->okButtonText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setCancelButtonText(QInputDialog * this_ptr, QString const * text) {
  this_ptr->setCancelButtonText(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_cancelButtonText(QInputDialog const * this_ptr) {
  return new QString(this_ptr->cancelButtonText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_open(QInputDialog * this_ptr, QObject * receiver, char const * member) {
  this_ptr->open(receiver, member);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QInputDialog_minimumSizeHint(QInputDialog const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QInputDialog_sizeHint(QInputDialog const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setVisible(QInputDialog * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getText(QWidget * parent, QString const * title, QString const * label, QLineEdit::EchoMode echo, QString const * text, bool * ok, int flags, int inputMethodHints) {
  return new QString(QInputDialog::getText(parent, *title, *label, echo, *text, ok, QFlags< Qt::WindowType >(flags), QFlags< Qt::InputMethodHint >(inputMethodHints)));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getMultiLineText(QWidget * parent, QString const * title, QString const * label, QString const * text, bool * ok, int flags, int inputMethodHints) {
  return new QString(QInputDialog::getMultiLineText(parent, *title, *label, *text, ok, QFlags< Qt::WindowType >(flags), QFlags< Qt::InputMethodHint >(inputMethodHints)));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getItem(QWidget * parent, QString const * title, QString const * label, QList< QString > const * items, int current, bool editable, bool * ok, int flags, int inputMethodHints) {
  return new QString(QInputDialog::getItem(parent, *title, *label, *items, current, editable, ok, QFlags< Qt::WindowType >(flags), QFlags< Qt::InputMethodHint >(inputMethodHints)));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_getInt(QWidget * parent, QString const * title, QString const * label, int value, int minValue, int maxValue, int step, bool * ok, int flags) {
  return QInputDialog::getInt(parent, *title, *label, value, minValue, maxValue, step, ok, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble(QWidget * parent, QString const * title, QString const * label, double value, double minValue, double maxValue, int decimals, bool * ok, int flags, double step) {
  return QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals, ok, QFlags< Qt::WindowType >(flags), step);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setDoubleStep(QInputDialog * this_ptr, double step) {
  this_ptr->setDoubleStep(step);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_doubleStep(QInputDialog const * this_ptr) {
  return this_ptr->doubleStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_done(QInputDialog * this_ptr, int result) {
  this_ptr->done(result);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QItemDelegate_metaObject(QItemDelegate const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QItemDelegate_qt_metacast(QItemDelegate * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QItemDelegate_qt_metacall(QItemDelegate * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QItemDelegate_tr(char const * s, char const * c, int n) {
  return new QString(QItemDelegate::tr(s, c, n));
}


RITUAL_EXPORT QItemDelegate * ctr_qt_widgets_ffi_QItemDelegate_QItemDelegate(QObject * parent) {
  return new QItemDelegate(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemDelegate_dQItemDelegate(QItemDelegate * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QItemDelegate_hasClipping(QItemDelegate const * this_ptr) {
  return this_ptr->hasClipping();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemDelegate_setClipping(QItemDelegate * this_ptr, bool clip) {
  this_ptr->setClipping(clip);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemDelegate_paint(QItemDelegate const * this_ptr, QPainter * painter, QStyleOptionViewItem const * option, QModelIndex const * index) {
  this_ptr->paint(painter, *option, *index);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QItemDelegate_sizeHint(QItemDelegate const * this_ptr, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return new QSize(this_ptr->sizeHint(*option, *index));
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QItemDelegate_createEditor(QItemDelegate const * this_ptr, QWidget * parent, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return this_ptr->createEditor(parent, *option, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemDelegate_setEditorData(QItemDelegate const * this_ptr, QWidget * editor, QModelIndex const * index) {
  this_ptr->setEditorData(editor, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemDelegate_setModelData(QItemDelegate const * this_ptr, QWidget * editor, QAbstractItemModel * model, QModelIndex const * index) {
  this_ptr->setModelData(editor, model, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemDelegate_updateEditorGeometry(QItemDelegate const * this_ptr, QWidget * editor, QStyleOptionViewItem const * option, QModelIndex const * index) {
  this_ptr->updateEditorGeometry(editor, *option, *index);
}


RITUAL_EXPORT QItemEditorFactory * ctr_qt_widgets_ffi_QItemDelegate_itemEditorFactory(QItemDelegate const * this_ptr) {
  return this_ptr->itemEditorFactory();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemDelegate_setItemEditorFactory(QItemDelegate * this_ptr, QItemEditorFactory * factory) {
  this_ptr->setItemEditorFactory(factory);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemEditorCreatorBase_dQItemEditorCreatorBase(QItemEditorCreatorBase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QItemEditorCreatorBase_createWidget(QItemEditorCreatorBase const * this_ptr, QWidget * parent) {
  return this_ptr->createWidget(parent);
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QItemEditorCreatorBase_valuePropertyName(QItemEditorCreatorBase const * this_ptr) {
  return new QByteArray(this_ptr->valuePropertyName());
}


RITUAL_EXPORT QItemEditorFactory * ctr_qt_widgets_ffi_QItemEditorFactory_QItemEditorFactory() {
  return new QItemEditorFactory();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemEditorFactory_dQItemEditorFactory(QItemEditorFactory * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QItemEditorFactory_createEditor(QItemEditorFactory const * this_ptr, int userType, QWidget * parent) {
  return this_ptr->createEditor(userType, parent);
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QItemEditorFactory_valuePropertyName(QItemEditorFactory const * this_ptr, int userType) {
  return new QByteArray(this_ptr->valuePropertyName(userType));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemEditorFactory_registerEditor(QItemEditorFactory * this_ptr, int userType, QItemEditorCreatorBase * creator) {
  this_ptr->registerEditor(userType, creator);
}


RITUAL_EXPORT QItemEditorFactory const * ctr_qt_widgets_ffi_QItemEditorFactory_defaultFactory() {
  return QItemEditorFactory::defaultFactory();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QItemEditorFactory_setDefaultFactory(QItemEditorFactory * factory) {
  QItemEditorFactory::setDefaultFactory(factory);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QKeySequenceEdit_metaObject(QKeySequenceEdit const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QKeySequenceEdit_qt_metacast(QKeySequenceEdit * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QKeySequenceEdit_qt_metacall(QKeySequenceEdit * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QKeySequenceEdit_tr(char const * s, char const * c, int n) {
  return new QString(QKeySequenceEdit::tr(s, c, n));
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_QKeySequenceEdit_QKeySequenceEdit(QWidget * parent) {
  return new QKeySequenceEdit(parent);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_QKeySequenceEdit_QKeySequenceEdit1(QKeySequence const * keySequence, QWidget * parent) {
  return new QKeySequenceEdit(*keySequence, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QKeySequenceEdit_dQKeySequenceEdit(QKeySequenceEdit * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QKeySequence * ctr_qt_widgets_ffi_QKeySequenceEdit_keySequence(QKeySequenceEdit const * this_ptr) {
  return new QKeySequence(this_ptr->keySequence());
}


RITUAL_EXPORT long long ctr_qt_widgets_ffi_QKeySequenceEdit_maximumSequenceLength(QKeySequenceEdit const * this_ptr) {
  return this_ptr->maximumSequenceLength();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QKeySequenceEdit_setClearButtonEnabled(QKeySequenceEdit * this_ptr, bool enable) {
  this_ptr->setClearButtonEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QKeySequenceEdit_isClearButtonEnabled(QKeySequenceEdit const * this_ptr) {
  return this_ptr->isClearButtonEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QKeySequenceEdit_setFinishingKeyCombinations(QKeySequenceEdit * this_ptr, QList< QKeyCombination > const * finishingKeyCombinations) {
  this_ptr->setFinishingKeyCombinations(*finishingKeyCombinations);
}


RITUAL_EXPORT QList< QKeyCombination > * ctr_qt_widgets_ffi_QKeySequenceEdit_finishingKeyCombinations(QKeySequenceEdit const * this_ptr) {
  return new QList< QKeyCombination >(this_ptr->finishingKeyCombinations());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QKeySequenceEdit_setKeySequence(QKeySequenceEdit * this_ptr, QKeySequence const * keySequence) {
  this_ptr->setKeySequence(*keySequence);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QKeySequenceEdit_clear(QKeySequenceEdit * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QKeySequenceEdit_setMaximumSequenceLength(QKeySequenceEdit * this_ptr, long long count) {
  this_ptr->setMaximumSequenceLength(count);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLabel_metaObject(QLabel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QLabel_qt_metacast(QLabel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLabel_qt_metacall(QLabel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLabel_tr(char const * s, char const * c, int n) {
  return new QString(QLabel::tr(s, c, n));
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_QLabel_QLabel(QWidget * parent, int f) {
  return new QLabel(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_QLabel_QLabel1(QString const * text, QWidget * parent, int f) {
  return new QLabel(*text, parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_dQLabel(QLabel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLabel_text(QLabel const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QLabel_pixmap(QLabel const * this_ptr, Qt::ReturnByValueConstant arg1) {
  return new QPixmap(this_ptr->pixmap(arg1));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QLabel_pixmap1(QLabel const * this_ptr) {
  return new QPixmap(this_ptr->pixmap());
}


RITUAL_EXPORT QPicture * ctr_qt_widgets_ffi_QLabel_picture(QLabel const * this_ptr, Qt::ReturnByValueConstant arg1) {
  return new QPicture(this_ptr->picture(arg1));
}


RITUAL_EXPORT QPicture * ctr_qt_widgets_ffi_QLabel_picture1(QLabel const * this_ptr) {
  return new QPicture(this_ptr->picture());
}


RITUAL_EXPORT QMovie * ctr_qt_widgets_ffi_QLabel_movie(QLabel const * this_ptr) {
  return this_ptr->movie();
}


RITUAL_EXPORT Qt::TextFormat ctr_qt_widgets_ffi_QLabel_textFormat(QLabel const * this_ptr) {
  return this_ptr->textFormat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setTextFormat(QLabel * this_ptr, Qt::TextFormat arg1) {
  this_ptr->setTextFormat(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLabel_alignment(QLabel const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setAlignment(QLabel * this_ptr, int arg1) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(arg1));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setWordWrap(QLabel * this_ptr, bool on) {
  this_ptr->setWordWrap(on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLabel_wordWrap(QLabel const * this_ptr) {
  return this_ptr->wordWrap();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLabel_indent(QLabel const * this_ptr) {
  return this_ptr->indent();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setIndent(QLabel * this_ptr, int arg1) {
  this_ptr->setIndent(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLabel_margin(QLabel const * this_ptr) {
  return this_ptr->margin();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setMargin(QLabel * this_ptr, int arg1) {
  this_ptr->setMargin(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLabel_hasScaledContents(QLabel const * this_ptr) {
  return this_ptr->hasScaledContents();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setScaledContents(QLabel * this_ptr, bool arg1) {
  this_ptr->setScaledContents(arg1);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLabel_sizeHint(QLabel const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLabel_minimumSizeHint(QLabel const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setBuddy(QLabel * this_ptr, QWidget * arg1) {
  this_ptr->setBuddy(arg1);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QLabel_buddy(QLabel const * this_ptr) {
  return this_ptr->buddy();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLabel_heightForWidth(QLabel const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLabel_openExternalLinks(QLabel const * this_ptr) {
  return this_ptr->openExternalLinks();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setOpenExternalLinks(QLabel * this_ptr, bool open) {
  this_ptr->setOpenExternalLinks(open);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setTextInteractionFlags(QLabel * this_ptr, int flags) {
  this_ptr->setTextInteractionFlags(QFlags< Qt::TextInteractionFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLabel_textInteractionFlags(QLabel const * this_ptr) {
  return int(this_ptr->textInteractionFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setSelection(QLabel * this_ptr, int arg1, int arg2) {
  this_ptr->setSelection(arg1, arg2);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLabel_hasSelectedText(QLabel const * this_ptr) {
  return this_ptr->hasSelectedText();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLabel_selectedText(QLabel const * this_ptr) {
  return new QString(this_ptr->selectedText());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLabel_selectionStart(QLabel const * this_ptr) {
  return this_ptr->selectionStart();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setText(QLabel * this_ptr, QString const * arg1) {
  this_ptr->setText(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setPixmap(QLabel * this_ptr, QPixmap const * arg1) {
  this_ptr->setPixmap(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setPicture(QLabel * this_ptr, QPicture const * arg1) {
  this_ptr->setPicture(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setMovie(QLabel * this_ptr, QMovie * movie) {
  this_ptr->setMovie(movie);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setNum(QLabel * this_ptr, int arg1) {
  this_ptr->setNum(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_setNum1(QLabel * this_ptr, double arg1) {
  this_ptr->setNum(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLabel_clear(QLabel * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLCDNumber_metaObject(QLCDNumber const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QLCDNumber_qt_metacast(QLCDNumber * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLCDNumber_qt_metacall(QLCDNumber * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLCDNumber_tr(char const * s, char const * c, int n) {
  return new QString(QLCDNumber::tr(s, c, n));
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_QLCDNumber_QLCDNumber(QWidget * parent) {
  return new QLCDNumber(parent);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_QLCDNumber_QLCDNumber1(unsigned int numDigits, QWidget * parent) {
  return new QLCDNumber(numDigits, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_dQLCDNumber(QLCDNumber * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLCDNumber_smallDecimalPoint(QLCDNumber const * this_ptr) {
  return this_ptr->smallDecimalPoint();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLCDNumber_digitCount(QLCDNumber const * this_ptr) {
  return this_ptr->digitCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setDigitCount(QLCDNumber * this_ptr, int nDigits) {
  this_ptr->setDigitCount(nDigits);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLCDNumber_checkOverflow(QLCDNumber const * this_ptr, double num) {
  return this_ptr->checkOverflow(num);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLCDNumber_checkOverflow1(QLCDNumber const * this_ptr, int num) {
  return this_ptr->checkOverflow(num);
}


RITUAL_EXPORT QLCDNumber::Mode ctr_qt_widgets_ffi_QLCDNumber_mode(QLCDNumber const * this_ptr) {
  return this_ptr->mode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setMode(QLCDNumber * this_ptr, QLCDNumber::Mode arg1) {
  this_ptr->setMode(arg1);
}


RITUAL_EXPORT QLCDNumber::SegmentStyle ctr_qt_widgets_ffi_QLCDNumber_segmentStyle(QLCDNumber const * this_ptr) {
  return this_ptr->segmentStyle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setSegmentStyle(QLCDNumber * this_ptr, QLCDNumber::SegmentStyle arg1) {
  this_ptr->setSegmentStyle(arg1);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QLCDNumber_value(QLCDNumber const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLCDNumber_intValue(QLCDNumber const * this_ptr) {
  return this_ptr->intValue();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLCDNumber_sizeHint(QLCDNumber const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_display(QLCDNumber * this_ptr, QString const * str) {
  this_ptr->display(*str);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_display1(QLCDNumber * this_ptr, int num) {
  this_ptr->display(num);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_display2(QLCDNumber * this_ptr, double num) {
  this_ptr->display(num);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setHexMode(QLCDNumber * this_ptr) {
  this_ptr->setHexMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setDecMode(QLCDNumber * this_ptr) {
  this_ptr->setDecMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setOctMode(QLCDNumber * this_ptr) {
  this_ptr->setOctMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setBinMode(QLCDNumber * this_ptr) {
  this_ptr->setBinMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLCDNumber_setSmallDecimalPoint(QLCDNumber * this_ptr, bool arg1) {
  this_ptr->setSmallDecimalPoint(arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QListView_metaObject(QListView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QListView_qt_metacast(QListView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListView_qt_metacall(QListView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QListView_tr(char const * s, char const * c, int n) {
  return new QString(QListView::tr(s, c, n));
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_QListView_QListView(QWidget * parent) {
  return new QListView(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_dQListView(QListView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setMovement(QListView * this_ptr, QListView::Movement movement) {
  this_ptr->setMovement(movement);
}


RITUAL_EXPORT QListView::Movement ctr_qt_widgets_ffi_QListView_movement(QListView const * this_ptr) {
  return this_ptr->movement();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setFlow(QListView * this_ptr, QListView::Flow flow) {
  this_ptr->setFlow(flow);
}


RITUAL_EXPORT QListView::Flow ctr_qt_widgets_ffi_QListView_flow(QListView const * this_ptr) {
  return this_ptr->flow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setWrapping(QListView * this_ptr, bool enable) {
  this_ptr->setWrapping(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListView_isWrapping(QListView const * this_ptr) {
  return this_ptr->isWrapping();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setResizeMode(QListView * this_ptr, QListView::ResizeMode mode) {
  this_ptr->setResizeMode(mode);
}


RITUAL_EXPORT QListView::ResizeMode ctr_qt_widgets_ffi_QListView_resizeMode(QListView const * this_ptr) {
  return this_ptr->resizeMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setLayoutMode(QListView * this_ptr, QListView::LayoutMode mode) {
  this_ptr->setLayoutMode(mode);
}


RITUAL_EXPORT QListView::LayoutMode ctr_qt_widgets_ffi_QListView_layoutMode(QListView const * this_ptr) {
  return this_ptr->layoutMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setSpacing(QListView * this_ptr, int space) {
  this_ptr->setSpacing(space);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListView_spacing(QListView const * this_ptr) {
  return this_ptr->spacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setBatchSize(QListView * this_ptr, int batchSize) {
  this_ptr->setBatchSize(batchSize);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListView_batchSize(QListView const * this_ptr) {
  return this_ptr->batchSize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setGridSize(QListView * this_ptr, QSize const * size) {
  this_ptr->setGridSize(*size);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QListView_gridSize(QListView const * this_ptr) {
  return new QSize(this_ptr->gridSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setViewMode(QListView * this_ptr, QListView::ViewMode mode) {
  this_ptr->setViewMode(mode);
}


RITUAL_EXPORT QListView::ViewMode ctr_qt_widgets_ffi_QListView_viewMode(QListView const * this_ptr) {
  return this_ptr->viewMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_clearPropertyFlags(QListView * this_ptr) {
  this_ptr->clearPropertyFlags();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListView_isRowHidden(QListView const * this_ptr, int row) {
  return this_ptr->isRowHidden(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setRowHidden(QListView * this_ptr, int row, bool hide) {
  this_ptr->setRowHidden(row, hide);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setModelColumn(QListView * this_ptr, int column) {
  this_ptr->setModelColumn(column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListView_modelColumn(QListView const * this_ptr) {
  return this_ptr->modelColumn();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setUniformItemSizes(QListView * this_ptr, bool enable) {
  this_ptr->setUniformItemSizes(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListView_uniformItemSizes(QListView const * this_ptr) {
  return this_ptr->uniformItemSizes();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setWordWrap(QListView * this_ptr, bool on) {
  this_ptr->setWordWrap(on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListView_wordWrap(QListView const * this_ptr) {
  return this_ptr->wordWrap();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setSelectionRectVisible(QListView * this_ptr, bool show) {
  this_ptr->setSelectionRectVisible(show);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListView_isSelectionRectVisible(QListView const * this_ptr) {
  return this_ptr->isSelectionRectVisible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setItemAlignment(QListView * this_ptr, int alignment) {
  this_ptr->setItemAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListView_itemAlignment(QListView const * this_ptr) {
  return int(this_ptr->itemAlignment());
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QListView_visualRect(QListView const * this_ptr, QModelIndex const * index) {
  return new QRect(this_ptr->visualRect(*index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_scrollTo(QListView * this_ptr, QModelIndex const * index, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollTo(*index, hint);
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QListView_indexAt(QListView const * this_ptr, QPoint const * p) {
  return new QModelIndex(this_ptr->indexAt(*p));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_doItemsLayout(QListView * this_ptr) {
  this_ptr->doItemsLayout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_reset(QListView * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_setRootIndex(QListView * this_ptr, QModelIndex const * index) {
  this_ptr->setRootIndex(*index);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem(QListWidget * listview, int type) {
  return new QListWidgetItem(listview, type);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem1(QString const * text, QListWidget * listview, int type) {
  return new QListWidgetItem(*text, listview, type);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem2(QIcon const * icon, QString const * text, QListWidget * listview, int type) {
  return new QListWidgetItem(*icon, *text, listview, type);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem3(QListWidgetItem const * other) {
  return new QListWidgetItem(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_dQListWidgetItem(QListWidgetItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_clone(QListWidgetItem const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_QListWidgetItem_listWidget(QListWidgetItem const * this_ptr) {
  return this_ptr->listWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setSelected(QListWidgetItem * this_ptr, bool select) {
  this_ptr->setSelected(select);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListWidgetItem_isSelected(QListWidgetItem const * this_ptr) {
  return this_ptr->isSelected();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setHidden(QListWidgetItem * this_ptr, bool hide) {
  this_ptr->setHidden(hide);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListWidgetItem_isHidden(QListWidgetItem const * this_ptr) {
  return this_ptr->isHidden();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidgetItem_flags(QListWidgetItem const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setFlags(QListWidgetItem * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< Qt::ItemFlag >(flags));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QListWidgetItem_text(QListWidgetItem const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setText(QListWidgetItem * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QListWidgetItem_icon(QListWidgetItem const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setIcon(QListWidgetItem * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QListWidgetItem_statusTip(QListWidgetItem const * this_ptr) {
  return new QString(this_ptr->statusTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setStatusTip(QListWidgetItem * this_ptr, QString const * statusTip) {
  this_ptr->setStatusTip(*statusTip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QListWidgetItem_toolTip(QListWidgetItem const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setToolTip(QListWidgetItem * this_ptr, QString const * toolTip) {
  this_ptr->setToolTip(*toolTip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QListWidgetItem_whatsThis(QListWidgetItem const * this_ptr) {
  return new QString(this_ptr->whatsThis());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setWhatsThis(QListWidgetItem * this_ptr, QString const * whatsThis) {
  this_ptr->setWhatsThis(*whatsThis);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QListWidgetItem_font(QListWidgetItem const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setFont(QListWidgetItem * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidgetItem_textAlignment(QListWidgetItem const * this_ptr) {
  return this_ptr->textAlignment();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setTextAlignment(QListWidgetItem * this_ptr, int alignment) {
  this_ptr->setTextAlignment(alignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setTextAlignment1(QListWidgetItem * this_ptr, Qt::AlignmentFlag alignment) {
  this_ptr->setTextAlignment(alignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setTextAlignment2(QListWidgetItem * this_ptr, int alignment) {
  this_ptr->setTextAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QListWidgetItem_background(QListWidgetItem const * this_ptr) {
  return new QBrush(this_ptr->background());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setBackground(QListWidgetItem * this_ptr, QBrush const * brush) {
  this_ptr->setBackground(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QListWidgetItem_foreground(QListWidgetItem const * this_ptr) {
  return new QBrush(this_ptr->foreground());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setForeground(QListWidgetItem * this_ptr, QBrush const * brush) {
  this_ptr->setForeground(*brush);
}


RITUAL_EXPORT Qt::CheckState ctr_qt_widgets_ffi_QListWidgetItem_checkState(QListWidgetItem const * this_ptr) {
  return this_ptr->checkState();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setCheckState(QListWidgetItem * this_ptr, Qt::CheckState state) {
  this_ptr->setCheckState(state);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QListWidgetItem_sizeHint(QListWidgetItem const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setSizeHint(QListWidgetItem * this_ptr, QSize const * size) {
  this_ptr->setSizeHint(*size);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QListWidgetItem_data(QListWidgetItem const * this_ptr, int role) {
  return new QVariant(this_ptr->data(role));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_setData(QListWidgetItem * this_ptr, int role, QVariant const * value) {
  this_ptr->setData(role, *value);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListWidgetItem_operator_(QListWidgetItem const * this_ptr, QListWidgetItem const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_read(QListWidgetItem * this_ptr, QDataStream * in) {
  this_ptr->read(*in);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidgetItem_write(QListWidgetItem const * this_ptr, QDataStream * out) {
  this_ptr->write(*out);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_operator_1(QListWidgetItem * this_ptr, QListWidgetItem const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidgetItem_type(QListWidgetItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__13(QDataStream * out, QListWidgetItem const * item) {
  return &operator<<(*out, *item);
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__14(QDataStream * in, QListWidgetItem * item) {
  return &operator>>(*in, *item);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QListWidget_metaObject(QListWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QListWidget_qt_metacast(QListWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidget_qt_metacall(QListWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QListWidget_tr(char const * s, char const * c, int n) {
  return new QString(QListWidget::tr(s, c, n));
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_QListWidget_QListWidget(QWidget * parent) {
  return new QListWidget(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_dQListWidget(QListWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setSelectionModel(QListWidget * this_ptr, QItemSelectionModel * selectionModel) {
  this_ptr->setSelectionModel(selectionModel);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidget_item(QListWidget const * this_ptr, int row) {
  return this_ptr->item(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidget_row(QListWidget const * this_ptr, QListWidgetItem const * item) {
  return this_ptr->row(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_insertItem(QListWidget * this_ptr, int row, QListWidgetItem * item) {
  this_ptr->insertItem(row, item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_insertItem1(QListWidget * this_ptr, int row, QString const * label) {
  this_ptr->insertItem(row, *label);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_insertItems(QListWidget * this_ptr, int row, QList< QString > const * labels) {
  this_ptr->insertItems(row, *labels);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_addItem(QListWidget * this_ptr, QString const * label) {
  this_ptr->addItem(*label);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_addItem1(QListWidget * this_ptr, QListWidgetItem * item) {
  this_ptr->addItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_addItems(QListWidget * this_ptr, QList< QString > const * labels) {
  this_ptr->addItems(*labels);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidget_takeItem(QListWidget * this_ptr, int row) {
  return this_ptr->takeItem(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidget_count(QListWidget const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidget_currentItem(QListWidget const * this_ptr) {
  return this_ptr->currentItem();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setCurrentItem(QListWidget * this_ptr, QListWidgetItem * item) {
  this_ptr->setCurrentItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setCurrentItem1(QListWidget * this_ptr, QListWidgetItem * item, int command) {
  this_ptr->setCurrentItem(item, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidget_currentRow(QListWidget const * this_ptr) {
  return this_ptr->currentRow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setCurrentRow(QListWidget * this_ptr, int row) {
  this_ptr->setCurrentRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setCurrentRow1(QListWidget * this_ptr, int row, int command) {
  this_ptr->setCurrentRow(row, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidget_itemAt(QListWidget const * this_ptr, QPoint const * p) {
  return this_ptr->itemAt(*p);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidget_itemAt1(QListWidget const * this_ptr, int x, int y) {
  return this_ptr->itemAt(x, y);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QListWidget_visualItemRect(QListWidget const * this_ptr, QListWidgetItem const * item) {
  return new QRect(this_ptr->visualItemRect(item));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_sortItems(QListWidget * this_ptr, Qt::SortOrder order) {
  this_ptr->sortItems(order);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setSortingEnabled(QListWidget * this_ptr, bool enable) {
  this_ptr->setSortingEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListWidget_isSortingEnabled(QListWidget const * this_ptr) {
  return this_ptr->isSortingEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_editItem(QListWidget * this_ptr, QListWidgetItem * item) {
  this_ptr->editItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_openPersistentEditor(QListWidget * this_ptr, QListWidgetItem * item) {
  this_ptr->openPersistentEditor(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_closePersistentEditor(QListWidget * this_ptr, QListWidgetItem * item) {
  this_ptr->closePersistentEditor(item);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QListWidget_isPersistentEditorOpen(QListWidget const * this_ptr, QListWidgetItem * item) {
  return this_ptr->isPersistentEditorOpen(item);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QListWidget_itemWidget(QListWidget const * this_ptr, QListWidgetItem * item) {
  return this_ptr->itemWidget(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setItemWidget(QListWidget * this_ptr, QListWidgetItem * item, QWidget * widget) {
  this_ptr->setItemWidget(item, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_removeItemWidget(QListWidget * this_ptr, QListWidgetItem * item) {
  this_ptr->removeItemWidget(item);
}


RITUAL_EXPORT QList< QListWidgetItem * > * ctr_qt_widgets_ffi_QListWidget_selectedItems(QListWidget const * this_ptr) {
  return new QList< QListWidgetItem * >(this_ptr->selectedItems());
}


RITUAL_EXPORT QList< QListWidgetItem * > * ctr_qt_widgets_ffi_QListWidget_findItems(QListWidget const * this_ptr, QString const * text, int flags) {
  return new QList< QListWidgetItem * >(this_ptr->findItems(*text, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT QList< QListWidgetItem * > * ctr_qt_widgets_ffi_QListWidget_items(QListWidget const * this_ptr, QMimeData const * data) {
  return new QList< QListWidgetItem * >(this_ptr->items(data));
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QListWidget_indexFromItem(QListWidget const * this_ptr, QListWidgetItem const * item) {
  return new QModelIndex(this_ptr->indexFromItem(item));
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidget_itemFromIndex(QListWidget const * this_ptr, QModelIndex const * index) {
  return this_ptr->itemFromIndex(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_setSupportedDragActions(QListWidget * this_ptr, int actions) {
  this_ptr->setSupportedDragActions(QFlags< Qt::DropAction >(actions));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QListWidget_supportedDragActions(QListWidget const * this_ptr) {
  return int(this_ptr->supportedDragActions());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_scrollToItem(QListWidget * this_ptr, QListWidgetItem const * item, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollToItem(item, hint);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_clear(QListWidget * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMainWindow_metaObject(QMainWindow const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QMainWindow_qt_metacast(QMainWindow * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMainWindow_qt_metacall(QMainWindow * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMainWindow_tr(char const * s, char const * c, int n) {
  return new QString(QMainWindow::tr(s, c, n));
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_QMainWindow_QMainWindow(QWidget * parent, int flags) {
  return new QMainWindow(parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_dQMainWindow(QMainWindow * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMainWindow_iconSize(QMainWindow const * this_ptr) {
  return new QSize(this_ptr->iconSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setIconSize(QMainWindow * this_ptr, QSize const * iconSize) {
  this_ptr->setIconSize(*iconSize);
}


RITUAL_EXPORT Qt::ToolButtonStyle ctr_qt_widgets_ffi_QMainWindow_toolButtonStyle(QMainWindow const * this_ptr) {
  return this_ptr->toolButtonStyle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setToolButtonStyle(QMainWindow * this_ptr, Qt::ToolButtonStyle toolButtonStyle) {
  this_ptr->setToolButtonStyle(toolButtonStyle);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_isAnimated(QMainWindow const * this_ptr) {
  return this_ptr->isAnimated();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_isDockNestingEnabled(QMainWindow const * this_ptr) {
  return this_ptr->isDockNestingEnabled();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_documentMode(QMainWindow const * this_ptr) {
  return this_ptr->documentMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setDocumentMode(QMainWindow * this_ptr, bool enabled) {
  this_ptr->setDocumentMode(enabled);
}


RITUAL_EXPORT QTabWidget::TabShape ctr_qt_widgets_ffi_QMainWindow_tabShape(QMainWindow const * this_ptr) {
  return this_ptr->tabShape();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setTabShape(QMainWindow * this_ptr, QTabWidget::TabShape tabShape) {
  this_ptr->setTabShape(tabShape);
}


RITUAL_EXPORT QTabWidget::TabPosition ctr_qt_widgets_ffi_QMainWindow_tabPosition(QMainWindow const * this_ptr, Qt::DockWidgetArea area) {
  return this_ptr->tabPosition(area);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setTabPosition(QMainWindow * this_ptr, int areas, QTabWidget::TabPosition tabPosition) {
  this_ptr->setTabPosition(QFlags< Qt::DockWidgetArea >(areas), tabPosition);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setDockOptions(QMainWindow * this_ptr, int options) {
  this_ptr->setDockOptions(QFlags< QMainWindow::DockOption >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMainWindow_dockOptions(QMainWindow const * this_ptr) {
  return int(this_ptr->dockOptions());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_isSeparator(QMainWindow const * this_ptr, QPoint const * pos) {
  return this_ptr->isSeparator(*pos);
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_QMainWindow_menuBar(QMainWindow const * this_ptr) {
  return this_ptr->menuBar();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setMenuBar(QMainWindow * this_ptr, QMenuBar * menubar) {
  this_ptr->setMenuBar(menubar);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMainWindow_menuWidget(QMainWindow const * this_ptr) {
  return this_ptr->menuWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setMenuWidget(QMainWindow * this_ptr, QWidget * menubar) {
  this_ptr->setMenuWidget(menubar);
}


RITUAL_EXPORT QStatusBar * ctr_qt_widgets_ffi_QMainWindow_statusBar(QMainWindow const * this_ptr) {
  return this_ptr->statusBar();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setStatusBar(QMainWindow * this_ptr, QStatusBar * statusbar) {
  this_ptr->setStatusBar(statusbar);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMainWindow_centralWidget(QMainWindow const * this_ptr) {
  return this_ptr->centralWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setCentralWidget(QMainWindow * this_ptr, QWidget * widget) {
  this_ptr->setCentralWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMainWindow_takeCentralWidget(QMainWindow * this_ptr) {
  return this_ptr->takeCentralWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setCorner(QMainWindow * this_ptr, Qt::Corner corner, Qt::DockWidgetArea area) {
  this_ptr->setCorner(corner, area);
}


RITUAL_EXPORT Qt::DockWidgetArea ctr_qt_widgets_ffi_QMainWindow_corner(QMainWindow const * this_ptr, Qt::Corner corner) {
  return this_ptr->corner(corner);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_addToolBarBreak(QMainWindow * this_ptr, Qt::ToolBarArea area) {
  this_ptr->addToolBarBreak(area);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_insertToolBarBreak(QMainWindow * this_ptr, QToolBar * before) {
  this_ptr->insertToolBarBreak(before);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_addToolBar(QMainWindow * this_ptr, Qt::ToolBarArea area, QToolBar * toolbar) {
  this_ptr->addToolBar(area, toolbar);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_addToolBar1(QMainWindow * this_ptr, QToolBar * toolbar) {
  this_ptr->addToolBar(toolbar);
}


RITUAL_EXPORT QToolBar * ctr_qt_widgets_ffi_QMainWindow_addToolBar2(QMainWindow * this_ptr, QString const * title) {
  return this_ptr->addToolBar(*title);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_insertToolBar(QMainWindow * this_ptr, QToolBar * before, QToolBar * toolbar) {
  this_ptr->insertToolBar(before, toolbar);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_removeToolBar(QMainWindow * this_ptr, QToolBar * toolbar) {
  this_ptr->removeToolBar(toolbar);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_removeToolBarBreak(QMainWindow * this_ptr, QToolBar * before) {
  this_ptr->removeToolBarBreak(before);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_unifiedTitleAndToolBarOnMac(QMainWindow const * this_ptr) {
  return this_ptr->unifiedTitleAndToolBarOnMac();
}


RITUAL_EXPORT Qt::ToolBarArea ctr_qt_widgets_ffi_QMainWindow_toolBarArea(QMainWindow const * this_ptr, QToolBar const * toolbar) {
  return this_ptr->toolBarArea(toolbar);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_toolBarBreak(QMainWindow const * this_ptr, QToolBar * toolbar) {
  return this_ptr->toolBarBreak(toolbar);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_addDockWidget(QMainWindow * this_ptr, Qt::DockWidgetArea area, QDockWidget * dockwidget) {
  this_ptr->addDockWidget(area, dockwidget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_addDockWidget1(QMainWindow * this_ptr, Qt::DockWidgetArea area, QDockWidget * dockwidget, Qt::Orientation orientation) {
  this_ptr->addDockWidget(area, dockwidget, orientation);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_splitDockWidget(QMainWindow * this_ptr, QDockWidget * after, QDockWidget * dockwidget, Qt::Orientation orientation) {
  this_ptr->splitDockWidget(after, dockwidget, orientation);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_tabifyDockWidget(QMainWindow * this_ptr, QDockWidget * first, QDockWidget * second) {
  this_ptr->tabifyDockWidget(first, second);
}


RITUAL_EXPORT QList< QDockWidget * > * ctr_qt_widgets_ffi_QMainWindow_tabifiedDockWidgets(QMainWindow const * this_ptr, QDockWidget * dockwidget) {
  return new QList< QDockWidget * >(this_ptr->tabifiedDockWidgets(dockwidget));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_removeDockWidget(QMainWindow * this_ptr, QDockWidget * dockwidget) {
  this_ptr->removeDockWidget(dockwidget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_restoreDockWidget(QMainWindow * this_ptr, QDockWidget * dockwidget) {
  return this_ptr->restoreDockWidget(dockwidget);
}


RITUAL_EXPORT Qt::DockWidgetArea ctr_qt_widgets_ffi_QMainWindow_dockWidgetArea(QMainWindow const * this_ptr, QDockWidget * dockwidget) {
  return this_ptr->dockWidgetArea(dockwidget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_resizeDocks(QMainWindow * this_ptr, QList< QDockWidget * > const * docks, QList< int > const * sizes, Qt::Orientation orientation) {
  this_ptr->resizeDocks(*docks, *sizes, orientation);
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QMainWindow_saveState(QMainWindow const * this_ptr, int version) {
  return new QByteArray(this_ptr->saveState(version));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_restoreState(QMainWindow * this_ptr, QByteArray const * state, int version) {
  return this_ptr->restoreState(*state, version);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMainWindow_createPopupMenu(QMainWindow * this_ptr) {
  return this_ptr->createPopupMenu();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setAnimated(QMainWindow * this_ptr, bool enabled) {
  this_ptr->setAnimated(enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setDockNestingEnabled(QMainWindow * this_ptr, bool enabled) {
  this_ptr->setDockNestingEnabled(enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_setUnifiedTitleAndToolBarOnMac(QMainWindow * this_ptr, bool set) {
  this_ptr->setUnifiedTitleAndToolBarOnMac(set);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMdiArea_metaObject(QMdiArea const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QMdiArea_qt_metacast(QMdiArea * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMdiArea_qt_metacall(QMdiArea * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMdiArea_tr(char const * s, char const * c, int n) {
  return new QString(QMdiArea::tr(s, c, n));
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_QMdiArea_QMdiArea(QWidget * parent) {
  return new QMdiArea(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_dQMdiArea(QMdiArea * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMdiArea_sizeHint(QMdiArea const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMdiArea_minimumSizeHint(QMdiArea const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_QMdiArea_currentSubWindow(QMdiArea const * this_ptr) {
  return this_ptr->currentSubWindow();
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_QMdiArea_activeSubWindow(QMdiArea const * this_ptr) {
  return this_ptr->activeSubWindow();
}


RITUAL_EXPORT QList< QMdiSubWindow * > * ctr_qt_widgets_ffi_QMdiArea_subWindowList(QMdiArea const * this_ptr, QMdiArea::WindowOrder order) {
  return new QList< QMdiSubWindow * >(this_ptr->subWindowList(order));
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_QMdiArea_addSubWindow(QMdiArea * this_ptr, QWidget * widget, int flags) {
  return this_ptr->addSubWindow(widget, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_removeSubWindow(QMdiArea * this_ptr, QWidget * widget) {
  this_ptr->removeSubWindow(widget);
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QMdiArea_background(QMdiArea const * this_ptr) {
  return new QBrush(this_ptr->background());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setBackground(QMdiArea * this_ptr, QBrush const * background) {
  this_ptr->setBackground(*background);
}


RITUAL_EXPORT QMdiArea::WindowOrder ctr_qt_widgets_ffi_QMdiArea_activationOrder(QMdiArea const * this_ptr) {
  return this_ptr->activationOrder();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setActivationOrder(QMdiArea * this_ptr, QMdiArea::WindowOrder order) {
  this_ptr->setActivationOrder(order);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setOption(QMdiArea * this_ptr, QMdiArea::AreaOption option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMdiArea_testOption(QMdiArea const * this_ptr, QMdiArea::AreaOption opton) {
  return this_ptr->testOption(opton);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setViewMode(QMdiArea * this_ptr, QMdiArea::ViewMode mode) {
  this_ptr->setViewMode(mode);
}


RITUAL_EXPORT QMdiArea::ViewMode ctr_qt_widgets_ffi_QMdiArea_viewMode(QMdiArea const * this_ptr) {
  return this_ptr->viewMode();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMdiArea_documentMode(QMdiArea const * this_ptr) {
  return this_ptr->documentMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setDocumentMode(QMdiArea * this_ptr, bool enabled) {
  this_ptr->setDocumentMode(enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setTabsClosable(QMdiArea * this_ptr, bool closable) {
  this_ptr->setTabsClosable(closable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMdiArea_tabsClosable(QMdiArea const * this_ptr) {
  return this_ptr->tabsClosable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setTabsMovable(QMdiArea * this_ptr, bool movable) {
  this_ptr->setTabsMovable(movable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMdiArea_tabsMovable(QMdiArea const * this_ptr) {
  return this_ptr->tabsMovable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setTabShape(QMdiArea * this_ptr, QTabWidget::TabShape shape) {
  this_ptr->setTabShape(shape);
}


RITUAL_EXPORT QTabWidget::TabShape ctr_qt_widgets_ffi_QMdiArea_tabShape(QMdiArea const * this_ptr) {
  return this_ptr->tabShape();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setTabPosition(QMdiArea * this_ptr, QTabWidget::TabPosition position) {
  this_ptr->setTabPosition(position);
}


RITUAL_EXPORT QTabWidget::TabPosition ctr_qt_widgets_ffi_QMdiArea_tabPosition(QMdiArea const * this_ptr) {
  return this_ptr->tabPosition();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setActiveSubWindow(QMdiArea * this_ptr, QMdiSubWindow * window) {
  this_ptr->setActiveSubWindow(window);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_tileSubWindows(QMdiArea * this_ptr) {
  this_ptr->tileSubWindows();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_cascadeSubWindows(QMdiArea * this_ptr) {
  this_ptr->cascadeSubWindows();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_closeActiveSubWindow(QMdiArea * this_ptr) {
  this_ptr->closeActiveSubWindow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_closeAllSubWindows(QMdiArea * this_ptr) {
  this_ptr->closeAllSubWindows();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_activateNextSubWindow(QMdiArea * this_ptr) {
  this_ptr->activateNextSubWindow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_activatePreviousSubWindow(QMdiArea * this_ptr) {
  this_ptr->activatePreviousSubWindow();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMdiSubWindow_metaObject(QMdiSubWindow const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QMdiSubWindow_qt_metacast(QMdiSubWindow * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMdiSubWindow_qt_metacall(QMdiSubWindow * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMdiSubWindow_tr(char const * s, char const * c, int n) {
  return new QString(QMdiSubWindow::tr(s, c, n));
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_QMdiSubWindow_QMdiSubWindow(QWidget * parent, int flags) {
  return new QMdiSubWindow(parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_dQMdiSubWindow(QMdiSubWindow * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMdiSubWindow_sizeHint(QMdiSubWindow const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMdiSubWindow_minimumSizeHint(QMdiSubWindow const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_setWidget(QMdiSubWindow * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMdiSubWindow_widget(QMdiSubWindow const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMdiSubWindow_maximizedButtonsWidget(QMdiSubWindow const * this_ptr) {
  return this_ptr->maximizedButtonsWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMdiSubWindow_maximizedSystemMenuIconWidget(QMdiSubWindow const * this_ptr) {
  return this_ptr->maximizedSystemMenuIconWidget();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMdiSubWindow_isShaded(QMdiSubWindow const * this_ptr) {
  return this_ptr->isShaded();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_setOption(QMdiSubWindow * this_ptr, QMdiSubWindow::SubWindowOption option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMdiSubWindow_testOption(QMdiSubWindow const * this_ptr, QMdiSubWindow::SubWindowOption arg1) {
  return this_ptr->testOption(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_setKeyboardSingleStep(QMdiSubWindow * this_ptr, int step) {
  this_ptr->setKeyboardSingleStep(step);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMdiSubWindow_keyboardSingleStep(QMdiSubWindow const * this_ptr) {
  return this_ptr->keyboardSingleStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_setKeyboardPageStep(QMdiSubWindow * this_ptr, int step) {
  this_ptr->setKeyboardPageStep(step);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMdiSubWindow_keyboardPageStep(QMdiSubWindow const * this_ptr) {
  return this_ptr->keyboardPageStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_setSystemMenu(QMdiSubWindow * this_ptr, QMenu * systemMenu) {
  this_ptr->setSystemMenu(systemMenu);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMdiSubWindow_systemMenu(QMdiSubWindow const * this_ptr) {
  return this_ptr->systemMenu();
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_QMdiSubWindow_mdiArea(QMdiSubWindow const * this_ptr) {
  return this_ptr->mdiArea();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_showSystemMenu(QMdiSubWindow * this_ptr) {
  this_ptr->showSystemMenu();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_showShaded(QMdiSubWindow * this_ptr) {
  this_ptr->showShaded();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMenu_metaObject(QMenu const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QMenu_qt_metacast(QMenu * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMenu_qt_metacall(QMenu * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMenu_tr(char const * s, char const * c, int n) {
  return new QString(QMenu::tr(s, c, n));
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenu_QMenu(QWidget * parent) {
  return new QMenu(parent);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenu_QMenu1(QString const * title, QWidget * parent) {
  return new QMenu(*title, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_dQMenu(QMenu * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_addAction(QMenu * this_ptr, QString const * text, QObject const * receiver, char const * member, QKeySequence const * shortcut) {
  return this_ptr->addAction(*text, receiver, member, *shortcut);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_addAction1(QMenu * this_ptr, QIcon const * icon, QString const * text, QObject const * receiver, char const * member, QKeySequence const * shortcut) {
  return this_ptr->addAction(*icon, *text, receiver, member, *shortcut);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_addMenu(QMenu * this_ptr, QMenu * menu) {
  return this_ptr->addMenu(menu);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenu_addMenu1(QMenu * this_ptr, QString const * title) {
  return this_ptr->addMenu(*title);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenu_addMenu2(QMenu * this_ptr, QIcon const * icon, QString const * title) {
  return this_ptr->addMenu(*icon, *title);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_addSeparator(QMenu * this_ptr) {
  return this_ptr->addSeparator();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_addSection(QMenu * this_ptr, QString const * text) {
  return this_ptr->addSection(*text);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_addSection1(QMenu * this_ptr, QIcon const * icon, QString const * text) {
  return this_ptr->addSection(*icon, *text);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_insertMenu(QMenu * this_ptr, QAction * before, QMenu * menu) {
  return this_ptr->insertMenu(before, menu);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_insertSeparator(QMenu * this_ptr, QAction * before) {
  return this_ptr->insertSeparator(before);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_insertSection(QMenu * this_ptr, QAction * before, QString const * text) {
  return this_ptr->insertSection(before, *text);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_insertSection1(QMenu * this_ptr, QAction * before, QIcon const * icon, QString const * text) {
  return this_ptr->insertSection(before, *icon, *text);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMenu_isEmpty(QMenu const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_clear(QMenu * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setTearOffEnabled(QMenu * this_ptr, bool arg1) {
  this_ptr->setTearOffEnabled(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMenu_isTearOffEnabled(QMenu const * this_ptr) {
  return this_ptr->isTearOffEnabled();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMenu_isTearOffMenuVisible(QMenu const * this_ptr) {
  return this_ptr->isTearOffMenuVisible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_showTearOffMenu(QMenu * this_ptr) {
  this_ptr->showTearOffMenu();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_showTearOffMenu1(QMenu * this_ptr, QPoint const * pos) {
  this_ptr->showTearOffMenu(*pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_hideTearOffMenu(QMenu * this_ptr) {
  this_ptr->hideTearOffMenu();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setDefaultAction(QMenu * this_ptr, QAction * arg1) {
  this_ptr->setDefaultAction(arg1);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_defaultAction(QMenu const * this_ptr) {
  return this_ptr->defaultAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setActiveAction(QMenu * this_ptr, QAction * act) {
  this_ptr->setActiveAction(act);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_activeAction(QMenu const * this_ptr) {
  return this_ptr->activeAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_popup(QMenu * this_ptr, QPoint const * pos, QAction * at) {
  this_ptr->popup(*pos, at);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_exec(QMenu * this_ptr) {
  return this_ptr->exec();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_exec1(QMenu * this_ptr, QPoint const * pos, QAction * at) {
  return this_ptr->exec(*pos, at);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_exec2(QList< QAction * > const * actions, QPoint const * pos, QAction * at, QWidget * parent) {
  return QMenu::exec(*actions, *pos, at, parent);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMenu_sizeHint(QMenu const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QMenu_actionGeometry(QMenu const * this_ptr, QAction * arg1) {
  return new QRect(this_ptr->actionGeometry(arg1));
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_actionAt(QMenu const * this_ptr, QPoint const * arg1) {
  return this_ptr->actionAt(*arg1);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_menuAction(QMenu const * this_ptr) {
  return this_ptr->menuAction();
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenu_menuInAction(QAction const * action) {
  return QMenu::menuInAction(action);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMenu_title(QMenu const * this_ptr) {
  return new QString(this_ptr->title());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setTitle(QMenu * this_ptr, QString const * title) {
  this_ptr->setTitle(*title);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QMenu_icon(QMenu const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setIcon(QMenu * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setNoReplayFor(QMenu * this_ptr, QWidget * widget) {
  this_ptr->setNoReplayFor(widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMenu_separatorsCollapsible(QMenu const * this_ptr) {
  return this_ptr->separatorsCollapsible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setSeparatorsCollapsible(QMenu * this_ptr, bool collapse) {
  this_ptr->setSeparatorsCollapsible(collapse);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMenu_toolTipsVisible(QMenu const * this_ptr) {
  return this_ptr->toolTipsVisible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_setToolTipsVisible(QMenu * this_ptr, bool visible) {
  this_ptr->setToolTipsVisible(visible);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMenuBar_metaObject(QMenuBar const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QMenuBar_qt_metacast(QMenuBar * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMenuBar_qt_metacall(QMenuBar * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMenuBar_tr(char const * s, char const * c, int n) {
  return new QString(QMenuBar::tr(s, c, n));
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_QMenuBar_QMenuBar(QWidget * parent) {
  return new QMenuBar(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_dQMenuBar(QMenuBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenuBar_addMenu(QMenuBar * this_ptr, QMenu * menu) {
  return this_ptr->addMenu(menu);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenuBar_addMenu1(QMenuBar * this_ptr, QString const * title) {
  return this_ptr->addMenu(*title);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenuBar_addMenu2(QMenuBar * this_ptr, QIcon const * icon, QString const * title) {
  return this_ptr->addMenu(*icon, *title);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenuBar_addSeparator(QMenuBar * this_ptr) {
  return this_ptr->addSeparator();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenuBar_insertSeparator(QMenuBar * this_ptr, QAction * before) {
  return this_ptr->insertSeparator(before);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenuBar_insertMenu(QMenuBar * this_ptr, QAction * before, QMenu * menu) {
  return this_ptr->insertMenu(before, menu);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_clear(QMenuBar * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenuBar_activeAction(QMenuBar const * this_ptr) {
  return this_ptr->activeAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_setActiveAction(QMenuBar * this_ptr, QAction * action) {
  this_ptr->setActiveAction(action);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_setDefaultUp(QMenuBar * this_ptr, bool arg1) {
  this_ptr->setDefaultUp(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMenuBar_isDefaultUp(QMenuBar const * this_ptr) {
  return this_ptr->isDefaultUp();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMenuBar_sizeHint(QMenuBar const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QMenuBar_minimumSizeHint(QMenuBar const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMenuBar_heightForWidth(QMenuBar const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QMenuBar_actionGeometry(QMenuBar const * this_ptr, QAction * arg1) {
  return new QRect(this_ptr->actionGeometry(arg1));
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenuBar_actionAt(QMenuBar const * this_ptr, QPoint const * arg1) {
  return this_ptr->actionAt(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_setCornerWidget(QMenuBar * this_ptr, QWidget * w, Qt::Corner corner) {
  this_ptr->setCornerWidget(w, corner);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMenuBar_cornerWidget(QMenuBar const * this_ptr, Qt::Corner corner) {
  return this_ptr->cornerWidget(corner);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMenuBar_isNativeMenuBar(QMenuBar const * this_ptr) {
  return this_ptr->isNativeMenuBar();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_setNativeMenuBar(QMenuBar * this_ptr, bool nativeMenuBar) {
  this_ptr->setNativeMenuBar(nativeMenuBar);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_setVisible(QMenuBar * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMessageBox_metaObject(QMessageBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QMessageBox_qt_metacast(QMessageBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_qt_metacall(QMessageBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMessageBox_tr(char const * s, char const * c, int n) {
  return new QString(QMessageBox::tr(s, c, n));
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox(QWidget * parent) {
  return new QMessageBox(parent);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox1(QMessageBox::Icon icon, QString const * title, QString const * text, int buttons, QWidget * parent, int flags) {
  return new QMessageBox(icon, *title, *text, QFlags< QMessageBox::StandardButton >(buttons), parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_dQMessageBox(QMessageBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_addButton(QMessageBox * this_ptr, QAbstractButton * button, QMessageBox::ButtonRole role) {
  this_ptr->addButton(button, role);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QMessageBox_addButton1(QMessageBox * this_ptr, QString const * text, QMessageBox::ButtonRole role) {
  return this_ptr->addButton(*text, role);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QMessageBox_addButton2(QMessageBox * this_ptr, QMessageBox::StandardButton button) {
  return this_ptr->addButton(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_removeButton(QMessageBox * this_ptr, QAbstractButton * button) {
  this_ptr->removeButton(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_open(QMessageBox * this_ptr, QObject * receiver, char const * member) {
  this_ptr->open(receiver, member);
}


RITUAL_EXPORT QList< QAbstractButton * > * ctr_qt_widgets_ffi_QMessageBox_buttons(QMessageBox const * this_ptr) {
  return new QList< QAbstractButton * >(this_ptr->buttons());
}


RITUAL_EXPORT QMessageBox::ButtonRole ctr_qt_widgets_ffi_QMessageBox_buttonRole(QMessageBox const * this_ptr, QAbstractButton * button) {
  return this_ptr->buttonRole(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setStandardButtons(QMessageBox * this_ptr, int buttons) {
  this_ptr->setStandardButtons(QFlags< QMessageBox::StandardButton >(buttons));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_standardButtons(QMessageBox const * this_ptr) {
  return int(this_ptr->standardButtons());
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_standardButton(QMessageBox const * this_ptr, QAbstractButton * button) {
  return this_ptr->standardButton(button);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_QMessageBox_button(QMessageBox const * this_ptr, QMessageBox::StandardButton which) {
  return this_ptr->button(which);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QMessageBox_defaultButton(QMessageBox const * this_ptr) {
  return this_ptr->defaultButton();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setDefaultButton(QMessageBox * this_ptr, QPushButton * button) {
  this_ptr->setDefaultButton(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setDefaultButton1(QMessageBox * this_ptr, QMessageBox::StandardButton button) {
  this_ptr->setDefaultButton(button);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_QMessageBox_escapeButton(QMessageBox const * this_ptr) {
  return this_ptr->escapeButton();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setEscapeButton(QMessageBox * this_ptr, QAbstractButton * button) {
  this_ptr->setEscapeButton(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setEscapeButton1(QMessageBox * this_ptr, QMessageBox::StandardButton button) {
  this_ptr->setEscapeButton(button);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_QMessageBox_clickedButton(QMessageBox const * this_ptr) {
  return this_ptr->clickedButton();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMessageBox_text(QMessageBox const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setText(QMessageBox * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QMessageBox::Icon ctr_qt_widgets_ffi_QMessageBox_icon(QMessageBox const * this_ptr) {
  return this_ptr->icon();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setIcon(QMessageBox * this_ptr, QMessageBox::Icon arg1) {
  this_ptr->setIcon(arg1);
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QMessageBox_iconPixmap(QMessageBox const * this_ptr) {
  return new QPixmap(this_ptr->iconPixmap());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setIconPixmap(QMessageBox * this_ptr, QPixmap const * pixmap) {
  this_ptr->setIconPixmap(*pixmap);
}


RITUAL_EXPORT Qt::TextFormat ctr_qt_widgets_ffi_QMessageBox_textFormat(QMessageBox const * this_ptr) {
  return this_ptr->textFormat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setTextFormat(QMessageBox * this_ptr, Qt::TextFormat format) {
  this_ptr->setTextFormat(format);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setTextInteractionFlags(QMessageBox * this_ptr, int flags) {
  this_ptr->setTextInteractionFlags(QFlags< Qt::TextInteractionFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_textInteractionFlags(QMessageBox const * this_ptr) {
  return int(this_ptr->textInteractionFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setCheckBox(QMessageBox * this_ptr, QCheckBox * cb) {
  this_ptr->setCheckBox(cb);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_QMessageBox_checkBox(QMessageBox const * this_ptr) {
  return this_ptr->checkBox();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setOption(QMessageBox * this_ptr, QMessageBox::Option option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMessageBox_testOption(QMessageBox const * this_ptr, QMessageBox::Option option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setOptions(QMessageBox * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QMessageBox::Option >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_options(QMessageBox const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_information(QWidget * parent, QString const * title, QString const * text, int buttons, QMessageBox::StandardButton defaultButton) {
  return QMessageBox::information(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons), defaultButton);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_information1(QWidget * parent, QString const * title, QString const * text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return QMessageBox::information(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_question(QWidget * parent, QString const * title, QString const * text, int buttons, QMessageBox::StandardButton defaultButton) {
  return QMessageBox::question(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons), defaultButton);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question1(QWidget * parent, QString const * title, QString const * text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return QMessageBox::question(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_warning(QWidget * parent, QString const * title, QString const * text, int buttons, QMessageBox::StandardButton defaultButton) {
  return QMessageBox::warning(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons), defaultButton);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning1(QWidget * parent, QString const * title, QString const * text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return QMessageBox::warning(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_critical(QWidget * parent, QString const * title, QString const * text, int buttons, QMessageBox::StandardButton defaultButton) {
  return QMessageBox::critical(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons), defaultButton);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical1(QWidget * parent, QString const * title, QString const * text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return QMessageBox::critical(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_about(QWidget * parent, QString const * title, QString const * text) {
  QMessageBox::about(parent, *title, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_aboutQt(QWidget * parent, QString const * title) {
  QMessageBox::aboutQt(parent, *title);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox2(QString const * title, QString const * text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, int f) {
  return new QMessageBox(*title, *text, icon, button0, button1, button2, parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information2(QWidget * parent, QString const * title, QString const * text, int button0, int button1, int button2) {
  return QMessageBox::information(parent, *title, *text, button0, button1, button2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information3(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return QMessageBox::information(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question2(QWidget * parent, QString const * title, QString const * text, int button0, int button1, int button2) {
  return QMessageBox::question(parent, *title, *text, button0, button1, button2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question3(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return QMessageBox::question(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning2(QWidget * parent, QString const * title, QString const * text, int button0, int button1, int button2) {
  return QMessageBox::warning(parent, *title, *text, button0, button1, button2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning3(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return QMessageBox::warning(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical2(QWidget * parent, QString const * title, QString const * text, int button0, int button1, int button2) {
  return QMessageBox::critical(parent, *title, *text, button0, button1, button2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical3(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return QMessageBox::critical(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMessageBox_buttonText(QMessageBox const * this_ptr, int button) {
  return new QString(this_ptr->buttonText(button));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setButtonText(QMessageBox * this_ptr, int button, QString const * text) {
  this_ptr->setButtonText(button, *text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMessageBox_informativeText(QMessageBox const * this_ptr) {
  return new QString(this_ptr->informativeText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setInformativeText(QMessageBox * this_ptr, QString const * text) {
  this_ptr->setInformativeText(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QMessageBox_detailedText(QMessageBox const * this_ptr) {
  return new QString(this_ptr->detailedText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setDetailedText(QMessageBox * this_ptr, QString const * text) {
  this_ptr->setDetailedText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setWindowTitle(QMessageBox * this_ptr, QString const * title) {
  this_ptr->setWindowTitle(*title);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setWindowModality(QMessageBox * this_ptr, Qt::WindowModality windowModality) {
  this_ptr->setWindowModality(windowModality);
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QMessageBox_standardIcon(QMessageBox::Icon icon) {
  return new QPixmap(QMessageBox::standardIcon(icon));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTextEdit_metaObject(QTextEdit const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTextEdit_qt_metacast(QTextEdit * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextEdit_qt_metacall(QTextEdit * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_tr(char const * s, char const * c, int n) {
  return new QString(QTextEdit::tr(s, c, n));
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_QTextEdit_QTextEdit(QWidget * parent) {
  return new QTextEdit(parent);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_QTextEdit_QTextEdit1(QString const * text, QWidget * parent) {
  return new QTextEdit(*text, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_dQTextEdit(QTextEdit * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setDocument(QTextEdit * this_ptr, QTextDocument * document) {
  this_ptr->setDocument(document);
}


RITUAL_EXPORT QTextDocument * ctr_qt_widgets_ffi_QTextEdit_document(QTextEdit const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setPlaceholderText(QTextEdit * this_ptr, QString const * placeholderText) {
  this_ptr->setPlaceholderText(*placeholderText);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_placeholderText(QTextEdit const * this_ptr) {
  return new QString(this_ptr->placeholderText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setTextCursor(QTextEdit * this_ptr, QTextCursor const * cursor) {
  this_ptr->setTextCursor(*cursor);
}


RITUAL_EXPORT QTextCursor * ctr_qt_widgets_ffi_QTextEdit_textCursor(QTextEdit const * this_ptr) {
  return new QTextCursor(this_ptr->textCursor());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_isReadOnly(QTextEdit const * this_ptr) {
  return this_ptr->isReadOnly();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setReadOnly(QTextEdit * this_ptr, bool ro) {
  this_ptr->setReadOnly(ro);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setTextInteractionFlags(QTextEdit * this_ptr, int flags) {
  this_ptr->setTextInteractionFlags(QFlags< Qt::TextInteractionFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextEdit_textInteractionFlags(QTextEdit const * this_ptr) {
  return int(this_ptr->textInteractionFlags());
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QTextEdit_fontPointSize(QTextEdit const * this_ptr) {
  return this_ptr->fontPointSize();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_fontFamily(QTextEdit const * this_ptr) {
  return new QString(this_ptr->fontFamily());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextEdit_fontWeight(QTextEdit const * this_ptr) {
  return this_ptr->fontWeight();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_fontUnderline(QTextEdit const * this_ptr) {
  return this_ptr->fontUnderline();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_fontItalic(QTextEdit const * this_ptr) {
  return this_ptr->fontItalic();
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QTextEdit_textColor(QTextEdit const * this_ptr) {
  return new QColor(this_ptr->textColor());
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QTextEdit_textBackgroundColor(QTextEdit const * this_ptr) {
  return new QColor(this_ptr->textBackgroundColor());
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QTextEdit_currentFont(QTextEdit const * this_ptr) {
  return new QFont(this_ptr->currentFont());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextEdit_alignment(QTextEdit const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_mergeCurrentCharFormat(QTextEdit * this_ptr, QTextCharFormat const * modifier) {
  this_ptr->mergeCurrentCharFormat(*modifier);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setCurrentCharFormat(QTextEdit * this_ptr, QTextCharFormat const * format) {
  this_ptr->setCurrentCharFormat(*format);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_widgets_ffi_QTextEdit_currentCharFormat(QTextEdit const * this_ptr) {
  return new QTextCharFormat(this_ptr->currentCharFormat());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextEdit_autoFormatting(QTextEdit const * this_ptr) {
  return int(this_ptr->autoFormatting());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setAutoFormatting(QTextEdit * this_ptr, int features) {
  this_ptr->setAutoFormatting(QFlags< QTextEdit::AutoFormattingFlag >(features));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_tabChangesFocus(QTextEdit const * this_ptr) {
  return this_ptr->tabChangesFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setTabChangesFocus(QTextEdit * this_ptr, bool b) {
  this_ptr->setTabChangesFocus(b);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setDocumentTitle(QTextEdit * this_ptr, QString const * title) {
  this_ptr->setDocumentTitle(*title);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_documentTitle(QTextEdit const * this_ptr) {
  return new QString(this_ptr->documentTitle());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_isUndoRedoEnabled(QTextEdit const * this_ptr) {
  return this_ptr->isUndoRedoEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setUndoRedoEnabled(QTextEdit * this_ptr, bool enable) {
  this_ptr->setUndoRedoEnabled(enable);
}


RITUAL_EXPORT QTextEdit::LineWrapMode ctr_qt_widgets_ffi_QTextEdit_lineWrapMode(QTextEdit const * this_ptr) {
  return this_ptr->lineWrapMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setLineWrapMode(QTextEdit * this_ptr, QTextEdit::LineWrapMode mode) {
  this_ptr->setLineWrapMode(mode);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextEdit_lineWrapColumnOrWidth(QTextEdit const * this_ptr) {
  return this_ptr->lineWrapColumnOrWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setLineWrapColumnOrWidth(QTextEdit * this_ptr, int w) {
  this_ptr->setLineWrapColumnOrWidth(w);
}


RITUAL_EXPORT QTextOption::WrapMode ctr_qt_widgets_ffi_QTextEdit_wordWrapMode(QTextEdit const * this_ptr) {
  return this_ptr->wordWrapMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setWordWrapMode(QTextEdit * this_ptr, QTextOption::WrapMode policy) {
  this_ptr->setWordWrapMode(policy);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_find(QTextEdit * this_ptr, QString const * exp, int options) {
  return this_ptr->find(*exp, QFlags< QTextDocument::FindFlag >(options));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_find1(QTextEdit * this_ptr, QRegularExpression const * exp, int options) {
  return this_ptr->find(*exp, QFlags< QTextDocument::FindFlag >(options));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_toPlainText(QTextEdit const * this_ptr) {
  return new QString(this_ptr->toPlainText());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_toHtml(QTextEdit const * this_ptr) {
  return new QString(this_ptr->toHtml());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_toMarkdown(QTextEdit const * this_ptr, int features) {
  return new QString(this_ptr->toMarkdown(QFlags< QTextDocument::MarkdownFeature >(features)));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_ensureCursorVisible(QTextEdit * this_ptr) {
  this_ptr->ensureCursorVisible();
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QTextEdit_loadResource(QTextEdit * this_ptr, int type, QUrl const * name) {
  return new QVariant(this_ptr->loadResource(type, *name));
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QTextEdit_createStandardContextMenu(QTextEdit * this_ptr) {
  return this_ptr->createStandardContextMenu();
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QTextEdit_createStandardContextMenu1(QTextEdit * this_ptr, QPoint const * position) {
  return this_ptr->createStandardContextMenu(*position);
}


RITUAL_EXPORT QTextCursor * ctr_qt_widgets_ffi_QTextEdit_cursorForPosition(QTextEdit const * this_ptr, QPoint const * pos) {
  return new QTextCursor(this_ptr->cursorForPosition(*pos));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QTextEdit_cursorRect(QTextEdit const * this_ptr, QTextCursor const * cursor) {
  return new QRect(this_ptr->cursorRect(*cursor));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QTextEdit_cursorRect1(QTextEdit const * this_ptr) {
  return new QRect(this_ptr->cursorRect());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_anchorAt(QTextEdit const * this_ptr, QPoint const * pos) {
  return new QString(this_ptr->anchorAt(*pos));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_overwriteMode(QTextEdit const * this_ptr) {
  return this_ptr->overwriteMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setOverwriteMode(QTextEdit * this_ptr, bool overwrite) {
  this_ptr->setOverwriteMode(overwrite);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QTextEdit_tabStopDistance(QTextEdit const * this_ptr) {
  return this_ptr->tabStopDistance();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setTabStopDistance(QTextEdit * this_ptr, double distance) {
  this_ptr->setTabStopDistance(distance);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTextEdit_cursorWidth(QTextEdit const * this_ptr) {
  return this_ptr->cursorWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setCursorWidth(QTextEdit * this_ptr, int width) {
  this_ptr->setCursorWidth(width);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_acceptRichText(QTextEdit const * this_ptr) {
  return this_ptr->acceptRichText();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setAcceptRichText(QTextEdit * this_ptr, bool accept) {
  this_ptr->setAcceptRichText(accept);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setExtraSelections(QTextEdit * this_ptr, QList< QTextEdit::ExtraSelection > const * selections) {
  this_ptr->setExtraSelections(*selections);
}


RITUAL_EXPORT QList< QTextEdit::ExtraSelection > * ctr_qt_widgets_ffi_QTextEdit_extraSelections(QTextEdit const * this_ptr) {
  return new QList< QTextEdit::ExtraSelection >(this_ptr->extraSelections());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_moveCursor(QTextEdit * this_ptr, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode) {
  this_ptr->moveCursor(operation, mode);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_canPaste(QTextEdit const * this_ptr) {
  return this_ptr->canPaste();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_print(QTextEdit const * this_ptr, QPagedPaintDevice * printer) {
  this_ptr->print(printer);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QTextEdit_inputMethodQuery(QTextEdit const * this_ptr, Qt::InputMethodQuery property) {
  return new QVariant(this_ptr->inputMethodQuery(property));
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QTextEdit_inputMethodQuery1(QTextEdit const * this_ptr, Qt::InputMethodQuery query, QVariant const * argument) {
  return new QVariant(this_ptr->inputMethodQuery(query, *argument));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setFontPointSize(QTextEdit * this_ptr, double s) {
  this_ptr->setFontPointSize(s);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setFontFamily(QTextEdit * this_ptr, QString const * fontFamily) {
  this_ptr->setFontFamily(*fontFamily);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setFontWeight(QTextEdit * this_ptr, int w) {
  this_ptr->setFontWeight(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setFontUnderline(QTextEdit * this_ptr, bool b) {
  this_ptr->setFontUnderline(b);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setFontItalic(QTextEdit * this_ptr, bool b) {
  this_ptr->setFontItalic(b);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setTextColor(QTextEdit * this_ptr, QColor const * c) {
  this_ptr->setTextColor(*c);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setTextBackgroundColor(QTextEdit * this_ptr, QColor const * c) {
  this_ptr->setTextBackgroundColor(*c);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setCurrentFont(QTextEdit * this_ptr, QFont const * f) {
  this_ptr->setCurrentFont(*f);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setAlignment(QTextEdit * this_ptr, int a) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(a));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setPlainText(QTextEdit * this_ptr, QString const * text) {
  this_ptr->setPlainText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setHtml(QTextEdit * this_ptr, QString const * text) {
  this_ptr->setHtml(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setMarkdown(QTextEdit * this_ptr, QString const * markdown) {
  this_ptr->setMarkdown(*markdown);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_setText(QTextEdit * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_cut(QTextEdit * this_ptr) {
  this_ptr->cut();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_copy(QTextEdit * this_ptr) {
  this_ptr->copy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_paste(QTextEdit * this_ptr) {
  this_ptr->paste();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_undo(QTextEdit * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_redo(QTextEdit * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_clear(QTextEdit * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_selectAll(QTextEdit * this_ptr) {
  this_ptr->selectAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_insertPlainText(QTextEdit * this_ptr, QString const * text) {
  this_ptr->insertPlainText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_insertHtml(QTextEdit * this_ptr, QString const * text) {
  this_ptr->insertHtml(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_append(QTextEdit * this_ptr, QString const * text) {
  this_ptr->append(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_scrollToAnchor(QTextEdit * this_ptr, QString const * name) {
  this_ptr->scrollToAnchor(*name);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_zoomIn(QTextEdit * this_ptr, int range) {
  this_ptr->zoomIn(range);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_zoomOut(QTextEdit * this_ptr, int range) {
  this_ptr->zoomOut(range);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPlainTextEdit_metaObject(QPlainTextEdit const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QPlainTextEdit_qt_metacast(QPlainTextEdit * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextEdit_qt_metacall(QPlainTextEdit * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPlainTextEdit_tr(char const * s, char const * c, int n) {
  return new QString(QPlainTextEdit::tr(s, c, n));
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_QPlainTextEdit_QPlainTextEdit(QWidget * parent) {
  return new QPlainTextEdit(parent);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_QPlainTextEdit_QPlainTextEdit1(QString const * text, QWidget * parent) {
  return new QPlainTextEdit(*text, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_dQPlainTextEdit(QPlainTextEdit * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setDocument(QPlainTextEdit * this_ptr, QTextDocument * document) {
  this_ptr->setDocument(document);
}


RITUAL_EXPORT QTextDocument * ctr_qt_widgets_ffi_QPlainTextEdit_document(QPlainTextEdit const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setPlaceholderText(QPlainTextEdit * this_ptr, QString const * placeholderText) {
  this_ptr->setPlaceholderText(*placeholderText);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPlainTextEdit_placeholderText(QPlainTextEdit const * this_ptr) {
  return new QString(this_ptr->placeholderText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setTextCursor(QPlainTextEdit * this_ptr, QTextCursor const * cursor) {
  this_ptr->setTextCursor(*cursor);
}


RITUAL_EXPORT QTextCursor * ctr_qt_widgets_ffi_QPlainTextEdit_textCursor(QPlainTextEdit const * this_ptr) {
  return new QTextCursor(this_ptr->textCursor());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_isReadOnly(QPlainTextEdit const * this_ptr) {
  return this_ptr->isReadOnly();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setReadOnly(QPlainTextEdit * this_ptr, bool ro) {
  this_ptr->setReadOnly(ro);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setTextInteractionFlags(QPlainTextEdit * this_ptr, int flags) {
  this_ptr->setTextInteractionFlags(QFlags< Qt::TextInteractionFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextEdit_textInteractionFlags(QPlainTextEdit const * this_ptr) {
  return int(this_ptr->textInteractionFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_mergeCurrentCharFormat(QPlainTextEdit * this_ptr, QTextCharFormat const * modifier) {
  this_ptr->mergeCurrentCharFormat(*modifier);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setCurrentCharFormat(QPlainTextEdit * this_ptr, QTextCharFormat const * format) {
  this_ptr->setCurrentCharFormat(*format);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_widgets_ffi_QPlainTextEdit_currentCharFormat(QPlainTextEdit const * this_ptr) {
  return new QTextCharFormat(this_ptr->currentCharFormat());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_tabChangesFocus(QPlainTextEdit const * this_ptr) {
  return this_ptr->tabChangesFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setTabChangesFocus(QPlainTextEdit * this_ptr, bool b) {
  this_ptr->setTabChangesFocus(b);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setDocumentTitle(QPlainTextEdit * this_ptr, QString const * title) {
  this_ptr->setDocumentTitle(*title);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPlainTextEdit_documentTitle(QPlainTextEdit const * this_ptr) {
  return new QString(this_ptr->documentTitle());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_isUndoRedoEnabled(QPlainTextEdit const * this_ptr) {
  return this_ptr->isUndoRedoEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setUndoRedoEnabled(QPlainTextEdit * this_ptr, bool enable) {
  this_ptr->setUndoRedoEnabled(enable);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setMaximumBlockCount(QPlainTextEdit * this_ptr, int maximum) {
  this_ptr->setMaximumBlockCount(maximum);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextEdit_maximumBlockCount(QPlainTextEdit const * this_ptr) {
  return this_ptr->maximumBlockCount();
}


RITUAL_EXPORT QPlainTextEdit::LineWrapMode ctr_qt_widgets_ffi_QPlainTextEdit_lineWrapMode(QPlainTextEdit const * this_ptr) {
  return this_ptr->lineWrapMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setLineWrapMode(QPlainTextEdit * this_ptr, QPlainTextEdit::LineWrapMode mode) {
  this_ptr->setLineWrapMode(mode);
}


RITUAL_EXPORT QTextOption::WrapMode ctr_qt_widgets_ffi_QPlainTextEdit_wordWrapMode(QPlainTextEdit const * this_ptr) {
  return this_ptr->wordWrapMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setWordWrapMode(QPlainTextEdit * this_ptr, QTextOption::WrapMode policy) {
  this_ptr->setWordWrapMode(policy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setBackgroundVisible(QPlainTextEdit * this_ptr, bool visible) {
  this_ptr->setBackgroundVisible(visible);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_backgroundVisible(QPlainTextEdit const * this_ptr) {
  return this_ptr->backgroundVisible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setCenterOnScroll(QPlainTextEdit * this_ptr, bool enabled) {
  this_ptr->setCenterOnScroll(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_centerOnScroll(QPlainTextEdit const * this_ptr) {
  return this_ptr->centerOnScroll();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_find(QPlainTextEdit * this_ptr, QString const * exp, int options) {
  return this_ptr->find(*exp, QFlags< QTextDocument::FindFlag >(options));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_find1(QPlainTextEdit * this_ptr, QRegularExpression const * exp, int options) {
  return this_ptr->find(*exp, QFlags< QTextDocument::FindFlag >(options));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPlainTextEdit_toPlainText(QPlainTextEdit const * this_ptr) {
  return new QString(this_ptr->toPlainText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_ensureCursorVisible(QPlainTextEdit * this_ptr) {
  this_ptr->ensureCursorVisible();
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QPlainTextEdit_loadResource(QPlainTextEdit * this_ptr, int type, QUrl const * name) {
  return new QVariant(this_ptr->loadResource(type, *name));
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QPlainTextEdit_createStandardContextMenu(QPlainTextEdit * this_ptr) {
  return this_ptr->createStandardContextMenu();
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QPlainTextEdit_createStandardContextMenu1(QPlainTextEdit * this_ptr, QPoint const * position) {
  return this_ptr->createStandardContextMenu(*position);
}


RITUAL_EXPORT QTextCursor * ctr_qt_widgets_ffi_QPlainTextEdit_cursorForPosition(QPlainTextEdit const * this_ptr, QPoint const * pos) {
  return new QTextCursor(this_ptr->cursorForPosition(*pos));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QPlainTextEdit_cursorRect(QPlainTextEdit const * this_ptr, QTextCursor const * cursor) {
  return new QRect(this_ptr->cursorRect(*cursor));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QPlainTextEdit_cursorRect1(QPlainTextEdit const * this_ptr) {
  return new QRect(this_ptr->cursorRect());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPlainTextEdit_anchorAt(QPlainTextEdit const * this_ptr, QPoint const * pos) {
  return new QString(this_ptr->anchorAt(*pos));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_overwriteMode(QPlainTextEdit const * this_ptr) {
  return this_ptr->overwriteMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setOverwriteMode(QPlainTextEdit * this_ptr, bool overwrite) {
  this_ptr->setOverwriteMode(overwrite);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPlainTextEdit_tabStopDistance(QPlainTextEdit const * this_ptr) {
  return this_ptr->tabStopDistance();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setTabStopDistance(QPlainTextEdit * this_ptr, double distance) {
  this_ptr->setTabStopDistance(distance);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextEdit_cursorWidth(QPlainTextEdit const * this_ptr) {
  return this_ptr->cursorWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setCursorWidth(QPlainTextEdit * this_ptr, int width) {
  this_ptr->setCursorWidth(width);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setExtraSelections(QPlainTextEdit * this_ptr, QList< QTextEdit::ExtraSelection > const * selections) {
  this_ptr->setExtraSelections(*selections);
}


RITUAL_EXPORT QList< QTextEdit::ExtraSelection > * ctr_qt_widgets_ffi_QPlainTextEdit_extraSelections(QPlainTextEdit const * this_ptr) {
  return new QList< QTextEdit::ExtraSelection >(this_ptr->extraSelections());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_moveCursor(QPlainTextEdit * this_ptr, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode) {
  this_ptr->moveCursor(operation, mode);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_canPaste(QPlainTextEdit const * this_ptr) {
  return this_ptr->canPaste();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_print(QPlainTextEdit const * this_ptr, QPagedPaintDevice * printer) {
  this_ptr->print(printer);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextEdit_blockCount(QPlainTextEdit const * this_ptr) {
  return this_ptr->blockCount();
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QPlainTextEdit_inputMethodQuery(QPlainTextEdit const * this_ptr, Qt::InputMethodQuery property) {
  return new QVariant(this_ptr->inputMethodQuery(property));
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QPlainTextEdit_inputMethodQuery1(QPlainTextEdit const * this_ptr, Qt::InputMethodQuery query, QVariant const * argument) {
  return new QVariant(this_ptr->inputMethodQuery(query, *argument));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_setPlainText(QPlainTextEdit * this_ptr, QString const * text) {
  this_ptr->setPlainText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_cut(QPlainTextEdit * this_ptr) {
  this_ptr->cut();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_copy(QPlainTextEdit * this_ptr) {
  this_ptr->copy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_paste(QPlainTextEdit * this_ptr) {
  this_ptr->paste();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_undo(QPlainTextEdit * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_redo(QPlainTextEdit * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_clear(QPlainTextEdit * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_selectAll(QPlainTextEdit * this_ptr) {
  this_ptr->selectAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_insertPlainText(QPlainTextEdit * this_ptr, QString const * text) {
  this_ptr->insertPlainText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_appendPlainText(QPlainTextEdit * this_ptr, QString const * text) {
  this_ptr->appendPlainText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_appendHtml(QPlainTextEdit * this_ptr, QString const * html) {
  this_ptr->appendHtml(*html);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_centerCursor(QPlainTextEdit * this_ptr) {
  this_ptr->centerCursor();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_zoomIn(QPlainTextEdit * this_ptr, int range) {
  this_ptr->zoomIn(range);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_zoomOut(QPlainTextEdit * this_ptr, int range) {
  this_ptr->zoomOut(range);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_metaObject(QPlainTextDocumentLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_qt_metacast(QPlainTextDocumentLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextDocumentLayout_qt_metacall(QPlainTextDocumentLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_tr(char const * s, char const * c, int n) {
  return new QString(QPlainTextDocumentLayout::tr(s, c, n));
}


RITUAL_EXPORT QPlainTextDocumentLayout * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_QPlainTextDocumentLayout(QTextDocument * document) {
  return new QPlainTextDocumentLayout(document);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextDocumentLayout_dQPlainTextDocumentLayout(QPlainTextDocumentLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextDocumentLayout_draw(QPlainTextDocumentLayout * this_ptr, QPainter * arg1, QAbstractTextDocumentLayout::PaintContext const * arg2) {
  this_ptr->draw(arg1, *arg2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextDocumentLayout_hitTest(QPlainTextDocumentLayout const * this_ptr, QPointF const * arg1, Qt::HitTestAccuracy arg2) {
  return this_ptr->hitTest(*arg1, arg2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextDocumentLayout_pageCount(QPlainTextDocumentLayout const * this_ptr) {
  return this_ptr->pageCount();
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_documentSize(QPlainTextDocumentLayout const * this_ptr) {
  return new QSizeF(this_ptr->documentSize());
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_frameBoundingRect(QPlainTextDocumentLayout const * this_ptr, QTextFrame * arg1) {
  return new QRectF(this_ptr->frameBoundingRect(arg1));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_blockBoundingRect(QPlainTextDocumentLayout const * this_ptr, QTextBlock const * block) {
  return new QRectF(this_ptr->blockBoundingRect(*block));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextDocumentLayout_ensureBlockLayout(QPlainTextDocumentLayout const * this_ptr, QTextBlock const * block) {
  this_ptr->ensureBlockLayout(*block);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextDocumentLayout_setCursorWidth(QPlainTextDocumentLayout * this_ptr, int width) {
  this_ptr->setCursorWidth(width);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPlainTextDocumentLayout_cursorWidth(QPlainTextDocumentLayout const * this_ptr) {
  return this_ptr->cursorWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextDocumentLayout_requestUpdate(QPlainTextDocumentLayout * this_ptr) {
  this_ptr->requestUpdate();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QProgressBar_metaObject(QProgressBar const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QProgressBar_qt_metacast(QProgressBar * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressBar_qt_metacall(QProgressBar * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QProgressBar_tr(char const * s, char const * c, int n) {
  return new QString(QProgressBar::tr(s, c, n));
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_QProgressBar_QProgressBar(QWidget * parent) {
  return new QProgressBar(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_dQProgressBar(QProgressBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressBar_minimum(QProgressBar const * this_ptr) {
  return this_ptr->minimum();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressBar_maximum(QProgressBar const * this_ptr) {
  return this_ptr->maximum();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressBar_value(QProgressBar const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QProgressBar_text(QProgressBar const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setTextVisible(QProgressBar * this_ptr, bool visible) {
  this_ptr->setTextVisible(visible);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QProgressBar_isTextVisible(QProgressBar const * this_ptr) {
  return this_ptr->isTextVisible();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressBar_alignment(QProgressBar const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setAlignment(QProgressBar * this_ptr, int alignment) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QProgressBar_sizeHint(QProgressBar const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QProgressBar_minimumSizeHint(QProgressBar const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QProgressBar_orientation(QProgressBar const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setInvertedAppearance(QProgressBar * this_ptr, bool invert) {
  this_ptr->setInvertedAppearance(invert);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QProgressBar_invertedAppearance(QProgressBar const * this_ptr) {
  return this_ptr->invertedAppearance();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setTextDirection(QProgressBar * this_ptr, QProgressBar::Direction textDirection) {
  this_ptr->setTextDirection(textDirection);
}


RITUAL_EXPORT QProgressBar::Direction ctr_qt_widgets_ffi_QProgressBar_textDirection(QProgressBar const * this_ptr) {
  return this_ptr->textDirection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setFormat(QProgressBar * this_ptr, QString const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_resetFormat(QProgressBar * this_ptr) {
  this_ptr->resetFormat();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QProgressBar_format(QProgressBar const * this_ptr) {
  return new QString(this_ptr->format());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_reset(QProgressBar * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setRange(QProgressBar * this_ptr, int minimum, int maximum) {
  this_ptr->setRange(minimum, maximum);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setMinimum(QProgressBar * this_ptr, int minimum) {
  this_ptr->setMinimum(minimum);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setMaximum(QProgressBar * this_ptr, int maximum) {
  this_ptr->setMaximum(maximum);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setValue(QProgressBar * this_ptr, int value) {
  this_ptr->setValue(value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressBar_setOrientation(QProgressBar * this_ptr, Qt::Orientation arg1) {
  this_ptr->setOrientation(arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QProgressDialog_metaObject(QProgressDialog const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QProgressDialog_qt_metacast(QProgressDialog * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressDialog_qt_metacall(QProgressDialog * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QProgressDialog_tr(char const * s, char const * c, int n) {
  return new QString(QProgressDialog::tr(s, c, n));
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_QProgressDialog_QProgressDialog(QWidget * parent, int flags) {
  return new QProgressDialog(parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_QProgressDialog_QProgressDialog1(QString const * labelText, QString const * cancelButtonText, int minimum, int maximum, QWidget * parent, int flags) {
  return new QProgressDialog(*labelText, *cancelButtonText, minimum, maximum, parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_dQProgressDialog(QProgressDialog * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setLabel(QProgressDialog * this_ptr, QLabel * label) {
  this_ptr->setLabel(label);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setCancelButton(QProgressDialog * this_ptr, QPushButton * button) {
  this_ptr->setCancelButton(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setBar(QProgressDialog * this_ptr, QProgressBar * bar) {
  this_ptr->setBar(bar);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QProgressDialog_wasCanceled(QProgressDialog const * this_ptr) {
  return this_ptr->wasCanceled();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressDialog_minimum(QProgressDialog const * this_ptr) {
  return this_ptr->minimum();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressDialog_maximum(QProgressDialog const * this_ptr) {
  return this_ptr->maximum();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressDialog_value(QProgressDialog const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QProgressDialog_sizeHint(QProgressDialog const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QProgressDialog_labelText(QProgressDialog const * this_ptr) {
  return new QString(this_ptr->labelText());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProgressDialog_minimumDuration(QProgressDialog const * this_ptr) {
  return this_ptr->minimumDuration();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProgressDialog_setAutoReset(QProgressDialog * this_ptr, bool reset) {
  this_ptr->setAutoReset(reset);
}


} // extern "C"
