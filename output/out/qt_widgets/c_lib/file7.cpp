#include "qt_widgets_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadeRect9(QPainter * p, QRect const * r, QPalette const * pal) {
  qDrawShadeRect(p, *r, *pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel2(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken, int lineWidth) {
  qDrawShadePanel(p, x, y, w, h, *pal, sunken, lineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel3(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken) {
  qDrawShadePanel(p, x, y, w, h, *pal, sunken);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel4(QPainter * p, int x, int y, int w, int h, QPalette const * pal) {
  qDrawShadePanel(p, x, y, w, h, *pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel5(QPainter * p, QRect const * r, QPalette const * pal, bool sunken, int lineWidth) {
  qDrawShadePanel(p, *r, *pal, sunken, lineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel6(QPainter * p, QRect const * r, QPalette const * pal, bool sunken) {
  qDrawShadePanel(p, *r, *pal, sunken);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel7(QPainter * p, QRect const * r, QPalette const * pal) {
  qDrawShadePanel(p, *r, *pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinButton2(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken) {
  qDrawWinButton(p, x, y, w, h, *pal, sunken);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinButton3(QPainter * p, int x, int y, int w, int h, QPalette const * pal) {
  qDrawWinButton(p, x, y, w, h, *pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinButton4(QPainter * p, QRect const * r, QPalette const * pal, bool sunken) {
  qDrawWinButton(p, *r, *pal, sunken);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinButton5(QPainter * p, QRect const * r, QPalette const * pal) {
  qDrawWinButton(p, *r, *pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinPanel2(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken) {
  qDrawWinPanel(p, x, y, w, h, *pal, sunken);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinPanel3(QPainter * p, int x, int y, int w, int h, QPalette const * pal) {
  qDrawWinPanel(p, x, y, w, h, *pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinPanel4(QPainter * p, QRect const * r, QPalette const * pal, bool sunken) {
  qDrawWinPanel(p, *r, *pal, sunken);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinPanel5(QPainter * p, QRect const * r, QPalette const * pal) {
  qDrawWinPanel(p, *r, *pal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRect2(QPainter * p, int x, int y, int w, int h, QColor const * arg6, int lineWidth) {
  qDrawPlainRect(p, x, y, w, h, *arg6, lineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRect3(QPainter * p, int x, int y, int w, int h, QColor const * arg6) {
  qDrawPlainRect(p, x, y, w, h, *arg6);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRect4(QPainter * p, QRect const * r, QColor const * arg3, int lineWidth) {
  qDrawPlainRect(p, *r, *arg3, lineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRect5(QPainter * p, QRect const * r, QColor const * arg3) {
  qDrawPlainRect(p, *r, *arg3);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRoundedRect2(QPainter * p, int x, int y, int w, int h, double rx, double ry, QColor const * arg8, int lineWidth) {
  qDrawPlainRoundedRect(p, x, y, w, h, rx, ry, *arg8, lineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRoundedRect3(QPainter * p, int x, int y, int w, int h, double rx, double ry, QColor const * arg8) {
  qDrawPlainRoundedRect(p, x, y, w, h, rx, ry, *arg8);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRoundedRect4(QPainter * painter, QRect const * rect, double rx, double ry, QColor const * lineColor, int lineWidth) {
  qDrawPlainRoundedRect(painter, *rect, rx, ry, *lineColor, lineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRoundedRect5(QPainter * painter, QRect const * rect, double rx, double ry, QColor const * lineColor) {
  qDrawPlainRoundedRect(painter, *rect, rx, ry, *lineColor);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawBorderPixmap2(QPainter * painter, QRect const * targetRect, QMargins const * targetMargins, QPixmap const * pixmap, QRect const * sourceRect, QMargins const * sourceMargins, QTileRules const * rules) {
  qDrawBorderPixmap(painter, *targetRect, *targetMargins, *pixmap, *sourceRect, *sourceMargins, *rules);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawBorderPixmap3(QPainter * painter, QRect const * targetRect, QMargins const * targetMargins, QPixmap const * pixmap, QRect const * sourceRect, QMargins const * sourceMargins) {
  qDrawBorderPixmap(painter, *targetRect, *targetMargins, *pixmap, *sourceRect, *sourceMargins);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_QFileDialog_QFileDialog3(QWidget * parent, QString const * caption, QString const * directory) {
  return new QFileDialog(parent, *caption, *directory);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_QFileDialog_QFileDialog4(QWidget * parent, QString const * caption) {
  return new QFileDialog(parent, *caption);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_QFileDialog_QFileDialog5(QWidget * parent) {
  return new QFileDialog(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setOption1(QFileDialog * this_ptr, QFileDialog::Option option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getOpenFileName1(QWidget * parent, QString const * caption, QString const * dir, QString const * filter, QString * selectedFilter) {
  return new QString(QFileDialog::getOpenFileName(parent, *caption, *dir, *filter, selectedFilter));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getOpenFileName2(QWidget * parent, QString const * caption, QString const * dir, QString const * filter) {
  return new QString(QFileDialog::getOpenFileName(parent, *caption, *dir, *filter));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getOpenFileName3(QWidget * parent, QString const * caption, QString const * dir) {
  return new QString(QFileDialog::getOpenFileName(parent, *caption, *dir));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getOpenFileName4(QWidget * parent, QString const * caption) {
  return new QString(QFileDialog::getOpenFileName(parent, *caption));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getOpenFileName5(QWidget * parent) {
  return new QString(QFileDialog::getOpenFileName(parent));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getOpenFileName6() {
  return new QString(QFileDialog::getOpenFileName());
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl1(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter, int options) {
  return new QUrl(QFileDialog::getOpenFileUrl(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl2(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter) {
  return new QUrl(QFileDialog::getOpenFileUrl(parent, *caption, *dir, *filter, selectedFilter));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl3(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter) {
  return new QUrl(QFileDialog::getOpenFileUrl(parent, *caption, *dir, *filter));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl4(QWidget * parent, QString const * caption, QUrl const * dir) {
  return new QUrl(QFileDialog::getOpenFileUrl(parent, *caption, *dir));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl5(QWidget * parent, QString const * caption) {
  return new QUrl(QFileDialog::getOpenFileUrl(parent, *caption));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl6(QWidget * parent) {
  return new QUrl(QFileDialog::getOpenFileUrl(parent));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl7() {
  return new QUrl(QFileDialog::getOpenFileUrl());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getSaveFileName1(QWidget * parent, QString const * caption, QString const * dir, QString const * filter, QString * selectedFilter) {
  return new QString(QFileDialog::getSaveFileName(parent, *caption, *dir, *filter, selectedFilter));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getSaveFileName2(QWidget * parent, QString const * caption, QString const * dir, QString const * filter) {
  return new QString(QFileDialog::getSaveFileName(parent, *caption, *dir, *filter));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getSaveFileName3(QWidget * parent, QString const * caption, QString const * dir) {
  return new QString(QFileDialog::getSaveFileName(parent, *caption, *dir));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getSaveFileName4(QWidget * parent, QString const * caption) {
  return new QString(QFileDialog::getSaveFileName(parent, *caption));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getSaveFileName5(QWidget * parent) {
  return new QString(QFileDialog::getSaveFileName(parent));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getSaveFileName6() {
  return new QString(QFileDialog::getSaveFileName());
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl1(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter, int options) {
  return new QUrl(QFileDialog::getSaveFileUrl(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl2(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter) {
  return new QUrl(QFileDialog::getSaveFileUrl(parent, *caption, *dir, *filter, selectedFilter));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl3(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter) {
  return new QUrl(QFileDialog::getSaveFileUrl(parent, *caption, *dir, *filter));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl4(QWidget * parent, QString const * caption, QUrl const * dir) {
  return new QUrl(QFileDialog::getSaveFileUrl(parent, *caption, *dir));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl5(QWidget * parent, QString const * caption) {
  return new QUrl(QFileDialog::getSaveFileUrl(parent, *caption));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl6(QWidget * parent) {
  return new QUrl(QFileDialog::getSaveFileUrl(parent));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl7() {
  return new QUrl(QFileDialog::getSaveFileUrl());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectory1(QWidget * parent, QString const * caption, QString const * dir) {
  return new QString(QFileDialog::getExistingDirectory(parent, *caption, *dir));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectory2(QWidget * parent, QString const * caption) {
  return new QString(QFileDialog::getExistingDirectory(parent, *caption));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectory3(QWidget * parent) {
  return new QString(QFileDialog::getExistingDirectory(parent));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectory4() {
  return new QString(QFileDialog::getExistingDirectory());
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectoryUrl1(QWidget * parent, QString const * caption, QUrl const * dir, int options) {
  return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, *caption, *dir, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectoryUrl2(QWidget * parent, QString const * caption, QUrl const * dir) {
  return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, *caption, *dir));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectoryUrl3(QWidget * parent, QString const * caption) {
  return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, *caption));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectoryUrl4(QWidget * parent) {
  return new QUrl(QFileDialog::getExistingDirectoryUrl(parent));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectoryUrl5() {
  return new QUrl(QFileDialog::getExistingDirectoryUrl());
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileNames1(QWidget * parent, QString const * caption, QString const * dir, QString const * filter, QString * selectedFilter) {
  return new QList< QString >(QFileDialog::getOpenFileNames(parent, *caption, *dir, *filter, selectedFilter));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileNames2(QWidget * parent, QString const * caption, QString const * dir, QString const * filter) {
  return new QList< QString >(QFileDialog::getOpenFileNames(parent, *caption, *dir, *filter));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileNames3(QWidget * parent, QString const * caption, QString const * dir) {
  return new QList< QString >(QFileDialog::getOpenFileNames(parent, *caption, *dir));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileNames4(QWidget * parent, QString const * caption) {
  return new QList< QString >(QFileDialog::getOpenFileNames(parent, *caption));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileNames5(QWidget * parent) {
  return new QList< QString >(QFileDialog::getOpenFileNames(parent));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileNames6() {
  return new QList< QString >(QFileDialog::getOpenFileNames());
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls1(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter, int options) {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls2(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter) {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls(parent, *caption, *dir, *filter, selectedFilter));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls3(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter) {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls(parent, *caption, *dir, *filter));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls4(QWidget * parent, QString const * caption, QUrl const * dir) {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls(parent, *caption, *dir));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls5(QWidget * parent, QString const * caption) {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls(parent, *caption));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls6(QWidget * parent) {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls(parent));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls7() {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_saveFileContent1(QByteArray const * fileContent, QString const * fileNameHint) {
  QFileDialog::saveFileContent(*fileContent, *fileNameHint);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_QFontDialog_QFontDialog3(QFont const * initial) {
  return new QFontDialog(*initial);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontDialog_setOption1(QFontDialog * this_ptr, QFontDialog::FontDialogOption option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_getFont2(bool * ok) {
  return new QFont(QFontDialog::getFont(ok));
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_getFont3(bool * ok, QFont const * initial, QWidget * parent, QString const * title) {
  return new QFont(QFontDialog::getFont(ok, *initial, parent, *title));
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_getFont4(bool * ok, QFont const * initial, QWidget * parent) {
  return new QFont(QFontDialog::getFont(ok, *initial, parent));
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_getFont5(bool * ok, QFont const * initial) {
  return new QFont(QFontDialog::getFont(ok, *initial));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setFlag1(QGraphicsItem * this_ptr, QGraphicsItem::GraphicsItemFlag flag) {
  this_ptr->setFlag(flag);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setCacheMode1(QGraphicsItem * this_ptr, QGraphicsItem::CacheMode mode) {
  this_ptr->setCacheMode(mode);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isBlockedByModalPanel1(QGraphicsItem const * this_ptr) {
  return this_ptr->isBlockedByModalPanel();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setFocus1(QGraphicsItem * this_ptr) {
  this_ptr->setFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ensureVisible2(QGraphicsItem * this_ptr, QRectF const * rect, int xmargin) {
  this_ptr->ensureVisible(*rect, xmargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ensureVisible3(QGraphicsItem * this_ptr, QRectF const * rect) {
  this_ptr->ensureVisible(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ensureVisible4(QGraphicsItem * this_ptr) {
  this_ptr->ensureVisible();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ensureVisible5(QGraphicsItem * this_ptr, double x, double y, double w, double h, int xmargin) {
  this_ptr->ensureVisible(x, y, w, h, xmargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ensureVisible6(QGraphicsItem * this_ptr, double x, double y, double w, double h) {
  this_ptr->ensureVisible(x, y, w, h);
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsItem_itemTransform1(QGraphicsItem const * this_ptr, QGraphicsItem const * other) {
  return new QTransform(this_ptr->itemTransform(other));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setTransform1(QGraphicsItem * this_ptr, QTransform const * matrix) {
  this_ptr->setTransform(*matrix);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_collidesWithItem1(QGraphicsItem const * this_ptr, QGraphicsItem const * other) {
  return this_ptr->collidesWithItem(other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_collidesWithPath1(QGraphicsItem const * this_ptr, QPainterPath const * path) {
  return this_ptr->collidesWithPath(*path);
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsItem_collidingItems1(QGraphicsItem const * this_ptr) {
  return new QList< QGraphicsItem * >(this_ptr->collidingItems());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isObscured2(QGraphicsItem const * this_ptr) {
  return this_ptr->isObscured();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_paint1(QGraphicsItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_update2(QGraphicsItem * this_ptr) {
  this_ptr->update();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_scroll1(QGraphicsItem * this_ptr, double dx, double dy) {
  this_ptr->scroll(dx, dy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsObject_grabGesture1(QGraphicsObject * this_ptr, Qt::GestureType type) {
  this_ptr->grabGesture(type);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_QGraphicsPathItem_QGraphicsPathItem3(QPainterPath const * path) {
  return new QGraphicsPathItem(*path);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPathItem_paint1(QGraphicsPathItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsRectItem_QGraphicsRectItem4(QRectF const * rect) {
  return new QGraphicsRectItem(*rect);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsRectItem_QGraphicsRectItem5(double x, double y, double w, double h) {
  return new QGraphicsRectItem(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRectItem_paint1(QGraphicsRectItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsEllipseItem_QGraphicsEllipseItem4(QRectF const * rect) {
  return new QGraphicsEllipseItem(*rect);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsEllipseItem_QGraphicsEllipseItem5(double x, double y, double w, double h) {
  return new QGraphicsEllipseItem(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEllipseItem_paint1(QGraphicsEllipseItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_QGraphicsPolygonItem_QGraphicsPolygonItem3(QPolygonF const * polygon) {
  return new QGraphicsPolygonItem(*polygon);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPolygonItem_paint1(QGraphicsPolygonItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsLineItem_QGraphicsLineItem4(QLineF const * line) {
  return new QGraphicsLineItem(*line);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsLineItem_QGraphicsLineItem5(double x1, double y1, double x2, double y2) {
  return new QGraphicsLineItem(x1, y1, x2, y2);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLineItem_paint1(QGraphicsLineItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT QGraphicsPixmapItem * ctr_qt_widgets_ffi_QGraphicsPixmapItem_QGraphicsPixmapItem3(QPixmap const * pixmap) {
  return new QGraphicsPixmapItem(*pixmap);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_QGraphicsTextItem_QGraphicsTextItem3(QString const * text) {
  return new QGraphicsTextItem(*text);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_QGraphicsSimpleTextItem3(QString const * text) {
  return new QGraphicsSimpleTextItem(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemGroup_paint1(QGraphicsItemGroup * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setSizePolicy2(QGraphicsLayoutItem * this_ptr, QSizePolicy::Policy hPolicy, QSizePolicy::Policy vPolicy) {
  this_ptr->setSizePolicy(hPolicy, vPolicy);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsLayoutItem_effectiveSizeHint1(QGraphicsLayoutItem const * this_ptr, Qt::SizeHint which) {
  return new QSizeF(this_ptr->effectiveSizeHint(which));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_addAnchors1(QGraphicsAnchorLayout * this_ptr, QGraphicsLayoutItem * firstItem, QGraphicsLayoutItem * secondItem) {
  this_ptr->addAnchors(firstItem, secondItem);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_addItem2(QGraphicsGridLayout * this_ptr, QGraphicsLayoutItem * item, int row, int column, int rowSpan, int columnSpan) {
  this_ptr->addItem(item, row, column, rowSpan, columnSpan);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_addItem3(QGraphicsGridLayout * this_ptr, QGraphicsLayoutItem * item, int row, int column) {
  this_ptr->addItem(item, row, column);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsGridLayout_sizeHint1(QGraphicsGridLayout const * this_ptr, Qt::SizeHint which) {
  return new QSizeF(this_ptr->sizeHint(which));
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_QGraphicsLinearLayout_QGraphicsLinearLayout3(Qt::Orientation orientation) {
  return new QGraphicsLinearLayout(orientation);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_addStretch1(QGraphicsLinearLayout * this_ptr) {
  this_ptr->addStretch();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_insertStretch1(QGraphicsLinearLayout * this_ptr, int index) {
  this_ptr->insertStretch(index);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsLinearLayout_sizeHint1(QGraphicsLinearLayout const * this_ptr, Qt::SizeHint which) {
  return new QSizeF(this_ptr->sizeHint(which));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLinearLayout_dump1(QGraphicsLinearLayout const * this_ptr) {
  this_ptr->dump();
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsWidget_QGraphicsWidget2(QGraphicsItem * parent) {
  return new QGraphicsWidget(parent);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsWidget_grabShortcut1(QGraphicsWidget * this_ptr, QKeySequence const * sequence) {
  return this_ptr->grabShortcut(*sequence);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setShortcutEnabled1(QGraphicsWidget * this_ptr, int id) {
  this_ptr->setShortcutEnabled(id);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setShortcutAutoRepeat1(QGraphicsWidget * this_ptr, int id) {
  this_ptr->setShortcutAutoRepeat(id);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_setAttribute1(QGraphicsWidget * this_ptr, Qt::WidgetAttribute attribute) {
  this_ptr->setAttribute(attribute);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_paint1(QGraphicsWidget * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paint(painter, option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsWidget_paintWindowFrame1(QGraphicsWidget * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option) {
  this_ptr->paintWindowFrame(painter, option);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_QGraphicsProxyWidget_QGraphicsProxyWidget2(QGraphicsItem * parent) {
  return new QGraphicsProxyWidget(parent);
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsScene_QGraphicsScene4(QRectF const * sceneRect) {
  return new QGraphicsScene(*sceneRect);
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsScene_QGraphicsScene5(double x, double y, double width, double height) {
  return new QGraphicsScene(x, y, width, height);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_render1(QGraphicsScene * this_ptr, QPainter * painter, QRectF const * target, QRectF const * source) {
  this_ptr->render(painter, *target, *source);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_render2(QGraphicsScene * this_ptr, QPainter * painter, QRectF const * target) {
  this_ptr->render(painter, *target);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_render3(QGraphicsScene * this_ptr, QPainter * painter) {
  this_ptr->render(painter);
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items6(QGraphicsScene const * this_ptr) {
  return new QList< QGraphicsItem * >(this_ptr->items());
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items7(QGraphicsScene const * this_ptr, QPointF const * pos, Qt::ItemSelectionMode mode, Qt::SortOrder order) {
  return new QList< QGraphicsItem * >(this_ptr->items(*pos, mode, order));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items8(QGraphicsScene const * this_ptr, QPointF const * pos, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(*pos, mode));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items9(QGraphicsScene const * this_ptr, QPointF const * pos) {
  return new QList< QGraphicsItem * >(this_ptr->items(*pos));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items10(QGraphicsScene const * this_ptr, QRectF const * rect, Qt::ItemSelectionMode mode, Qt::SortOrder order) {
  return new QList< QGraphicsItem * >(this_ptr->items(*rect, mode, order));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items11(QGraphicsScene const * this_ptr, QRectF const * rect, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(*rect, mode));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items12(QGraphicsScene const * this_ptr, QRectF const * rect) {
  return new QList< QGraphicsItem * >(this_ptr->items(*rect));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items13(QGraphicsScene const * this_ptr, QPolygonF const * polygon, Qt::ItemSelectionMode mode, Qt::SortOrder order) {
  return new QList< QGraphicsItem * >(this_ptr->items(*polygon, mode, order));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items14(QGraphicsScene const * this_ptr, QPolygonF const * polygon, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(*polygon, mode));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items15(QGraphicsScene const * this_ptr, QPolygonF const * polygon) {
  return new QList< QGraphicsItem * >(this_ptr->items(*polygon));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items16(QGraphicsScene const * this_ptr, QPainterPath const * path, Qt::ItemSelectionMode mode, Qt::SortOrder order) {
  return new QList< QGraphicsItem * >(this_ptr->items(*path, mode, order));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items17(QGraphicsScene const * this_ptr, QPainterPath const * path, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->items(*path, mode));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items18(QGraphicsScene const * this_ptr, QPainterPath const * path) {
  return new QList< QGraphicsItem * >(this_ptr->items(*path));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_items19(QGraphicsScene const * this_ptr, double x, double y, double w, double h, Qt::ItemSelectionMode mode, Qt::SortOrder order) {
  return new QList< QGraphicsItem * >(this_ptr->items(x, y, w, h, mode, order));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsScene_collidingItems1(QGraphicsScene const * this_ptr, QGraphicsItem const * item) {
  return new QList< QGraphicsItem * >(this_ptr->collidingItems(item));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setSelectionArea2(QGraphicsScene * this_ptr, QPainterPath const * path, Qt::ItemSelectionOperation selectionOperation, Qt::ItemSelectionMode mode) {
  this_ptr->setSelectionArea(*path, selectionOperation, mode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setSelectionArea3(QGraphicsScene * this_ptr, QPainterPath const * path, Qt::ItemSelectionOperation selectionOperation) {
  this_ptr->setSelectionArea(*path, selectionOperation);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setSelectionArea4(QGraphicsScene * this_ptr, QPainterPath const * path) {
  this_ptr->setSelectionArea(*path);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsScene_addEllipse2(QGraphicsScene * this_ptr, QRectF const * rect, QPen const * pen) {
  return this_ptr->addEllipse(*rect, *pen);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsScene_addEllipse3(QGraphicsScene * this_ptr, QRectF const * rect) {
  return this_ptr->addEllipse(*rect);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsScene_addLine2(QGraphicsScene * this_ptr, QLineF const * line) {
  return this_ptr->addLine(*line);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_QGraphicsScene_addPath1(QGraphicsScene * this_ptr, QPainterPath const * path, QPen const * pen) {
  return this_ptr->addPath(*path, *pen);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_QGraphicsScene_addPath2(QGraphicsScene * this_ptr, QPainterPath const * path) {
  return this_ptr->addPath(*path);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_QGraphicsScene_addPolygon1(QGraphicsScene * this_ptr, QPolygonF const * polygon, QPen const * pen) {
  return this_ptr->addPolygon(*polygon, *pen);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_QGraphicsScene_addPolygon2(QGraphicsScene * this_ptr, QPolygonF const * polygon) {
  return this_ptr->addPolygon(*polygon);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsScene_addRect2(QGraphicsScene * this_ptr, QRectF const * rect, QPen const * pen) {
  return this_ptr->addRect(*rect, *pen);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsScene_addRect3(QGraphicsScene * this_ptr, QRectF const * rect) {
  return this_ptr->addRect(*rect);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_QGraphicsScene_addText1(QGraphicsScene * this_ptr, QString const * text) {
  return this_ptr->addText(*text);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_QGraphicsScene_addSimpleText1(QGraphicsScene * this_ptr, QString const * text) {
  return this_ptr->addSimpleText(*text);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_QGraphicsScene_addWidget1(QGraphicsScene * this_ptr, QWidget * widget) {
  return this_ptr->addWidget(widget);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsScene_addEllipse4(QGraphicsScene * this_ptr, double x, double y, double w, double h, QPen const * pen) {
  return this_ptr->addEllipse(x, y, w, h, *pen);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsScene_addEllipse5(QGraphicsScene * this_ptr, double x, double y, double w, double h) {
  return this_ptr->addEllipse(x, y, w, h);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsScene_addLine3(QGraphicsScene * this_ptr, double x1, double y1, double x2, double y2) {
  return this_ptr->addLine(x1, y1, x2, y2);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsScene_addRect4(QGraphicsScene * this_ptr, double x, double y, double w, double h, QPen const * pen) {
  return this_ptr->addRect(x, y, w, h, *pen);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsScene_addRect5(QGraphicsScene * this_ptr, double x, double y, double w, double h) {
  return this_ptr->addRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setFocusItem1(QGraphicsScene * this_ptr, QGraphicsItem * item) {
  this_ptr->setFocusItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_setFocus1(QGraphicsScene * this_ptr) {
  this_ptr->setFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_invalidate2(QGraphicsScene * this_ptr, double x, double y, double w, double h) {
  this_ptr->invalidate(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_update2(QGraphicsScene * this_ptr) {
  this_ptr->update();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_invalidate3(QGraphicsScene * this_ptr, QRectF const * rect) {
  this_ptr->invalidate(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsScene_invalidate4(QGraphicsScene * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_ensureVisible1(QScrollArea * this_ptr, int x, int y, int xmargin) {
  this_ptr->ensureVisible(x, y, xmargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_ensureVisible2(QScrollArea * this_ptr, int x, int y) {
  this_ptr->ensureVisible(x, y);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_ensureWidgetVisible1(QScrollArea * this_ptr, QWidget * childWidget, int xmargin) {
  this_ptr->ensureWidgetVisible(childWidget, xmargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QScrollArea_ensureWidgetVisible2(QScrollArea * this_ptr, QWidget * childWidget) {
  this_ptr->ensureWidgetVisible(childWidget);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_QGraphicsView_QGraphicsView3(QGraphicsScene * scene) {
  return new QGraphicsView(scene);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setRenderHint1(QGraphicsView * this_ptr, QPainter::RenderHint hint) {
  this_ptr->setRenderHint(hint);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setOptimizationFlag1(QGraphicsView * this_ptr, QGraphicsView::OptimizationFlag flag) {
  this_ptr->setOptimizationFlag(flag);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_setTransform1(QGraphicsView * this_ptr, QTransform const * matrix) {
  this_ptr->setTransform(*matrix);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible3(QGraphicsView * this_ptr, QRectF const * rect, int xmargin) {
  this_ptr->ensureVisible(*rect, xmargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible4(QGraphicsView * this_ptr, QRectF const * rect) {
  this_ptr->ensureVisible(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible5(QGraphicsView * this_ptr, double x, double y, double w, double h, int xmargin) {
  this_ptr->ensureVisible(x, y, w, h, xmargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible6(QGraphicsView * this_ptr, double x, double y, double w, double h) {
  this_ptr->ensureVisible(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible7(QGraphicsView * this_ptr, QGraphicsItem const * item, int xmargin) {
  this_ptr->ensureVisible(item, xmargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_ensureVisible8(QGraphicsView * this_ptr, QGraphicsItem const * item) {
  this_ptr->ensureVisible(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_fitInView3(QGraphicsView * this_ptr, QRectF const * rect) {
  this_ptr->fitInView(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_fitInView4(QGraphicsView * this_ptr, double x, double y, double w, double h) {
  this_ptr->fitInView(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_fitInView5(QGraphicsView * this_ptr, QGraphicsItem const * item) {
  this_ptr->fitInView(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_render1(QGraphicsView * this_ptr, QPainter * painter, QRectF const * target, QRect const * source) {
  this_ptr->render(painter, *target, *source);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_render2(QGraphicsView * this_ptr, QPainter * painter, QRectF const * target) {
  this_ptr->render(painter, *target);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_render3(QGraphicsView * this_ptr, QPainter * painter) {
  this_ptr->render(painter);
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items7(QGraphicsView const * this_ptr, QRect const * rect) {
  return new QList< QGraphicsItem * >(this_ptr->items(*rect));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items8(QGraphicsView const * this_ptr, int x, int y, int w, int h) {
  return new QList< QGraphicsItem * >(this_ptr->items(x, y, w, h));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items9(QGraphicsView const * this_ptr, QPolygon const * polygon) {
  return new QList< QGraphicsItem * >(this_ptr->items(*polygon));
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsView_items10(QGraphicsView const * this_ptr, QPainterPath const * path) {
  return new QList< QGraphicsItem * >(this_ptr->items(*path));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_invalidateScene1(QGraphicsView * this_ptr, QRectF const * rect) {
  this_ptr->invalidateScene(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsView_invalidateScene2(QGraphicsView * this_ptr) {
  this_ptr->invalidateScene();
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_QGroupBox_QGroupBox3(QString const * title) {
  return new QGroupBox(*title);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_QHeaderView_QHeaderView2(Qt::Orientation orientation) {
  return new QHeaderView(orientation);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_QLineEdit_QLineEdit3(QString const * arg1) {
  return new QLineEdit(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_cursorForward1(QLineEdit * this_ptr, bool mark) {
  this_ptr->cursorForward(mark);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLineEdit_cursorBackward1(QLineEdit * this_ptr, bool mark) {
  this_ptr->cursorBackward(mark);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_QInputDialog_QInputDialog2(QWidget * parent) {
  return new QInputDialog(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QInputDialog_setOption1(QInputDialog * this_ptr, QInputDialog::InputDialogOption option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getText1(QWidget * parent, QString const * title, QString const * label, QLineEdit::EchoMode echo, QString const * text, bool * ok, int flags) {
  return new QString(QInputDialog::getText(parent, *title, *label, echo, *text, ok, QFlags< Qt::WindowType >(flags)));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getText2(QWidget * parent, QString const * title, QString const * label, QLineEdit::EchoMode echo, QString const * text, bool * ok) {
  return new QString(QInputDialog::getText(parent, *title, *label, echo, *text, ok));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getText3(QWidget * parent, QString const * title, QString const * label, QLineEdit::EchoMode echo, QString const * text) {
  return new QString(QInputDialog::getText(parent, *title, *label, echo, *text));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getText4(QWidget * parent, QString const * title, QString const * label, QLineEdit::EchoMode echo) {
  return new QString(QInputDialog::getText(parent, *title, *label, echo));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getText5(QWidget * parent, QString const * title, QString const * label) {
  return new QString(QInputDialog::getText(parent, *title, *label));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getMultiLineText1(QWidget * parent, QString const * title, QString const * label, QString const * text, bool * ok, int flags) {
  return new QString(QInputDialog::getMultiLineText(parent, *title, *label, *text, ok, QFlags< Qt::WindowType >(flags)));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getMultiLineText2(QWidget * parent, QString const * title, QString const * label, QString const * text, bool * ok) {
  return new QString(QInputDialog::getMultiLineText(parent, *title, *label, *text, ok));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getMultiLineText3(QWidget * parent, QString const * title, QString const * label, QString const * text) {
  return new QString(QInputDialog::getMultiLineText(parent, *title, *label, *text));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getMultiLineText4(QWidget * parent, QString const * title, QString const * label) {
  return new QString(QInputDialog::getMultiLineText(parent, *title, *label));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getItem1(QWidget * parent, QString const * title, QString const * label, QList< QString > const * items, int current, bool editable, bool * ok, int flags) {
  return new QString(QInputDialog::getItem(parent, *title, *label, *items, current, editable, ok, QFlags< Qt::WindowType >(flags)));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getItem2(QWidget * parent, QString const * title, QString const * label, QList< QString > const * items, int current, bool editable, bool * ok) {
  return new QString(QInputDialog::getItem(parent, *title, *label, *items, current, editable, ok));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getItem3(QWidget * parent, QString const * title, QString const * label, QList< QString > const * items, int current, bool editable) {
  return new QString(QInputDialog::getItem(parent, *title, *label, *items, current, editable));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getItem4(QWidget * parent, QString const * title, QString const * label, QList< QString > const * items, int current) {
  return new QString(QInputDialog::getItem(parent, *title, *label, *items, current));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QInputDialog_getItem5(QWidget * parent, QString const * title, QString const * label, QList< QString > const * items) {
  return new QString(QInputDialog::getItem(parent, *title, *label, *items));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_getInt1(QWidget * parent, QString const * title, QString const * label, int value, int minValue, int maxValue, int step, bool * ok) {
  return QInputDialog::getInt(parent, *title, *label, value, minValue, maxValue, step, ok);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_getInt2(QWidget * parent, QString const * title, QString const * label, int value, int minValue, int maxValue, int step) {
  return QInputDialog::getInt(parent, *title, *label, value, minValue, maxValue, step);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_getInt3(QWidget * parent, QString const * title, QString const * label, int value, int minValue, int maxValue) {
  return QInputDialog::getInt(parent, *title, *label, value, minValue, maxValue);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_getInt4(QWidget * parent, QString const * title, QString const * label, int value, int minValue) {
  return QInputDialog::getInt(parent, *title, *label, value, minValue);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_getInt5(QWidget * parent, QString const * title, QString const * label, int value) {
  return QInputDialog::getInt(parent, *title, *label, value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QInputDialog_getInt6(QWidget * parent, QString const * title, QString const * label) {
  return QInputDialog::getInt(parent, *title, *label);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble1(QWidget * parent, QString const * title, QString const * label, double value, double minValue, double maxValue, int decimals, bool * ok, int flags) {
  return QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals, ok, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble2(QWidget * parent, QString const * title, QString const * label, double value, double minValue, double maxValue, int decimals, bool * ok) {
  return QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals, ok);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble3(QWidget * parent, QString const * title, QString const * label, double value, double minValue, double maxValue, int decimals) {
  return QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue, decimals);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble4(QWidget * parent, QString const * title, QString const * label, double value, double minValue, double maxValue) {
  return QInputDialog::getDouble(parent, *title, *label, value, minValue, maxValue);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble5(QWidget * parent, QString const * title, QString const * label, double value, double minValue) {
  return QInputDialog::getDouble(parent, *title, *label, value, minValue);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble6(QWidget * parent, QString const * title, QString const * label, double value) {
  return QInputDialog::getDouble(parent, *title, *label, value);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QInputDialog_getDouble7(QWidget * parent, QString const * title, QString const * label) {
  return QInputDialog::getDouble(parent, *title, *label);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_QKeySequenceEdit_QKeySequenceEdit3(QKeySequence const * keySequence) {
  return new QKeySequenceEdit(*keySequence);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_QLabel_QLabel3(QWidget * parent) {
  return new QLabel(parent);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_QLabel_QLabel4(QString const * text, QWidget * parent) {
  return new QLabel(*text, parent);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_QLabel_QLabel5(QString const * text) {
  return new QLabel(*text);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_QLCDNumber_QLCDNumber3(unsigned int numDigits) {
  return new QLCDNumber(numDigits);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListView_scrollTo1(QListView * this_ptr, QModelIndex const * index) {
  this_ptr->scrollTo(*index);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem5(QListWidget * listview) {
  return new QListWidgetItem(listview);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem6(QString const * text, QListWidget * listview) {
  return new QListWidgetItem(*text, listview);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem7(QString const * text) {
  return new QListWidgetItem(*text);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem8(QIcon const * icon, QString const * text, QListWidget * listview) {
  return new QListWidgetItem(*icon, *text, listview);
}


RITUAL_EXPORT QListWidgetItem * ctr_qt_widgets_ffi_QListWidgetItem_QListWidgetItem9(QIcon const * icon, QString const * text) {
  return new QListWidgetItem(*icon, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_sortItems1(QListWidget * this_ptr) {
  this_ptr->sortItems();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QListWidget_scrollToItem1(QListWidget * this_ptr, QListWidgetItem const * item) {
  this_ptr->scrollToItem(item);
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_QMainWindow_QMainWindow2(QWidget * parent) {
  return new QMainWindow(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMainWindow_addToolBarBreak1(QMainWindow * this_ptr) {
  this_ptr->addToolBarBreak();
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QMainWindow_saveState1(QMainWindow const * this_ptr) {
  return new QByteArray(this_ptr->saveState());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QMainWindow_restoreState1(QMainWindow * this_ptr, QByteArray const * state) {
  return this_ptr->restoreState(*state);
}


RITUAL_EXPORT QList< QMdiSubWindow * > * ctr_qt_widgets_ffi_QMdiArea_subWindowList1(QMdiArea const * this_ptr) {
  return new QList< QMdiSubWindow * >(this_ptr->subWindowList());
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_QMdiArea_addSubWindow1(QMdiArea * this_ptr, QWidget * widget) {
  return this_ptr->addSubWindow(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiArea_setOption1(QMdiArea * this_ptr, QMdiArea::AreaOption option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_QMdiSubWindow_QMdiSubWindow2(QWidget * parent) {
  return new QMdiSubWindow(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMdiSubWindow_setOption1(QMdiSubWindow * this_ptr, QMdiSubWindow::SubWindowOption option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QMenu_QMenu3(QString const * title) {
  return new QMenu(*title);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenu_popup1(QMenu * this_ptr, QPoint const * pos) {
  this_ptr->popup(*pos);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_exec3(QMenu * this_ptr, QPoint const * pos) {
  return this_ptr->exec(*pos);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_exec4(QList< QAction * > const * actions, QPoint const * pos, QAction * at) {
  return QMenu::exec(*actions, *pos, at);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QMenu_exec5(QList< QAction * > const * actions, QPoint const * pos) {
  return QMenu::exec(*actions, *pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMenuBar_setCornerWidget1(QMenuBar * this_ptr, QWidget * w) {
  this_ptr->setCornerWidget(w);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QMenuBar_cornerWidget1(QMenuBar const * this_ptr) {
  return this_ptr->cornerWidget();
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox4(QMessageBox::Icon icon, QString const * title, QString const * text, int buttons, QWidget * parent) {
  return new QMessageBox(icon, *title, *text, QFlags< QMessageBox::StandardButton >(buttons), parent);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox5(QMessageBox::Icon icon, QString const * title, QString const * text, int buttons) {
  return new QMessageBox(icon, *title, *text, QFlags< QMessageBox::StandardButton >(buttons));
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox6(QMessageBox::Icon icon, QString const * title, QString const * text) {
  return new QMessageBox(icon, *title, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_setOption1(QMessageBox * this_ptr, QMessageBox::Option option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_information4(QWidget * parent, QString const * title, QString const * text, int buttons) {
  return QMessageBox::information(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons));
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_information5(QWidget * parent, QString const * title, QString const * text) {
  return QMessageBox::information(parent, *title, *text);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_information6(QWidget * parent, QString const * title, QString const * text, QMessageBox::StandardButton button0) {
  return QMessageBox::information(parent, *title, *text, button0);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_question4(QWidget * parent, QString const * title, QString const * text, int buttons) {
  return QMessageBox::question(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons));
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_question5(QWidget * parent, QString const * title, QString const * text) {
  return QMessageBox::question(parent, *title, *text);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_warning4(QWidget * parent, QString const * title, QString const * text, int buttons) {
  return QMessageBox::warning(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons));
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_warning5(QWidget * parent, QString const * title, QString const * text) {
  return QMessageBox::warning(parent, *title, *text);
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_critical4(QWidget * parent, QString const * title, QString const * text, int buttons) {
  return QMessageBox::critical(parent, *title, *text, QFlags< QMessageBox::StandardButton >(buttons));
}


RITUAL_EXPORT QMessageBox::StandardButton ctr_qt_widgets_ffi_QMessageBox_critical5(QWidget * parent, QString const * title, QString const * text) {
  return QMessageBox::critical(parent, *title, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QMessageBox_aboutQt1(QWidget * parent) {
  QMessageBox::aboutQt(parent);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox7(QString const * title, QString const * text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent) {
  return new QMessageBox(*title, *text, icon, button0, button1, button2, parent);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_QMessageBox_QMessageBox8(QString const * title, QString const * text, QMessageBox::Icon icon, int button0, int button1, int button2) {
  return new QMessageBox(*title, *text, icon, button0, button1, button2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information7(QWidget * parent, QString const * title, QString const * text, int button0, int button1) {
  return QMessageBox::information(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information8(QWidget * parent, QString const * title, QString const * text, int button0) {
  return QMessageBox::information(parent, *title, *text, button0);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information9(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber) {
  return QMessageBox::information(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information10(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text) {
  return QMessageBox::information(parent, *title, *text, *button0Text, *button1Text, *button2Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information11(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text) {
  return QMessageBox::information(parent, *title, *text, *button0Text, *button1Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_information12(QWidget * parent, QString const * title, QString const * text, QString const * button0Text) {
  return QMessageBox::information(parent, *title, *text, *button0Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question6(QWidget * parent, QString const * title, QString const * text, int button0, int button1) {
  return QMessageBox::question(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question7(QWidget * parent, QString const * title, QString const * text, int button0) {
  return QMessageBox::question(parent, *title, *text, button0);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question8(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber) {
  return QMessageBox::question(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question9(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text) {
  return QMessageBox::question(parent, *title, *text, *button0Text, *button1Text, *button2Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question10(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text) {
  return QMessageBox::question(parent, *title, *text, *button0Text, *button1Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_question11(QWidget * parent, QString const * title, QString const * text, QString const * button0Text) {
  return QMessageBox::question(parent, *title, *text, *button0Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning6(QWidget * parent, QString const * title, QString const * text, int button0, int button1) {
  return QMessageBox::warning(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning7(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber) {
  return QMessageBox::warning(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning8(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text) {
  return QMessageBox::warning(parent, *title, *text, *button0Text, *button1Text, *button2Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning9(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text) {
  return QMessageBox::warning(parent, *title, *text, *button0Text, *button1Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_warning10(QWidget * parent, QString const * title, QString const * text, QString const * button0Text) {
  return QMessageBox::warning(parent, *title, *text, *button0Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical6(QWidget * parent, QString const * title, QString const * text, int button0, int button1) {
  return QMessageBox::critical(parent, *title, *text, button0, button1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical7(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text, int defaultButtonNumber) {
  return QMessageBox::critical(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical8(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text, QString const * button2Text) {
  return QMessageBox::critical(parent, *title, *text, *button0Text, *button1Text, *button2Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical9(QWidget * parent, QString const * title, QString const * text, QString const * button0Text, QString const * button1Text) {
  return QMessageBox::critical(parent, *title, *text, *button0Text, *button1Text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QMessageBox_critical10(QWidget * parent, QString const * title, QString const * text, QString const * button0Text) {
  return QMessageBox::critical(parent, *title, *text, *button0Text);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_QTextEdit_QTextEdit3(QString const * text) {
  return new QTextEdit(*text);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_find2(QTextEdit * this_ptr, QString const * exp) {
  return this_ptr->find(*exp);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTextEdit_find3(QTextEdit * this_ptr, QRegularExpression const * exp) {
  return this_ptr->find(*exp);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTextEdit_toMarkdown1(QTextEdit const * this_ptr) {
  return new QString(this_ptr->toMarkdown());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_moveCursor1(QTextEdit * this_ptr, QTextCursor::MoveOperation operation) {
  this_ptr->moveCursor(operation);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_zoomIn1(QTextEdit * this_ptr) {
  this_ptr->zoomIn();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextEdit_zoomOut1(QTextEdit * this_ptr) {
  this_ptr->zoomOut();
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_QPlainTextEdit_QPlainTextEdit3(QString const * text) {
  return new QPlainTextEdit(*text);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_find2(QPlainTextEdit * this_ptr, QString const * exp) {
  return this_ptr->find(*exp);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPlainTextEdit_find3(QPlainTextEdit * this_ptr, QRegularExpression const * exp) {
  return this_ptr->find(*exp);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_moveCursor1(QPlainTextEdit * this_ptr, QTextCursor::MoveOperation operation) {
  this_ptr->moveCursor(operation);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_zoomIn1(QPlainTextEdit * this_ptr) {
  this_ptr->zoomIn();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPlainTextEdit_zoomOut1(QPlainTextEdit * this_ptr) {
  this_ptr->zoomOut();
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_QProgressDialog_QProgressDialog3(QWidget * parent) {
  return new QProgressDialog(parent);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_QProgressDialog_QProgressDialog4(QString const * labelText, QString const * cancelButtonText, int minimum, int maximum, QWidget * parent) {
  return new QProgressDialog(*labelText, *cancelButtonText, minimum, maximum, parent);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_QProgressDialog_QProgressDialog5(QString const * labelText, QString const * cancelButtonText, int minimum, int maximum) {
  return new QProgressDialog(*labelText, *cancelButtonText, minimum, maximum);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawPrimitive1(QProxyStyle const * this_ptr, QStyle::PrimitiveElement element, QStyleOption const * option, QPainter * painter) {
  this_ptr->drawPrimitive(element, option, painter);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawControl1(QProxyStyle const * this_ptr, QStyle::ControlElement element, QStyleOption const * option, QPainter * painter) {
  this_ptr->drawControl(element, option, painter);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawComplexControl1(QProxyStyle const * this_ptr, QStyle::ComplexControl control, QStyleOptionComplex const * option, QPainter * painter) {
  this_ptr->drawComplexControl(control, option, painter);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QProxyStyle_drawItemText1(QProxyStyle const * this_ptr, QPainter * painter, QRect const * rect, int flags, QPalette const * pal, bool enabled, QString const * text) {
  this_ptr->drawItemText(painter, *rect, flags, *pal, enabled, *text);
}


RITUAL_EXPORT QStyle::SubControl ctr_qt_widgets_ffi_QProxyStyle_hitTestComplexControl1(QProxyStyle const * this_ptr, QStyle::ComplexControl control, QStyleOptionComplex const * option, QPoint const * pos) {
  return this_ptr->hitTestComplexControl(control, option, *pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_styleHint1(QProxyStyle const * this_ptr, QStyle::StyleHint hint, QStyleOption const * option, QWidget const * widget) {
  return this_ptr->styleHint(hint, option, widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_styleHint2(QProxyStyle const * this_ptr, QStyle::StyleHint hint, QStyleOption const * option) {
  return this_ptr->styleHint(hint, option);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_styleHint3(QProxyStyle const * this_ptr, QStyle::StyleHint hint) {
  return this_ptr->styleHint(hint);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_pixelMetric1(QProxyStyle const * this_ptr, QStyle::PixelMetric metric, QStyleOption const * option) {
  return this_ptr->pixelMetric(metric, option);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_pixelMetric2(QProxyStyle const * this_ptr, QStyle::PixelMetric metric) {
  return this_ptr->pixelMetric(metric);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_layoutSpacing1(QProxyStyle const * this_ptr, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, QStyleOption const * option) {
  return this_ptr->layoutSpacing(control1, control2, orientation, option);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QProxyStyle_layoutSpacing2(QProxyStyle const * this_ptr, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation) {
  return this_ptr->layoutSpacing(control1, control2, orientation);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QProxyStyle_standardIcon1(QProxyStyle const * this_ptr, QStyle::StandardPixmap standardIcon, QStyleOption const * option) {
  return new QIcon(this_ptr->standardIcon(standardIcon, option));
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QProxyStyle_standardIcon2(QProxyStyle const * this_ptr, QStyle::StandardPixmap standardIcon) {
  return new QIcon(this_ptr->standardIcon(standardIcon));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QProxyStyle_standardPixmap1(QProxyStyle const * this_ptr, QStyle::StandardPixmap standardPixmap, QStyleOption const * opt) {
  return new QPixmap(this_ptr->standardPixmap(standardPixmap, opt));
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_QRadioButton_QRadioButton3(QString const * text) {
  return new QRadioButton(*text);
}


RITUAL_EXPORT QRhiWidget * ctr_qt_widgets_ffi_QRhiWidget_QRhiWidget3(QWidget * parent) {
  return new QRhiWidget(parent);
}


RITUAL_EXPORT QScrollBar * ctr_qt_widgets_ffi_QScrollBar_QScrollBar3(Qt::Orientation arg1) {
  return new QScrollBar(arg1);
}


RITUAL_EXPORT Qt::GestureType ctr_qt_widgets_ffi_QScroller_grabGesture1(QObject * target) {
  return QScroller::grabGesture(target);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QScroller_handleInput1(QScroller * this_ptr, QScroller::Input input, QPointF const * position) {
  return this_ptr->handleInput(input, *position);
}


RITUAL_EXPORT QSplashScreen * ctr_qt_widgets_ffi_QSplashScreen_QSplashScreen3(QPixmap const * pixmap) {
  return new QSplashScreen(*pixmap);
}


RITUAL_EXPORT QSplashScreen * ctr_qt_widgets_ffi_QSplashScreen_QSplashScreen4(QScreen * screen, QPixmap const * pixmap) {
  return new QSplashScreen(screen, *pixmap);
}


RITUAL_EXPORT QSplashScreen * ctr_qt_widgets_ffi_QSplashScreen_QSplashScreen5(QScreen * screen) {
  return new QSplashScreen(screen);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_showMessage1(QSplashScreen * this_ptr, QString const * message, int alignment) {
  this_ptr->showMessage(*message, alignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplashScreen_showMessage2(QSplashScreen * this_ptr, QString const * message) {
  this_ptr->showMessage(*message);
}


RITUAL_EXPORT QSplitter * ctr_qt_widgets_ffi_QSplitter_QSplitter3(Qt::Orientation arg1) {
  return new QSplitter(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSplitter_setOpaqueResize1(QSplitter * this_ptr) {
  this_ptr->setOpaqueResize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_addWidget1(QStatusBar * this_ptr, QWidget * widget) {
  this_ptr->addWidget(widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStatusBar_insertWidget1(QStatusBar * this_ptr, int index, QWidget * widget) {
  return this_ptr->insertWidget(index, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_addPermanentWidget1(QStatusBar * this_ptr, QWidget * widget) {
  this_ptr->addPermanentWidget(widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStatusBar_insertPermanentWidget1(QStatusBar * this_ptr, int index, QWidget * widget) {
  return this_ptr->insertPermanentWidget(index, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStatusBar_showMessage1(QStatusBar * this_ptr, QString const * text) {
  this_ptr->showMessage(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStylePainter_drawItemText1(QStylePainter * this_ptr, QRect const * r, int flags, QPalette const * pal, bool enabled, QString const * text) {
  this_ptr->drawItemText(*r, flags, *pal, enabled, *text);
}


RITUAL_EXPORT QSystemTrayIcon * ctr_qt_widgets_ffi_QSystemTrayIcon_QSystemTrayIcon3(QIcon const * icon) {
  return new QSystemTrayIcon(*icon);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_showMessage2(QSystemTrayIcon * this_ptr, QString const * title, QString const * msg, QIcon const * icon) {
  this_ptr->showMessage(*title, *msg, *icon);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_showMessage3(QSystemTrayIcon * this_ptr, QString const * title, QString const * msg, QSystemTrayIcon::MessageIcon icon) {
  this_ptr->showMessage(*title, *msg, icon);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSystemTrayIcon_showMessage4(QSystemTrayIcon * this_ptr, QString const * title, QString const * msg) {
  this_ptr->showMessage(*title, *msg);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableView_scrollTo1(QTableView * this_ptr, QModelIndex const * index) {
  this_ptr->scrollTo(*index);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_QTableWidgetItem5(QString const * text) {
  return new QTableWidgetItem(*text);
}


RITUAL_EXPORT QTableWidgetItem * ctr_qt_widgets_ffi_QTableWidgetItem_QTableWidgetItem6(QIcon const * icon, QString const * text) {
  return new QTableWidgetItem(*icon, *text);
}


RITUAL_EXPORT QTableWidget * ctr_qt_widgets_ffi_QTableWidget_QTableWidget3(int rows, int columns) {
  return new QTableWidget(rows, columns);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_sortItems1(QTableWidget * this_ptr, int column) {
  this_ptr->sortItems(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTableWidget_scrollToItem1(QTableWidget * this_ptr, QTableWidgetItem const * item) {
  this_ptr->scrollToItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTextBrowser_setSource1(QTextBrowser * this_ptr, QUrl const * name) {
  this_ptr->setSource(*name);
}


RITUAL_EXPORT QToolBar * ctr_qt_widgets_ffi_QToolBar_QToolBar3(QString const * title) {
  return new QToolBar(*title);
}


RITUAL_EXPORT QToolBox * ctr_qt_widgets_ffi_QToolBox_QToolBox2(QWidget * parent) {
  return new QToolBox(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_showText1(QPoint const * pos, QString const * text, QWidget * w, QRect const * rect) {
  QToolTip::showText(*pos, *text, w, *rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_showText2(QPoint const * pos, QString const * text, QWidget * w) {
  QToolTip::showText(*pos, *text, w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QToolTip_showText3(QPoint const * pos, QString const * text) {
  QToolTip::showText(*pos, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_scrollTo1(QTreeView * this_ptr, QModelIndex const * index) {
  this_ptr->scrollTo(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_dataChanged1(QTreeView * this_ptr, QModelIndex const * topLeft, QModelIndex const * bottomRight) {
  this_ptr->dataChanged(*topLeft, *bottomRight);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeView_expandRecursively1(QTreeView * this_ptr, QModelIndex const * index) {
  this_ptr->expandRecursively(*index);
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_QTreeWidgetItemIterator4(QTreeWidget * widget) {
  return new QTreeWidgetItemIterator(widget);
}


RITUAL_EXPORT QTreeWidgetItemIterator * ctr_qt_widgets_ffi_QTreeWidgetItemIterator_QTreeWidgetItemIterator5(QTreeWidgetItem * item) {
  return new QTreeWidgetItemIterator(item);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem10(QList< QString > const * strings) {
  return new QTreeWidgetItem(*strings);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem11(QTreeWidget * treeview) {
  return new QTreeWidgetItem(treeview);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem12(QTreeWidget * treeview, QList< QString > const * strings) {
  return new QTreeWidgetItem(treeview, *strings);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem13(QTreeWidget * treeview, QTreeWidgetItem * after) {
  return new QTreeWidgetItem(treeview, after);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem14(QTreeWidgetItem * parent) {
  return new QTreeWidgetItem(parent);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem15(QTreeWidgetItem * parent, QList< QString > const * strings) {
  return new QTreeWidgetItem(parent, *strings);
}


RITUAL_EXPORT QTreeWidgetItem * ctr_qt_widgets_ffi_QTreeWidgetItem_QTreeWidgetItem16(QTreeWidgetItem * parent, QTreeWidgetItem * after) {
  return new QTreeWidgetItem(parent, after);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_editItem1(QTreeWidget * this_ptr, QTreeWidgetItem * item) {
  this_ptr->editItem(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_openPersistentEditor1(QTreeWidget * this_ptr, QTreeWidgetItem * item) {
  this_ptr->openPersistentEditor(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_closePersistentEditor1(QTreeWidget * this_ptr, QTreeWidgetItem * item) {
  this_ptr->closePersistentEditor(item);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTreeWidget_isPersistentEditorOpen1(QTreeWidget const * this_ptr, QTreeWidgetItem * item) {
  return this_ptr->isPersistentEditorOpen(item);
}


RITUAL_EXPORT QList< QTreeWidgetItem * > * ctr_qt_widgets_ffi_QTreeWidget_findItems1(QTreeWidget const * this_ptr, QString const * text, int flags) {
  return new QList< QTreeWidgetItem * >(this_ptr->findItems(*text, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QTreeWidget_indexFromItem1(QTreeWidget const * this_ptr, QTreeWidgetItem const * item) {
  return new QModelIndex(this_ptr->indexFromItem(item));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTreeWidget_scrollToItem1(QTreeWidget * this_ptr, QTreeWidgetItem const * item) {
  this_ptr->scrollToItem(item);
}


RITUAL_EXPORT QUndoView * ctr_qt_widgets_ffi_QUndoView_QUndoView4(QUndoStack * stack) {
  return new QUndoView(stack);
}


RITUAL_EXPORT QUndoView * ctr_qt_widgets_ffi_QUndoView_QUndoView5(QUndoGroup * group) {
  return new QUndoView(group);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWhatsThis_showText1(QPoint const * pos, QString const * text) {
  QWhatsThis::showText(*pos, *text);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWhatsThis_createAction1() {
  return QWhatsThis::createAction();
}


RITUAL_EXPORT QWizard * ctr_qt_widgets_ffi_QWizard_QWizard2(QWidget * parent) {
  return new QWizard(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWizard_setOption1(QWizard * this_ptr, QWizard::WizardOption option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr(QObject * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr(QWidget * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_dynamic_cast_QWidget_ptr(QObject * ptr) {
  return dynamic_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr1(QPaintDevice * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr(QWidget * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_dynamic_cast_QWidget_ptr1(QPaintDevice * ptr) {
  return dynamic_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_static_cast_QAbstractButton_ptr(QWidget * ptr) {
  return static_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr2(QAbstractButton * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_dynamic_cast_QAbstractButton_ptr(QWidget * ptr) {
  return dynamic_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_static_cast_QAbstractButton_ptr1(QObject * ptr) {
  return static_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr1(QAbstractButton * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_dynamic_cast_QAbstractButton_ptr1(QObject * ptr) {
  return dynamic_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_static_cast_QAbstractButton_ptr2(QPaintDevice * ptr) {
  return static_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr1(QAbstractButton * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_dynamic_cast_QAbstractButton_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_static_cast_QAbstractSpinBox_ptr(QWidget * ptr) {
  return static_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr3(QAbstractSpinBox * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_dynamic_cast_QAbstractSpinBox_ptr(QWidget * ptr) {
  return dynamic_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_static_cast_QAbstractSpinBox_ptr1(QObject * ptr) {
  return static_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr2(QAbstractSpinBox * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_dynamic_cast_QAbstractSpinBox_ptr1(QObject * ptr) {
  return dynamic_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_static_cast_QAbstractSpinBox_ptr2(QPaintDevice * ptr) {
  return static_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr2(QAbstractSpinBox * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_dynamic_cast_QAbstractSpinBox_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_static_cast_QAbstractSlider_ptr(QWidget * ptr) {
  return static_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr4(QAbstractSlider * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_dynamic_cast_QAbstractSlider_ptr(QWidget * ptr) {
  return dynamic_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_static_cast_QAbstractSlider_ptr1(QObject * ptr) {
  return static_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr3(QAbstractSlider * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_dynamic_cast_QAbstractSlider_ptr1(QObject * ptr) {
  return dynamic_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_static_cast_QAbstractSlider_ptr2(QPaintDevice * ptr) {
  return static_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr3(QAbstractSlider * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_dynamic_cast_QAbstractSlider_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_static_cast_QSlider_ptr(QAbstractSlider * ptr) {
  return static_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_static_cast_QAbstractSlider_ptr3(QSlider * ptr) {
  return static_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_dynamic_cast_QSlider_ptr(QAbstractSlider * ptr) {
  return dynamic_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_static_cast_QSlider_ptr1(QWidget * ptr) {
  return static_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr5(QSlider * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_dynamic_cast_QSlider_ptr1(QWidget * ptr) {
  return dynamic_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_static_cast_QSlider_ptr2(QObject * ptr) {
  return static_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr4(QSlider * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_dynamic_cast_QSlider_ptr2(QObject * ptr) {
  return dynamic_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_static_cast_QSlider_ptr3(QPaintDevice * ptr) {
  return static_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr4(QSlider * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_dynamic_cast_QSlider_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QSlider * >(ptr);
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_static_cast_QStyle_ptr(QObject * ptr) {
  return static_cast< QStyle * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr5(QStyle * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_dynamic_cast_QStyle_ptr(QObject * ptr) {
  return dynamic_cast< QStyle * >(ptr);
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_static_cast_QTabBar_ptr(QWidget * ptr) {
  return static_cast< QTabBar * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr6(QTabBar * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_dynamic_cast_QTabBar_ptr(QWidget * ptr) {
  return dynamic_cast< QTabBar * >(ptr);
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_static_cast_QTabBar_ptr1(QObject * ptr) {
  return static_cast< QTabBar * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr6(QTabBar * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_dynamic_cast_QTabBar_ptr1(QObject * ptr) {
  return dynamic_cast< QTabBar * >(ptr);
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_static_cast_QTabBar_ptr2(QPaintDevice * ptr) {
  return static_cast< QTabBar * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr5(QTabBar * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_dynamic_cast_QTabBar_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QTabBar * >(ptr);
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_static_cast_QTabWidget_ptr(QWidget * ptr) {
  return static_cast< QTabWidget * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr7(QTabWidget * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_dynamic_cast_QTabWidget_ptr(QWidget * ptr) {
  return dynamic_cast< QTabWidget * >(ptr);
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_static_cast_QTabWidget_ptr1(QObject * ptr) {
  return static_cast< QTabWidget * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr7(QTabWidget * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_dynamic_cast_QTabWidget_ptr1(QObject * ptr) {
  return dynamic_cast< QTabWidget * >(ptr);
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_static_cast_QTabWidget_ptr2(QPaintDevice * ptr) {
  return static_cast< QTabWidget * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr6(QTabWidget * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_dynamic_cast_QTabWidget_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QTabWidget * >(ptr);
}


RITUAL_EXPORT QRubberBand * ctr_qt_widgets_ffi_static_cast_QRubberBand_ptr(QWidget * ptr) {
  return static_cast< QRubberBand * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr8(QRubberBand * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QRubberBand * ctr_qt_widgets_ffi_dynamic_cast_QRubberBand_ptr(QWidget * ptr) {
  return dynamic_cast< QRubberBand * >(ptr);
}


RITUAL_EXPORT QRubberBand * ctr_qt_widgets_ffi_static_cast_QRubberBand_ptr1(QObject * ptr) {
  return static_cast< QRubberBand * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr8(QRubberBand * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QRubberBand * ctr_qt_widgets_ffi_dynamic_cast_QRubberBand_ptr1(QObject * ptr) {
  return dynamic_cast< QRubberBand * >(ptr);
}


RITUAL_EXPORT QRubberBand * ctr_qt_widgets_ffi_static_cast_QRubberBand_ptr2(QPaintDevice * ptr) {
  return static_cast< QRubberBand * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr7(QRubberBand * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QRubberBand * ctr_qt_widgets_ffi_dynamic_cast_QRubberBand_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QRubberBand * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr(QWidget * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr9(QFrame * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_dynamic_cast_QFrame_ptr(QWidget * ptr) {
  return dynamic_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr1(QObject * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr9(QFrame * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_dynamic_cast_QFrame_ptr1(QObject * ptr) {
  return dynamic_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr2(QPaintDevice * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr8(QFrame * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_dynamic_cast_QFrame_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QStyleOptionFocusRect * ctr_qt_widgets_ffi_static_cast_QStyleOptionFocusRect_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionFocusRect * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr(QStyleOptionFocusRect * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionFrame * ctr_qt_widgets_ffi_static_cast_QStyleOptionFrame_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionFrame * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr1(QStyleOptionFrame * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionTabWidgetFrame * ctr_qt_widgets_ffi_static_cast_QStyleOptionTabWidgetFrame_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionTabWidgetFrame * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr2(QStyleOptionTabWidgetFrame * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionTabBarBase * ctr_qt_widgets_ffi_static_cast_QStyleOptionTabBarBase_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionTabBarBase * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr3(QStyleOptionTabBarBase * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionHeader * ctr_qt_widgets_ffi_static_cast_QStyleOptionHeader_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionHeader * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr4(QStyleOptionHeader * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionHeaderV2 * ctr_qt_widgets_ffi_static_cast_QStyleOptionHeaderV2_ptr(QStyleOptionHeader * ptr) {
  return static_cast< QStyleOptionHeaderV2 * >(ptr);
}


RITUAL_EXPORT QStyleOptionHeader * ctr_qt_widgets_ffi_static_cast_QStyleOptionHeader_ptr1(QStyleOptionHeaderV2 * ptr) {
  return static_cast< QStyleOptionHeader * >(ptr);
}


RITUAL_EXPORT QStyleOptionHeaderV2 * ctr_qt_widgets_ffi_static_cast_QStyleOptionHeaderV2_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionHeaderV2 * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr5(QStyleOptionHeaderV2 * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionButton * ctr_qt_widgets_ffi_static_cast_QStyleOptionButton_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionButton * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr6(QStyleOptionButton * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionTab * ctr_qt_widgets_ffi_static_cast_QStyleOptionTab_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionTab * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr7(QStyleOptionTab * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionToolBar * ctr_qt_widgets_ffi_static_cast_QStyleOptionToolBar_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionToolBar * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr8(QStyleOptionToolBar * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionProgressBar * ctr_qt_widgets_ffi_static_cast_QStyleOptionProgressBar_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionProgressBar * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr9(QStyleOptionProgressBar * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionMenuItem * ctr_qt_widgets_ffi_static_cast_QStyleOptionMenuItem_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionMenuItem * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr10(QStyleOptionMenuItem * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionDockWidget * ctr_qt_widgets_ffi_static_cast_QStyleOptionDockWidget_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionDockWidget * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr11(QStyleOptionDockWidget * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionViewItem * ctr_qt_widgets_ffi_static_cast_QStyleOptionViewItem_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionViewItem * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr12(QStyleOptionViewItem * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionToolBox * ctr_qt_widgets_ffi_static_cast_QStyleOptionToolBox_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionToolBox * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr13(QStyleOptionToolBox * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionRubberBand * ctr_qt_widgets_ffi_static_cast_QStyleOptionRubberBand_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionRubberBand * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr14(QStyleOptionRubberBand * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr15(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionSlider * ctr_qt_widgets_ffi_static_cast_QStyleOptionSlider_ptr(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOptionSlider * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr1(QStyleOptionSlider * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOptionSlider * ctr_qt_widgets_ffi_static_cast_QStyleOptionSlider_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionSlider * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr16(QStyleOptionSlider * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionSpinBox * ctr_qt_widgets_ffi_static_cast_QStyleOptionSpinBox_ptr(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOptionSpinBox * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr2(QStyleOptionSpinBox * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOptionSpinBox * ctr_qt_widgets_ffi_static_cast_QStyleOptionSpinBox_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionSpinBox * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr17(QStyleOptionSpinBox * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionToolButton * ctr_qt_widgets_ffi_static_cast_QStyleOptionToolButton_ptr(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOptionToolButton * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr3(QStyleOptionToolButton * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOptionToolButton * ctr_qt_widgets_ffi_static_cast_QStyleOptionToolButton_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionToolButton * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr18(QStyleOptionToolButton * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionComboBox * ctr_qt_widgets_ffi_static_cast_QStyleOptionComboBox_ptr(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOptionComboBox * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr4(QStyleOptionComboBox * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOptionComboBox * ctr_qt_widgets_ffi_static_cast_QStyleOptionComboBox_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionComboBox * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr19(QStyleOptionComboBox * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionTitleBar * ctr_qt_widgets_ffi_static_cast_QStyleOptionTitleBar_ptr(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOptionTitleBar * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr5(QStyleOptionTitleBar * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOptionTitleBar * ctr_qt_widgets_ffi_static_cast_QStyleOptionTitleBar_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionTitleBar * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr20(QStyleOptionTitleBar * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionGroupBox * ctr_qt_widgets_ffi_static_cast_QStyleOptionGroupBox_ptr(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOptionGroupBox * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr6(QStyleOptionGroupBox * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOptionGroupBox * ctr_qt_widgets_ffi_static_cast_QStyleOptionGroupBox_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionGroupBox * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr21(QStyleOptionGroupBox * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionSizeGrip * ctr_qt_widgets_ffi_static_cast_QStyleOptionSizeGrip_ptr(QStyleOptionComplex * ptr) {
  return static_cast< QStyleOptionSizeGrip * >(ptr);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_static_cast_QStyleOptionComplex_ptr7(QStyleOptionSizeGrip * ptr) {
  return static_cast< QStyleOptionComplex * >(ptr);
}


RITUAL_EXPORT QStyleOptionSizeGrip * ctr_qt_widgets_ffi_static_cast_QStyleOptionSizeGrip_ptr1(QStyleOption * ptr) {
  return static_cast< QStyleOptionSizeGrip * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr22(QStyleOptionSizeGrip * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleOptionGraphicsItem * ctr_qt_widgets_ffi_static_cast_QStyleOptionGraphicsItem_ptr(QStyleOption * ptr) {
  return static_cast< QStyleOptionGraphicsItem * >(ptr);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_static_cast_QStyleOption_ptr23(QStyleOptionGraphicsItem * ptr) {
  return static_cast< QStyleOption * >(ptr);
}


RITUAL_EXPORT QStyleHintReturnMask * ctr_qt_widgets_ffi_static_cast_QStyleHintReturnMask_ptr(QStyleHintReturn * ptr) {
  return static_cast< QStyleHintReturnMask * >(ptr);
}


RITUAL_EXPORT QStyleHintReturn * ctr_qt_widgets_ffi_static_cast_QStyleHintReturn_ptr(QStyleHintReturnMask * ptr) {
  return static_cast< QStyleHintReturn * >(ptr);
}


RITUAL_EXPORT QStyleHintReturnVariant * ctr_qt_widgets_ffi_static_cast_QStyleHintReturnVariant_ptr(QStyleHintReturn * ptr) {
  return static_cast< QStyleHintReturnVariant * >(ptr);
}


RITUAL_EXPORT QStyleHintReturn * ctr_qt_widgets_ffi_static_cast_QStyleHintReturn_ptr1(QStyleHintReturnVariant * ptr) {
  return static_cast< QStyleHintReturn * >(ptr);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_static_cast_QAbstractItemDelegate_ptr(QObject * ptr) {
  return static_cast< QAbstractItemDelegate * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr10(QAbstractItemDelegate * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_dynamic_cast_QAbstractItemDelegate_ptr(QObject * ptr) {
  return dynamic_cast< QAbstractItemDelegate * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr(QFrame * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr3(QAbstractScrollArea * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QAbstractScrollArea_ptr(QFrame * ptr) {
  return dynamic_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr1(QWidget * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr10(QAbstractScrollArea * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QAbstractScrollArea_ptr1(QWidget * ptr) {
  return dynamic_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr2(QObject * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr11(QAbstractScrollArea * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QAbstractScrollArea_ptr2(QObject * ptr) {
  return dynamic_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr3(QPaintDevice * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr9(QAbstractScrollArea * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QAbstractScrollArea_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr(QAbstractScrollArea * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr4(QAbstractItemView * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_dynamic_cast_QAbstractItemView_ptr(QAbstractScrollArea * ptr) {
  return dynamic_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr1(QFrame * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr4(QAbstractItemView * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_dynamic_cast_QAbstractItemView_ptr1(QFrame * ptr) {
  return dynamic_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr2(QWidget * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr11(QAbstractItemView * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_dynamic_cast_QAbstractItemView_ptr2(QWidget * ptr) {
  return dynamic_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr3(QObject * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr12(QAbstractItemView * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_dynamic_cast_QAbstractItemView_ptr3(QObject * ptr) {
  return dynamic_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr4(QPaintDevice * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr10(QAbstractItemView * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_dynamic_cast_QAbstractItemView_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_static_cast_QAccessibleWidget_ptr(QAccessibleObject * ptr) {
  return static_cast< QAccessibleWidget * >(ptr);
}


RITUAL_EXPORT QAccessibleObject * ctr_qt_widgets_ffi_static_cast_QAccessibleObject_ptr(QAccessibleWidget * ptr) {
  return static_cast< QAccessibleObject * >(ptr);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidget_ptr(QAccessibleObject * ptr) {
  return dynamic_cast< QAccessibleWidget * >(ptr);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_static_cast_QAccessibleWidget_ptr1(QAccessibleInterface * ptr) {
  return static_cast< QAccessibleWidget * >(ptr);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_widgets_ffi_static_cast_QAccessibleInterface_ptr(QAccessibleWidget * ptr) {
  return static_cast< QAccessibleInterface * >(ptr);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidget_ptr1(QAccessibleInterface * ptr) {
  return dynamic_cast< QAccessibleWidget * >(ptr);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_static_cast_QAccessibleWidget_ptr2(QAccessibleActionInterface * ptr) {
  return static_cast< QAccessibleWidget * >(ptr);
}


RITUAL_EXPORT QAccessibleActionInterface * ctr_qt_widgets_ffi_static_cast_QAccessibleActionInterface_ptr(QAccessibleWidget * ptr) {
  return static_cast< QAccessibleActionInterface * >(ptr);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidget_ptr2(QAccessibleActionInterface * ptr) {
  return dynamic_cast< QAccessibleWidget * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_static_cast_QAccessibleWidgetV2_ptr(QAccessibleWidget * ptr) {
  return static_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_static_cast_QAccessibleWidget_ptr3(QAccessibleWidgetV2 * ptr) {
  return static_cast< QAccessibleWidget * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidgetV2_ptr(QAccessibleWidget * ptr) {
  return dynamic_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_static_cast_QAccessibleWidgetV2_ptr1(QAccessibleObject * ptr) {
  return static_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleObject * ctr_qt_widgets_ffi_static_cast_QAccessibleObject_ptr1(QAccessibleWidgetV2 * ptr) {
  return static_cast< QAccessibleObject * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidgetV2_ptr1(QAccessibleObject * ptr) {
  return dynamic_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_static_cast_QAccessibleWidgetV2_ptr2(QAccessibleInterface * ptr) {
  return static_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_widgets_ffi_static_cast_QAccessibleInterface_ptr1(QAccessibleWidgetV2 * ptr) {
  return static_cast< QAccessibleInterface * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidgetV2_ptr2(QAccessibleInterface * ptr) {
  return dynamic_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_static_cast_QAccessibleWidgetV2_ptr3(QAccessibleActionInterface * ptr) {
  return static_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleActionInterface * ctr_qt_widgets_ffi_static_cast_QAccessibleActionInterface_ptr1(QAccessibleWidgetV2 * ptr) {
  return static_cast< QAccessibleActionInterface * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidgetV2_ptr3(QAccessibleActionInterface * ptr) {
  return dynamic_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_static_cast_QAccessibleWidgetV2_ptr4(QAccessibleAttributesInterface * ptr) {
  return static_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QAccessibleAttributesInterface * ctr_qt_widgets_ffi_static_cast_QAccessibleAttributesInterface_ptr(QAccessibleWidgetV2 * ptr) {
  return static_cast< QAccessibleAttributesInterface * >(ptr);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_dynamic_cast_QAccessibleWidgetV2_ptr4(QAccessibleAttributesInterface * ptr) {
  return dynamic_cast< QAccessibleWidgetV2 * >(ptr);
}


RITUAL_EXPORT QApplication * ctr_qt_widgets_ffi_static_cast_QApplication_ptr(QGuiApplication * ptr) {
  return static_cast< QApplication * >(ptr);
}


RITUAL_EXPORT QGuiApplication * ctr_qt_widgets_ffi_static_cast_QGuiApplication_ptr(QApplication * ptr) {
  return static_cast< QGuiApplication * >(ptr);
}


RITUAL_EXPORT QApplication * ctr_qt_widgets_ffi_dynamic_cast_QApplication_ptr(QGuiApplication * ptr) {
  return dynamic_cast< QApplication * >(ptr);
}


RITUAL_EXPORT QApplication * ctr_qt_widgets_ffi_static_cast_QApplication_ptr1(QCoreApplication * ptr) {
  return static_cast< QApplication * >(ptr);
}


RITUAL_EXPORT QCoreApplication * ctr_qt_widgets_ffi_static_cast_QCoreApplication_ptr(QApplication * ptr) {
  return static_cast< QCoreApplication * >(ptr);
}


RITUAL_EXPORT QApplication * ctr_qt_widgets_ffi_dynamic_cast_QApplication_ptr1(QCoreApplication * ptr) {
  return dynamic_cast< QApplication * >(ptr);
}


RITUAL_EXPORT QApplication * ctr_qt_widgets_ffi_static_cast_QApplication_ptr2(QObject * ptr) {
  return static_cast< QApplication * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr13(QApplication * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QApplication * ctr_qt_widgets_ffi_dynamic_cast_QApplication_ptr2(QObject * ptr) {
  return dynamic_cast< QApplication * >(ptr);
}


RITUAL_EXPORT QSpacerItem * ctr_qt_widgets_ffi_static_cast_QSpacerItem_ptr(QLayoutItem * ptr) {
  return static_cast< QSpacerItem * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr(QSpacerItem * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QSpacerItem * ctr_qt_widgets_ffi_dynamic_cast_QSpacerItem_ptr(QLayoutItem * ptr) {
  return dynamic_cast< QSpacerItem * >(ptr);
}


RITUAL_EXPORT QWidgetItem * ctr_qt_widgets_ffi_static_cast_QWidgetItem_ptr(QLayoutItem * ptr) {
  return static_cast< QWidgetItem * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr1(QWidgetItem * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QWidgetItem * ctr_qt_widgets_ffi_dynamic_cast_QWidgetItem_ptr(QLayoutItem * ptr) {
  return dynamic_cast< QWidgetItem * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_static_cast_QLayout_ptr(QObject * ptr) {
  return static_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr14(QLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_dynamic_cast_QLayout_ptr(QObject * ptr) {
  return dynamic_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_static_cast_QLayout_ptr1(QLayoutItem * ptr) {
  return static_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr2(QLayout * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_dynamic_cast_QLayout_ptr1(QLayoutItem * ptr) {
  return dynamic_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_static_cast_QGridLayout_ptr(QLayout * ptr) {
  return static_cast< QGridLayout * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_static_cast_QLayout_ptr2(QGridLayout * ptr) {
  return static_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_dynamic_cast_QGridLayout_ptr(QLayout * ptr) {
  return dynamic_cast< QGridLayout * >(ptr);
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_static_cast_QGridLayout_ptr1(QObject * ptr) {
  return static_cast< QGridLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr15(QGridLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_dynamic_cast_QGridLayout_ptr1(QObject * ptr) {
  return dynamic_cast< QGridLayout * >(ptr);
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_static_cast_QGridLayout_ptr2(QLayoutItem * ptr) {
  return static_cast< QGridLayout * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr3(QGridLayout * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_dynamic_cast_QGridLayout_ptr2(QLayoutItem * ptr) {
  return dynamic_cast< QGridLayout * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_static_cast_QBoxLayout_ptr(QLayout * ptr) {
  return static_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_static_cast_QLayout_ptr3(QBoxLayout * ptr) {
  return static_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QBoxLayout_ptr(QLayout * ptr) {
  return dynamic_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_static_cast_QBoxLayout_ptr1(QObject * ptr) {
  return static_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr16(QBoxLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QBoxLayout_ptr1(QObject * ptr) {
  return dynamic_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_static_cast_QBoxLayout_ptr2(QLayoutItem * ptr) {
  return static_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr4(QBoxLayout * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QBoxLayout_ptr2(QLayoutItem * ptr) {
  return dynamic_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_static_cast_QHBoxLayout_ptr(QBoxLayout * ptr) {
  return static_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_static_cast_QBoxLayout_ptr3(QHBoxLayout * ptr) {
  return static_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QHBoxLayout_ptr(QBoxLayout * ptr) {
  return dynamic_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_static_cast_QHBoxLayout_ptr1(QLayout * ptr) {
  return static_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_static_cast_QLayout_ptr4(QHBoxLayout * ptr) {
  return static_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QHBoxLayout_ptr1(QLayout * ptr) {
  return dynamic_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_static_cast_QHBoxLayout_ptr2(QObject * ptr) {
  return static_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr17(QHBoxLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QHBoxLayout_ptr2(QObject * ptr) {
  return dynamic_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_static_cast_QHBoxLayout_ptr3(QLayoutItem * ptr) {
  return static_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr5(QHBoxLayout * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QHBoxLayout_ptr3(QLayoutItem * ptr) {
  return dynamic_cast< QHBoxLayout * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_static_cast_QVBoxLayout_ptr(QBoxLayout * ptr) {
  return static_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_static_cast_QBoxLayout_ptr4(QVBoxLayout * ptr) {
  return static_cast< QBoxLayout * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QVBoxLayout_ptr(QBoxLayout * ptr) {
  return dynamic_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_static_cast_QVBoxLayout_ptr1(QLayout * ptr) {
  return static_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_static_cast_QLayout_ptr5(QVBoxLayout * ptr) {
  return static_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QVBoxLayout_ptr1(QLayout * ptr) {
  return dynamic_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_static_cast_QVBoxLayout_ptr2(QObject * ptr) {
  return static_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr18(QVBoxLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QVBoxLayout_ptr2(QObject * ptr) {
  return dynamic_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_static_cast_QVBoxLayout_ptr3(QLayoutItem * ptr) {
  return static_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr6(QVBoxLayout * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_dynamic_cast_QVBoxLayout_ptr3(QLayoutItem * ptr) {
  return dynamic_cast< QVBoxLayout * >(ptr);
}


RITUAL_EXPORT QButtonGroup * ctr_qt_widgets_ffi_static_cast_QButtonGroup_ptr(QObject * ptr) {
  return static_cast< QButtonGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr19(QButtonGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QButtonGroup * ctr_qt_widgets_ffi_dynamic_cast_QButtonGroup_ptr(QObject * ptr) {
  return dynamic_cast< QButtonGroup * >(ptr);
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_static_cast_QCalendarWidget_ptr(QWidget * ptr) {
  return static_cast< QCalendarWidget * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr12(QCalendarWidget * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_dynamic_cast_QCalendarWidget_ptr(QWidget * ptr) {
  return dynamic_cast< QCalendarWidget * >(ptr);
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_static_cast_QCalendarWidget_ptr1(QObject * ptr) {
  return static_cast< QCalendarWidget * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr20(QCalendarWidget * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_dynamic_cast_QCalendarWidget_ptr1(QObject * ptr) {
  return dynamic_cast< QCalendarWidget * >(ptr);
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_static_cast_QCalendarWidget_ptr2(QPaintDevice * ptr) {
  return static_cast< QCalendarWidget * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr11(QCalendarWidget * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_dynamic_cast_QCalendarWidget_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QCalendarWidget * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_static_cast_QCheckBox_ptr(QAbstractButton * ptr) {
  return static_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_static_cast_QAbstractButton_ptr3(QCheckBox * ptr) {
  return static_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_dynamic_cast_QCheckBox_ptr(QAbstractButton * ptr) {
  return dynamic_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_static_cast_QCheckBox_ptr1(QWidget * ptr) {
  return static_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr13(QCheckBox * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_dynamic_cast_QCheckBox_ptr1(QWidget * ptr) {
  return dynamic_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_static_cast_QCheckBox_ptr2(QObject * ptr) {
  return static_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr21(QCheckBox * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_dynamic_cast_QCheckBox_ptr2(QObject * ptr) {
  return dynamic_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_static_cast_QCheckBox_ptr3(QPaintDevice * ptr) {
  return static_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr12(QCheckBox * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_dynamic_cast_QCheckBox_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QCheckBox * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr(QWidget * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr14(QDialog * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_dynamic_cast_QDialog_ptr(QWidget * ptr) {
  return dynamic_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr1(QObject * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr22(QDialog * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_dynamic_cast_QDialog_ptr1(QObject * ptr) {
  return dynamic_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr2(QPaintDevice * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr13(QDialog * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_dynamic_cast_QDialog_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_static_cast_QColorDialog_ptr(QDialog * ptr) {
  return static_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr3(QColorDialog * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_dynamic_cast_QColorDialog_ptr(QDialog * ptr) {
  return dynamic_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_static_cast_QColorDialog_ptr1(QWidget * ptr) {
  return static_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr15(QColorDialog * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_dynamic_cast_QColorDialog_ptr1(QWidget * ptr) {
  return dynamic_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_static_cast_QColorDialog_ptr2(QObject * ptr) {
  return static_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr23(QColorDialog * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_dynamic_cast_QColorDialog_ptr2(QObject * ptr) {
  return dynamic_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_static_cast_QColorDialog_ptr3(QPaintDevice * ptr) {
  return static_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr14(QColorDialog * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_dynamic_cast_QColorDialog_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QColorDialog * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_static_cast_QColumnView_ptr(QAbstractItemView * ptr) {
  return static_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr5(QColumnView * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_dynamic_cast_QColumnView_ptr(QAbstractItemView * ptr) {
  return dynamic_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_static_cast_QColumnView_ptr1(QAbstractScrollArea * ptr) {
  return static_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr5(QColumnView * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_dynamic_cast_QColumnView_ptr1(QAbstractScrollArea * ptr) {
  return dynamic_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_static_cast_QColumnView_ptr2(QFrame * ptr) {
  return static_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr5(QColumnView * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_dynamic_cast_QColumnView_ptr2(QFrame * ptr) {
  return dynamic_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_static_cast_QColumnView_ptr3(QWidget * ptr) {
  return static_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr16(QColumnView * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_dynamic_cast_QColumnView_ptr3(QWidget * ptr) {
  return dynamic_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_static_cast_QColumnView_ptr4(QObject * ptr) {
  return static_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr24(QColumnView * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_dynamic_cast_QColumnView_ptr4(QObject * ptr) {
  return dynamic_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_static_cast_QColumnView_ptr5(QPaintDevice * ptr) {
  return static_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr15(QColumnView * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_dynamic_cast_QColumnView_ptr5(QPaintDevice * ptr) {
  return dynamic_cast< QColumnView * >(ptr);
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_static_cast_QComboBox_ptr(QWidget * ptr) {
  return static_cast< QComboBox * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr17(QComboBox * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_dynamic_cast_QComboBox_ptr(QWidget * ptr) {
  return dynamic_cast< QComboBox * >(ptr);
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_static_cast_QComboBox_ptr1(QObject * ptr) {
  return static_cast< QComboBox * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr25(QComboBox * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_dynamic_cast_QComboBox_ptr1(QObject * ptr) {
  return dynamic_cast< QComboBox * >(ptr);
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_static_cast_QComboBox_ptr2(QPaintDevice * ptr) {
  return static_cast< QComboBox * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr16(QComboBox * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_dynamic_cast_QComboBox_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QComboBox * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_static_cast_QPushButton_ptr(QAbstractButton * ptr) {
  return static_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_static_cast_QAbstractButton_ptr4(QPushButton * ptr) {
  return static_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_dynamic_cast_QPushButton_ptr(QAbstractButton * ptr) {
  return dynamic_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_static_cast_QPushButton_ptr1(QWidget * ptr) {
  return static_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr18(QPushButton * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_dynamic_cast_QPushButton_ptr1(QWidget * ptr) {
  return dynamic_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_static_cast_QPushButton_ptr2(QObject * ptr) {
  return static_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr26(QPushButton * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_dynamic_cast_QPushButton_ptr2(QObject * ptr) {
  return dynamic_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_static_cast_QPushButton_ptr3(QPaintDevice * ptr) {
  return static_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr17(QPushButton * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_dynamic_cast_QPushButton_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_static_cast_QCommandLinkButton_ptr(QPushButton * ptr) {
  return static_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_static_cast_QPushButton_ptr4(QCommandLinkButton * ptr) {
  return static_cast< QPushButton * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_dynamic_cast_QCommandLinkButton_ptr(QPushButton * ptr) {
  return dynamic_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_static_cast_QCommandLinkButton_ptr1(QAbstractButton * ptr) {
  return static_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_static_cast_QAbstractButton_ptr5(QCommandLinkButton * ptr) {
  return static_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_dynamic_cast_QCommandLinkButton_ptr1(QAbstractButton * ptr) {
  return dynamic_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_static_cast_QCommandLinkButton_ptr2(QWidget * ptr) {
  return static_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr19(QCommandLinkButton * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_dynamic_cast_QCommandLinkButton_ptr2(QWidget * ptr) {
  return dynamic_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_static_cast_QCommandLinkButton_ptr3(QObject * ptr) {
  return static_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr27(QCommandLinkButton * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_dynamic_cast_QCommandLinkButton_ptr3(QObject * ptr) {
  return dynamic_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_static_cast_QCommandLinkButton_ptr4(QPaintDevice * ptr) {
  return static_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr18(QCommandLinkButton * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_dynamic_cast_QCommandLinkButton_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QCommandLinkButton * >(ptr);
}


RITUAL_EXPORT QCommonStyle * ctr_qt_widgets_ffi_static_cast_QCommonStyle_ptr(QStyle * ptr) {
  return static_cast< QCommonStyle * >(ptr);
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_static_cast_QStyle_ptr1(QCommonStyle * ptr) {
  return static_cast< QStyle * >(ptr);
}


RITUAL_EXPORT QCommonStyle * ctr_qt_widgets_ffi_dynamic_cast_QCommonStyle_ptr(QStyle * ptr) {
  return dynamic_cast< QCommonStyle * >(ptr);
}


RITUAL_EXPORT QCommonStyle * ctr_qt_widgets_ffi_static_cast_QCommonStyle_ptr1(QObject * ptr) {
  return static_cast< QCommonStyle * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr28(QCommonStyle * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QCommonStyle * ctr_qt_widgets_ffi_dynamic_cast_QCommonStyle_ptr1(QObject * ptr) {
  return dynamic_cast< QCommonStyle * >(ptr);
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_static_cast_QCompleter_ptr(QObject * ptr) {
  return static_cast< QCompleter * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr29(QCompleter * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_dynamic_cast_QCompleter_ptr(QObject * ptr) {
  return dynamic_cast< QCompleter * >(ptr);
}


RITUAL_EXPORT QDataWidgetMapper * ctr_qt_widgets_ffi_static_cast_QDataWidgetMapper_ptr(QObject * ptr) {
  return static_cast< QDataWidgetMapper * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr30(QDataWidgetMapper * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDataWidgetMapper * ctr_qt_widgets_ffi_dynamic_cast_QDataWidgetMapper_ptr(QObject * ptr) {
  return dynamic_cast< QDataWidgetMapper * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_static_cast_QDateTimeEdit_ptr(QAbstractSpinBox * ptr) {
  return static_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_static_cast_QAbstractSpinBox_ptr3(QDateTimeEdit * ptr) {
  return static_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateTimeEdit_ptr(QAbstractSpinBox * ptr) {
  return dynamic_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_static_cast_QDateTimeEdit_ptr1(QWidget * ptr) {
  return static_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr20(QDateTimeEdit * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateTimeEdit_ptr1(QWidget * ptr) {
  return dynamic_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_static_cast_QDateTimeEdit_ptr2(QObject * ptr) {
  return static_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr31(QDateTimeEdit * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateTimeEdit_ptr2(QObject * ptr) {
  return dynamic_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_static_cast_QDateTimeEdit_ptr3(QPaintDevice * ptr) {
  return static_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr19(QDateTimeEdit * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateTimeEdit_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_static_cast_QTimeEdit_ptr(QDateTimeEdit * ptr) {
  return static_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_static_cast_QDateTimeEdit_ptr4(QTimeEdit * ptr) {
  return static_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QTimeEdit_ptr(QDateTimeEdit * ptr) {
  return dynamic_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_static_cast_QTimeEdit_ptr1(QAbstractSpinBox * ptr) {
  return static_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_static_cast_QAbstractSpinBox_ptr4(QTimeEdit * ptr) {
  return static_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QTimeEdit_ptr1(QAbstractSpinBox * ptr) {
  return dynamic_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_static_cast_QTimeEdit_ptr2(QWidget * ptr) {
  return static_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr21(QTimeEdit * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QTimeEdit_ptr2(QWidget * ptr) {
  return dynamic_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_static_cast_QTimeEdit_ptr3(QObject * ptr) {
  return static_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr32(QTimeEdit * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QTimeEdit_ptr3(QObject * ptr) {
  return dynamic_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_static_cast_QTimeEdit_ptr4(QPaintDevice * ptr) {
  return static_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr20(QTimeEdit * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_dynamic_cast_QTimeEdit_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QTimeEdit * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_static_cast_QDateEdit_ptr(QDateTimeEdit * ptr) {
  return static_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_static_cast_QDateTimeEdit_ptr5(QDateEdit * ptr) {
  return static_cast< QDateTimeEdit * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateEdit_ptr(QDateTimeEdit * ptr) {
  return dynamic_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_static_cast_QDateEdit_ptr1(QAbstractSpinBox * ptr) {
  return static_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_static_cast_QAbstractSpinBox_ptr5(QDateEdit * ptr) {
  return static_cast< QAbstractSpinBox * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateEdit_ptr1(QAbstractSpinBox * ptr) {
  return dynamic_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_static_cast_QDateEdit_ptr2(QWidget * ptr) {
  return static_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr22(QDateEdit * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateEdit_ptr2(QWidget * ptr) {
  return dynamic_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_static_cast_QDateEdit_ptr3(QObject * ptr) {
  return static_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr33(QDateEdit * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateEdit_ptr3(QObject * ptr) {
  return dynamic_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_static_cast_QDateEdit_ptr4(QPaintDevice * ptr) {
  return static_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr21(QDateEdit * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_dynamic_cast_QDateEdit_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QDateEdit * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_static_cast_QDial_ptr(QAbstractSlider * ptr) {
  return static_cast< QDial * >(ptr);
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_static_cast_QAbstractSlider_ptr4(QDial * ptr) {
  return static_cast< QAbstractSlider * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_dynamic_cast_QDial_ptr(QAbstractSlider * ptr) {
  return dynamic_cast< QDial * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_static_cast_QDial_ptr1(QWidget * ptr) {
  return static_cast< QDial * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr23(QDial * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_dynamic_cast_QDial_ptr1(QWidget * ptr) {
  return dynamic_cast< QDial * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_static_cast_QDial_ptr2(QObject * ptr) {
  return static_cast< QDial * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr34(QDial * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_dynamic_cast_QDial_ptr2(QObject * ptr) {
  return dynamic_cast< QDial * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_static_cast_QDial_ptr3(QPaintDevice * ptr) {
  return static_cast< QDial * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr22(QDial * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_dynamic_cast_QDial_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QDial * >(ptr);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_static_cast_QDialogButtonBox_ptr(QWidget * ptr) {
  return static_cast< QDialogButtonBox * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr24(QDialogButtonBox * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_dynamic_cast_QDialogButtonBox_ptr(QWidget * ptr) {
  return dynamic_cast< QDialogButtonBox * >(ptr);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_static_cast_QDialogButtonBox_ptr1(QObject * ptr) {
  return static_cast< QDialogButtonBox * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr35(QDialogButtonBox * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_dynamic_cast_QDialogButtonBox_ptr1(QObject * ptr) {
  return dynamic_cast< QDialogButtonBox * >(ptr);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_static_cast_QDialogButtonBox_ptr2(QPaintDevice * ptr) {
  return static_cast< QDialogButtonBox * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr23(QDialogButtonBox * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_dynamic_cast_QDialogButtonBox_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QDialogButtonBox * >(ptr);
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_static_cast_QDockWidget_ptr(QWidget * ptr) {
  return static_cast< QDockWidget * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr25(QDockWidget * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_dynamic_cast_QDockWidget_ptr(QWidget * ptr) {
  return dynamic_cast< QDockWidget * >(ptr);
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_static_cast_QDockWidget_ptr1(QObject * ptr) {
  return static_cast< QDockWidget * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr36(QDockWidget * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_dynamic_cast_QDockWidget_ptr1(QObject * ptr) {
  return dynamic_cast< QDockWidget * >(ptr);
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_static_cast_QDockWidget_ptr2(QPaintDevice * ptr) {
  return static_cast< QDockWidget * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr24(QDockWidget * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_dynamic_cast_QDockWidget_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QDockWidget * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_static_cast_QErrorMessage_ptr(QDialog * ptr) {
  return static_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr4(QErrorMessage * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_dynamic_cast_QErrorMessage_ptr(QDialog * ptr) {
  return dynamic_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_static_cast_QErrorMessage_ptr1(QWidget * ptr) {
  return static_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr26(QErrorMessage * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_dynamic_cast_QErrorMessage_ptr1(QWidget * ptr) {
  return dynamic_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_static_cast_QErrorMessage_ptr2(QObject * ptr) {
  return static_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr37(QErrorMessage * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_dynamic_cast_QErrorMessage_ptr2(QObject * ptr) {
  return dynamic_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_static_cast_QErrorMessage_ptr3(QPaintDevice * ptr) {
  return static_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr25(QErrorMessage * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_dynamic_cast_QErrorMessage_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QErrorMessage * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_static_cast_QFileDialog_ptr(QDialog * ptr) {
  return static_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr5(QFileDialog * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_dynamic_cast_QFileDialog_ptr(QDialog * ptr) {
  return dynamic_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_static_cast_QFileDialog_ptr1(QWidget * ptr) {
  return static_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr27(QFileDialog * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_dynamic_cast_QFileDialog_ptr1(QWidget * ptr) {
  return dynamic_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_static_cast_QFileDialog_ptr2(QObject * ptr) {
  return static_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr38(QFileDialog * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_dynamic_cast_QFileDialog_ptr2(QObject * ptr) {
  return dynamic_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_static_cast_QFileDialog_ptr3(QPaintDevice * ptr) {
  return static_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr26(QFileDialog * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_dynamic_cast_QFileDialog_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QFileDialog * >(ptr);
}


RITUAL_EXPORT QFileIconProvider * ctr_qt_widgets_ffi_static_cast_QFileIconProvider_ptr(QAbstractFileIconProvider * ptr) {
  return static_cast< QFileIconProvider * >(ptr);
}


RITUAL_EXPORT QAbstractFileIconProvider * ctr_qt_widgets_ffi_static_cast_QAbstractFileIconProvider_ptr(QFileIconProvider * ptr) {
  return static_cast< QAbstractFileIconProvider * >(ptr);
}


RITUAL_EXPORT QFileIconProvider * ctr_qt_widgets_ffi_dynamic_cast_QFileIconProvider_ptr(QAbstractFileIconProvider * ptr) {
  return dynamic_cast< QFileIconProvider * >(ptr);
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_static_cast_QFocusFrame_ptr(QWidget * ptr) {
  return static_cast< QFocusFrame * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr28(QFocusFrame * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_dynamic_cast_QFocusFrame_ptr(QWidget * ptr) {
  return dynamic_cast< QFocusFrame * >(ptr);
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_static_cast_QFocusFrame_ptr1(QObject * ptr) {
  return static_cast< QFocusFrame * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr39(QFocusFrame * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_dynamic_cast_QFocusFrame_ptr1(QObject * ptr) {
  return dynamic_cast< QFocusFrame * >(ptr);
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_static_cast_QFocusFrame_ptr2(QPaintDevice * ptr) {
  return static_cast< QFocusFrame * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr27(QFocusFrame * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_dynamic_cast_QFocusFrame_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QFocusFrame * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_static_cast_QFontComboBox_ptr(QComboBox * ptr) {
  return static_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_static_cast_QComboBox_ptr3(QFontComboBox * ptr) {
  return static_cast< QComboBox * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_dynamic_cast_QFontComboBox_ptr(QComboBox * ptr) {
  return dynamic_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_static_cast_QFontComboBox_ptr1(QWidget * ptr) {
  return static_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr29(QFontComboBox * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_dynamic_cast_QFontComboBox_ptr1(QWidget * ptr) {
  return dynamic_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_static_cast_QFontComboBox_ptr2(QObject * ptr) {
  return static_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr40(QFontComboBox * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_dynamic_cast_QFontComboBox_ptr2(QObject * ptr) {
  return dynamic_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_static_cast_QFontComboBox_ptr3(QPaintDevice * ptr) {
  return static_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr28(QFontComboBox * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_dynamic_cast_QFontComboBox_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QFontComboBox * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_static_cast_QFontDialog_ptr(QDialog * ptr) {
  return static_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr6(QFontDialog * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_dynamic_cast_QFontDialog_ptr(QDialog * ptr) {
  return dynamic_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_static_cast_QFontDialog_ptr1(QWidget * ptr) {
  return static_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr30(QFontDialog * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_dynamic_cast_QFontDialog_ptr1(QWidget * ptr) {
  return dynamic_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_static_cast_QFontDialog_ptr2(QObject * ptr) {
  return static_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr41(QFontDialog * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_dynamic_cast_QFontDialog_ptr2(QObject * ptr) {
  return dynamic_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_static_cast_QFontDialog_ptr3(QPaintDevice * ptr) {
  return static_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr29(QFontDialog * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_dynamic_cast_QFontDialog_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QFontDialog * >(ptr);
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_static_cast_QFormLayout_ptr(QLayout * ptr) {
  return static_cast< QFormLayout * >(ptr);
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_static_cast_QLayout_ptr6(QFormLayout * ptr) {
  return static_cast< QLayout * >(ptr);
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_dynamic_cast_QFormLayout_ptr(QLayout * ptr) {
  return dynamic_cast< QFormLayout * >(ptr);
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_static_cast_QFormLayout_ptr1(QObject * ptr) {
  return static_cast< QFormLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr42(QFormLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_dynamic_cast_QFormLayout_ptr1(QObject * ptr) {
  return dynamic_cast< QFormLayout * >(ptr);
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_static_cast_QFormLayout_ptr2(QLayoutItem * ptr) {
  return static_cast< QFormLayout * >(ptr);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_static_cast_QLayoutItem_ptr7(QFormLayout * ptr) {
  return static_cast< QLayoutItem * >(ptr);
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_dynamic_cast_QFormLayout_ptr2(QLayoutItem * ptr) {
  return dynamic_cast< QFormLayout * >(ptr);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_static_cast_QGesture_ptr(QObject * ptr) {
  return static_cast< QGesture * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr43(QGesture * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_dynamic_cast_QGesture_ptr(QObject * ptr) {
  return dynamic_cast< QGesture * >(ptr);
}


RITUAL_EXPORT QPanGesture * ctr_qt_widgets_ffi_static_cast_QPanGesture_ptr(QGesture * ptr) {
  return static_cast< QPanGesture * >(ptr);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_static_cast_QGesture_ptr1(QPanGesture * ptr) {
  return static_cast< QGesture * >(ptr);
}


RITUAL_EXPORT QPanGesture * ctr_qt_widgets_ffi_dynamic_cast_QPanGesture_ptr(QGesture * ptr) {
  return dynamic_cast< QPanGesture * >(ptr);
}


RITUAL_EXPORT QPanGesture * ctr_qt_widgets_ffi_static_cast_QPanGesture_ptr1(QObject * ptr) {
  return static_cast< QPanGesture * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr44(QPanGesture * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPanGesture * ctr_qt_widgets_ffi_dynamic_cast_QPanGesture_ptr1(QObject * ptr) {
  return dynamic_cast< QPanGesture * >(ptr);
}


RITUAL_EXPORT QPinchGesture * ctr_qt_widgets_ffi_static_cast_QPinchGesture_ptr(QGesture * ptr) {
  return static_cast< QPinchGesture * >(ptr);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_static_cast_QGesture_ptr2(QPinchGesture * ptr) {
  return static_cast< QGesture * >(ptr);
}


RITUAL_EXPORT QPinchGesture * ctr_qt_widgets_ffi_dynamic_cast_QPinchGesture_ptr(QGesture * ptr) {
  return dynamic_cast< QPinchGesture * >(ptr);
}


RITUAL_EXPORT QPinchGesture * ctr_qt_widgets_ffi_static_cast_QPinchGesture_ptr1(QObject * ptr) {
  return static_cast< QPinchGesture * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr45(QPinchGesture * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPinchGesture * ctr_qt_widgets_ffi_dynamic_cast_QPinchGesture_ptr1(QObject * ptr) {
  return dynamic_cast< QPinchGesture * >(ptr);
}


RITUAL_EXPORT QSwipeGesture * ctr_qt_widgets_ffi_static_cast_QSwipeGesture_ptr(QGesture * ptr) {
  return static_cast< QSwipeGesture * >(ptr);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_static_cast_QGesture_ptr3(QSwipeGesture * ptr) {
  return static_cast< QGesture * >(ptr);
}


RITUAL_EXPORT QSwipeGesture * ctr_qt_widgets_ffi_dynamic_cast_QSwipeGesture_ptr(QGesture * ptr) {
  return dynamic_cast< QSwipeGesture * >(ptr);
}


RITUAL_EXPORT QSwipeGesture * ctr_qt_widgets_ffi_static_cast_QSwipeGesture_ptr1(QObject * ptr) {
  return static_cast< QSwipeGesture * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr46(QSwipeGesture * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSwipeGesture * ctr_qt_widgets_ffi_dynamic_cast_QSwipeGesture_ptr1(QObject * ptr) {
  return dynamic_cast< QSwipeGesture * >(ptr);
}


RITUAL_EXPORT QTapGesture * ctr_qt_widgets_ffi_static_cast_QTapGesture_ptr(QGesture * ptr) {
  return static_cast< QTapGesture * >(ptr);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_static_cast_QGesture_ptr4(QTapGesture * ptr) {
  return static_cast< QGesture * >(ptr);
}


RITUAL_EXPORT QTapGesture * ctr_qt_widgets_ffi_dynamic_cast_QTapGesture_ptr(QGesture * ptr) {
  return dynamic_cast< QTapGesture * >(ptr);
}


RITUAL_EXPORT QTapGesture * ctr_qt_widgets_ffi_static_cast_QTapGesture_ptr1(QObject * ptr) {
  return static_cast< QTapGesture * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr47(QTapGesture * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTapGesture * ctr_qt_widgets_ffi_dynamic_cast_QTapGesture_ptr1(QObject * ptr) {
  return dynamic_cast< QTapGesture * >(ptr);
}


RITUAL_EXPORT QTapAndHoldGesture * ctr_qt_widgets_ffi_static_cast_QTapAndHoldGesture_ptr(QGesture * ptr) {
  return static_cast< QTapAndHoldGesture * >(ptr);
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_static_cast_QGesture_ptr5(QTapAndHoldGesture * ptr) {
  return static_cast< QGesture * >(ptr);
}


RITUAL_EXPORT QTapAndHoldGesture * ctr_qt_widgets_ffi_dynamic_cast_QTapAndHoldGesture_ptr(QGesture * ptr) {
  return dynamic_cast< QTapAndHoldGesture * >(ptr);
}


RITUAL_EXPORT QTapAndHoldGesture * ctr_qt_widgets_ffi_static_cast_QTapAndHoldGesture_ptr1(QObject * ptr) {
  return static_cast< QTapAndHoldGesture * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr48(QTapAndHoldGesture * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTapAndHoldGesture * ctr_qt_widgets_ffi_dynamic_cast_QTapAndHoldGesture_ptr1(QObject * ptr) {
  return dynamic_cast< QTapAndHoldGesture * >(ptr);
}


RITUAL_EXPORT QGestureEvent * ctr_qt_widgets_ffi_static_cast_QGestureEvent_ptr(QEvent * ptr) {
  return static_cast< QGestureEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr(QGestureEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGestureEvent * ctr_qt_widgets_ffi_dynamic_cast_QGestureEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QGestureEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_static_cast_QGraphicsObject_ptr(QObject * ptr) {
  return static_cast< QGraphicsObject * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr49(QGraphicsObject * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsObject_ptr(QObject * ptr) {
  return dynamic_cast< QGraphicsObject * >(ptr);
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_static_cast_QGraphicsObject_ptr1(QGraphicsItem * ptr) {
  return static_cast< QGraphicsObject * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr(QGraphicsObject * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsObject_ptr1(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsObject * >(ptr);
}


RITUAL_EXPORT QAbstractGraphicsShapeItem * ctr_qt_widgets_ffi_static_cast_QAbstractGraphicsShapeItem_ptr(QGraphicsItem * ptr) {
  return static_cast< QAbstractGraphicsShapeItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr1(QAbstractGraphicsShapeItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QAbstractGraphicsShapeItem * ctr_qt_widgets_ffi_dynamic_cast_QAbstractGraphicsShapeItem_ptr(QGraphicsItem * ptr) {
  return dynamic_cast< QAbstractGraphicsShapeItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_static_cast_QGraphicsPathItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return static_cast< QGraphicsPathItem * >(ptr);
}


RITUAL_EXPORT QAbstractGraphicsShapeItem * ctr_qt_widgets_ffi_static_cast_QAbstractGraphicsShapeItem_ptr1(QGraphicsPathItem * ptr) {
  return static_cast< QAbstractGraphicsShapeItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsPathItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return dynamic_cast< QGraphicsPathItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_static_cast_QGraphicsPathItem_ptr1(QGraphicsItem * ptr) {
  return static_cast< QGraphicsPathItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr2(QGraphicsPathItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsPathItem_ptr1(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsPathItem * >(ptr);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_static_cast_QGraphicsRectItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return static_cast< QGraphicsRectItem * >(ptr);
}


RITUAL_EXPORT QAbstractGraphicsShapeItem * ctr_qt_widgets_ffi_static_cast_QAbstractGraphicsShapeItem_ptr2(QGraphicsRectItem * ptr) {
  return static_cast< QAbstractGraphicsShapeItem * >(ptr);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsRectItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return dynamic_cast< QGraphicsRectItem * >(ptr);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_static_cast_QGraphicsRectItem_ptr1(QGraphicsItem * ptr) {
  return static_cast< QGraphicsRectItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr3(QGraphicsRectItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsRectItem_ptr1(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsRectItem * >(ptr);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_static_cast_QGraphicsEllipseItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return static_cast< QGraphicsEllipseItem * >(ptr);
}


RITUAL_EXPORT QAbstractGraphicsShapeItem * ctr_qt_widgets_ffi_static_cast_QAbstractGraphicsShapeItem_ptr3(QGraphicsEllipseItem * ptr) {
  return static_cast< QAbstractGraphicsShapeItem * >(ptr);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsEllipseItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return dynamic_cast< QGraphicsEllipseItem * >(ptr);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_static_cast_QGraphicsEllipseItem_ptr1(QGraphicsItem * ptr) {
  return static_cast< QGraphicsEllipseItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr4(QGraphicsEllipseItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsEllipseItem_ptr1(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsEllipseItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_static_cast_QGraphicsPolygonItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return static_cast< QGraphicsPolygonItem * >(ptr);
}


RITUAL_EXPORT QAbstractGraphicsShapeItem * ctr_qt_widgets_ffi_static_cast_QAbstractGraphicsShapeItem_ptr4(QGraphicsPolygonItem * ptr) {
  return static_cast< QAbstractGraphicsShapeItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsPolygonItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return dynamic_cast< QGraphicsPolygonItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_static_cast_QGraphicsPolygonItem_ptr1(QGraphicsItem * ptr) {
  return static_cast< QGraphicsPolygonItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr5(QGraphicsPolygonItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsPolygonItem_ptr1(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsPolygonItem * >(ptr);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_static_cast_QGraphicsLineItem_ptr(QGraphicsItem * ptr) {
  return static_cast< QGraphicsLineItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr6(QGraphicsLineItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsLineItem_ptr(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsLineItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPixmapItem * ctr_qt_widgets_ffi_static_cast_QGraphicsPixmapItem_ptr(QGraphicsItem * ptr) {
  return static_cast< QGraphicsPixmapItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr7(QGraphicsPixmapItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsPixmapItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsPixmapItem_ptr(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsPixmapItem * >(ptr);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_static_cast_QGraphicsTextItem_ptr(QGraphicsObject * ptr) {
  return static_cast< QGraphicsTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_static_cast_QGraphicsObject_ptr2(QGraphicsTextItem * ptr) {
  return static_cast< QGraphicsObject * >(ptr);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsTextItem_ptr(QGraphicsObject * ptr) {
  return dynamic_cast< QGraphicsTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_static_cast_QGraphicsTextItem_ptr1(QObject * ptr) {
  return static_cast< QGraphicsTextItem * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr50(QGraphicsTextItem * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsTextItem_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_static_cast_QGraphicsTextItem_ptr2(QGraphicsItem * ptr) {
  return static_cast< QGraphicsTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr8(QGraphicsTextItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsTextItem_ptr2(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_static_cast_QGraphicsSimpleTextItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return static_cast< QGraphicsSimpleTextItem * >(ptr);
}


RITUAL_EXPORT QAbstractGraphicsShapeItem * ctr_qt_widgets_ffi_static_cast_QAbstractGraphicsShapeItem_ptr5(QGraphicsSimpleTextItem * ptr) {
  return static_cast< QAbstractGraphicsShapeItem * >(ptr);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSimpleTextItem_ptr(QAbstractGraphicsShapeItem * ptr) {
  return dynamic_cast< QGraphicsSimpleTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_static_cast_QGraphicsSimpleTextItem_ptr1(QGraphicsItem * ptr) {
  return static_cast< QGraphicsSimpleTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr9(QGraphicsSimpleTextItem * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSimpleTextItem_ptr1(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsSimpleTextItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItemGroup * ctr_qt_widgets_ffi_static_cast_QGraphicsItemGroup_ptr(QGraphicsItem * ptr) {
  return static_cast< QGraphicsItemGroup * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr10(QGraphicsItemGroup * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsItemGroup * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsItemGroup_ptr(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsItemGroup * >(ptr);
}


RITUAL_EXPORT QGraphicsLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsLayout_ptr(QGraphicsLayoutItem * ptr) {
  return static_cast< QGraphicsLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_static_cast_QGraphicsLayoutItem_ptr(QGraphicsLayout * ptr) {
  return static_cast< QGraphicsLayoutItem * >(ptr);
}


RITUAL_EXPORT QGraphicsLayout * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsLayout_ptr(QGraphicsLayoutItem * ptr) {
  return dynamic_cast< QGraphicsLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsAnchor * ctr_qt_widgets_ffi_static_cast_QGraphicsAnchor_ptr(QObject * ptr) {
  return static_cast< QGraphicsAnchor * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr51(QGraphicsAnchor * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsAnchor * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsAnchor_ptr(QObject * ptr) {
  return dynamic_cast< QGraphicsAnchor * >(ptr);
}


RITUAL_EXPORT QGraphicsAnchorLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsAnchorLayout_ptr(QGraphicsLayout * ptr) {
  return static_cast< QGraphicsAnchorLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsLayout_ptr1(QGraphicsAnchorLayout * ptr) {
  return static_cast< QGraphicsLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsAnchorLayout * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsAnchorLayout_ptr(QGraphicsLayout * ptr) {
  return dynamic_cast< QGraphicsAnchorLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsAnchorLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsAnchorLayout_ptr1(QGraphicsLayoutItem * ptr) {
  return static_cast< QGraphicsAnchorLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_static_cast_QGraphicsLayoutItem_ptr1(QGraphicsAnchorLayout * ptr) {
  return static_cast< QGraphicsLayoutItem * >(ptr);
}


RITUAL_EXPORT QGraphicsAnchorLayout * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsAnchorLayout_ptr1(QGraphicsLayoutItem * ptr) {
  return dynamic_cast< QGraphicsAnchorLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsEffect_ptr(QObject * ptr) {
  return static_cast< QGraphicsEffect * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr52(QGraphicsEffect * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsEffect_ptr(QObject * ptr) {
  return dynamic_cast< QGraphicsEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsColorizeEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsColorizeEffect_ptr(QGraphicsEffect * ptr) {
  return static_cast< QGraphicsColorizeEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsEffect_ptr1(QGraphicsColorizeEffect * ptr) {
  return static_cast< QGraphicsEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsColorizeEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsColorizeEffect_ptr(QGraphicsEffect * ptr) {
  return dynamic_cast< QGraphicsColorizeEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsColorizeEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsColorizeEffect_ptr1(QObject * ptr) {
  return static_cast< QGraphicsColorizeEffect * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr53(QGraphicsColorizeEffect * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsColorizeEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsColorizeEffect_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsColorizeEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsBlurEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsBlurEffect_ptr(QGraphicsEffect * ptr) {
  return static_cast< QGraphicsBlurEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsEffect_ptr2(QGraphicsBlurEffect * ptr) {
  return static_cast< QGraphicsEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsBlurEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsBlurEffect_ptr(QGraphicsEffect * ptr) {
  return dynamic_cast< QGraphicsBlurEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsBlurEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsBlurEffect_ptr1(QObject * ptr) {
  return static_cast< QGraphicsBlurEffect * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr54(QGraphicsBlurEffect * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsBlurEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsBlurEffect_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsBlurEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsDropShadowEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsDropShadowEffect_ptr(QGraphicsEffect * ptr) {
  return static_cast< QGraphicsDropShadowEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsEffect_ptr3(QGraphicsDropShadowEffect * ptr) {
  return static_cast< QGraphicsEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsDropShadowEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsDropShadowEffect_ptr(QGraphicsEffect * ptr) {
  return dynamic_cast< QGraphicsDropShadowEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsDropShadowEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsDropShadowEffect_ptr1(QObject * ptr) {
  return static_cast< QGraphicsDropShadowEffect * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr55(QGraphicsDropShadowEffect * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsDropShadowEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsDropShadowEffect_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsDropShadowEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsOpacityEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsOpacityEffect_ptr(QGraphicsEffect * ptr) {
  return static_cast< QGraphicsOpacityEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsEffect_ptr4(QGraphicsOpacityEffect * ptr) {
  return static_cast< QGraphicsEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsOpacityEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsOpacityEffect_ptr(QGraphicsEffect * ptr) {
  return dynamic_cast< QGraphicsOpacityEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsOpacityEffect * ctr_qt_widgets_ffi_static_cast_QGraphicsOpacityEffect_ptr1(QObject * ptr) {
  return static_cast< QGraphicsOpacityEffect * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr56(QGraphicsOpacityEffect * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsOpacityEffect * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsOpacityEffect_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsOpacityEffect * >(ptr);
}


RITUAL_EXPORT QGraphicsGridLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsGridLayout_ptr(QGraphicsLayout * ptr) {
  return static_cast< QGraphicsGridLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsLayout_ptr2(QGraphicsGridLayout * ptr) {
  return static_cast< QGraphicsLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsGridLayout * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsGridLayout_ptr(QGraphicsLayout * ptr) {
  return dynamic_cast< QGraphicsGridLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsGridLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsGridLayout_ptr1(QGraphicsLayoutItem * ptr) {
  return static_cast< QGraphicsGridLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_static_cast_QGraphicsLayoutItem_ptr2(QGraphicsGridLayout * ptr) {
  return static_cast< QGraphicsLayoutItem * >(ptr);
}


RITUAL_EXPORT QGraphicsGridLayout * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsGridLayout_ptr1(QGraphicsLayoutItem * ptr) {
  return dynamic_cast< QGraphicsGridLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsItemAnimation * ctr_qt_widgets_ffi_static_cast_QGraphicsItemAnimation_ptr(QObject * ptr) {
  return static_cast< QGraphicsItemAnimation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr57(QGraphicsItemAnimation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsItemAnimation * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsItemAnimation_ptr(QObject * ptr) {
  return dynamic_cast< QGraphicsItemAnimation * >(ptr);
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsLinearLayout_ptr(QGraphicsLayout * ptr) {
  return static_cast< QGraphicsLinearLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsLayout_ptr3(QGraphicsLinearLayout * ptr) {
  return static_cast< QGraphicsLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsLinearLayout_ptr(QGraphicsLayout * ptr) {
  return dynamic_cast< QGraphicsLinearLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_static_cast_QGraphicsLinearLayout_ptr1(QGraphicsLayoutItem * ptr) {
  return static_cast< QGraphicsLinearLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_static_cast_QGraphicsLayoutItem_ptr3(QGraphicsLinearLayout * ptr) {
  return static_cast< QGraphicsLayoutItem * >(ptr);
}


RITUAL_EXPORT QGraphicsLinearLayout * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsLinearLayout_ptr1(QGraphicsLayoutItem * ptr) {
  return dynamic_cast< QGraphicsLinearLayout * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsWidget_ptr(QGraphicsObject * ptr) {
  return static_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_static_cast_QGraphicsObject_ptr3(QGraphicsWidget * ptr) {
  return static_cast< QGraphicsObject * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsWidget_ptr(QGraphicsObject * ptr) {
  return dynamic_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsWidget_ptr1(QObject * ptr) {
  return static_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr58(QGraphicsWidget * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsWidget_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsWidget_ptr2(QGraphicsItem * ptr) {
  return static_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr11(QGraphicsWidget * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsWidget_ptr2(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsWidget_ptr3(QGraphicsLayoutItem * ptr) {
  return static_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_static_cast_QGraphicsLayoutItem_ptr4(QGraphicsWidget * ptr) {
  return static_cast< QGraphicsLayoutItem * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsWidget_ptr3(QGraphicsLayoutItem * ptr) {
  return dynamic_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsProxyWidget_ptr(QGraphicsWidget * ptr) {
  return static_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsWidget_ptr4(QGraphicsProxyWidget * ptr) {
  return static_cast< QGraphicsWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsProxyWidget_ptr(QGraphicsWidget * ptr) {
  return dynamic_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsProxyWidget_ptr1(QGraphicsObject * ptr) {
  return static_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_static_cast_QGraphicsObject_ptr4(QGraphicsProxyWidget * ptr) {
  return static_cast< QGraphicsObject * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsProxyWidget_ptr1(QGraphicsObject * ptr) {
  return dynamic_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsProxyWidget_ptr2(QObject * ptr) {
  return static_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr59(QGraphicsProxyWidget * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsProxyWidget_ptr2(QObject * ptr) {
  return dynamic_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsProxyWidget_ptr3(QGraphicsItem * ptr) {
  return static_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_static_cast_QGraphicsItem_ptr12(QGraphicsProxyWidget * ptr) {
  return static_cast< QGraphicsItem * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsProxyWidget_ptr3(QGraphicsItem * ptr) {
  return dynamic_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_static_cast_QGraphicsProxyWidget_ptr4(QGraphicsLayoutItem * ptr) {
  return static_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_static_cast_QGraphicsLayoutItem_ptr5(QGraphicsProxyWidget * ptr) {
  return static_cast< QGraphicsLayoutItem * >(ptr);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsProxyWidget_ptr4(QGraphicsLayoutItem * ptr) {
  return dynamic_cast< QGraphicsProxyWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_static_cast_QGraphicsScene_ptr(QObject * ptr) {
  return static_cast< QGraphicsScene * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr60(QGraphicsScene * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsScene_ptr(QObject * ptr) {
  return dynamic_cast< QGraphicsScene * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr(QEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr1(QGraphicsSceneEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMouseEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneMouseEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneMouseEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr1(QGraphicsSceneMouseEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMouseEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneMouseEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneMouseEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMouseEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneMouseEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneMouseEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr2(QGraphicsSceneMouseEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMouseEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneMouseEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneMouseEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneWheelEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneWheelEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneWheelEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr2(QGraphicsSceneWheelEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneWheelEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneWheelEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneWheelEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneWheelEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneWheelEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneWheelEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr3(QGraphicsSceneWheelEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneWheelEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneWheelEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneWheelEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneContextMenuEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneContextMenuEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr3(QGraphicsSceneContextMenuEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneContextMenuEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneContextMenuEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneContextMenuEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneContextMenuEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr4(QGraphicsSceneContextMenuEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneContextMenuEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneContextMenuEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHoverEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneHoverEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneHoverEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr4(QGraphicsSceneHoverEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHoverEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneHoverEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneHoverEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHoverEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneHoverEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneHoverEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr5(QGraphicsSceneHoverEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHoverEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneHoverEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneHoverEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHelpEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneHelpEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneHelpEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr5(QGraphicsSceneHelpEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHelpEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneHelpEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneHelpEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHelpEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneHelpEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneHelpEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr6(QGraphicsSceneHelpEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneHelpEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneHelpEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneHelpEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneDragDropEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneDragDropEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneDragDropEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr6(QGraphicsSceneDragDropEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneDragDropEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneDragDropEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneDragDropEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneDragDropEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneDragDropEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneDragDropEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr7(QGraphicsSceneDragDropEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneDragDropEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneDragDropEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneDragDropEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneResizeEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneResizeEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneResizeEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr7(QGraphicsSceneResizeEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneResizeEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneResizeEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneResizeEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneResizeEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneResizeEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneResizeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr8(QGraphicsSceneResizeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneResizeEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneResizeEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneResizeEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMoveEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneMoveEvent_ptr(QGraphicsSceneEvent * ptr) {
  return static_cast< QGraphicsSceneMoveEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneEvent_ptr8(QGraphicsSceneMoveEvent * ptr) {
  return static_cast< QGraphicsSceneEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMoveEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneMoveEvent_ptr(QGraphicsSceneEvent * ptr) {
  return dynamic_cast< QGraphicsSceneMoveEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMoveEvent * ctr_qt_widgets_ffi_static_cast_QGraphicsSceneMoveEvent_ptr1(QEvent * ptr) {
  return static_cast< QGraphicsSceneMoveEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_widgets_ffi_static_cast_QEvent_ptr9(QGraphicsSceneMoveEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsSceneMoveEvent * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsSceneMoveEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QGraphicsSceneMoveEvent * >(ptr);
}


RITUAL_EXPORT QGraphicsTransform * ctr_qt_widgets_ffi_static_cast_QGraphicsTransform_ptr(QObject * ptr) {
  return static_cast< QGraphicsTransform * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr61(QGraphicsTransform * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsTransform * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsTransform_ptr(QObject * ptr) {
  return dynamic_cast< QGraphicsTransform * >(ptr);
}


RITUAL_EXPORT QGraphicsScale * ctr_qt_widgets_ffi_static_cast_QGraphicsScale_ptr(QGraphicsTransform * ptr) {
  return static_cast< QGraphicsScale * >(ptr);
}


RITUAL_EXPORT QGraphicsTransform * ctr_qt_widgets_ffi_static_cast_QGraphicsTransform_ptr1(QGraphicsScale * ptr) {
  return static_cast< QGraphicsTransform * >(ptr);
}


RITUAL_EXPORT QGraphicsScale * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsScale_ptr(QGraphicsTransform * ptr) {
  return dynamic_cast< QGraphicsScale * >(ptr);
}


RITUAL_EXPORT QGraphicsScale * ctr_qt_widgets_ffi_static_cast_QGraphicsScale_ptr1(QObject * ptr) {
  return static_cast< QGraphicsScale * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr62(QGraphicsScale * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsScale * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsScale_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsScale * >(ptr);
}


RITUAL_EXPORT QGraphicsRotation * ctr_qt_widgets_ffi_static_cast_QGraphicsRotation_ptr(QGraphicsTransform * ptr) {
  return static_cast< QGraphicsRotation * >(ptr);
}


RITUAL_EXPORT QGraphicsTransform * ctr_qt_widgets_ffi_static_cast_QGraphicsTransform_ptr2(QGraphicsRotation * ptr) {
  return static_cast< QGraphicsTransform * >(ptr);
}


RITUAL_EXPORT QGraphicsRotation * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsRotation_ptr(QGraphicsTransform * ptr) {
  return dynamic_cast< QGraphicsRotation * >(ptr);
}


RITUAL_EXPORT QGraphicsRotation * ctr_qt_widgets_ffi_static_cast_QGraphicsRotation_ptr1(QObject * ptr) {
  return static_cast< QGraphicsRotation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr63(QGraphicsRotation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsRotation * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsRotation_ptr1(QObject * ptr) {
  return dynamic_cast< QGraphicsRotation * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_static_cast_QScrollArea_ptr(QAbstractScrollArea * ptr) {
  return static_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr6(QScrollArea * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QScrollArea_ptr(QAbstractScrollArea * ptr) {
  return dynamic_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_static_cast_QScrollArea_ptr1(QFrame * ptr) {
  return static_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr6(QScrollArea * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QScrollArea_ptr1(QFrame * ptr) {
  return dynamic_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_static_cast_QScrollArea_ptr2(QWidget * ptr) {
  return static_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr31(QScrollArea * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QScrollArea_ptr2(QWidget * ptr) {
  return dynamic_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_static_cast_QScrollArea_ptr3(QObject * ptr) {
  return static_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr64(QScrollArea * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QScrollArea_ptr3(QObject * ptr) {
  return dynamic_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_static_cast_QScrollArea_ptr4(QPaintDevice * ptr) {
  return static_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr30(QScrollArea * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QScrollArea * ctr_qt_widgets_ffi_dynamic_cast_QScrollArea_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QScrollArea * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_static_cast_QGraphicsView_ptr(QAbstractScrollArea * ptr) {
  return static_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr7(QGraphicsView * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsView_ptr(QAbstractScrollArea * ptr) {
  return dynamic_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_static_cast_QGraphicsView_ptr1(QFrame * ptr) {
  return static_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr7(QGraphicsView * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsView_ptr1(QFrame * ptr) {
  return dynamic_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_static_cast_QGraphicsView_ptr2(QWidget * ptr) {
  return static_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr32(QGraphicsView * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsView_ptr2(QWidget * ptr) {
  return dynamic_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_static_cast_QGraphicsView_ptr3(QObject * ptr) {
  return static_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr65(QGraphicsView * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsView_ptr3(QObject * ptr) {
  return dynamic_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_static_cast_QGraphicsView_ptr4(QPaintDevice * ptr) {
  return static_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr31(QGraphicsView * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QGraphicsView * ctr_qt_widgets_ffi_dynamic_cast_QGraphicsView_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QGraphicsView * >(ptr);
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_static_cast_QGroupBox_ptr(QWidget * ptr) {
  return static_cast< QGroupBox * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr33(QGroupBox * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_dynamic_cast_QGroupBox_ptr(QWidget * ptr) {
  return dynamic_cast< QGroupBox * >(ptr);
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_static_cast_QGroupBox_ptr1(QObject * ptr) {
  return static_cast< QGroupBox * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr66(QGroupBox * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_dynamic_cast_QGroupBox_ptr1(QObject * ptr) {
  return dynamic_cast< QGroupBox * >(ptr);
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_static_cast_QGroupBox_ptr2(QPaintDevice * ptr) {
  return static_cast< QGroupBox * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr32(QGroupBox * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QGroupBox * ctr_qt_widgets_ffi_dynamic_cast_QGroupBox_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QGroupBox * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_static_cast_QHeaderView_ptr(QAbstractItemView * ptr) {
  return static_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr6(QHeaderView * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_dynamic_cast_QHeaderView_ptr(QAbstractItemView * ptr) {
  return dynamic_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_static_cast_QHeaderView_ptr1(QAbstractScrollArea * ptr) {
  return static_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr8(QHeaderView * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_dynamic_cast_QHeaderView_ptr1(QAbstractScrollArea * ptr) {
  return dynamic_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_static_cast_QHeaderView_ptr2(QFrame * ptr) {
  return static_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr8(QHeaderView * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_dynamic_cast_QHeaderView_ptr2(QFrame * ptr) {
  return dynamic_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_static_cast_QHeaderView_ptr3(QWidget * ptr) {
  return static_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr34(QHeaderView * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_dynamic_cast_QHeaderView_ptr3(QWidget * ptr) {
  return dynamic_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_static_cast_QHeaderView_ptr4(QObject * ptr) {
  return static_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr67(QHeaderView * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_dynamic_cast_QHeaderView_ptr4(QObject * ptr) {
  return dynamic_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_static_cast_QHeaderView_ptr5(QPaintDevice * ptr) {
  return static_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr33(QHeaderView * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QHeaderView * ctr_qt_widgets_ffi_dynamic_cast_QHeaderView_ptr5(QPaintDevice * ptr) {
  return dynamic_cast< QHeaderView * >(ptr);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_static_cast_QLineEdit_ptr(QWidget * ptr) {
  return static_cast< QLineEdit * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr35(QLineEdit * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_dynamic_cast_QLineEdit_ptr(QWidget * ptr) {
  return dynamic_cast< QLineEdit * >(ptr);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_static_cast_QLineEdit_ptr1(QObject * ptr) {
  return static_cast< QLineEdit * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr68(QLineEdit * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_dynamic_cast_QLineEdit_ptr1(QObject * ptr) {
  return dynamic_cast< QLineEdit * >(ptr);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_static_cast_QLineEdit_ptr2(QPaintDevice * ptr) {
  return static_cast< QLineEdit * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr34(QLineEdit * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_dynamic_cast_QLineEdit_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QLineEdit * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_static_cast_QInputDialog_ptr(QDialog * ptr) {
  return static_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr7(QInputDialog * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_dynamic_cast_QInputDialog_ptr(QDialog * ptr) {
  return dynamic_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_static_cast_QInputDialog_ptr1(QWidget * ptr) {
  return static_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr36(QInputDialog * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_dynamic_cast_QInputDialog_ptr1(QWidget * ptr) {
  return dynamic_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_static_cast_QInputDialog_ptr2(QObject * ptr) {
  return static_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr69(QInputDialog * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_dynamic_cast_QInputDialog_ptr2(QObject * ptr) {
  return dynamic_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_static_cast_QInputDialog_ptr3(QPaintDevice * ptr) {
  return static_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr35(QInputDialog * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QInputDialog * ctr_qt_widgets_ffi_dynamic_cast_QInputDialog_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QInputDialog * >(ptr);
}


RITUAL_EXPORT QItemDelegate * ctr_qt_widgets_ffi_static_cast_QItemDelegate_ptr(QAbstractItemDelegate * ptr) {
  return static_cast< QItemDelegate * >(ptr);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_static_cast_QAbstractItemDelegate_ptr1(QItemDelegate * ptr) {
  return static_cast< QAbstractItemDelegate * >(ptr);
}


RITUAL_EXPORT QItemDelegate * ctr_qt_widgets_ffi_dynamic_cast_QItemDelegate_ptr(QAbstractItemDelegate * ptr) {
  return dynamic_cast< QItemDelegate * >(ptr);
}


RITUAL_EXPORT QItemDelegate * ctr_qt_widgets_ffi_static_cast_QItemDelegate_ptr1(QObject * ptr) {
  return static_cast< QItemDelegate * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr70(QItemDelegate * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QItemDelegate * ctr_qt_widgets_ffi_dynamic_cast_QItemDelegate_ptr1(QObject * ptr) {
  return dynamic_cast< QItemDelegate * >(ptr);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_static_cast_QKeySequenceEdit_ptr(QWidget * ptr) {
  return static_cast< QKeySequenceEdit * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr37(QKeySequenceEdit * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_dynamic_cast_QKeySequenceEdit_ptr(QWidget * ptr) {
  return dynamic_cast< QKeySequenceEdit * >(ptr);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_static_cast_QKeySequenceEdit_ptr1(QObject * ptr) {
  return static_cast< QKeySequenceEdit * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr71(QKeySequenceEdit * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_dynamic_cast_QKeySequenceEdit_ptr1(QObject * ptr) {
  return dynamic_cast< QKeySequenceEdit * >(ptr);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_static_cast_QKeySequenceEdit_ptr2(QPaintDevice * ptr) {
  return static_cast< QKeySequenceEdit * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr36(QKeySequenceEdit * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QKeySequenceEdit * ctr_qt_widgets_ffi_dynamic_cast_QKeySequenceEdit_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QKeySequenceEdit * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_static_cast_QLabel_ptr(QFrame * ptr) {
  return static_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr9(QLabel * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_dynamic_cast_QLabel_ptr(QFrame * ptr) {
  return dynamic_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_static_cast_QLabel_ptr1(QWidget * ptr) {
  return static_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr38(QLabel * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_dynamic_cast_QLabel_ptr1(QWidget * ptr) {
  return dynamic_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_static_cast_QLabel_ptr2(QObject * ptr) {
  return static_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr72(QLabel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_dynamic_cast_QLabel_ptr2(QObject * ptr) {
  return dynamic_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_static_cast_QLabel_ptr3(QPaintDevice * ptr) {
  return static_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr37(QLabel * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QLabel * ctr_qt_widgets_ffi_dynamic_cast_QLabel_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QLabel * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_static_cast_QLCDNumber_ptr(QFrame * ptr) {
  return static_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr10(QLCDNumber * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_dynamic_cast_QLCDNumber_ptr(QFrame * ptr) {
  return dynamic_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_static_cast_QLCDNumber_ptr1(QWidget * ptr) {
  return static_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr39(QLCDNumber * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_dynamic_cast_QLCDNumber_ptr1(QWidget * ptr) {
  return dynamic_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_static_cast_QLCDNumber_ptr2(QObject * ptr) {
  return static_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr73(QLCDNumber * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_dynamic_cast_QLCDNumber_ptr2(QObject * ptr) {
  return dynamic_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_static_cast_QLCDNumber_ptr3(QPaintDevice * ptr) {
  return static_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr38(QLCDNumber * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QLCDNumber * ctr_qt_widgets_ffi_dynamic_cast_QLCDNumber_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QLCDNumber * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_static_cast_QListView_ptr(QAbstractItemView * ptr) {
  return static_cast< QListView * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr7(QListView * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_dynamic_cast_QListView_ptr(QAbstractItemView * ptr) {
  return dynamic_cast< QListView * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_static_cast_QListView_ptr1(QAbstractScrollArea * ptr) {
  return static_cast< QListView * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr9(QListView * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_dynamic_cast_QListView_ptr1(QAbstractScrollArea * ptr) {
  return dynamic_cast< QListView * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_static_cast_QListView_ptr2(QFrame * ptr) {
  return static_cast< QListView * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr11(QListView * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_dynamic_cast_QListView_ptr2(QFrame * ptr) {
  return dynamic_cast< QListView * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_static_cast_QListView_ptr3(QWidget * ptr) {
  return static_cast< QListView * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr40(QListView * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_dynamic_cast_QListView_ptr3(QWidget * ptr) {
  return dynamic_cast< QListView * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_static_cast_QListView_ptr4(QObject * ptr) {
  return static_cast< QListView * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr74(QListView * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_dynamic_cast_QListView_ptr4(QObject * ptr) {
  return dynamic_cast< QListView * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_static_cast_QListView_ptr5(QPaintDevice * ptr) {
  return static_cast< QListView * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr39(QListView * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_dynamic_cast_QListView_ptr5(QPaintDevice * ptr) {
  return dynamic_cast< QListView * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_static_cast_QListWidget_ptr(QListView * ptr) {
  return static_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QListView * ctr_qt_widgets_ffi_static_cast_QListView_ptr6(QListWidget * ptr) {
  return static_cast< QListView * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_dynamic_cast_QListWidget_ptr(QListView * ptr) {
  return dynamic_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_static_cast_QListWidget_ptr1(QAbstractItemView * ptr) {
  return static_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_static_cast_QAbstractItemView_ptr8(QListWidget * ptr) {
  return static_cast< QAbstractItemView * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_dynamic_cast_QListWidget_ptr1(QAbstractItemView * ptr) {
  return dynamic_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_static_cast_QListWidget_ptr2(QAbstractScrollArea * ptr) {
  return static_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr10(QListWidget * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_dynamic_cast_QListWidget_ptr2(QAbstractScrollArea * ptr) {
  return dynamic_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_static_cast_QListWidget_ptr3(QFrame * ptr) {
  return static_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr12(QListWidget * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_dynamic_cast_QListWidget_ptr3(QFrame * ptr) {
  return dynamic_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_static_cast_QListWidget_ptr4(QWidget * ptr) {
  return static_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr41(QListWidget * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_dynamic_cast_QListWidget_ptr4(QWidget * ptr) {
  return dynamic_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_static_cast_QListWidget_ptr5(QObject * ptr) {
  return static_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr75(QListWidget * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_dynamic_cast_QListWidget_ptr5(QObject * ptr) {
  return dynamic_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_static_cast_QListWidget_ptr6(QPaintDevice * ptr) {
  return static_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr40(QListWidget * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QListWidget * ctr_qt_widgets_ffi_dynamic_cast_QListWidget_ptr6(QPaintDevice * ptr) {
  return dynamic_cast< QListWidget * >(ptr);
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_static_cast_QMainWindow_ptr(QWidget * ptr) {
  return static_cast< QMainWindow * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr42(QMainWindow * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_dynamic_cast_QMainWindow_ptr(QWidget * ptr) {
  return dynamic_cast< QMainWindow * >(ptr);
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_static_cast_QMainWindow_ptr1(QObject * ptr) {
  return static_cast< QMainWindow * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr76(QMainWindow * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_dynamic_cast_QMainWindow_ptr1(QObject * ptr) {
  return dynamic_cast< QMainWindow * >(ptr);
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_static_cast_QMainWindow_ptr2(QPaintDevice * ptr) {
  return static_cast< QMainWindow * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr41(QMainWindow * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QMainWindow * ctr_qt_widgets_ffi_dynamic_cast_QMainWindow_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QMainWindow * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_static_cast_QMdiArea_ptr(QAbstractScrollArea * ptr) {
  return static_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr11(QMdiArea * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_dynamic_cast_QMdiArea_ptr(QAbstractScrollArea * ptr) {
  return dynamic_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_static_cast_QMdiArea_ptr1(QFrame * ptr) {
  return static_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr13(QMdiArea * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_dynamic_cast_QMdiArea_ptr1(QFrame * ptr) {
  return dynamic_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_static_cast_QMdiArea_ptr2(QWidget * ptr) {
  return static_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr43(QMdiArea * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_dynamic_cast_QMdiArea_ptr2(QWidget * ptr) {
  return dynamic_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_static_cast_QMdiArea_ptr3(QObject * ptr) {
  return static_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr77(QMdiArea * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_dynamic_cast_QMdiArea_ptr3(QObject * ptr) {
  return dynamic_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_static_cast_QMdiArea_ptr4(QPaintDevice * ptr) {
  return static_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr42(QMdiArea * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QMdiArea * ctr_qt_widgets_ffi_dynamic_cast_QMdiArea_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QMdiArea * >(ptr);
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_static_cast_QMdiSubWindow_ptr(QWidget * ptr) {
  return static_cast< QMdiSubWindow * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr44(QMdiSubWindow * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_dynamic_cast_QMdiSubWindow_ptr(QWidget * ptr) {
  return dynamic_cast< QMdiSubWindow * >(ptr);
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_static_cast_QMdiSubWindow_ptr1(QObject * ptr) {
  return static_cast< QMdiSubWindow * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr78(QMdiSubWindow * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_dynamic_cast_QMdiSubWindow_ptr1(QObject * ptr) {
  return dynamic_cast< QMdiSubWindow * >(ptr);
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_static_cast_QMdiSubWindow_ptr2(QPaintDevice * ptr) {
  return static_cast< QMdiSubWindow * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr43(QMdiSubWindow * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QMdiSubWindow * ctr_qt_widgets_ffi_dynamic_cast_QMdiSubWindow_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QMdiSubWindow * >(ptr);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_static_cast_QMenu_ptr(QWidget * ptr) {
  return static_cast< QMenu * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr45(QMenu * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_dynamic_cast_QMenu_ptr(QWidget * ptr) {
  return dynamic_cast< QMenu * >(ptr);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_static_cast_QMenu_ptr1(QObject * ptr) {
  return static_cast< QMenu * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr79(QMenu * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_dynamic_cast_QMenu_ptr1(QObject * ptr) {
  return dynamic_cast< QMenu * >(ptr);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_static_cast_QMenu_ptr2(QPaintDevice * ptr) {
  return static_cast< QMenu * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr44(QMenu * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_dynamic_cast_QMenu_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QMenu * >(ptr);
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_static_cast_QMenuBar_ptr(QWidget * ptr) {
  return static_cast< QMenuBar * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr46(QMenuBar * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_dynamic_cast_QMenuBar_ptr(QWidget * ptr) {
  return dynamic_cast< QMenuBar * >(ptr);
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_static_cast_QMenuBar_ptr1(QObject * ptr) {
  return static_cast< QMenuBar * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr80(QMenuBar * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_dynamic_cast_QMenuBar_ptr1(QObject * ptr) {
  return dynamic_cast< QMenuBar * >(ptr);
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_static_cast_QMenuBar_ptr2(QPaintDevice * ptr) {
  return static_cast< QMenuBar * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr45(QMenuBar * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QMenuBar * ctr_qt_widgets_ffi_dynamic_cast_QMenuBar_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QMenuBar * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_static_cast_QMessageBox_ptr(QDialog * ptr) {
  return static_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr8(QMessageBox * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_dynamic_cast_QMessageBox_ptr(QDialog * ptr) {
  return dynamic_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_static_cast_QMessageBox_ptr1(QWidget * ptr) {
  return static_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr47(QMessageBox * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_dynamic_cast_QMessageBox_ptr1(QWidget * ptr) {
  return dynamic_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_static_cast_QMessageBox_ptr2(QObject * ptr) {
  return static_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr81(QMessageBox * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_dynamic_cast_QMessageBox_ptr2(QObject * ptr) {
  return dynamic_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_static_cast_QMessageBox_ptr3(QPaintDevice * ptr) {
  return static_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr46(QMessageBox * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QMessageBox * ctr_qt_widgets_ffi_dynamic_cast_QMessageBox_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QMessageBox * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_static_cast_QTextEdit_ptr(QAbstractScrollArea * ptr) {
  return static_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr12(QTextEdit * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QTextEdit_ptr(QAbstractScrollArea * ptr) {
  return dynamic_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_static_cast_QTextEdit_ptr1(QFrame * ptr) {
  return static_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr14(QTextEdit * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QTextEdit_ptr1(QFrame * ptr) {
  return dynamic_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_static_cast_QTextEdit_ptr2(QWidget * ptr) {
  return static_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr48(QTextEdit * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QTextEdit_ptr2(QWidget * ptr) {
  return dynamic_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_static_cast_QTextEdit_ptr3(QObject * ptr) {
  return static_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr82(QTextEdit * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QTextEdit_ptr3(QObject * ptr) {
  return dynamic_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_static_cast_QTextEdit_ptr4(QPaintDevice * ptr) {
  return static_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr47(QTextEdit * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QTextEdit_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QTextEdit * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_static_cast_QPlainTextEdit_ptr(QAbstractScrollArea * ptr) {
  return static_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_static_cast_QAbstractScrollArea_ptr13(QPlainTextEdit * ptr) {
  return static_cast< QAbstractScrollArea * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QPlainTextEdit_ptr(QAbstractScrollArea * ptr) {
  return dynamic_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_static_cast_QPlainTextEdit_ptr1(QFrame * ptr) {
  return static_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_static_cast_QFrame_ptr15(QPlainTextEdit * ptr) {
  return static_cast< QFrame * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QPlainTextEdit_ptr1(QFrame * ptr) {
  return dynamic_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_static_cast_QPlainTextEdit_ptr2(QWidget * ptr) {
  return static_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr49(QPlainTextEdit * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QPlainTextEdit_ptr2(QWidget * ptr) {
  return dynamic_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_static_cast_QPlainTextEdit_ptr3(QObject * ptr) {
  return static_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr83(QPlainTextEdit * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QPlainTextEdit_ptr3(QObject * ptr) {
  return dynamic_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_static_cast_QPlainTextEdit_ptr4(QPaintDevice * ptr) {
  return static_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr48(QPlainTextEdit * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QPlainTextEdit * ctr_qt_widgets_ffi_dynamic_cast_QPlainTextEdit_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QPlainTextEdit * >(ptr);
}


RITUAL_EXPORT QPlainTextDocumentLayout * ctr_qt_widgets_ffi_static_cast_QPlainTextDocumentLayout_ptr(QAbstractTextDocumentLayout * ptr) {
  return static_cast< QPlainTextDocumentLayout * >(ptr);
}


RITUAL_EXPORT QAbstractTextDocumentLayout * ctr_qt_widgets_ffi_static_cast_QAbstractTextDocumentLayout_ptr(QPlainTextDocumentLayout * ptr) {
  return static_cast< QAbstractTextDocumentLayout * >(ptr);
}


RITUAL_EXPORT QPlainTextDocumentLayout * ctr_qt_widgets_ffi_dynamic_cast_QPlainTextDocumentLayout_ptr(QAbstractTextDocumentLayout * ptr) {
  return dynamic_cast< QPlainTextDocumentLayout * >(ptr);
}


RITUAL_EXPORT QPlainTextDocumentLayout * ctr_qt_widgets_ffi_static_cast_QPlainTextDocumentLayout_ptr1(QObject * ptr) {
  return static_cast< QPlainTextDocumentLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr84(QPlainTextDocumentLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPlainTextDocumentLayout * ctr_qt_widgets_ffi_dynamic_cast_QPlainTextDocumentLayout_ptr1(QObject * ptr) {
  return dynamic_cast< QPlainTextDocumentLayout * >(ptr);
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_static_cast_QProgressBar_ptr(QWidget * ptr) {
  return static_cast< QProgressBar * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr50(QProgressBar * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_dynamic_cast_QProgressBar_ptr(QWidget * ptr) {
  return dynamic_cast< QProgressBar * >(ptr);
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_static_cast_QProgressBar_ptr1(QObject * ptr) {
  return static_cast< QProgressBar * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr85(QProgressBar * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_dynamic_cast_QProgressBar_ptr1(QObject * ptr) {
  return dynamic_cast< QProgressBar * >(ptr);
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_static_cast_QProgressBar_ptr2(QPaintDevice * ptr) {
  return static_cast< QProgressBar * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr49(QProgressBar * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QProgressBar * ctr_qt_widgets_ffi_dynamic_cast_QProgressBar_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QProgressBar * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_static_cast_QProgressDialog_ptr(QDialog * ptr) {
  return static_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_static_cast_QDialog_ptr9(QProgressDialog * ptr) {
  return static_cast< QDialog * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_dynamic_cast_QProgressDialog_ptr(QDialog * ptr) {
  return dynamic_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_static_cast_QProgressDialog_ptr1(QWidget * ptr) {
  return static_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr51(QProgressDialog * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_dynamic_cast_QProgressDialog_ptr1(QWidget * ptr) {
  return dynamic_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_static_cast_QProgressDialog_ptr2(QObject * ptr) {
  return static_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr86(QProgressDialog * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_dynamic_cast_QProgressDialog_ptr2(QObject * ptr) {
  return dynamic_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_static_cast_QProgressDialog_ptr3(QPaintDevice * ptr) {
  return static_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_widgets_ffi_static_cast_QPaintDevice_ptr50(QProgressDialog * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QProgressDialog * ctr_qt_widgets_ffi_dynamic_cast_QProgressDialog_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QProgressDialog * >(ptr);
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_static_cast_QProxyStyle_ptr(QCommonStyle * ptr) {
  return static_cast< QProxyStyle * >(ptr);
}


RITUAL_EXPORT QCommonStyle * ctr_qt_widgets_ffi_static_cast_QCommonStyle_ptr2(QProxyStyle * ptr) {
  return static_cast< QCommonStyle * >(ptr);
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_dynamic_cast_QProxyStyle_ptr(QCommonStyle * ptr) {
  return dynamic_cast< QProxyStyle * >(ptr);
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_static_cast_QProxyStyle_ptr1(QStyle * ptr) {
  return static_cast< QProxyStyle * >(ptr);
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_static_cast_QStyle_ptr2(QProxyStyle * ptr) {
  return static_cast< QStyle * >(ptr);
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_dynamic_cast_QProxyStyle_ptr1(QStyle * ptr) {
  return dynamic_cast< QProxyStyle * >(ptr);
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_static_cast_QProxyStyle_ptr2(QObject * ptr) {
  return static_cast< QProxyStyle * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr87(QProxyStyle * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QProxyStyle * ctr_qt_widgets_ffi_dynamic_cast_QProxyStyle_ptr2(QObject * ptr) {
  return dynamic_cast< QProxyStyle * >(ptr);
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_static_cast_QRadioButton_ptr(QAbstractButton * ptr) {
  return static_cast< QRadioButton * >(ptr);
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_static_cast_QAbstractButton_ptr6(QRadioButton * ptr) {
  return static_cast< QAbstractButton * >(ptr);
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_dynamic_cast_QRadioButton_ptr(QAbstractButton * ptr) {
  return dynamic_cast< QRadioButton * >(ptr);
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_static_cast_QRadioButton_ptr1(QWidget * ptr) {
  return static_cast< QRadioButton * >(ptr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_static_cast_QWidget_ptr52(QRadioButton * ptr) {
  return static_cast< QWidget * >(ptr);
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_dynamic_cast_QRadioButton_ptr1(QWidget * ptr) {
  return dynamic_cast< QRadioButton * >(ptr);
}


RITUAL_EXPORT QRadioButton * ctr_qt_widgets_ffi_static_cast_QRadioButton_ptr2(QObject * ptr) {
  return static_cast< QRadioButton * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_static_cast_QObject_ptr88(QRadioButton * ptr) {
  return static_cast< QObject * >(ptr);
}


} // extern "C"
