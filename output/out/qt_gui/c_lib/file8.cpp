#include "qt_gui_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QCursor_QCursor9(QPixmap const * pixmap) {
  return new QCursor(*pixmap);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QWindow_parent1(QWindow const * this_ptr) {
  return this_ptr->parent();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setFlag1(QWindow * this_ptr, Qt::WindowType arg1) {
  this_ptr->setFlag(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_isAncestorOf1(QWindow const * this_ptr, QWindow const * child) {
  return this_ptr->isAncestorOf(child);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_flush1(QBackingStore * this_ptr, QRegion const * region, QWindow * window) {
  this_ptr->flush(*region, window);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_flush2(QBackingStore * this_ptr, QRegion const * region) {
  this_ptr->flush(*region);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_clear1(QClipboard * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QClipboard_text2(QClipboard const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QClipboard_text3(QClipboard const * this_ptr, QString * subtype) {
  return new QString(this_ptr->text(*subtype));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setText1(QClipboard * this_ptr, QString const * arg1) {
  this_ptr->setText(*arg1);
}


RITUAL_EXPORT QMimeData const * ctr_qt_gui_ffi_QClipboard_mimeData1(QClipboard const * this_ptr) {
  return this_ptr->mimeData();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setMimeData1(QClipboard * this_ptr, QMimeData * data) {
  this_ptr->setMimeData(data);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QClipboard_image1(QClipboard const * this_ptr) {
  return new QImage(this_ptr->image());
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QClipboard_pixmap1(QClipboard const * this_ptr) {
  return new QPixmap(this_ptr->pixmap());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setImage1(QClipboard * this_ptr, QImage const * arg1) {
  this_ptr->setImage(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setPixmap1(QClipboard * this_ptr, QPixmap const * arg1) {
  this_ptr->setPixmap(*arg1);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace13(QPointF const * whitePoint, QColorSpace::TransferFunction transferFunction) {
  return new QColorSpace(*whitePoint, transferFunction);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace14(QColorSpace::Primaries primaries, QColorSpace::TransferFunction transferFunction) {
  return new QColorSpace(primaries, transferFunction);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace15(QPointF const * whitePoint, QPointF const * redPoint, QPointF const * greenPoint, QPointF const * bluePoint, QColorSpace::TransferFunction transferFunction) {
  return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, transferFunction);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace16(QColorSpace::PrimaryPoints const * primaryPoints, QColorSpace::TransferFunction transferFunction) {
  return new QColorSpace(*primaryPoints, transferFunction);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setTransferFunction2(QColorSpace * this_ptr, QColorSpace::TransferFunction transferFunction) {
  this_ptr->setTransferFunction(transferFunction);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_withTransferFunction2(QColorSpace const * this_ptr, QColorSpace::TransferFunction transferFunction) {
  return new QColorSpace(this_ptr->withTransferFunction(transferFunction));
}


RITUAL_EXPORT Qt::DropAction ctr_qt_gui_ffi_QDrag_exec2(QDrag * this_ptr) {
  return this_ptr->exec();
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_index2(QFileSystemModel const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->index(row, column));
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_index3(QFileSystemModel const * this_ptr, QString const * path) {
  return new QModelIndex(this_ptr->index(*path));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_hasChildren1(QFileSystemModel const * this_ptr) {
  return this_ptr->hasChildren();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_rowCount1(QFileSystemModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_columnCount1(QFileSystemModel const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QFileSystemModel_myComputer1(QFileSystemModel const * this_ptr) {
  return new QVariant(this_ptr->myComputer());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QFileSystemModel_data1(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return new QVariant(this_ptr->data(*index));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_setData1(QFileSystemModel * this_ptr, QModelIndex const * index, QVariant const * value) {
  return this_ptr->setData(*index, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QFileSystemModel_headerData1(QFileSystemModel const * this_ptr, int section, Qt::Orientation orientation) {
  return new QVariant(this_ptr->headerData(section, orientation));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_sort1(QFileSystemModel * this_ptr, int column) {
  this_ptr->sort(column);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setOption1(QFileSystemModel * this_ptr, QFileSystemModel::Option option) {
  this_ptr->setOption(option);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_horizontalAdvance3(QFontMetrics const * this_ptr, QString const * arg1) {
  return this_ptr->horizontalAdvance(*arg1);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect5(QFontMetrics const * this_ptr, QRect const * r, int flags, QString const * text, int tabstops) {
  return new QRect(this_ptr->boundingRect(*r, flags, *text, tabstops));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect6(QFontMetrics const * this_ptr, QRect const * r, int flags, QString const * text) {
  return new QRect(this_ptr->boundingRect(*r, flags, *text));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect7(QFontMetrics const * this_ptr, int x, int y, int w, int h, int flags, QString const * text, int tabstops) {
  return new QRect(this_ptr->boundingRect(x, y, w, h, flags, *text, tabstops));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect8(QFontMetrics const * this_ptr, int x, int y, int w, int h, int flags, QString const * text) {
  return new QRect(this_ptr->boundingRect(x, y, w, h, flags, *text));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QFontMetrics_size1(QFontMetrics const * this_ptr, int flags, QString const * str, int tabstops) {
  return new QSize(this_ptr->size(flags, *str, tabstops));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QFontMetrics_size2(QFontMetrics const * this_ptr, int flags, QString const * str) {
  return new QSize(this_ptr->size(flags, *str));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontMetrics_elidedText1(QFontMetrics const * this_ptr, QString const * text, Qt::TextElideMode mode, int width) {
  return new QString(this_ptr->elidedText(*text, mode, width));
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_horizontalAdvance3(QFontMetricsF const * this_ptr, QString const * string) {
  return this_ptr->horizontalAdvance(*string);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_boundingRect4(QFontMetricsF const * this_ptr, QRectF const * r, int flags, QString const * string, int tabstops) {
  return new QRectF(this_ptr->boundingRect(*r, flags, *string, tabstops));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_boundingRect5(QFontMetricsF const * this_ptr, QRectF const * r, int flags, QString const * string) {
  return new QRectF(this_ptr->boundingRect(*r, flags, *string));
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QFontMetricsF_size1(QFontMetricsF const * this_ptr, int flags, QString const * str, int tabstops) {
  return new QSizeF(this_ptr->size(flags, *str, tabstops));
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QFontMetricsF_size2(QFontMetricsF const * this_ptr, int flags, QString const * str) {
  return new QSizeF(this_ptr->size(flags, *str));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontMetricsF_elidedText1(QFontMetricsF const * this_ptr, QString const * text, Qt::TextElideMode mode, double width) {
  return new QString(this_ptr->elidedText(*text, mode, width));
}


RITUAL_EXPORT QList< QSize > * ctr_qt_gui_ffi_QIconEngine_availableSizes1(QIconEngine * this_ptr, QIcon::Mode mode) {
  return new QList< QSize >(this_ptr->availableSizes(mode));
}


RITUAL_EXPORT QList< QSize > * ctr_qt_gui_ffi_QIconEngine_availableSizes2(QIconEngine * this_ptr) {
  return new QList< QSize >(this_ptr->availableSizes());
}


RITUAL_EXPORT QIconEngine * ctr_qt_gui_ffi_QIconEnginePlugin_create1(QIconEnginePlugin * this_ptr) {
  return this_ptr->create();
}


RITUAL_EXPORT QImageIOHandler * ctr_qt_gui_ffi_QImageIOPlugin_create1(QImageIOPlugin const * this_ptr, QIODevice * device) {
  return this_ptr->create(device);
}


RITUAL_EXPORT QImageReader * ctr_qt_gui_ffi_QImageReader_QImageReader3(QIODevice * device) {
  return new QImageReader(device);
}


RITUAL_EXPORT QImageReader * ctr_qt_gui_ffi_QImageReader_QImageReader4(QString const * fileName) {
  return new QImageReader(*fileName);
}


RITUAL_EXPORT QImageWriter * ctr_qt_gui_ffi_QImageWriter_QImageWriter3(QString const * fileName) {
  return new QImageWriter(*fileName);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_inverted1(QMatrix4x4 const * this_ptr) {
  return new QMatrix4x4(this_ptr->inverted());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_rotate3(QMatrix4x4 * this_ptr, float angle, float x, float y) {
  this_ptr->rotate(angle, x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_viewport2(QMatrix4x4 * this_ptr, float left, float bottom, float width, float height, float nearPlane) {
  this_ptr->viewport(left, bottom, width, height, nearPlane);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_viewport3(QMatrix4x4 * this_ptr, float left, float bottom, float width, float height) {
  this_ptr->viewport(left, bottom, width, height);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie4(QIODevice * device, QByteArray const * format) {
  return new QMovie(device, *format);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie5(QIODevice * device) {
  return new QMovie(device);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie6(QString const * fileName, QByteArray const * format) {
  return new QMovie(*fileName, *format);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie7(QString const * fileName) {
  return new QMovie(*fileName);
}


RITUAL_EXPORT QOffscreenSurface * ctr_qt_gui_ffi_QOffscreenSurface_QOffscreenSurface2(QScreen * screen) {
  return new QOffscreenSurface(screen);
}


#ifndef _WIN32
RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_QNativeInterface_QEGLContext_fromNative1(void * context, void * display) {
  return QNativeInterface::QEGLContext::fromNative(context, display);
}
#endif


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize5(QSize const * pointSize, QString const * name) {
  return new QPageSize(*pointSize, *name);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize6(QSize const * pointSize) {
  return new QPageSize(*pointSize);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize7(QSizeF const * size, QPageSize::Unit units, QString const * name) {
  return new QPageSize(*size, units, *name);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize8(QSizeF const * size, QPageSize::Unit units) {
  return new QPageSize(*size, units);
}


RITUAL_EXPORT QPageSize::PageSizeId ctr_qt_gui_ffi_QPageSize_id4(QSize const * pointSize) {
  return QPageSize::id(*pointSize);
}


RITUAL_EXPORT QPageSize::PageSizeId ctr_qt_gui_ffi_QPageSize_id5(QSizeF const * size, QPageSize::Unit units) {
  return QPageSize::id(*size, units);
}


RITUAL_EXPORT QPageLayout * ctr_qt_gui_ffi_QPageLayout_QPageLayout3(QPageSize const * pageSize, QPageLayout::Orientation orientation, QMarginsF const * margins, QPageLayout::Unit units) {
  return new QPageLayout(*pageSize, orientation, *margins, units);
}


RITUAL_EXPORT QPageLayout * ctr_qt_gui_ffi_QPageLayout_QPageLayout4(QPageSize const * pageSize, QPageLayout::Orientation orientation, QMarginsF const * margins) {
  return new QPageLayout(*pageSize, orientation, *margins);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_setPageSize1(QPageLayout * this_ptr, QPageSize const * pageSize) {
  this_ptr->setPageSize(*pageSize);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setMargins1(QPageLayout * this_ptr, QMarginsF const * margins) {
  return this_ptr->setMargins(*margins);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setLeftMargin1(QPageLayout * this_ptr, double leftMargin) {
  return this_ptr->setLeftMargin(leftMargin);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setRightMargin1(QPageLayout * this_ptr, double rightMargin) {
  return this_ptr->setRightMargin(rightMargin);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setTopMargin1(QPageLayout * this_ptr, double topMargin) {
  return this_ptr->setTopMargin(topMargin);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setBottomMargin1(QPageLayout * this_ptr, double bottomMargin) {
  return this_ptr->setBottomMargin(bottomMargin);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPagedPaintDevice_setPageMargins1(QPagedPaintDevice * this_ptr, QMarginsF const * margins) {
  return this_ptr->setPageMargins(*margins);
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_create1(QPointF const * pos, QRectF const * sourceRect, double scaleX, double scaleY, double rotation) {
  return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, scaleX, scaleY, rotation));
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_create2(QPointF const * pos, QRectF const * sourceRect, double scaleX, double scaleY) {
  return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, scaleX, scaleY));
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_create3(QPointF const * pos, QRectF const * sourceRect, double scaleX) {
  return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, scaleX));
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_create4(QPointF const * pos, QRectF const * sourceRect) {
  return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRect3(QPainter * this_ptr, QRectF const * arg1) {
  this_ptr->setClipRect(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRect4(QPainter * this_ptr, QRect const * arg1) {
  this_ptr->setClipRect(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRect5(QPainter * this_ptr, int x, int y, int w, int h) {
  this_ptr->setClipRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRegion1(QPainter * this_ptr, QRegion const * arg1) {
  this_ptr->setClipRegion(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipPath1(QPainter * this_ptr, QPainterPath const * path) {
  this_ptr->setClipPath(*path);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setTransform1(QPainter * this_ptr, QTransform const * transform) {
  this_ptr->setTransform(*transform);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setWorldTransform1(QPainter * this_ptr, QTransform const * matrix) {
  this_ptr->setWorldTransform(*matrix);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon4(QPainter * this_ptr, QPointF const * points, int pointCount) {
  this_ptr->drawPolygon(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon5(QPainter * this_ptr, QPolygonF const * polygon) {
  this_ptr->drawPolygon(*polygon);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon6(QPainter * this_ptr, QPoint const * points, int pointCount) {
  this_ptr->drawPolygon(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon7(QPainter * this_ptr, QPolygon const * polygon) {
  this_ptr->drawPolygon(*polygon);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRoundedRect3(QPainter * this_ptr, QRectF const * rect, double xRadius, double yRadius) {
  this_ptr->drawRoundedRect(*rect, xRadius, yRadius);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRoundedRect4(QPainter * this_ptr, int x, int y, int w, int h, double xRadius, double yRadius) {
  this_ptr->drawRoundedRect(x, y, w, h, xRadius, yRadius);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRoundedRect5(QPainter * this_ptr, QRect const * rect, double xRadius, double yRadius) {
  this_ptr->drawRoundedRect(*rect, xRadius, yRadius);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTiledPixmap3(QPainter * this_ptr, QRectF const * rect, QPixmap const * pm) {
  this_ptr->drawTiledPixmap(*rect, *pm);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTiledPixmap4(QPainter * this_ptr, int x, int y, int w, int h, QPixmap const * arg5, int sx) {
  this_ptr->drawTiledPixmap(x, y, w, h, *arg5, sx);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTiledPixmap5(QPainter * this_ptr, int x, int y, int w, int h, QPixmap const * arg5) {
  this_ptr->drawTiledPixmap(x, y, w, h, *arg5);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTiledPixmap6(QPainter * this_ptr, QRect const * arg1, QPixmap const * arg2) {
  this_ptr->drawTiledPixmap(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmapFragments1(QPainter * this_ptr, QPainter::PixmapFragment const * fragments, int fragmentCount, QPixmap const * pixmap) {
  this_ptr->drawPixmapFragments(fragments, fragmentCount, *pixmap);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage9(QPainter * this_ptr, QRectF const * targetRect, QImage const * image, QRectF const * sourceRect) {
  this_ptr->drawImage(*targetRect, *image, *sourceRect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage10(QPainter * this_ptr, QRect const * targetRect, QImage const * image, QRect const * sourceRect) {
  this_ptr->drawImage(*targetRect, *image, *sourceRect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage11(QPainter * this_ptr, QPointF const * p, QImage const * image, QRectF const * sr) {
  this_ptr->drawImage(*p, *image, *sr);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage12(QPainter * this_ptr, QPoint const * p, QImage const * image, QRect const * sr) {
  this_ptr->drawImage(*p, *image, *sr);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage13(QPainter * this_ptr, int x, int y, QImage const * image, int sx, int sy, int sw, int sh) {
  this_ptr->drawImage(x, y, *image, sx, sy, sw, sh);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage14(QPainter * this_ptr, int x, int y, QImage const * image, int sx, int sy, int sw) {
  this_ptr->drawImage(x, y, *image, sx, sy, sw);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage15(QPainter * this_ptr, int x, int y, QImage const * image, int sx, int sy) {
  this_ptr->drawImage(x, y, *image, sx, sy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage16(QPainter * this_ptr, int x, int y, QImage const * image, int sx) {
  this_ptr->drawImage(x, y, *image, sx);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage17(QPainter * this_ptr, int x, int y, QImage const * image) {
  this_ptr->drawImage(x, y, *image);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText8(QPainter * this_ptr, QRectF const * r, int flags, QString const * text) {
  this_ptr->drawText(*r, flags, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText9(QPainter * this_ptr, QRect const * r, int flags, QString const * text) {
  this_ptr->drawText(*r, flags, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText10(QPainter * this_ptr, int x, int y, int w, int h, int flags, QString const * text) {
  this_ptr->drawText(x, y, w, h, flags, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText11(QPainter * this_ptr, QRectF const * r, QString const * text) {
  this_ptr->drawText(*r, *text);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPainter_boundingRect4(QPainter * this_ptr, QRectF const * rect, QString const * text) {
  return new QRectF(this_ptr->boundingRect(*rect, *text));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setRenderHint1(QPainter * this_ptr, QPainter::RenderHint hint) {
  this_ptr->setRenderHint(hint);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setRenderHints1(QPainter * this_ptr, int hints) {
  this_ptr->setRenderHints(QFlags< QPainter::RenderHint >(hints));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawImage1(QPaintEngine * this_ptr, QRectF const * r, QImage const * pm, QRectF const * sr) {
  this_ptr->drawImage(*r, *pm, *sr);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPaintEngine_createPixmapFromImage1(QPaintEngine * this_ptr, QImage const * image) {
  return new QPixmap(this_ptr->createPixmapFromImage(*image));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addRoundedRect2(QPainterPath * this_ptr, QRectF const * rect, double xRadius, double yRadius) {
  this_ptr->addRoundedRect(*rect, xRadius, yRadius);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addRoundedRect3(QPainterPath * this_ptr, double x, double y, double w, double h, double xRadius, double yRadius) {
  this_ptr->addRoundedRect(x, y, w, h, xRadius, yRadius);
}


RITUAL_EXPORT QList< QPolygonF > * ctr_qt_gui_ffi_QPainterPath_toSubpathPolygons1(QPainterPath const * this_ptr) {
  return new QList< QPolygonF >(this_ptr->toSubpathPolygons());
}


RITUAL_EXPORT QList< QPolygonF > * ctr_qt_gui_ffi_QPainterPath_toFillPolygons1(QPainterPath const * this_ptr) {
  return new QList< QPolygonF >(this_ptr->toFillPolygons());
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPainterPath_toFillPolygon1(QPainterPath const * this_ptr) {
  return new QPolygonF(this_ptr->toFillPolygon());
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_trimmed1(QPainterPath const * this_ptr, double fromFraction, double toFraction) {
  return new QPainterPath(this_ptr->trimmed(fromFraction, toFraction));
}


RITUAL_EXPORT QPainterStateGuard * ctr_qt_gui_ffi_QPainterStateGuard_QPainterStateGuard3(QPainter * painter) {
  return new QPainterStateGuard(painter);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_addFileAttachment1(QPdfWriter * this_ptr, QString const * fileName, QByteArray const * data) {
  this_ptr->addFileAttachment(*fileName, *data);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut5(QKeySequence const * key, QObject * parent, char const * member, char const * ambiguousMember) {
  return new QShortcut(*key, parent, member, ambiguousMember);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut6(QKeySequence const * key, QObject * parent, char const * member) {
  return new QShortcut(*key, parent, member);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut7(QKeySequence const * key, QObject * parent) {
  return new QShortcut(*key, parent);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut8(QKeySequence::StandardKey key, QObject * parent, char const * member, char const * ambiguousMember) {
  return new QShortcut(key, parent, member, ambiguousMember);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut9(QKeySequence::StandardKey key, QObject * parent, char const * member) {
  return new QShortcut(key, parent, member);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut10(QKeySequence::StandardKey key, QObject * parent) {
  return new QShortcut(key, parent);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_QStandardItem4(int rows) {
  return new QStandardItem(rows);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QStandardItem_data1(QStandardItem const * this_ptr) {
  return new QVariant(this_ptr->data());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setData1(QStandardItem * this_ptr, QVariant const * value) {
  this_ptr->setData(*value);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_child1(QStandardItem const * this_ptr, int row) {
  return this_ptr->child(row);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_takeChild1(QStandardItem * this_ptr, int row) {
  return this_ptr->takeChild(row);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_sortChildren1(QStandardItem * this_ptr, int column) {
  this_ptr->sortChildren(column);
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_QStandardItemModel_QStandardItemModel3(int rows, int columns) {
  return new QStandardItemModel(rows, columns);
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QStandardItemModel_index1(QStandardItemModel const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->index(row, column));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_rowCount1(QStandardItemModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_columnCount1(QStandardItemModel const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_hasChildren1(QStandardItemModel const * this_ptr) {
  return this_ptr->hasChildren();
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QStandardItemModel_data1(QStandardItemModel const * this_ptr, QModelIndex const * index) {
  return new QVariant(this_ptr->data(*index));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_setData1(QStandardItemModel * this_ptr, QModelIndex const * index, QVariant const * value) {
  return this_ptr->setData(*index, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QStandardItemModel_headerData1(QStandardItemModel const * this_ptr, int section, Qt::Orientation orientation) {
  return new QVariant(this_ptr->headerData(section, orientation));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_setHeaderData1(QStandardItemModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value) {
  return this_ptr->setHeaderData(section, orientation, *value);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertRows1(QStandardItemModel * this_ptr, int row, int count) {
  return this_ptr->insertRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertColumns1(QStandardItemModel * this_ptr, int column, int count) {
  return this_ptr->insertColumns(column, count);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_removeRows1(QStandardItemModel * this_ptr, int row, int count) {
  return this_ptr->removeRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_removeColumns1(QStandardItemModel * this_ptr, int column, int count) {
  return this_ptr->removeColumns(column, count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_sort1(QStandardItemModel * this_ptr, int column) {
  this_ptr->sort(column);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_item1(QStandardItemModel const * this_ptr, int row) {
  return this_ptr->item(row);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertRow3(QStandardItemModel * this_ptr, int row) {
  return this_ptr->insertRow(row);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertColumn2(QStandardItemModel * this_ptr, int column) {
  return this_ptr->insertColumn(column);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_takeItem1(QStandardItemModel * this_ptr, int row) {
  return this_ptr->takeItem(row);
}


RITUAL_EXPORT QList< QStandardItem * > * ctr_qt_gui_ffi_QStandardItemModel_findItems1(QStandardItemModel const * this_ptr, QString const * text, int flags) {
  return new QList< QStandardItem * >(this_ptr->findItems(*text, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT QList< QStandardItem * > * ctr_qt_gui_ffi_QStandardItemModel_findItems2(QStandardItemModel const * this_ptr, QString const * text) {
  return new QList< QStandardItem * >(this_ptr->findItems(*text));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_prepare1(QStaticText * this_ptr, QTransform const * matrix) {
  this_ptr->prepare(*matrix);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_prepare2(QStaticText * this_ptr) {
  this_ptr->prepare();
}


RITUAL_EXPORT QList< QGlyphRun > * ctr_qt_gui_ffi_QTextFragment_glyphRuns1(QTextFragment const * this_ptr, int from) {
  return new QList< QGlyphRun >(this_ptr->glyphRuns(from));
}


RITUAL_EXPORT QList< QGlyphRun > * ctr_qt_gui_ffi_QTextFragment_glyphRuns2(QTextFragment const * this_ptr) {
  return new QList< QGlyphRun >(this_ptr->glyphRuns());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocumentFragment_toMarkdown1(QTextDocumentFragment const * this_ptr) {
  return new QString(this_ptr->toMarkdown());
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_fromHtml1(QString const * html) {
  return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(*html));
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_fromMarkdown1(QString const * markdown) {
  return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(*markdown));
}


RITUAL_EXPORT QTextDocumentWriter * ctr_qt_gui_ffi_QTextDocumentWriter_QTextDocumentWriter3(QString const * fileName) {
  return new QTextDocumentWriter(*fileName);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoGroup_createUndoAction1(QUndoGroup const * this_ptr, QObject * parent) {
  return this_ptr->createUndoAction(parent);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoGroup_createRedoAction1(QUndoGroup const * this_ptr, QObject * parent) {
  return this_ptr->createRedoAction(parent);
}


RITUAL_EXPORT QUndoCommand * ctr_qt_gui_ffi_QUndoCommand_QUndoCommand3(QString const * text) {
  return new QUndoCommand(*text);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoStack_createUndoAction1(QUndoStack const * this_ptr, QObject * parent) {
  return this_ptr->createUndoAction(parent);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoStack_createRedoAction1(QUndoStack const * this_ptr, QObject * parent) {
  return this_ptr->createRedoAction(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_setActive1(QUndoStack * this_ptr) {
  this_ptr->setActive();
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_QIntValidator_QIntValidator3(int bottom, int top) {
  return new QIntValidator(bottom, top);
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_QDoubleValidator_QDoubleValidator3(double bottom, double top, int decimals) {
  return new QDoubleValidator(bottom, top, decimals);
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_QRegularExpressionValidator_QRegularExpressionValidator3(QRegularExpression const * re) {
  return new QRegularExpressionValidator(*re);
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_static_cast_QPolygon_ptr(QList< QPoint > * ptr) {
  return static_cast< QPolygon * >(ptr);
}


RITUAL_EXPORT QList< QPoint > * ctr_qt_gui_ffi_static_cast_QList_QPoint_ptr(QPolygon * ptr) {
  return static_cast< QList< QPoint > * >(ptr);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_static_cast_QPolygonF_ptr(QList< QPointF > * ptr) {
  return static_cast< QPolygonF * >(ptr);
}


RITUAL_EXPORT QList< QPointF > * ctr_qt_gui_ffi_static_cast_QList_QPointF_ptr(QPolygonF * ptr) {
  return static_cast< QList< QPointF > * >(ptr);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_static_cast_QImage_ptr(QPaintDevice * ptr) {
  return static_cast< QImage * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr(QImage * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_dynamic_cast_QImage_ptr(QPaintDevice * ptr) {
  return dynamic_cast< QImage * >(ptr);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_static_cast_QPixmap_ptr(QPaintDevice * ptr) {
  return static_cast< QPixmap * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr1(QPixmap * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_dynamic_cast_QPixmap_ptr(QPaintDevice * ptr) {
  return dynamic_cast< QPixmap * >(ptr);
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_static_cast_QScreen_ptr(QObject * ptr) {
  return static_cast< QScreen * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr(QScreen * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_dynamic_cast_QScreen_ptr(QObject * ptr) {
  return dynamic_cast< QScreen * >(ptr);
}


RITUAL_EXPORT QInputMethod * ctr_qt_gui_ffi_static_cast_QInputMethod_ptr(QObject * ptr) {
  return static_cast< QInputMethod * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr1(QInputMethod * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QInputMethod * ctr_qt_gui_ffi_dynamic_cast_QInputMethod_ptr(QObject * ptr) {
  return dynamic_cast< QInputMethod * >(ptr);
}


RITUAL_EXPORT QGuiApplication * ctr_qt_gui_ffi_static_cast_QGuiApplication_ptr(QCoreApplication * ptr) {
  return static_cast< QGuiApplication * >(ptr);
}


RITUAL_EXPORT QCoreApplication * ctr_qt_gui_ffi_static_cast_QCoreApplication_ptr(QGuiApplication * ptr) {
  return static_cast< QCoreApplication * >(ptr);
}


RITUAL_EXPORT QGuiApplication * ctr_qt_gui_ffi_dynamic_cast_QGuiApplication_ptr(QCoreApplication * ptr) {
  return dynamic_cast< QGuiApplication * >(ptr);
}


RITUAL_EXPORT QGuiApplication * ctr_qt_gui_ffi_static_cast_QGuiApplication_ptr1(QObject * ptr) {
  return static_cast< QGuiApplication * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr2(QGuiApplication * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGuiApplication * ctr_qt_gui_ffi_dynamic_cast_QGuiApplication_ptr1(QObject * ptr) {
  return dynamic_cast< QGuiApplication * >(ptr);
}


RITUAL_EXPORT QInputDevice * ctr_qt_gui_ffi_static_cast_QInputDevice_ptr(QObject * ptr) {
  return static_cast< QInputDevice * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr3(QInputDevice * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QInputDevice * ctr_qt_gui_ffi_dynamic_cast_QInputDevice_ptr(QObject * ptr) {
  return dynamic_cast< QInputDevice * >(ptr);
}


RITUAL_EXPORT QPointingDevice * ctr_qt_gui_ffi_static_cast_QPointingDevice_ptr(QInputDevice * ptr) {
  return static_cast< QPointingDevice * >(ptr);
}


RITUAL_EXPORT QInputDevice * ctr_qt_gui_ffi_static_cast_QInputDevice_ptr1(QPointingDevice * ptr) {
  return static_cast< QInputDevice * >(ptr);
}


RITUAL_EXPORT QPointingDevice * ctr_qt_gui_ffi_dynamic_cast_QPointingDevice_ptr(QInputDevice * ptr) {
  return dynamic_cast< QPointingDevice * >(ptr);
}


RITUAL_EXPORT QPointingDevice * ctr_qt_gui_ffi_static_cast_QPointingDevice_ptr1(QObject * ptr) {
  return static_cast< QPointingDevice * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr4(QPointingDevice * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPointingDevice * ctr_qt_gui_ffi_dynamic_cast_QPointingDevice_ptr1(QObject * ptr) {
  return dynamic_cast< QPointingDevice * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr(QEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr(QInputEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_dynamic_cast_QInputEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr(QInputEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_dynamic_cast_QPointerEvent_ptr(QInputEvent * ptr) {
  return dynamic_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr1(QEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_dynamic_cast_QPointerEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr(QPointerEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr2(QSinglePointEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_dynamic_cast_QSinglePointEvent_ptr(QPointerEvent * ptr) {
  return dynamic_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr1(QInputEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr2(QSinglePointEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_dynamic_cast_QSinglePointEvent_ptr1(QInputEvent * ptr) {
  return dynamic_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr2(QEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr2(QSinglePointEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_dynamic_cast_QSinglePointEvent_ptr2(QEvent * ptr) {
  return dynamic_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_static_cast_QEnterEvent_ptr(QSinglePointEvent * ptr) {
  return static_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr3(QEnterEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_dynamic_cast_QEnterEvent_ptr(QSinglePointEvent * ptr) {
  return dynamic_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_static_cast_QEnterEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr3(QEnterEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_dynamic_cast_QEnterEvent_ptr1(QPointerEvent * ptr) {
  return dynamic_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_static_cast_QEnterEvent_ptr2(QInputEvent * ptr) {
  return static_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr3(QEnterEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_dynamic_cast_QEnterEvent_ptr2(QInputEvent * ptr) {
  return dynamic_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_static_cast_QEnterEvent_ptr3(QEvent * ptr) {
  return static_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr3(QEnterEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_dynamic_cast_QEnterEvent_ptr3(QEvent * ptr) {
  return dynamic_cast< QEnterEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_static_cast_QMouseEvent_ptr(QSinglePointEvent * ptr) {
  return static_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr4(QMouseEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_dynamic_cast_QMouseEvent_ptr(QSinglePointEvent * ptr) {
  return dynamic_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_static_cast_QMouseEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr4(QMouseEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_dynamic_cast_QMouseEvent_ptr1(QPointerEvent * ptr) {
  return dynamic_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_static_cast_QMouseEvent_ptr2(QInputEvent * ptr) {
  return static_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr4(QMouseEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_dynamic_cast_QMouseEvent_ptr2(QInputEvent * ptr) {
  return dynamic_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_static_cast_QMouseEvent_ptr3(QEvent * ptr) {
  return static_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr4(QMouseEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_dynamic_cast_QMouseEvent_ptr3(QEvent * ptr) {
  return dynamic_cast< QMouseEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_static_cast_QHoverEvent_ptr(QSinglePointEvent * ptr) {
  return static_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr5(QHoverEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_dynamic_cast_QHoverEvent_ptr(QSinglePointEvent * ptr) {
  return dynamic_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_static_cast_QHoverEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr5(QHoverEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_dynamic_cast_QHoverEvent_ptr1(QPointerEvent * ptr) {
  return dynamic_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_static_cast_QHoverEvent_ptr2(QInputEvent * ptr) {
  return static_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr5(QHoverEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_dynamic_cast_QHoverEvent_ptr2(QInputEvent * ptr) {
  return dynamic_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_static_cast_QHoverEvent_ptr3(QEvent * ptr) {
  return static_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr5(QHoverEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_dynamic_cast_QHoverEvent_ptr3(QEvent * ptr) {
  return dynamic_cast< QHoverEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_static_cast_QWheelEvent_ptr(QSinglePointEvent * ptr) {
  return static_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr6(QWheelEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_dynamic_cast_QWheelEvent_ptr(QSinglePointEvent * ptr) {
  return dynamic_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_static_cast_QWheelEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr6(QWheelEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_dynamic_cast_QWheelEvent_ptr1(QPointerEvent * ptr) {
  return dynamic_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_static_cast_QWheelEvent_ptr2(QInputEvent * ptr) {
  return static_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr6(QWheelEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_dynamic_cast_QWheelEvent_ptr2(QInputEvent * ptr) {
  return dynamic_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_static_cast_QWheelEvent_ptr3(QEvent * ptr) {
  return static_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr6(QWheelEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_dynamic_cast_QWheelEvent_ptr3(QEvent * ptr) {
  return dynamic_cast< QWheelEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_static_cast_QTabletEvent_ptr(QSinglePointEvent * ptr) {
  return static_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr7(QTabletEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_dynamic_cast_QTabletEvent_ptr(QSinglePointEvent * ptr) {
  return dynamic_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_static_cast_QTabletEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr7(QTabletEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_dynamic_cast_QTabletEvent_ptr1(QPointerEvent * ptr) {
  return dynamic_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_static_cast_QTabletEvent_ptr2(QInputEvent * ptr) {
  return static_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr7(QTabletEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_dynamic_cast_QTabletEvent_ptr2(QInputEvent * ptr) {
  return dynamic_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_static_cast_QTabletEvent_ptr3(QEvent * ptr) {
  return static_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr7(QTabletEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_dynamic_cast_QTabletEvent_ptr3(QEvent * ptr) {
  return dynamic_cast< QTabletEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_static_cast_QNativeGestureEvent_ptr(QSinglePointEvent * ptr) {
  return static_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_static_cast_QSinglePointEvent_ptr8(QNativeGestureEvent * ptr) {
  return static_cast< QSinglePointEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_dynamic_cast_QNativeGestureEvent_ptr(QSinglePointEvent * ptr) {
  return dynamic_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_static_cast_QNativeGestureEvent_ptr1(QPointerEvent * ptr) {
  return static_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr8(QNativeGestureEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_dynamic_cast_QNativeGestureEvent_ptr1(QPointerEvent * ptr) {
  return dynamic_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_static_cast_QNativeGestureEvent_ptr2(QInputEvent * ptr) {
  return static_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr8(QNativeGestureEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_dynamic_cast_QNativeGestureEvent_ptr2(QInputEvent * ptr) {
  return dynamic_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_static_cast_QNativeGestureEvent_ptr3(QEvent * ptr) {
  return static_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr8(QNativeGestureEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_dynamic_cast_QNativeGestureEvent_ptr3(QEvent * ptr) {
  return dynamic_cast< QNativeGestureEvent * >(ptr);
}


RITUAL_EXPORT QKeyEvent * ctr_qt_gui_ffi_static_cast_QKeyEvent_ptr(QInputEvent * ptr) {
  return static_cast< QKeyEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr9(QKeyEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QKeyEvent * ctr_qt_gui_ffi_dynamic_cast_QKeyEvent_ptr(QInputEvent * ptr) {
  return dynamic_cast< QKeyEvent * >(ptr);
}


RITUAL_EXPORT QKeyEvent * ctr_qt_gui_ffi_static_cast_QKeyEvent_ptr1(QEvent * ptr) {
  return static_cast< QKeyEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr9(QKeyEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QKeyEvent * ctr_qt_gui_ffi_dynamic_cast_QKeyEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QKeyEvent * >(ptr);
}


RITUAL_EXPORT QFocusEvent * ctr_qt_gui_ffi_static_cast_QFocusEvent_ptr(QEvent * ptr) {
  return static_cast< QFocusEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr10(QFocusEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QFocusEvent * ctr_qt_gui_ffi_dynamic_cast_QFocusEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QFocusEvent * >(ptr);
}


RITUAL_EXPORT QPaintEvent * ctr_qt_gui_ffi_static_cast_QPaintEvent_ptr(QEvent * ptr) {
  return static_cast< QPaintEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr11(QPaintEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QPaintEvent * ctr_qt_gui_ffi_dynamic_cast_QPaintEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QPaintEvent * >(ptr);
}


RITUAL_EXPORT QMoveEvent * ctr_qt_gui_ffi_static_cast_QMoveEvent_ptr(QEvent * ptr) {
  return static_cast< QMoveEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr12(QMoveEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QMoveEvent * ctr_qt_gui_ffi_dynamic_cast_QMoveEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QMoveEvent * >(ptr);
}


RITUAL_EXPORT QExposeEvent * ctr_qt_gui_ffi_static_cast_QExposeEvent_ptr(QEvent * ptr) {
  return static_cast< QExposeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr13(QExposeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QExposeEvent * ctr_qt_gui_ffi_dynamic_cast_QExposeEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QExposeEvent * >(ptr);
}


RITUAL_EXPORT QPlatformSurfaceEvent * ctr_qt_gui_ffi_static_cast_QPlatformSurfaceEvent_ptr(QEvent * ptr) {
  return static_cast< QPlatformSurfaceEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr14(QPlatformSurfaceEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QPlatformSurfaceEvent * ctr_qt_gui_ffi_dynamic_cast_QPlatformSurfaceEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QPlatformSurfaceEvent * >(ptr);
}


RITUAL_EXPORT QResizeEvent * ctr_qt_gui_ffi_static_cast_QResizeEvent_ptr(QEvent * ptr) {
  return static_cast< QResizeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr15(QResizeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QResizeEvent * ctr_qt_gui_ffi_dynamic_cast_QResizeEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QResizeEvent * >(ptr);
}


RITUAL_EXPORT QCloseEvent * ctr_qt_gui_ffi_static_cast_QCloseEvent_ptr(QEvent * ptr) {
  return static_cast< QCloseEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr16(QCloseEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QCloseEvent * ctr_qt_gui_ffi_dynamic_cast_QCloseEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QCloseEvent * >(ptr);
}


RITUAL_EXPORT QIconDragEvent * ctr_qt_gui_ffi_static_cast_QIconDragEvent_ptr(QEvent * ptr) {
  return static_cast< QIconDragEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr17(QIconDragEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QIconDragEvent * ctr_qt_gui_ffi_dynamic_cast_QIconDragEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QIconDragEvent * >(ptr);
}


RITUAL_EXPORT QShowEvent * ctr_qt_gui_ffi_static_cast_QShowEvent_ptr(QEvent * ptr) {
  return static_cast< QShowEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr18(QShowEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QShowEvent * ctr_qt_gui_ffi_dynamic_cast_QShowEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QShowEvent * >(ptr);
}


RITUAL_EXPORT QHideEvent * ctr_qt_gui_ffi_static_cast_QHideEvent_ptr(QEvent * ptr) {
  return static_cast< QHideEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr19(QHideEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QHideEvent * ctr_qt_gui_ffi_dynamic_cast_QHideEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QHideEvent * >(ptr);
}


RITUAL_EXPORT QContextMenuEvent * ctr_qt_gui_ffi_static_cast_QContextMenuEvent_ptr(QInputEvent * ptr) {
  return static_cast< QContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr10(QContextMenuEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QContextMenuEvent * ctr_qt_gui_ffi_dynamic_cast_QContextMenuEvent_ptr(QInputEvent * ptr) {
  return dynamic_cast< QContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QContextMenuEvent * ctr_qt_gui_ffi_static_cast_QContextMenuEvent_ptr1(QEvent * ptr) {
  return static_cast< QContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr20(QContextMenuEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QContextMenuEvent * ctr_qt_gui_ffi_dynamic_cast_QContextMenuEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QContextMenuEvent * >(ptr);
}


RITUAL_EXPORT QInputMethodEvent * ctr_qt_gui_ffi_static_cast_QInputMethodEvent_ptr(QEvent * ptr) {
  return static_cast< QInputMethodEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr21(QInputMethodEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QInputMethodEvent * ctr_qt_gui_ffi_dynamic_cast_QInputMethodEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QInputMethodEvent * >(ptr);
}


RITUAL_EXPORT QInputMethodQueryEvent * ctr_qt_gui_ffi_static_cast_QInputMethodQueryEvent_ptr(QEvent * ptr) {
  return static_cast< QInputMethodQueryEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr22(QInputMethodQueryEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QInputMethodQueryEvent * ctr_qt_gui_ffi_dynamic_cast_QInputMethodQueryEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QInputMethodQueryEvent * >(ptr);
}


RITUAL_EXPORT QDropEvent * ctr_qt_gui_ffi_static_cast_QDropEvent_ptr(QEvent * ptr) {
  return static_cast< QDropEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr23(QDropEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QDropEvent * ctr_qt_gui_ffi_dynamic_cast_QDropEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QDropEvent * >(ptr);
}


RITUAL_EXPORT QDragMoveEvent * ctr_qt_gui_ffi_static_cast_QDragMoveEvent_ptr(QDropEvent * ptr) {
  return static_cast< QDragMoveEvent * >(ptr);
}


RITUAL_EXPORT QDropEvent * ctr_qt_gui_ffi_static_cast_QDropEvent_ptr1(QDragMoveEvent * ptr) {
  return static_cast< QDropEvent * >(ptr);
}


RITUAL_EXPORT QDragMoveEvent * ctr_qt_gui_ffi_dynamic_cast_QDragMoveEvent_ptr(QDropEvent * ptr) {
  return dynamic_cast< QDragMoveEvent * >(ptr);
}


RITUAL_EXPORT QDragMoveEvent * ctr_qt_gui_ffi_static_cast_QDragMoveEvent_ptr1(QEvent * ptr) {
  return static_cast< QDragMoveEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr24(QDragMoveEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QDragMoveEvent * ctr_qt_gui_ffi_dynamic_cast_QDragMoveEvent_ptr1(QEvent * ptr) {
  return dynamic_cast< QDragMoveEvent * >(ptr);
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_static_cast_QDragEnterEvent_ptr(QDragMoveEvent * ptr) {
  return static_cast< QDragEnterEvent * >(ptr);
}


RITUAL_EXPORT QDragMoveEvent * ctr_qt_gui_ffi_static_cast_QDragMoveEvent_ptr2(QDragEnterEvent * ptr) {
  return static_cast< QDragMoveEvent * >(ptr);
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_dynamic_cast_QDragEnterEvent_ptr(QDragMoveEvent * ptr) {
  return dynamic_cast< QDragEnterEvent * >(ptr);
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_static_cast_QDragEnterEvent_ptr1(QDropEvent * ptr) {
  return static_cast< QDragEnterEvent * >(ptr);
}


RITUAL_EXPORT QDropEvent * ctr_qt_gui_ffi_static_cast_QDropEvent_ptr2(QDragEnterEvent * ptr) {
  return static_cast< QDropEvent * >(ptr);
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_dynamic_cast_QDragEnterEvent_ptr1(QDropEvent * ptr) {
  return dynamic_cast< QDragEnterEvent * >(ptr);
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_static_cast_QDragEnterEvent_ptr2(QEvent * ptr) {
  return static_cast< QDragEnterEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr25(QDragEnterEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_dynamic_cast_QDragEnterEvent_ptr2(QEvent * ptr) {
  return dynamic_cast< QDragEnterEvent * >(ptr);
}


RITUAL_EXPORT QDragLeaveEvent * ctr_qt_gui_ffi_static_cast_QDragLeaveEvent_ptr(QEvent * ptr) {
  return static_cast< QDragLeaveEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr26(QDragLeaveEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QDragLeaveEvent * ctr_qt_gui_ffi_dynamic_cast_QDragLeaveEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QDragLeaveEvent * >(ptr);
}


RITUAL_EXPORT QHelpEvent * ctr_qt_gui_ffi_static_cast_QHelpEvent_ptr(QEvent * ptr) {
  return static_cast< QHelpEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr27(QHelpEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QHelpEvent * ctr_qt_gui_ffi_dynamic_cast_QHelpEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QHelpEvent * >(ptr);
}


RITUAL_EXPORT QStatusTipEvent * ctr_qt_gui_ffi_static_cast_QStatusTipEvent_ptr(QEvent * ptr) {
  return static_cast< QStatusTipEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr28(QStatusTipEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QStatusTipEvent * ctr_qt_gui_ffi_dynamic_cast_QStatusTipEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QStatusTipEvent * >(ptr);
}


RITUAL_EXPORT QWhatsThisClickedEvent * ctr_qt_gui_ffi_static_cast_QWhatsThisClickedEvent_ptr(QEvent * ptr) {
  return static_cast< QWhatsThisClickedEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr29(QWhatsThisClickedEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QWhatsThisClickedEvent * ctr_qt_gui_ffi_dynamic_cast_QWhatsThisClickedEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QWhatsThisClickedEvent * >(ptr);
}


RITUAL_EXPORT QActionEvent * ctr_qt_gui_ffi_static_cast_QActionEvent_ptr(QEvent * ptr) {
  return static_cast< QActionEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr30(QActionEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QActionEvent * ctr_qt_gui_ffi_dynamic_cast_QActionEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QActionEvent * >(ptr);
}


RITUAL_EXPORT QFileOpenEvent * ctr_qt_gui_ffi_static_cast_QFileOpenEvent_ptr(QEvent * ptr) {
  return static_cast< QFileOpenEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr31(QFileOpenEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QFileOpenEvent * ctr_qt_gui_ffi_dynamic_cast_QFileOpenEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QFileOpenEvent * >(ptr);
}


RITUAL_EXPORT QToolBarChangeEvent * ctr_qt_gui_ffi_static_cast_QToolBarChangeEvent_ptr(QEvent * ptr) {
  return static_cast< QToolBarChangeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr32(QToolBarChangeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QToolBarChangeEvent * ctr_qt_gui_ffi_dynamic_cast_QToolBarChangeEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QToolBarChangeEvent * >(ptr);
}


RITUAL_EXPORT QShortcutEvent * ctr_qt_gui_ffi_static_cast_QShortcutEvent_ptr(QEvent * ptr) {
  return static_cast< QShortcutEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr33(QShortcutEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QShortcutEvent * ctr_qt_gui_ffi_dynamic_cast_QShortcutEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QShortcutEvent * >(ptr);
}


RITUAL_EXPORT QWindowStateChangeEvent * ctr_qt_gui_ffi_static_cast_QWindowStateChangeEvent_ptr(QEvent * ptr) {
  return static_cast< QWindowStateChangeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr34(QWindowStateChangeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QWindowStateChangeEvent * ctr_qt_gui_ffi_dynamic_cast_QWindowStateChangeEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QWindowStateChangeEvent * >(ptr);
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_static_cast_QTouchEvent_ptr(QPointerEvent * ptr) {
  return static_cast< QTouchEvent * >(ptr);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_static_cast_QPointerEvent_ptr9(QTouchEvent * ptr) {
  return static_cast< QPointerEvent * >(ptr);
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_dynamic_cast_QTouchEvent_ptr(QPointerEvent * ptr) {
  return dynamic_cast< QTouchEvent * >(ptr);
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_static_cast_QTouchEvent_ptr1(QInputEvent * ptr) {
  return static_cast< QTouchEvent * >(ptr);
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_static_cast_QInputEvent_ptr11(QTouchEvent * ptr) {
  return static_cast< QInputEvent * >(ptr);
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_dynamic_cast_QTouchEvent_ptr1(QInputEvent * ptr) {
  return dynamic_cast< QTouchEvent * >(ptr);
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_static_cast_QTouchEvent_ptr2(QEvent * ptr) {
  return static_cast< QTouchEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr35(QTouchEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_dynamic_cast_QTouchEvent_ptr2(QEvent * ptr) {
  return dynamic_cast< QTouchEvent * >(ptr);
}


RITUAL_EXPORT QScrollPrepareEvent * ctr_qt_gui_ffi_static_cast_QScrollPrepareEvent_ptr(QEvent * ptr) {
  return static_cast< QScrollPrepareEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr36(QScrollPrepareEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QScrollPrepareEvent * ctr_qt_gui_ffi_dynamic_cast_QScrollPrepareEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QScrollPrepareEvent * >(ptr);
}


RITUAL_EXPORT QScrollEvent * ctr_qt_gui_ffi_static_cast_QScrollEvent_ptr(QEvent * ptr) {
  return static_cast< QScrollEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr37(QScrollEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QScrollEvent * ctr_qt_gui_ffi_dynamic_cast_QScrollEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QScrollEvent * >(ptr);
}


RITUAL_EXPORT QScreenOrientationChangeEvent * ctr_qt_gui_ffi_static_cast_QScreenOrientationChangeEvent_ptr(QEvent * ptr) {
  return static_cast< QScreenOrientationChangeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr38(QScreenOrientationChangeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QScreenOrientationChangeEvent * ctr_qt_gui_ffi_dynamic_cast_QScreenOrientationChangeEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QScreenOrientationChangeEvent * >(ptr);
}


RITUAL_EXPORT QApplicationStateChangeEvent * ctr_qt_gui_ffi_static_cast_QApplicationStateChangeEvent_ptr(QEvent * ptr) {
  return static_cast< QApplicationStateChangeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr39(QApplicationStateChangeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QApplicationStateChangeEvent * ctr_qt_gui_ffi_dynamic_cast_QApplicationStateChangeEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QApplicationStateChangeEvent * >(ptr);
}


RITUAL_EXPORT QChildWindowEvent * ctr_qt_gui_ffi_static_cast_QChildWindowEvent_ptr(QEvent * ptr) {
  return static_cast< QChildWindowEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_gui_ffi_static_cast_QEvent_ptr40(QChildWindowEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QChildWindowEvent * ctr_qt_gui_ffi_dynamic_cast_QChildWindowEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QChildWindowEvent * >(ptr);
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_static_cast_QTextDocument_ptr(QObject * ptr) {
  return static_cast< QTextDocument * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr5(QTextDocument * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_dynamic_cast_QTextDocument_ptr(QObject * ptr) {
  return dynamic_cast< QTextDocument * >(ptr);
}


RITUAL_EXPORT QLinearGradient * ctr_qt_gui_ffi_static_cast_QLinearGradient_ptr(QGradient * ptr) {
  return static_cast< QLinearGradient * >(ptr);
}


RITUAL_EXPORT QGradient * ctr_qt_gui_ffi_static_cast_QGradient_ptr(QLinearGradient * ptr) {
  return static_cast< QGradient * >(ptr);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_static_cast_QRadialGradient_ptr(QGradient * ptr) {
  return static_cast< QRadialGradient * >(ptr);
}


RITUAL_EXPORT QGradient * ctr_qt_gui_ffi_static_cast_QGradient_ptr1(QRadialGradient * ptr) {
  return static_cast< QGradient * >(ptr);
}


RITUAL_EXPORT QConicalGradient * ctr_qt_gui_ffi_static_cast_QConicalGradient_ptr(QGradient * ptr) {
  return static_cast< QConicalGradient * >(ptr);
}


RITUAL_EXPORT QGradient * ctr_qt_gui_ffi_static_cast_QGradient_ptr2(QConicalGradient * ptr) {
  return static_cast< QGradient * >(ptr);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_static_cast_QTextCharFormat_ptr(QTextFormat * ptr) {
  return static_cast< QTextCharFormat * >(ptr);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_static_cast_QTextFormat_ptr(QTextCharFormat * ptr) {
  return static_cast< QTextFormat * >(ptr);
}


RITUAL_EXPORT QTextBlockFormat * ctr_qt_gui_ffi_static_cast_QTextBlockFormat_ptr(QTextFormat * ptr) {
  return static_cast< QTextBlockFormat * >(ptr);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_static_cast_QTextFormat_ptr1(QTextBlockFormat * ptr) {
  return static_cast< QTextFormat * >(ptr);
}


RITUAL_EXPORT QTextListFormat * ctr_qt_gui_ffi_static_cast_QTextListFormat_ptr(QTextFormat * ptr) {
  return static_cast< QTextListFormat * >(ptr);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_static_cast_QTextFormat_ptr2(QTextListFormat * ptr) {
  return static_cast< QTextFormat * >(ptr);
}


RITUAL_EXPORT QTextImageFormat * ctr_qt_gui_ffi_static_cast_QTextImageFormat_ptr(QTextCharFormat * ptr) {
  return static_cast< QTextImageFormat * >(ptr);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_static_cast_QTextCharFormat_ptr1(QTextImageFormat * ptr) {
  return static_cast< QTextCharFormat * >(ptr);
}


RITUAL_EXPORT QTextImageFormat * ctr_qt_gui_ffi_static_cast_QTextImageFormat_ptr1(QTextFormat * ptr) {
  return static_cast< QTextImageFormat * >(ptr);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_static_cast_QTextFormat_ptr3(QTextImageFormat * ptr) {
  return static_cast< QTextFormat * >(ptr);
}


RITUAL_EXPORT QTextFrameFormat * ctr_qt_gui_ffi_static_cast_QTextFrameFormat_ptr(QTextFormat * ptr) {
  return static_cast< QTextFrameFormat * >(ptr);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_static_cast_QTextFormat_ptr4(QTextFrameFormat * ptr) {
  return static_cast< QTextFormat * >(ptr);
}


RITUAL_EXPORT QTextTableFormat * ctr_qt_gui_ffi_static_cast_QTextTableFormat_ptr(QTextFrameFormat * ptr) {
  return static_cast< QTextTableFormat * >(ptr);
}


RITUAL_EXPORT QTextFrameFormat * ctr_qt_gui_ffi_static_cast_QTextFrameFormat_ptr1(QTextTableFormat * ptr) {
  return static_cast< QTextFrameFormat * >(ptr);
}


RITUAL_EXPORT QTextTableFormat * ctr_qt_gui_ffi_static_cast_QTextTableFormat_ptr1(QTextFormat * ptr) {
  return static_cast< QTextTableFormat * >(ptr);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_static_cast_QTextFormat_ptr5(QTextTableFormat * ptr) {
  return static_cast< QTextFormat * >(ptr);
}


RITUAL_EXPORT QTextTableCellFormat * ctr_qt_gui_ffi_static_cast_QTextTableCellFormat_ptr(QTextCharFormat * ptr) {
  return static_cast< QTextTableCellFormat * >(ptr);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_static_cast_QTextCharFormat_ptr2(QTextTableCellFormat * ptr) {
  return static_cast< QTextCharFormat * >(ptr);
}


RITUAL_EXPORT QTextTableCellFormat * ctr_qt_gui_ffi_static_cast_QTextTableCellFormat_ptr1(QTextFormat * ptr) {
  return static_cast< QTextTableCellFormat * >(ptr);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_static_cast_QTextFormat_ptr6(QTextTableCellFormat * ptr) {
  return static_cast< QTextFormat * >(ptr);
}


RITUAL_EXPORT QAbstractTextDocumentLayout * ctr_qt_gui_ffi_static_cast_QAbstractTextDocumentLayout_ptr(QObject * ptr) {
  return static_cast< QAbstractTextDocumentLayout * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr6(QAbstractTextDocumentLayout * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractTextDocumentLayout * ctr_qt_gui_ffi_dynamic_cast_QAbstractTextDocumentLayout_ptr(QObject * ptr) {
  return dynamic_cast< QAbstractTextDocumentLayout * >(ptr);
}


RITUAL_EXPORT QAccessibilityHints * ctr_qt_gui_ffi_static_cast_QAccessibilityHints_ptr(QObject * ptr) {
  return static_cast< QAccessibilityHints * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr7(QAccessibilityHints * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAccessibilityHints * ctr_qt_gui_ffi_dynamic_cast_QAccessibilityHints_ptr(QObject * ptr) {
  return dynamic_cast< QAccessibilityHints * >(ptr);
}


RITUAL_EXPORT QAccessibleStateChangeEvent * ctr_qt_gui_ffi_static_cast_QAccessibleStateChangeEvent_ptr(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleStateChangeEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr(QAccessibleStateChangeEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleStateChangeEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleStateChangeEvent_ptr(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleStateChangeEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextCursorEvent_ptr(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleTextCursorEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr1(QAccessibleTextCursorEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextCursorEvent_ptr(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleTextCursorEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextSelectionEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextSelectionEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return static_cast< QAccessibleTextSelectionEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextCursorEvent_ptr1(QAccessibleTextSelectionEvent * ptr) {
  return static_cast< QAccessibleTextCursorEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextSelectionEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextSelectionEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return dynamic_cast< QAccessibleTextSelectionEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextSelectionEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextSelectionEvent_ptr1(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleTextSelectionEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr2(QAccessibleTextSelectionEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextSelectionEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextSelectionEvent_ptr1(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleTextSelectionEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextInsertEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextInsertEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return static_cast< QAccessibleTextInsertEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextCursorEvent_ptr2(QAccessibleTextInsertEvent * ptr) {
  return static_cast< QAccessibleTextCursorEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextInsertEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextInsertEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return dynamic_cast< QAccessibleTextInsertEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextInsertEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextInsertEvent_ptr1(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleTextInsertEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr3(QAccessibleTextInsertEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextInsertEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextInsertEvent_ptr1(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleTextInsertEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextRemoveEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextRemoveEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return static_cast< QAccessibleTextRemoveEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextCursorEvent_ptr3(QAccessibleTextRemoveEvent * ptr) {
  return static_cast< QAccessibleTextCursorEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextRemoveEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextRemoveEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return dynamic_cast< QAccessibleTextRemoveEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextRemoveEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextRemoveEvent_ptr1(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleTextRemoveEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr4(QAccessibleTextRemoveEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextRemoveEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextRemoveEvent_ptr1(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleTextRemoveEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextUpdateEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextUpdateEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return static_cast< QAccessibleTextUpdateEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextCursorEvent_ptr4(QAccessibleTextUpdateEvent * ptr) {
  return static_cast< QAccessibleTextCursorEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextUpdateEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextUpdateEvent_ptr(QAccessibleTextCursorEvent * ptr) {
  return dynamic_cast< QAccessibleTextUpdateEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextUpdateEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTextUpdateEvent_ptr1(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleTextUpdateEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr5(QAccessibleTextUpdateEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTextUpdateEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTextUpdateEvent_ptr1(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleTextUpdateEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleValueChangeEvent * ctr_qt_gui_ffi_static_cast_QAccessibleValueChangeEvent_ptr(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleValueChangeEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr6(QAccessibleValueChangeEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleValueChangeEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleValueChangeEvent_ptr(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleValueChangeEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTableModelChangeEvent * ctr_qt_gui_ffi_static_cast_QAccessibleTableModelChangeEvent_ptr(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleTableModelChangeEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr7(QAccessibleTableModelChangeEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleTableModelChangeEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleTableModelChangeEvent_ptr(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleTableModelChangeEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleAnnouncementEvent * ctr_qt_gui_ffi_static_cast_QAccessibleAnnouncementEvent_ptr(QAccessibleEvent * ptr) {
  return static_cast< QAccessibleAnnouncementEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_static_cast_QAccessibleEvent_ptr8(QAccessibleAnnouncementEvent * ptr) {
  return static_cast< QAccessibleEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleAnnouncementEvent * ctr_qt_gui_ffi_dynamic_cast_QAccessibleAnnouncementEvent_ptr(QAccessibleEvent * ptr) {
  return dynamic_cast< QAccessibleAnnouncementEvent * >(ptr);
}


RITUAL_EXPORT QAccessibleObject * ctr_qt_gui_ffi_static_cast_QAccessibleObject_ptr(QAccessibleInterface * ptr) {
  return static_cast< QAccessibleObject * >(ptr);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_static_cast_QAccessibleInterface_ptr(QAccessibleObject * ptr) {
  return static_cast< QAccessibleInterface * >(ptr);
}


RITUAL_EXPORT QAccessibleObject * ctr_qt_gui_ffi_dynamic_cast_QAccessibleObject_ptr(QAccessibleInterface * ptr) {
  return dynamic_cast< QAccessibleObject * >(ptr);
}


RITUAL_EXPORT QAccessiblePlugin * ctr_qt_gui_ffi_static_cast_QAccessiblePlugin_ptr(QObject * ptr) {
  return static_cast< QAccessiblePlugin * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr8(QAccessiblePlugin * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAccessiblePlugin * ctr_qt_gui_ffi_dynamic_cast_QAccessiblePlugin_ptr(QObject * ptr) {
  return dynamic_cast< QAccessiblePlugin * >(ptr);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_static_cast_QAction_ptr(QObject * ptr) {
  return static_cast< QAction * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr9(QAction * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_dynamic_cast_QAction_ptr(QObject * ptr) {
  return dynamic_cast< QAction * >(ptr);
}


RITUAL_EXPORT QActionGroup * ctr_qt_gui_ffi_static_cast_QActionGroup_ptr(QObject * ptr) {
  return static_cast< QActionGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr10(QActionGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QActionGroup * ctr_qt_gui_ffi_dynamic_cast_QActionGroup_ptr(QObject * ptr) {
  return dynamic_cast< QActionGroup * >(ptr);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_static_cast_QBitmap_ptr(QPixmap * ptr) {
  return static_cast< QBitmap * >(ptr);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_static_cast_QPixmap_ptr1(QBitmap * ptr) {
  return static_cast< QPixmap * >(ptr);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_dynamic_cast_QBitmap_ptr(QPixmap * ptr) {
  return dynamic_cast< QBitmap * >(ptr);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_static_cast_QBitmap_ptr1(QPaintDevice * ptr) {
  return static_cast< QBitmap * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr2(QBitmap * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_dynamic_cast_QBitmap_ptr1(QPaintDevice * ptr) {
  return dynamic_cast< QBitmap * >(ptr);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_static_cast_QWindow_ptr(QObject * ptr) {
  return static_cast< QWindow * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr11(QWindow * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_dynamic_cast_QWindow_ptr(QObject * ptr) {
  return dynamic_cast< QWindow * >(ptr);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_static_cast_QWindow_ptr1(QSurface * ptr) {
  return static_cast< QWindow * >(ptr);
}


RITUAL_EXPORT QSurface * ctr_qt_gui_ffi_static_cast_QSurface_ptr(QWindow * ptr) {
  return static_cast< QSurface * >(ptr);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_dynamic_cast_QWindow_ptr1(QSurface * ptr) {
  return dynamic_cast< QWindow * >(ptr);
}


RITUAL_EXPORT QClipboard * ctr_qt_gui_ffi_static_cast_QClipboard_ptr(QObject * ptr) {
  return static_cast< QClipboard * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr12(QClipboard * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QClipboard * ctr_qt_gui_ffi_dynamic_cast_QClipboard_ptr(QObject * ptr) {
  return dynamic_cast< QClipboard * >(ptr);
}


RITUAL_EXPORT QDrag * ctr_qt_gui_ffi_static_cast_QDrag_ptr(QObject * ptr) {
  return static_cast< QDrag * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr13(QDrag * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDrag * ctr_qt_gui_ffi_dynamic_cast_QDrag_ptr(QObject * ptr) {
  return dynamic_cast< QDrag * >(ptr);
}


RITUAL_EXPORT QFileSystemModel * ctr_qt_gui_ffi_static_cast_QFileSystemModel_ptr(QAbstractItemModel * ptr) {
  return static_cast< QFileSystemModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_gui_ffi_static_cast_QAbstractItemModel_ptr(QFileSystemModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QFileSystemModel * ctr_qt_gui_ffi_dynamic_cast_QFileSystemModel_ptr(QAbstractItemModel * ptr) {
  return dynamic_cast< QFileSystemModel * >(ptr);
}


RITUAL_EXPORT QFileSystemModel * ctr_qt_gui_ffi_static_cast_QFileSystemModel_ptr1(QObject * ptr) {
  return static_cast< QFileSystemModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr14(QFileSystemModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFileSystemModel * ctr_qt_gui_ffi_dynamic_cast_QFileSystemModel_ptr1(QObject * ptr) {
  return dynamic_cast< QFileSystemModel * >(ptr);
}


RITUAL_EXPORT QGenericPlugin * ctr_qt_gui_ffi_static_cast_QGenericPlugin_ptr(QObject * ptr) {
  return static_cast< QGenericPlugin * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr15(QGenericPlugin * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QGenericPlugin * ctr_qt_gui_ffi_dynamic_cast_QGenericPlugin_ptr(QObject * ptr) {
  return dynamic_cast< QGenericPlugin * >(ptr);
}


RITUAL_EXPORT QIconEnginePlugin * ctr_qt_gui_ffi_static_cast_QIconEnginePlugin_ptr(QObject * ptr) {
  return static_cast< QIconEnginePlugin * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr16(QIconEnginePlugin * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QIconEnginePlugin * ctr_qt_gui_ffi_dynamic_cast_QIconEnginePlugin_ptr(QObject * ptr) {
  return dynamic_cast< QIconEnginePlugin * >(ptr);
}


RITUAL_EXPORT QImageIOPlugin * ctr_qt_gui_ffi_static_cast_QImageIOPlugin_ptr(QObject * ptr) {
  return static_cast< QImageIOPlugin * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr17(QImageIOPlugin * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QImageIOPlugin * ctr_qt_gui_ffi_dynamic_cast_QImageIOPlugin_ptr(QObject * ptr) {
  return dynamic_cast< QImageIOPlugin * >(ptr);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_static_cast_QMovie_ptr(QObject * ptr) {
  return static_cast< QMovie * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr18(QMovie * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_dynamic_cast_QMovie_ptr(QObject * ptr) {
  return dynamic_cast< QMovie * >(ptr);
}


RITUAL_EXPORT QOffscreenSurface * ctr_qt_gui_ffi_static_cast_QOffscreenSurface_ptr(QObject * ptr) {
  return static_cast< QOffscreenSurface * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr19(QOffscreenSurface * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QOffscreenSurface * ctr_qt_gui_ffi_dynamic_cast_QOffscreenSurface_ptr(QObject * ptr) {
  return dynamic_cast< QOffscreenSurface * >(ptr);
}


RITUAL_EXPORT QOffscreenSurface * ctr_qt_gui_ffi_static_cast_QOffscreenSurface_ptr1(QSurface * ptr) {
  return static_cast< QOffscreenSurface * >(ptr);
}


RITUAL_EXPORT QSurface * ctr_qt_gui_ffi_static_cast_QSurface_ptr1(QOffscreenSurface * ptr) {
  return static_cast< QSurface * >(ptr);
}


RITUAL_EXPORT QOffscreenSurface * ctr_qt_gui_ffi_dynamic_cast_QOffscreenSurface_ptr1(QSurface * ptr) {
  return dynamic_cast< QOffscreenSurface * >(ptr);
}


RITUAL_EXPORT QOpenGLContextGroup * ctr_qt_gui_ffi_static_cast_QOpenGLContextGroup_ptr(QObject * ptr) {
  return static_cast< QOpenGLContextGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr20(QOpenGLContextGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QOpenGLContextGroup * ctr_qt_gui_ffi_dynamic_cast_QOpenGLContextGroup_ptr(QObject * ptr) {
  return dynamic_cast< QOpenGLContextGroup * >(ptr);
}


RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_static_cast_QOpenGLContext_ptr(QObject * ptr) {
  return static_cast< QOpenGLContext * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr21(QOpenGLContext * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_dynamic_cast_QOpenGLContext_ptr(QObject * ptr) {
  return dynamic_cast< QOpenGLContext * >(ptr);
}


RITUAL_EXPORT QOpenGLExtraFunctions * ctr_qt_gui_ffi_static_cast_QOpenGLExtraFunctions_ptr(QOpenGLFunctions * ptr) {
  return static_cast< QOpenGLExtraFunctions * >(ptr);
}


RITUAL_EXPORT QOpenGLFunctions * ctr_qt_gui_ffi_static_cast_QOpenGLFunctions_ptr(QOpenGLExtraFunctions * ptr) {
  return static_cast< QOpenGLFunctions * >(ptr);
}


RITUAL_EXPORT QPagedPaintDevice * ctr_qt_gui_ffi_static_cast_QPagedPaintDevice_ptr(QPaintDevice * ptr) {
  return static_cast< QPagedPaintDevice * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr3(QPagedPaintDevice * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QPagedPaintDevice * ctr_qt_gui_ffi_dynamic_cast_QPagedPaintDevice_ptr(QPaintDevice * ptr) {
  return dynamic_cast< QPagedPaintDevice * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_static_cast_QPaintDeviceWindow_ptr(QWindow * ptr) {
  return static_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_static_cast_QWindow_ptr2(QPaintDeviceWindow * ptr) {
  return static_cast< QWindow * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_dynamic_cast_QPaintDeviceWindow_ptr(QWindow * ptr) {
  return dynamic_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_static_cast_QPaintDeviceWindow_ptr1(QObject * ptr) {
  return static_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr22(QPaintDeviceWindow * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_dynamic_cast_QPaintDeviceWindow_ptr1(QObject * ptr) {
  return dynamic_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_static_cast_QPaintDeviceWindow_ptr2(QSurface * ptr) {
  return static_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QSurface * ctr_qt_gui_ffi_static_cast_QSurface_ptr2(QPaintDeviceWindow * ptr) {
  return static_cast< QSurface * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_dynamic_cast_QPaintDeviceWindow_ptr2(QSurface * ptr) {
  return dynamic_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_static_cast_QPaintDeviceWindow_ptr3(QPaintDevice * ptr) {
  return static_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr4(QPaintDeviceWindow * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_dynamic_cast_QPaintDeviceWindow_ptr3(QPaintDevice * ptr) {
  return dynamic_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_static_cast_QPdfWriter_ptr(QObject * ptr) {
  return static_cast< QPdfWriter * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr23(QPdfWriter * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_dynamic_cast_QPdfWriter_ptr(QObject * ptr) {
  return dynamic_cast< QPdfWriter * >(ptr);
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_static_cast_QPdfWriter_ptr1(QPagedPaintDevice * ptr) {
  return static_cast< QPdfWriter * >(ptr);
}


RITUAL_EXPORT QPagedPaintDevice * ctr_qt_gui_ffi_static_cast_QPagedPaintDevice_ptr1(QPdfWriter * ptr) {
  return static_cast< QPagedPaintDevice * >(ptr);
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_dynamic_cast_QPdfWriter_ptr1(QPagedPaintDevice * ptr) {
  return dynamic_cast< QPdfWriter * >(ptr);
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_static_cast_QPdfWriter_ptr2(QPaintDevice * ptr) {
  return static_cast< QPdfWriter * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr5(QPdfWriter * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_dynamic_cast_QPdfWriter_ptr2(QPaintDevice * ptr) {
  return dynamic_cast< QPdfWriter * >(ptr);
}


RITUAL_EXPORT QPicture * ctr_qt_gui_ffi_static_cast_QPicture_ptr(QPaintDevice * ptr) {
  return static_cast< QPicture * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr6(QPicture * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QPicture * ctr_qt_gui_ffi_dynamic_cast_QPicture_ptr(QPaintDevice * ptr) {
  return dynamic_cast< QPicture * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_static_cast_QRasterWindow_ptr(QPaintDeviceWindow * ptr) {
  return static_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QPaintDeviceWindow * ctr_qt_gui_ffi_static_cast_QPaintDeviceWindow_ptr4(QRasterWindow * ptr) {
  return static_cast< QPaintDeviceWindow * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_dynamic_cast_QRasterWindow_ptr(QPaintDeviceWindow * ptr) {
  return dynamic_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_static_cast_QRasterWindow_ptr1(QWindow * ptr) {
  return static_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_static_cast_QWindow_ptr3(QRasterWindow * ptr) {
  return static_cast< QWindow * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_dynamic_cast_QRasterWindow_ptr1(QWindow * ptr) {
  return dynamic_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_static_cast_QRasterWindow_ptr2(QObject * ptr) {
  return static_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr24(QRasterWindow * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_dynamic_cast_QRasterWindow_ptr2(QObject * ptr) {
  return dynamic_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_static_cast_QRasterWindow_ptr3(QSurface * ptr) {
  return static_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QSurface * ctr_qt_gui_ffi_static_cast_QSurface_ptr3(QRasterWindow * ptr) {
  return static_cast< QSurface * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_dynamic_cast_QRasterWindow_ptr3(QSurface * ptr) {
  return dynamic_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_static_cast_QRasterWindow_ptr4(QPaintDevice * ptr) {
  return static_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_static_cast_QPaintDevice_ptr7(QRasterWindow * ptr) {
  return static_cast< QPaintDevice * >(ptr);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_dynamic_cast_QRasterWindow_ptr4(QPaintDevice * ptr) {
  return dynamic_cast< QRasterWindow * >(ptr);
}


RITUAL_EXPORT QSessionManager * ctr_qt_gui_ffi_static_cast_QSessionManager_ptr(QObject * ptr) {
  return static_cast< QSessionManager * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr25(QSessionManager * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSessionManager * ctr_qt_gui_ffi_dynamic_cast_QSessionManager_ptr(QObject * ptr) {
  return dynamic_cast< QSessionManager * >(ptr);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_static_cast_QShortcut_ptr(QObject * ptr) {
  return static_cast< QShortcut * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr26(QShortcut * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_dynamic_cast_QShortcut_ptr(QObject * ptr) {
  return dynamic_cast< QShortcut * >(ptr);
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_static_cast_QStandardItemModel_ptr(QAbstractItemModel * ptr) {
  return static_cast< QStandardItemModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_gui_ffi_static_cast_QAbstractItemModel_ptr1(QStandardItemModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_dynamic_cast_QStandardItemModel_ptr(QAbstractItemModel * ptr) {
  return dynamic_cast< QStandardItemModel * >(ptr);
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_static_cast_QStandardItemModel_ptr1(QObject * ptr) {
  return static_cast< QStandardItemModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr27(QStandardItemModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_dynamic_cast_QStandardItemModel_ptr1(QObject * ptr) {
  return dynamic_cast< QStandardItemModel * >(ptr);
}


RITUAL_EXPORT QStyleHints * ctr_qt_gui_ffi_static_cast_QStyleHints_ptr(QObject * ptr) {
  return static_cast< QStyleHints * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr28(QStyleHints * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QStyleHints * ctr_qt_gui_ffi_dynamic_cast_QStyleHints_ptr(QObject * ptr) {
  return dynamic_cast< QStyleHints * >(ptr);
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_static_cast_QTextObject_ptr(QObject * ptr) {
  return static_cast< QTextObject * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr29(QTextObject * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_dynamic_cast_QTextObject_ptr(QObject * ptr) {
  return dynamic_cast< QTextObject * >(ptr);
}


RITUAL_EXPORT QTextBlockGroup * ctr_qt_gui_ffi_static_cast_QTextBlockGroup_ptr(QTextObject * ptr) {
  return static_cast< QTextBlockGroup * >(ptr);
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_static_cast_QTextObject_ptr1(QTextBlockGroup * ptr) {
  return static_cast< QTextObject * >(ptr);
}


RITUAL_EXPORT QTextBlockGroup * ctr_qt_gui_ffi_dynamic_cast_QTextBlockGroup_ptr(QTextObject * ptr) {
  return dynamic_cast< QTextBlockGroup * >(ptr);
}


RITUAL_EXPORT QTextBlockGroup * ctr_qt_gui_ffi_static_cast_QTextBlockGroup_ptr1(QObject * ptr) {
  return static_cast< QTextBlockGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr30(QTextBlockGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTextBlockGroup * ctr_qt_gui_ffi_dynamic_cast_QTextBlockGroup_ptr1(QObject * ptr) {
  return dynamic_cast< QTextBlockGroup * >(ptr);
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_static_cast_QTextFrame_ptr(QTextObject * ptr) {
  return static_cast< QTextFrame * >(ptr);
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_static_cast_QTextObject_ptr2(QTextFrame * ptr) {
  return static_cast< QTextObject * >(ptr);
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_dynamic_cast_QTextFrame_ptr(QTextObject * ptr) {
  return dynamic_cast< QTextFrame * >(ptr);
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_static_cast_QTextFrame_ptr1(QObject * ptr) {
  return static_cast< QTextFrame * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr31(QTextFrame * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_dynamic_cast_QTextFrame_ptr1(QObject * ptr) {
  return dynamic_cast< QTextFrame * >(ptr);
}


RITUAL_EXPORT QSyntaxHighlighter * ctr_qt_gui_ffi_static_cast_QSyntaxHighlighter_ptr(QObject * ptr) {
  return static_cast< QSyntaxHighlighter * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr32(QSyntaxHighlighter * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSyntaxHighlighter * ctr_qt_gui_ffi_dynamic_cast_QSyntaxHighlighter_ptr(QObject * ptr) {
  return dynamic_cast< QSyntaxHighlighter * >(ptr);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_static_cast_QTextList_ptr(QTextBlockGroup * ptr) {
  return static_cast< QTextList * >(ptr);
}


RITUAL_EXPORT QTextBlockGroup * ctr_qt_gui_ffi_static_cast_QTextBlockGroup_ptr2(QTextList * ptr) {
  return static_cast< QTextBlockGroup * >(ptr);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_dynamic_cast_QTextList_ptr(QTextBlockGroup * ptr) {
  return dynamic_cast< QTextList * >(ptr);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_static_cast_QTextList_ptr1(QTextObject * ptr) {
  return static_cast< QTextList * >(ptr);
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_static_cast_QTextObject_ptr3(QTextList * ptr) {
  return static_cast< QTextObject * >(ptr);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_dynamic_cast_QTextList_ptr1(QTextObject * ptr) {
  return dynamic_cast< QTextList * >(ptr);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_static_cast_QTextList_ptr2(QObject * ptr) {
  return static_cast< QTextList * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr33(QTextList * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_dynamic_cast_QTextList_ptr2(QObject * ptr) {
  return dynamic_cast< QTextList * >(ptr);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_static_cast_QTextTable_ptr(QTextFrame * ptr) {
  return static_cast< QTextTable * >(ptr);
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_static_cast_QTextFrame_ptr2(QTextTable * ptr) {
  return static_cast< QTextFrame * >(ptr);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_dynamic_cast_QTextTable_ptr(QTextFrame * ptr) {
  return dynamic_cast< QTextTable * >(ptr);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_static_cast_QTextTable_ptr1(QTextObject * ptr) {
  return static_cast< QTextTable * >(ptr);
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_static_cast_QTextObject_ptr4(QTextTable * ptr) {
  return static_cast< QTextObject * >(ptr);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_dynamic_cast_QTextTable_ptr1(QTextObject * ptr) {
  return dynamic_cast< QTextTable * >(ptr);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_static_cast_QTextTable_ptr2(QObject * ptr) {
  return static_cast< QTextTable * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr34(QTextTable * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_dynamic_cast_QTextTable_ptr2(QObject * ptr) {
  return dynamic_cast< QTextTable * >(ptr);
}


RITUAL_EXPORT QUndoGroup * ctr_qt_gui_ffi_static_cast_QUndoGroup_ptr(QObject * ptr) {
  return static_cast< QUndoGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr35(QUndoGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QUndoGroup * ctr_qt_gui_ffi_dynamic_cast_QUndoGroup_ptr(QObject * ptr) {
  return dynamic_cast< QUndoGroup * >(ptr);
}


RITUAL_EXPORT QUndoStack * ctr_qt_gui_ffi_static_cast_QUndoStack_ptr(QObject * ptr) {
  return static_cast< QUndoStack * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr36(QUndoStack * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QUndoStack * ctr_qt_gui_ffi_dynamic_cast_QUndoStack_ptr(QObject * ptr) {
  return dynamic_cast< QUndoStack * >(ptr);
}


RITUAL_EXPORT QValidator * ctr_qt_gui_ffi_static_cast_QValidator_ptr(QObject * ptr) {
  return static_cast< QValidator * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr37(QValidator * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QValidator * ctr_qt_gui_ffi_dynamic_cast_QValidator_ptr(QObject * ptr) {
  return dynamic_cast< QValidator * >(ptr);
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_static_cast_QIntValidator_ptr(QValidator * ptr) {
  return static_cast< QIntValidator * >(ptr);
}


RITUAL_EXPORT QValidator * ctr_qt_gui_ffi_static_cast_QValidator_ptr1(QIntValidator * ptr) {
  return static_cast< QValidator * >(ptr);
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_dynamic_cast_QIntValidator_ptr(QValidator * ptr) {
  return dynamic_cast< QIntValidator * >(ptr);
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_static_cast_QIntValidator_ptr1(QObject * ptr) {
  return static_cast< QIntValidator * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr38(QIntValidator * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_dynamic_cast_QIntValidator_ptr1(QObject * ptr) {
  return dynamic_cast< QIntValidator * >(ptr);
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_static_cast_QDoubleValidator_ptr(QValidator * ptr) {
  return static_cast< QDoubleValidator * >(ptr);
}


RITUAL_EXPORT QValidator * ctr_qt_gui_ffi_static_cast_QValidator_ptr2(QDoubleValidator * ptr) {
  return static_cast< QValidator * >(ptr);
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_dynamic_cast_QDoubleValidator_ptr(QValidator * ptr) {
  return dynamic_cast< QDoubleValidator * >(ptr);
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_static_cast_QDoubleValidator_ptr1(QObject * ptr) {
  return static_cast< QDoubleValidator * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr39(QDoubleValidator * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_dynamic_cast_QDoubleValidator_ptr1(QObject * ptr) {
  return dynamic_cast< QDoubleValidator * >(ptr);
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_static_cast_QRegularExpressionValidator_ptr(QValidator * ptr) {
  return static_cast< QRegularExpressionValidator * >(ptr);
}


RITUAL_EXPORT QValidator * ctr_qt_gui_ffi_static_cast_QValidator_ptr3(QRegularExpressionValidator * ptr) {
  return static_cast< QValidator * >(ptr);
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_dynamic_cast_QRegularExpressionValidator_ptr(QValidator * ptr) {
  return dynamic_cast< QRegularExpressionValidator * >(ptr);
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_static_cast_QRegularExpressionValidator_ptr1(QObject * ptr) {
  return static_cast< QRegularExpressionValidator * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr40(QRegularExpressionValidator * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_dynamic_cast_QRegularExpressionValidator_ptr1(QObject * ptr) {
  return dynamic_cast< QRegularExpressionValidator * >(ptr);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation(QObject * parent, void (*callback)(void *, Qt::ScreenOrientation), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_set(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * this_ptr, void (*callback)(void *, Qt::ScreenOrientation), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * this_ptr, Qt::ScreenOrientation arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * this_ptr, Qt::ScreenOrientation arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_metaObject(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType(QObject * parent, void (*callback)(void *, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_set(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * this_ptr, void (*callback)(void *, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_slot_(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * this_ptr, int arg0) {
  this_ptr->slot_(QFlags< Qt::WindowType >(arg0));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_metaObject(ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType() {
  return new ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_emit_(ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * this_ptr, int arg0) {
  this_ptr->emit_(QFlags< Qt::WindowType >(arg0));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref(QObject * parent, void (*callback)(void *, QSessionManager *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_set(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * this_ptr, void (*callback)(void *, QSessionManager *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * this_ptr, QSessionManager * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * this_ptr, QSessionManager * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_metaObject(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState(QObject * parent, void (*callback)(void *, QMovie::MovieState), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_set(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * this_ptr, void (*callback)(void *, QMovie::MovieState), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_slot_(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * this_ptr, QMovie::MovieState arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_metaObject(ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState() {
  return new ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_emit_(ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * this_ptr, QMovie::MovieState arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref(QObject * parent, void (*callback)(void *, QTextBlock const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * this_ptr, void (*callback)(void *, QTextBlock const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * this_ptr, QTextBlock const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * this_ptr, QTextBlock const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_metaObject(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr(QObject * parent, void (*callback)(void *, QStandardItem *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_set(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * this_ptr, void (*callback)(void *, QStandardItem *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_slot_(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * this_ptr, QStandardItem * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_metaObject(ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr() {
  return new ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_emit_(ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * this_ptr, QStandardItem * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref(QObject * parent, void (*callback)(void *, QPalette const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * this_ptr, void (*callback)(void *, QPalette const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * this_ptr, QPalette const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * this_ptr, QPalette const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState(QObject * parent, void (*callback)(void *, Qt::WindowState), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_set(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * this_ptr, void (*callback)(void *, Qt::WindowState), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * this_ptr, Qt::WindowState arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * this_ptr, Qt::WindowState arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState(QObject * parent, void (*callback)(void *, Qt::ApplicationState), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_set(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * this_ptr, void (*callback)(void *, Qt::ApplicationState), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * this_ptr, Qt::ApplicationState arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * this_ptr, Qt::ApplicationState arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger(QObject * parent, void (*callback)(void *, Qt::ContextMenuTrigger), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_set(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * this_ptr, void (*callback)(void *, Qt::ContextMenuTrigger), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * this_ptr, Qt::ContextMenuTrigger arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * this_ptr, Qt::ContextMenuTrigger arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref(QObject * parent, void (*callback)(void *, QRectF const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * this_ptr, void (*callback)(void *, QRectF const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * this_ptr, QRectF const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * this_ptr, QRectF const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme(QObject * parent, void (*callback)(void *, Qt::ColorScheme), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_set(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * this_ptr, void (*callback)(void *, Qt::ColorScheme), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * this_ptr, Qt::ColorScheme arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * this_ptr, Qt::ColorScheme arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref(QObject * parent, void (*callback)(void *, QSizeF const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * this_ptr, void (*callback)(void *, QSizeF const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * this_ptr, QSizeF const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * this_ptr, QSizeF const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref(QObject * parent, void (*callback)(void *, QFont const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * this_ptr, void (*callback)(void *, QFont const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * this_ptr, QFont const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * this_ptr, QFont const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_metaObject(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility(QObject * parent, void (*callback)(void *, QWindow::Visibility), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_set(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * this_ptr, void (*callback)(void *, QWindow::Visibility), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_slot_(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * this_ptr, QWindow::Visibility arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_metaObject(ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility() {
  return new ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_emit_(ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * this_ptr, QWindow::Visibility arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref(QObject * parent, void (*callback)(void *, QObject *, QPointingDevice::GrabTransition, QPointerEvent const *, QEventPoint const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr, void (*callback)(void *, QObject *, QPointingDevice::GrabTransition, QPointerEvent const *, QEventPoint const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr, QObject * arg0, QPointingDevice::GrabTransition arg1, QPointerEvent const * arg2, QEventPoint const * arg3) {
  this_ptr->slot_(arg0, arg1, arg2, *arg3);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr, QObject * arg0, QPointingDevice::GrabTransition arg1, QPointerEvent const * arg2, QEventPoint const * arg3) {
  this_ptr->emit_(arg0, arg1, arg2, *arg3);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_int_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_metaObject(ctr_qt_gui_ffi_slot_wrapper_int_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_int_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_int_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_int_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_int_int_int * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_ctr_qt_gui_ffi_slot_wrapper_int_int_int(QObject * parent, void (*callback)(void *, int, int, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_int_int_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_set(ctr_qt_gui_ffi_slot_wrapper_int_int_int * this_ptr, void (*callback)(void *, int, int, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_slot_(ctr_qt_gui_ffi_slot_wrapper_int_int_int * this_ptr, int arg0, int arg1, int arg2) {
  this_ptr->slot_(arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_int_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_metaObject(ctr_qt_gui_ffi_signal_wrapper_int_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_int_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_int_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_int_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_int_int_int * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_ctr_qt_gui_ffi_signal_wrapper_int_int_int() {
  return new ctr_qt_gui_ffi_signal_wrapper_int_int_int();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_emit_(ctr_qt_gui_ffi_signal_wrapper_int_int_int * this_ptr, int arg0, int arg1, int arg2) {
  this_ptr->emit_(arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference(QObject * parent, void (*callback)(void *, Qt::ContrastPreference), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_set(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * this_ptr, void (*callback)(void *, Qt::ContrastPreference), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * this_ptr, Qt::ContrastPreference arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * this_ptr, Qt::ContrastPreference arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction(QObject * parent, void (*callback)(void *, Qt::DropAction), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_set(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * this_ptr, void (*callback)(void *, Qt::DropAction), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * this_ptr, Qt::DropAction arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * this_ptr, Qt::DropAction arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality(QObject * parent, void (*callback)(void *, Qt::WindowModality), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_set(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * this_ptr, void (*callback)(void *, Qt::WindowModality), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * this_ptr, Qt::WindowModality arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * this_ptr, Qt::WindowModality arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref(QObject * parent, void (*callback)(void *, QString const *, QString const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * this_ptr, void (*callback)(void *, QString const *, QString const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * this_ptr, QString const * arg0, QString const * arg1) {
  this_ptr->slot_(*arg0, *arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * this_ptr, QString const * arg0, QString const * arg1) {
  this_ptr->emit_(*arg0, *arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QRect::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_metaObject(ctr_qt_gui_ffi_slot_wrapper_QRect const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QRect * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QRect * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QRect::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_slot_(ctr_qt_gui_ffi_slot_wrapper_QRect * this_ptr, QRect const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QRect::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_metaObject(ctr_qt_gui_ffi_signal_wrapper_QRect const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QRect * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QRect * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QRect::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRect * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_ctr_qt_gui_ffi_signal_wrapper_QRect() {
  return new ctr_qt_gui_ffi_signal_wrapper_QRect();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_emit_(ctr_qt_gui_ffi_signal_wrapper_QRect * this_ptr, QRect const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior(QObject * parent, void (*callback)(void *, Qt::TabFocusBehavior), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_set(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * this_ptr, void (*callback)(void *, Qt::TabFocusBehavior), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * this_ptr, Qt::TabFocusBehavior arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * this_ptr, Qt::TabFocusBehavior arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_metaObject(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr(QObject * parent, void (*callback)(void *, QUndoStack *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_set(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * this_ptr, void (*callback)(void *, QUndoStack *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_slot_(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * this_ptr, QUndoStack * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_metaObject(ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr() {
  return new ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_emit_(ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * this_ptr, QUndoStack * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref(QObject * parent, void (*callback)(void *, QUrl const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * this_ptr, void (*callback)(void *, QUrl const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * this_ptr, QUrl const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * this_ptr, QUrl const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_metaObject(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation(QObject * parent, void (*callback)(void *, QDoubleValidator::Notation), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_set(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * this_ptr, void (*callback)(void *, QDoubleValidator::Notation), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_slot_(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * this_ptr, QDoubleValidator::Notation arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_metaObject(ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation() {
  return new ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_emit_(ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * this_ptr, QDoubleValidator::Notation arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_metaObject(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError(QObject * parent, void (*callback)(void *, QImageReader::ImageReaderError), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_set(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * this_ptr, void (*callback)(void *, QImageReader::ImageReaderError), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_slot_(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * this_ptr, QImageReader::ImageReaderError arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_metaObject(ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError() {
  return new ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_emit_(ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * this_ptr, QImageReader::ImageReaderError arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_metaObject(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr(QObject * parent, void (*callback)(void *, QScreen *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_set(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * this_ptr, void (*callback)(void *, QScreen *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_slot_(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * this_ptr, QScreen * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_metaObject(ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr() {
  return new ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_emit_(ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * this_ptr, QScreen * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref(QObject * parent, void (*callback)(void *, QTextCursor const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * this_ptr, void (*callback)(void *, QTextCursor const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * this_ptr, QTextCursor const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * this_ptr, QTextCursor const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_metaObject(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode(QObject * parent, void (*callback)(void *, QClipboard::Mode), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_set(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * this_ptr, void (*callback)(void *, QClipboard::Mode), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_slot_(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * this_ptr, QClipboard::Mode arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_metaObject(ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode() {
  return new ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_emit_(ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * this_ptr, QClipboard::Mode arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref(QObject * parent, void (*callback)(void *, QSize const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * this_ptr, void (*callback)(void *, QSize const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * this_ptr, QSize const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * this_ptr, QSize const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref(QObject * parent, void (*callback)(void *, QRegularExpression const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * this_ptr, void (*callback)(void *, QRegularExpression const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * this_ptr, QRegularExpression const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * this_ptr, QRegularExpression const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_metaObject(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection(QObject * parent, void (*callback)(void *, Qt::LayoutDirection), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_set(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * this_ptr, void (*callback)(void *, Qt::LayoutDirection), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_slot_(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * this_ptr, Qt::LayoutDirection arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_metaObject(ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection() {
  return new ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_emit_(ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * this_ptr, Qt::LayoutDirection arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_metaObject(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr(QObject * parent, void (*callback)(void *, QObject *, QPointingDevice::GrabTransition, QPointerEvent const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_set(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr, void (*callback)(void *, QObject *, QPointingDevice::GrabTransition, QPointerEvent const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_slot_(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr, QObject * arg0, QPointingDevice::GrabTransition arg1, QPointerEvent const * arg2) {
  this_ptr->slot_(arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_metaObject(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr() {
  return new ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_emit_(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr, QObject * arg0, QPointingDevice::GrabTransition arg1, QPointerEvent const * arg2) {
  this_ptr->emit_(arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_metaObject(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability(QObject * parent, void (*callback)(void *, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_set(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * this_ptr, void (*callback)(void *, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_slot_(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * this_ptr, int arg0) {
  this_ptr->slot_(QFlags< QInputDevice::Capability >(arg0));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_metaObject(ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability() {
  return new ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_emit_(ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * this_ptr, int arg0) {
  this_ptr->emit_(QFlags< QInputDevice::Capability >(arg0));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref(QObject * parent, void (*callback)(void *, QRect const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * this_ptr, void (*callback)(void *, QRect const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * this_ptr, QRect const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * this_ptr, QRect const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_metaObject(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition(QObject * parent, void (*callback)(void *, QObject *, QPointingDevice::GrabTransition), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_set(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr, void (*callback)(void *, QObject *, QPointingDevice::GrabTransition), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_slot_(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr, QObject * arg0, QPointingDevice::GrabTransition arg1) {
  this_ptr->slot_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_metaObject(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition() {
  return new ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_emit_(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr, QObject * arg0, QPointingDevice::GrabTransition arg1) {
  this_ptr->emit_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_metaObject(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref(QObject * parent, void (*callback)(void *, QString const *, QString const *, QString const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_set(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr, void (*callback)(void *, QString const *, QString const *, QString const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_slot_(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr, QString const * arg0, QString const * arg1, QString const * arg2) {
  this_ptr->slot_(*arg0, *arg1, *arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_metaObject(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref() {
  return new ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_emit_(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr, QString const * arg0, QString const * arg1, QString const * arg2) {
  this_ptr->emit_(*arg0, *arg1, *arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QAction_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_metaObject(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr(QObject * parent, void (*callback)(void *, QAction *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QAction_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_set(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * this_ptr, void (*callback)(void *, QAction *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_slot_(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * this_ptr, QAction * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QAction_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_metaObject(ctr_qt_gui_ffi_signal_wrapper_QAction_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QAction_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr() {
  return new ctr_qt_gui_ffi_signal_wrapper_QAction_ptr();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_emit_(ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * this_ptr, QAction * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_metaObject(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr(QObject * parent, void (*callback)(void *, QWindow *), void (*deleter)(void *), void * data) {
  return new ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_set(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * this_ptr, void (*callback)(void *, QWindow *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_slot_(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * this_ptr, QWindow * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_metaObject(ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr() {
  return new ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_emit_(ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * this_ptr, QWindow * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMargins_staticMetaObject() {
  return &ctr_qt_gui_ffi_slot_wrapper_QMargins::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMargins_metaObject(ctr_qt_gui_ffi_slot_wrapper_QMargins const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMargins_qt_metacast(ctr_qt_gui_ffi_slot_wrapper_QMargins * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMargins_qt_metacall(ctr_qt_gui_ffi_slot_wrapper_QMargins * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMargins_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_slot_wrapper_QMargins::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMargins_slot_(ctr_qt_gui_ffi_slot_wrapper_QMargins * this_ptr, QMargins const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_staticMetaObject() {
  return &ctr_qt_gui_ffi_signal_wrapper_QMargins::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_metaObject(ctr_qt_gui_ffi_signal_wrapper_QMargins const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_qt_metacast(ctr_qt_gui_ffi_signal_wrapper_QMargins * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_qt_metacall(ctr_qt_gui_ffi_signal_wrapper_QMargins * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_gui_ffi_signal_wrapper_QMargins::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QMargins * ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_ctr_qt_gui_ffi_signal_wrapper_QMargins() {
  return new ctr_qt_gui_ffi_signal_wrapper_QMargins();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_emit_(ctr_qt_gui_ffi_signal_wrapper_QMargins * this_ptr, QMargins const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_dctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_dctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation(ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_dctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_dctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType(ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_dctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_dctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref(ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_dctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_dctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState(ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_dctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_dctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref(ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_dctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_dctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr(ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_dctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_dctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref(ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_dctr_qt_gui_ffi_slot_wrapper_Qt_WindowState(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_dctr_qt_gui_ffi_signal_wrapper_Qt_WindowState(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_dctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_dctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState(ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_dctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_dctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger(ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_dctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_dctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref(ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_dctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_dctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme(ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_dctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_dctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref(ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_dctr_qt_gui_ffi_slot_wrapper_QFont_const_ref(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_dctr_qt_gui_ffi_signal_wrapper_QFont_const_ref(ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_dctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_dctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility(ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_dctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_dctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_int_int_int_dctr_qt_gui_ffi_slot_wrapper_int_int_int(ctr_qt_gui_ffi_slot_wrapper_int_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_int_int_int_dctr_qt_gui_ffi_signal_wrapper_int_int_int(ctr_qt_gui_ffi_signal_wrapper_int_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_dctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_dctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference(ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_dctr_qt_gui_ffi_slot_wrapper_Qt_DropAction(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_dctr_qt_gui_ffi_signal_wrapper_Qt_DropAction(ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_dctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_dctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_dctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_dctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_dctr_qt_gui_ffi_slot_wrapper_QRect(ctr_qt_gui_ffi_slot_wrapper_QRect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_dctr_qt_gui_ffi_signal_wrapper_QRect(ctr_qt_gui_ffi_signal_wrapper_QRect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_dctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_dctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior(ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_dctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_dctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr(ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_dctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_dctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref(ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_dctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_dctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation(ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_dctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_dctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError(ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_dctr_qt_gui_ffi_slot_wrapper_QScreen_ptr(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_dctr_qt_gui_ffi_signal_wrapper_QScreen_ptr(ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_dctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_dctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref(ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_dctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_dctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode(ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_dctr_qt_gui_ffi_slot_wrapper_QSize_const_ref(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_dctr_qt_gui_ffi_signal_wrapper_QSize_const_ref(ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_dctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_dctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref(ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_dctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_dctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection(ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_dctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_dctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_dctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_dctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability(ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_dctr_qt_gui_ffi_slot_wrapper_QRect_const_ref(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_dctr_qt_gui_ffi_signal_wrapper_QRect_const_ref(ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_dctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_dctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_dctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_dctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_dctr_qt_gui_ffi_slot_wrapper_QAction_ptr(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_dctr_qt_gui_ffi_signal_wrapper_QAction_ptr(ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_dctr_qt_gui_ffi_slot_wrapper_QWindow_ptr(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_dctr_qt_gui_ffi_signal_wrapper_QWindow_ptr(ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_slot_wrapper_QMargins_dctr_qt_gui_ffi_slot_wrapper_QMargins(ctr_qt_gui_ffi_slot_wrapper_QMargins * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_ctr_qt_gui_ffi_signal_wrapper_QMargins_dctr_qt_gui_ffi_signal_wrapper_QMargins(ctr_qt_gui_ffi_signal_wrapper_QMargins * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr82(ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ScreenOrientation * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr83(ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ScreenOrientation * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr84(ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QFlags_Qt_WindowType * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr85(ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QFlags_Qt_WindowType * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr86(ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QSessionManager_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr87(ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QSessionManager_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr88(ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QMovie_MovieState * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr89(ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QMovie_MovieState * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr90(ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QTextBlock_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr91(ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QTextBlock_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr92(ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QStandardItem_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr93(ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QStandardItem_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr94(ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QPalette_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr95(ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QPalette_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr96(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_WindowState * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr97(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_WindowState * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr98(ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ApplicationState * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr99(ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ApplicationState * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr100(ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ContextMenuTrigger * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr101(ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ContextMenuTrigger * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr102(ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QRectF_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr103(ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QRectF_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr104(ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ColorScheme * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr105(ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ColorScheme * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr106(ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QSizeF_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr107(ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QSizeF_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr108(ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QFont_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr109(ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QFont_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr110(ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QWindow_Visibility * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr111(ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QWindow_Visibility * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr112(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr113(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_QEventPoint_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_int_int_int * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_int_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_int_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr114(ctr_qt_gui_ffi_slot_wrapper_int_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_int_int_int * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_int_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_int_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_int_int_int * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_int_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_int_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr115(ctr_qt_gui_ffi_signal_wrapper_int_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_int_int_int * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_int_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_int_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr116(ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_ContrastPreference * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr117(ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_ContrastPreference * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr118(ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_DropAction * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr119(ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_DropAction * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr120(ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_WindowModality * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr121(ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_WindowModality * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr122(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr123(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRect * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QRect_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QRect * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr124(ctr_qt_gui_ffi_slot_wrapper_QRect * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRect * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QRect_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QRect * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRect * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QRect_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QRect * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr125(ctr_qt_gui_ffi_signal_wrapper_QRect * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRect * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QRect_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QRect * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr126(ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_TabFocusBehavior * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr127(ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_TabFocusBehavior * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr128(ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QUndoStack_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr129(ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QUndoStack_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr130(ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QUrl_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr131(ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QUrl_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr132(ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QDoubleValidator_Notation * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr133(ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QDoubleValidator_Notation * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr134(ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QImageReader_ImageReaderError * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr135(ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QImageReader_ImageReaderError * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr136(ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QScreen_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr137(ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QScreen_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr138(ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QTextCursor_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr139(ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QTextCursor_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr140(ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QClipboard_Mode * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr141(ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QClipboard_Mode * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr142(ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QSize_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr143(ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QSize_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr144(ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QRegularExpression_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr145(ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QRegularExpression_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr146(ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_Qt_LayoutDirection * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr147(ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_Qt_LayoutDirection * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr148(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr149(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_QPointerEvent_const_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr150(ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QFlags_QInputDevice_Capability * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr151(ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QFlags_QInputDevice_Capability * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr152(ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QRect_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr153(ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QRect_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr154(ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QObject_ptr_QPointingDevice_GrabTransition * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr155(ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QObject_ptr_QPointingDevice_GrabTransition * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr156(ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr157(ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QString_const_ref_QString_const_ref_QString_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr158(ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QAction_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QAction_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr159(ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QAction_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QAction_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr160(ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QWindow_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr161(ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QWindow_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QMargins * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_slot_wrapper_QMargins_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_slot_wrapper_QMargins * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr162(ctr_qt_gui_ffi_slot_wrapper_QMargins * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_slot_wrapper_QMargins * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_slot_wrapper_QMargins_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_slot_wrapper_QMargins * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QMargins * ctr_qt_gui_ffi_static_cast_ctr_qt_gui_ffi_signal_wrapper_QMargins_ptr(QObject * ptr) {
  return static_cast< ctr_qt_gui_ffi_signal_wrapper_QMargins * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_static_cast_QObject_ptr163(ctr_qt_gui_ffi_signal_wrapper_QMargins * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_gui_ffi_signal_wrapper_QMargins * ctr_qt_gui_ffi_dynamic_cast_ctr_qt_gui_ffi_signal_wrapper_QMargins_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_gui_ffi_signal_wrapper_QMargins * >(ptr);
}


} // extern "C"
