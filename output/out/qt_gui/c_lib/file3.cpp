#include "qt_gui_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QFontInfo * ctr_qt_gui_ffi_QFontInfo_QFontInfo(QFont const * arg1) {
  return new QFontInfo(*arg1);
}


RITUAL_EXPORT QFontInfo * ctr_qt_gui_ffi_QFontInfo_QFontInfo1(QFontInfo const * arg1) {
  return new QFontInfo(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontInfo_dQFontInfo(QFontInfo * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFontInfo * ctr_qt_gui_ffi_QFontInfo_operator_(QFontInfo * this_ptr, QFontInfo const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontInfo_swap(QFontInfo * this_ptr, QFontInfo * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontInfo_family(QFontInfo const * this_ptr) {
  return new QString(this_ptr->family());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontInfo_styleName(QFontInfo const * this_ptr) {
  return new QString(this_ptr->styleName());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontInfo_pixelSize(QFontInfo const * this_ptr) {
  return this_ptr->pixelSize();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontInfo_pointSize(QFontInfo const * this_ptr) {
  return this_ptr->pointSize();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontInfo_pointSizeF(QFontInfo const * this_ptr) {
  return this_ptr->pointSizeF();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontInfo_italic(QFontInfo const * this_ptr) {
  return this_ptr->italic();
}


RITUAL_EXPORT QFont::Style ctr_qt_gui_ffi_QFontInfo_style(QFontInfo const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontInfo_weight(QFontInfo const * this_ptr) {
  return this_ptr->weight();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontInfo_bold(QFontInfo const * this_ptr) {
  return this_ptr->bold();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontInfo_underline(QFontInfo const * this_ptr) {
  return this_ptr->underline();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontInfo_overline(QFontInfo const * this_ptr) {
  return this_ptr->overline();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontInfo_strikeOut(QFontInfo const * this_ptr) {
  return this_ptr->strikeOut();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontInfo_fixedPitch(QFontInfo const * this_ptr) {
  return this_ptr->fixedPitch();
}


RITUAL_EXPORT QFont::StyleHint ctr_qt_gui_ffi_QFontInfo_styleHint(QFontInfo const * this_ptr) {
  return this_ptr->styleHint();
}


RITUAL_EXPORT QList< QFontVariableAxis > * ctr_qt_gui_ffi_QFontInfo_variableAxes(QFontInfo const * this_ptr) {
  return new QList< QFontVariableAxis >(this_ptr->variableAxes());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontInfo_legacyWeight(QFontInfo const * this_ptr) {
  return this_ptr->legacyWeight();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontInfo_exactMatch(QFontInfo const * this_ptr) {
  return this_ptr->exactMatch();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap28(QFontInfo * value1, QFontInfo * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QFontMetrics * ctr_qt_gui_ffi_QFontMetrics_QFontMetrics(QFont const * arg1) {
  return new QFontMetrics(*arg1);
}


RITUAL_EXPORT QFontMetrics * ctr_qt_gui_ffi_QFontMetrics_QFontMetrics1(QFont const * font, QPaintDevice const * pd) {
  return new QFontMetrics(*font, pd);
}


RITUAL_EXPORT QFontMetrics * ctr_qt_gui_ffi_QFontMetrics_QFontMetrics2(QFontMetrics const * arg1) {
  return new QFontMetrics(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontMetrics_dQFontMetrics(QFontMetrics * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFontMetrics * ctr_qt_gui_ffi_QFontMetrics_operator_(QFontMetrics * this_ptr, QFontMetrics const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontMetrics_swap(QFontMetrics * this_ptr, QFontMetrics * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_ascent(QFontMetrics const * this_ptr) {
  return this_ptr->ascent();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_capHeight(QFontMetrics const * this_ptr) {
  return this_ptr->capHeight();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_descent(QFontMetrics const * this_ptr) {
  return this_ptr->descent();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_height(QFontMetrics const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_leading(QFontMetrics const * this_ptr) {
  return this_ptr->leading();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_lineSpacing(QFontMetrics const * this_ptr) {
  return this_ptr->lineSpacing();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_minLeftBearing(QFontMetrics const * this_ptr) {
  return this_ptr->minLeftBearing();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_minRightBearing(QFontMetrics const * this_ptr) {
  return this_ptr->minRightBearing();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_maxWidth(QFontMetrics const * this_ptr) {
  return this_ptr->maxWidth();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_xHeight(QFontMetrics const * this_ptr) {
  return this_ptr->xHeight();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_averageCharWidth(QFontMetrics const * this_ptr) {
  return this_ptr->averageCharWidth();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontMetrics_inFont(QFontMetrics const * this_ptr, QChar const * arg1) {
  return this_ptr->inFont(*arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontMetrics_inFontUcs4(QFontMetrics const * this_ptr, unsigned int ucs4) {
  return this_ptr->inFontUcs4(ucs4);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_leftBearing(QFontMetrics const * this_ptr, QChar const * arg1) {
  return this_ptr->leftBearing(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_rightBearing(QFontMetrics const * this_ptr, QChar const * arg1) {
  return this_ptr->rightBearing(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_horizontalAdvance(QFontMetrics const * this_ptr, QString const * arg1, int len) {
  return this_ptr->horizontalAdvance(*arg1, len);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_horizontalAdvance1(QFontMetrics const * this_ptr, QString const * arg1, QTextOption const * textOption) {
  return this_ptr->horizontalAdvance(*arg1, *textOption);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_horizontalAdvance2(QFontMetrics const * this_ptr, QChar const * arg1) {
  return this_ptr->horizontalAdvance(*arg1);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect(QFontMetrics const * this_ptr, QChar const * arg1) {
  return new QRect(this_ptr->boundingRect(*arg1));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect1(QFontMetrics const * this_ptr, QString const * text) {
  return new QRect(this_ptr->boundingRect(*text));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect2(QFontMetrics const * this_ptr, QString const * text, QTextOption const * textOption) {
  return new QRect(this_ptr->boundingRect(*text, *textOption));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect3(QFontMetrics const * this_ptr, QRect const * r, int flags, QString const * text, int tabstops, int * tabarray) {
  return new QRect(this_ptr->boundingRect(*r, flags, *text, tabstops, tabarray));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_boundingRect4(QFontMetrics const * this_ptr, int x, int y, int w, int h, int flags, QString const * text, int tabstops, int * tabarray) {
  return new QRect(this_ptr->boundingRect(x, y, w, h, flags, *text, tabstops, tabarray));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QFontMetrics_size(QFontMetrics const * this_ptr, int flags, QString const * str, int tabstops, int * tabarray) {
  return new QSize(this_ptr->size(flags, *str, tabstops, tabarray));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_tightBoundingRect(QFontMetrics const * this_ptr, QString const * text) {
  return new QRect(this_ptr->tightBoundingRect(*text));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QFontMetrics_tightBoundingRect1(QFontMetrics const * this_ptr, QString const * text, QTextOption const * textOption) {
  return new QRect(this_ptr->tightBoundingRect(*text, *textOption));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontMetrics_elidedText(QFontMetrics const * this_ptr, QString const * text, Qt::TextElideMode mode, int width, int flags) {
  return new QString(this_ptr->elidedText(*text, mode, width, flags));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_underlinePos(QFontMetrics const * this_ptr) {
  return this_ptr->underlinePos();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_overlinePos(QFontMetrics const * this_ptr) {
  return this_ptr->overlinePos();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_strikeOutPos(QFontMetrics const * this_ptr) {
  return this_ptr->strikeOutPos();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontMetrics_lineWidth(QFontMetrics const * this_ptr) {
  return this_ptr->lineWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetrics_fontDpi(QFontMetrics const * this_ptr) {
  return this_ptr->fontDpi();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontMetrics_operator__(QFontMetrics const * this_ptr, QFontMetrics const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap29(QFontMetrics * value1, QFontMetrics * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QFontMetricsF * ctr_qt_gui_ffi_QFontMetricsF_QFontMetricsF(QFont const * font) {
  return new QFontMetricsF(*font);
}


RITUAL_EXPORT QFontMetricsF * ctr_qt_gui_ffi_QFontMetricsF_QFontMetricsF1(QFont const * font, QPaintDevice const * pd) {
  return new QFontMetricsF(*font, pd);
}


RITUAL_EXPORT QFontMetricsF * ctr_qt_gui_ffi_QFontMetricsF_QFontMetricsF2(QFontMetrics const * arg1) {
  return new QFontMetricsF(*arg1);
}


RITUAL_EXPORT QFontMetricsF * ctr_qt_gui_ffi_QFontMetricsF_QFontMetricsF3(QFontMetricsF const * arg1) {
  return new QFontMetricsF(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontMetricsF_dQFontMetricsF(QFontMetricsF * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFontMetricsF * ctr_qt_gui_ffi_QFontMetricsF_operator_(QFontMetricsF * this_ptr, QFontMetricsF const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QFontMetricsF * ctr_qt_gui_ffi_QFontMetricsF_operator_1(QFontMetricsF * this_ptr, QFontMetrics const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontMetricsF_swap(QFontMetricsF * this_ptr, QFontMetricsF * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_ascent(QFontMetricsF const * this_ptr) {
  return this_ptr->ascent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_capHeight(QFontMetricsF const * this_ptr) {
  return this_ptr->capHeight();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_descent(QFontMetricsF const * this_ptr) {
  return this_ptr->descent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_height(QFontMetricsF const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_leading(QFontMetricsF const * this_ptr) {
  return this_ptr->leading();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_lineSpacing(QFontMetricsF const * this_ptr) {
  return this_ptr->lineSpacing();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_minLeftBearing(QFontMetricsF const * this_ptr) {
  return this_ptr->minLeftBearing();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_minRightBearing(QFontMetricsF const * this_ptr) {
  return this_ptr->minRightBearing();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_maxWidth(QFontMetricsF const * this_ptr) {
  return this_ptr->maxWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_xHeight(QFontMetricsF const * this_ptr) {
  return this_ptr->xHeight();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_averageCharWidth(QFontMetricsF const * this_ptr) {
  return this_ptr->averageCharWidth();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontMetricsF_inFont(QFontMetricsF const * this_ptr, QChar const * arg1) {
  return this_ptr->inFont(*arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontMetricsF_inFontUcs4(QFontMetricsF const * this_ptr, unsigned int ucs4) {
  return this_ptr->inFontUcs4(ucs4);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_leftBearing(QFontMetricsF const * this_ptr, QChar const * arg1) {
  return this_ptr->leftBearing(*arg1);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_rightBearing(QFontMetricsF const * this_ptr, QChar const * arg1) {
  return this_ptr->rightBearing(*arg1);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_horizontalAdvance(QFontMetricsF const * this_ptr, QString const * string, int length) {
  return this_ptr->horizontalAdvance(*string, length);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_horizontalAdvance1(QFontMetricsF const * this_ptr, QChar const * arg1) {
  return this_ptr->horizontalAdvance(*arg1);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_horizontalAdvance2(QFontMetricsF const * this_ptr, QString const * string, QTextOption const * textOption) {
  return this_ptr->horizontalAdvance(*string, *textOption);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_boundingRect(QFontMetricsF const * this_ptr, QString const * string) {
  return new QRectF(this_ptr->boundingRect(*string));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_boundingRect1(QFontMetricsF const * this_ptr, QString const * text, QTextOption const * textOption) {
  return new QRectF(this_ptr->boundingRect(*text, *textOption));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_boundingRect2(QFontMetricsF const * this_ptr, QChar const * arg1) {
  return new QRectF(this_ptr->boundingRect(*arg1));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_boundingRect3(QFontMetricsF const * this_ptr, QRectF const * r, int flags, QString const * string, int tabstops, int * tabarray) {
  return new QRectF(this_ptr->boundingRect(*r, flags, *string, tabstops, tabarray));
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QFontMetricsF_size(QFontMetricsF const * this_ptr, int flags, QString const * str, int tabstops, int * tabarray) {
  return new QSizeF(this_ptr->size(flags, *str, tabstops, tabarray));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_tightBoundingRect(QFontMetricsF const * this_ptr, QString const * text) {
  return new QRectF(this_ptr->tightBoundingRect(*text));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QFontMetricsF_tightBoundingRect1(QFontMetricsF const * this_ptr, QString const * text, QTextOption const * textOption) {
  return new QRectF(this_ptr->tightBoundingRect(*text, *textOption));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontMetricsF_elidedText(QFontMetricsF const * this_ptr, QString const * text, Qt::TextElideMode mode, double width, int flags) {
  return new QString(this_ptr->elidedText(*text, mode, width, flags));
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_underlinePos(QFontMetricsF const * this_ptr) {
  return this_ptr->underlinePos();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_overlinePos(QFontMetricsF const * this_ptr) {
  return this_ptr->overlinePos();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_strikeOutPos(QFontMetricsF const * this_ptr) {
  return this_ptr->strikeOutPos();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_lineWidth(QFontMetricsF const * this_ptr) {
  return this_ptr->lineWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontMetricsF_fontDpi(QFontMetricsF const * this_ptr) {
  return this_ptr->fontDpi();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontMetricsF_operator__(QFontMetricsF const * this_ptr, QFontMetricsF const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap30(QFontMetricsF * value1, QFontMetricsF * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix2x2(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix2x2(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix2x3(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix2x3(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix2x4(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix2x4(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix3x2(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix3x2(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix3x3(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix3x3(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix3x4(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix3x4(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix4x2(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix4x2(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QMatrix4x3(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QMatrix4x3(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QGenericPlugin_metaObject(QGenericPlugin const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QGenericPlugin_qt_metacast(QGenericPlugin * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QGenericPlugin_qt_metacall(QGenericPlugin * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGenericPlugin_tr(char const * s, char const * c, int n) {
  return new QString(QGenericPlugin::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGenericPlugin_dQGenericPlugin(QGenericPlugin * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QGenericPlugin_create(QGenericPlugin * this_ptr, QString const * name, QString const * spec) {
  return this_ptr->create(*name, *spec);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QGenericPluginFactory_keys() {
  return new QList< QString >(QGenericPluginFactory::keys());
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QGenericPluginFactory_create(QString const * arg1, QString const * arg2) {
  return QGenericPluginFactory::create(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconEngine_dQIconEngine(QIconEngine * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconEngine_paint(QIconEngine * this_ptr, QPainter * painter, QRect const * rect, QIcon::Mode mode, QIcon::State state) {
  this_ptr->paint(painter, *rect, mode, state);
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QIconEngine_actualSize(QIconEngine * this_ptr, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  return new QSize(this_ptr->actualSize(*size, mode, state));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIconEngine_pixmap(QIconEngine * this_ptr, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  return new QPixmap(this_ptr->pixmap(*size, mode, state));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconEngine_addPixmap(QIconEngine * this_ptr, QPixmap const * pixmap, QIcon::Mode mode, QIcon::State state) {
  this_ptr->addPixmap(*pixmap, mode, state);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconEngine_addFile(QIconEngine * this_ptr, QString const * fileName, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  this_ptr->addFile(*fileName, *size, mode, state);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QIconEngine_key(QIconEngine const * this_ptr) {
  return new QString(this_ptr->key());
}


RITUAL_EXPORT QIconEngine * ctr_qt_gui_ffi_QIconEngine_clone(QIconEngine const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIconEngine_read(QIconEngine * this_ptr, QDataStream * in) {
  return this_ptr->read(*in);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIconEngine_write(QIconEngine const * this_ptr, QDataStream * out) {
  return this_ptr->write(*out);
}


RITUAL_EXPORT QList< QSize > * ctr_qt_gui_ffi_QIconEngine_availableSizes(QIconEngine * this_ptr, QIcon::Mode mode, QIcon::State state) {
  return new QList< QSize >(this_ptr->availableSizes(mode, state));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QIconEngine_iconName(QIconEngine * this_ptr) {
  return new QString(this_ptr->iconName());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIconEngine_isNull(QIconEngine * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIconEngine_scaledPixmap(QIconEngine * this_ptr, QSize const * size, QIcon::Mode mode, QIcon::State state, double scale) {
  return new QPixmap(this_ptr->scaledPixmap(*size, mode, state, scale));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconEngine_virtual_hook(QIconEngine * this_ptr, int id, void * data) {
  this_ptr->virtual_hook(id, data);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QIconEnginePlugin_metaObject(QIconEnginePlugin const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QIconEnginePlugin_qt_metacast(QIconEnginePlugin * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QIconEnginePlugin_qt_metacall(QIconEnginePlugin * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QIconEnginePlugin_tr(char const * s, char const * c, int n) {
  return new QString(QIconEnginePlugin::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconEnginePlugin_dQIconEnginePlugin(QIconEnginePlugin * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIconEngine * ctr_qt_gui_ffi_QIconEnginePlugin_create(QIconEnginePlugin * this_ptr, QString const * filename) {
  return this_ptr->create(*filename);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageIOHandler_dQImageIOHandler(QImageIOHandler * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageIOHandler_setDevice(QImageIOHandler * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_gui_ffi_QImageIOHandler_device(QImageIOHandler const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageIOHandler_setFormat(QImageIOHandler * this_ptr, QByteArray const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageIOHandler_setFormat1(QImageIOHandler const * this_ptr, QByteArray const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QImageIOHandler_format(QImageIOHandler const * this_ptr) {
  return new QByteArray(this_ptr->format());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageIOHandler_canRead(QImageIOHandler const * this_ptr) {
  return this_ptr->canRead();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageIOHandler_read(QImageIOHandler * this_ptr, QImage * image) {
  return this_ptr->read(image);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageIOHandler_write(QImageIOHandler * this_ptr, QImage const * image) {
  return this_ptr->write(*image);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QImageIOHandler_option(QImageIOHandler const * this_ptr, QImageIOHandler::ImageOption option) {
  return new QVariant(this_ptr->option(option));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageIOHandler_setOption(QImageIOHandler * this_ptr, QImageIOHandler::ImageOption option, QVariant const * value) {
  this_ptr->setOption(option, *value);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageIOHandler_supportsOption(QImageIOHandler const * this_ptr, QImageIOHandler::ImageOption option) {
  return this_ptr->supportsOption(option);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageIOHandler_jumpToNextImage(QImageIOHandler * this_ptr) {
  return this_ptr->jumpToNextImage();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageIOHandler_jumpToImage(QImageIOHandler * this_ptr, int imageNumber) {
  return this_ptr->jumpToImage(imageNumber);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageIOHandler_loopCount(QImageIOHandler const * this_ptr) {
  return this_ptr->loopCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageIOHandler_imageCount(QImageIOHandler const * this_ptr) {
  return this_ptr->imageCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageIOHandler_nextImageDelay(QImageIOHandler const * this_ptr) {
  return this_ptr->nextImageDelay();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageIOHandler_currentImageNumber(QImageIOHandler const * this_ptr) {
  return this_ptr->currentImageNumber();
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QImageIOHandler_currentImageRect(QImageIOHandler const * this_ptr) {
  return new QRect(this_ptr->currentImageRect());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageIOHandler_allocateImage(QSize const * size, QImage::Format format, QImage * image) {
  return QImageIOHandler::allocateImage(*size, format, image);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QImageIOPlugin_metaObject(QImageIOPlugin const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QImageIOPlugin_qt_metacast(QImageIOPlugin * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageIOPlugin_qt_metacall(QImageIOPlugin * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageIOPlugin_tr(char const * s, char const * c, int n) {
  return new QString(QImageIOPlugin::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageIOPlugin_dQImageIOPlugin(QImageIOPlugin * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageIOPlugin_capabilities(QImageIOPlugin const * this_ptr, QIODevice * device, QByteArray const * format) {
  return int(this_ptr->capabilities(device, *format));
}


RITUAL_EXPORT QImageIOHandler * ctr_qt_gui_ffi_QImageIOPlugin_create(QImageIOPlugin const * this_ptr, QIODevice * device, QByteArray const * format) {
  return this_ptr->create(device, *format);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageReader_tr(char const * sourceText, char const * disambiguation, int n) {
  return new QString(QImageReader::tr(sourceText, disambiguation, n));
}


RITUAL_EXPORT QImageReader * ctr_qt_gui_ffi_QImageReader_QImageReader() {
  return new QImageReader();
}


RITUAL_EXPORT QImageReader * ctr_qt_gui_ffi_QImageReader_QImageReader1(QIODevice * device, QByteArray const * format) {
  return new QImageReader(device, *format);
}


RITUAL_EXPORT QImageReader * ctr_qt_gui_ffi_QImageReader_QImageReader2(QString const * fileName, QByteArray const * format) {
  return new QImageReader(*fileName, *format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_dQImageReader(QImageReader * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setFormat(QImageReader * this_ptr, QByteArray const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QImageReader_format(QImageReader const * this_ptr) {
  return new QByteArray(this_ptr->format());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setAutoDetectImageFormat(QImageReader * this_ptr, bool enabled) {
  this_ptr->setAutoDetectImageFormat(enabled);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_autoDetectImageFormat(QImageReader const * this_ptr) {
  return this_ptr->autoDetectImageFormat();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setDecideFormatFromContent(QImageReader * this_ptr, bool ignored) {
  this_ptr->setDecideFormatFromContent(ignored);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_decideFormatFromContent(QImageReader const * this_ptr) {
  return this_ptr->decideFormatFromContent();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setDevice(QImageReader * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_gui_ffi_QImageReader_device(QImageReader const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setFileName(QImageReader * this_ptr, QString const * fileName) {
  this_ptr->setFileName(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageReader_fileName(QImageReader const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QImageReader_size(QImageReader const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT QImage::Format ctr_qt_gui_ffi_QImageReader_imageFormat(QImageReader const * this_ptr) {
  return this_ptr->imageFormat();
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QImageReader_textKeys(QImageReader const * this_ptr) {
  return new QList< QString >(this_ptr->textKeys());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageReader_text(QImageReader const * this_ptr, QString const * key) {
  return new QString(this_ptr->text(*key));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setClipRect(QImageReader * this_ptr, QRect const * rect) {
  this_ptr->setClipRect(*rect);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QImageReader_clipRect(QImageReader const * this_ptr) {
  return new QRect(this_ptr->clipRect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setScaledSize(QImageReader * this_ptr, QSize const * size) {
  this_ptr->setScaledSize(*size);
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QImageReader_scaledSize(QImageReader const * this_ptr) {
  return new QSize(this_ptr->scaledSize());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setQuality(QImageReader * this_ptr, int quality) {
  this_ptr->setQuality(quality);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageReader_quality(QImageReader const * this_ptr) {
  return this_ptr->quality();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setScaledClipRect(QImageReader * this_ptr, QRect const * rect) {
  this_ptr->setScaledClipRect(*rect);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QImageReader_scaledClipRect(QImageReader const * this_ptr) {
  return new QRect(this_ptr->scaledClipRect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setBackgroundColor(QImageReader * this_ptr, QColor const * color) {
  this_ptr->setBackgroundColor(*color);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QImageReader_backgroundColor(QImageReader const * this_ptr) {
  return new QColor(this_ptr->backgroundColor());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_supportsAnimation(QImageReader const * this_ptr) {
  return this_ptr->supportsAnimation();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageReader_transformation(QImageReader const * this_ptr) {
  return int(this_ptr->transformation());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setAutoTransform(QImageReader * this_ptr, bool enabled) {
  this_ptr->setAutoTransform(enabled);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_autoTransform(QImageReader const * this_ptr) {
  return this_ptr->autoTransform();
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QImageReader_subType(QImageReader const * this_ptr) {
  return new QByteArray(this_ptr->subType());
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageReader_supportedSubTypes(QImageReader const * this_ptr) {
  return new QList< QByteArray >(this_ptr->supportedSubTypes());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_canRead(QImageReader const * this_ptr) {
  return this_ptr->canRead();
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImageReader_read(QImageReader * this_ptr) {
  return new QImage(this_ptr->read());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_read1(QImageReader * this_ptr, QImage * image) {
  return this_ptr->read(image);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_jumpToNextImage(QImageReader * this_ptr) {
  return this_ptr->jumpToNextImage();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_jumpToImage(QImageReader * this_ptr, int imageNumber) {
  return this_ptr->jumpToImage(imageNumber);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageReader_loopCount(QImageReader const * this_ptr) {
  return this_ptr->loopCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageReader_imageCount(QImageReader const * this_ptr) {
  return this_ptr->imageCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageReader_nextImageDelay(QImageReader const * this_ptr) {
  return this_ptr->nextImageDelay();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageReader_currentImageNumber(QImageReader const * this_ptr) {
  return this_ptr->currentImageNumber();
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QImageReader_currentImageRect(QImageReader const * this_ptr) {
  return new QRect(this_ptr->currentImageRect());
}


RITUAL_EXPORT QImageReader::ImageReaderError ctr_qt_gui_ffi_QImageReader_error(QImageReader const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageReader_errorString(QImageReader const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageReader_supportsOption(QImageReader const * this_ptr, QImageIOHandler::ImageOption option) {
  return this_ptr->supportsOption(option);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QImageReader_imageFormat1(QString const * fileName) {
  return new QByteArray(QImageReader::imageFormat(*fileName));
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QImageReader_imageFormat2(QIODevice * device) {
  return new QByteArray(QImageReader::imageFormat(device));
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageReader_supportedImageFormats() {
  return new QList< QByteArray >(QImageReader::supportedImageFormats());
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageReader_supportedMimeTypes() {
  return new QList< QByteArray >(QImageReader::supportedMimeTypes());
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageReader_imageFormatsForMimeType(QByteArray const * mimeType) {
  return new QList< QByteArray >(QImageReader::imageFormatsForMimeType(*mimeType));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageReader_allocationLimit() {
  return QImageReader::allocationLimit();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageReader_setAllocationLimit(int mbLimit) {
  QImageReader::setAllocationLimit(mbLimit);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageWriter_tr(char const * sourceText, char const * disambiguation, int n) {
  return new QString(QImageWriter::tr(sourceText, disambiguation, n));
}


RITUAL_EXPORT QImageWriter * ctr_qt_gui_ffi_QImageWriter_QImageWriter() {
  return new QImageWriter();
}


RITUAL_EXPORT QImageWriter * ctr_qt_gui_ffi_QImageWriter_QImageWriter1(QIODevice * device, QByteArray const * format) {
  return new QImageWriter(device, *format);
}


RITUAL_EXPORT QImageWriter * ctr_qt_gui_ffi_QImageWriter_QImageWriter2(QString const * fileName, QByteArray const * format) {
  return new QImageWriter(*fileName, *format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_dQImageWriter(QImageWriter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setFormat(QImageWriter * this_ptr, QByteArray const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QImageWriter_format(QImageWriter const * this_ptr) {
  return new QByteArray(this_ptr->format());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setDevice(QImageWriter * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_gui_ffi_QImageWriter_device(QImageWriter const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setFileName(QImageWriter * this_ptr, QString const * fileName) {
  this_ptr->setFileName(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageWriter_fileName(QImageWriter const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setQuality(QImageWriter * this_ptr, int quality) {
  this_ptr->setQuality(quality);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageWriter_quality(QImageWriter const * this_ptr) {
  return this_ptr->quality();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setCompression(QImageWriter * this_ptr, int compression) {
  this_ptr->setCompression(compression);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageWriter_compression(QImageWriter const * this_ptr) {
  return this_ptr->compression();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setSubType(QImageWriter * this_ptr, QByteArray const * type) {
  this_ptr->setSubType(*type);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QImageWriter_subType(QImageWriter const * this_ptr) {
  return new QByteArray(this_ptr->subType());
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageWriter_supportedSubTypes(QImageWriter const * this_ptr) {
  return new QList< QByteArray >(this_ptr->supportedSubTypes());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setOptimizedWrite(QImageWriter * this_ptr, bool optimize) {
  this_ptr->setOptimizedWrite(optimize);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageWriter_optimizedWrite(QImageWriter const * this_ptr) {
  return this_ptr->optimizedWrite();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setProgressiveScanWrite(QImageWriter * this_ptr, bool progressive) {
  this_ptr->setProgressiveScanWrite(progressive);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageWriter_progressiveScanWrite(QImageWriter const * this_ptr) {
  return this_ptr->progressiveScanWrite();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImageWriter_transformation(QImageWriter const * this_ptr) {
  return int(this_ptr->transformation());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setTransformation(QImageWriter * this_ptr, int orientation) {
  this_ptr->setTransformation(QFlags< QImageIOHandler::Transformation >(orientation));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImageWriter_setText(QImageWriter * this_ptr, QString const * key, QString const * text) {
  this_ptr->setText(*key, *text);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageWriter_canWrite(QImageWriter const * this_ptr) {
  return this_ptr->canWrite();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageWriter_write(QImageWriter * this_ptr, QImage const * image) {
  return this_ptr->write(*image);
}


RITUAL_EXPORT QImageWriter::ImageWriterError ctr_qt_gui_ffi_QImageWriter_error(QImageWriter const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImageWriter_errorString(QImageWriter const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImageWriter_supportsOption(QImageWriter const * this_ptr, QImageIOHandler::ImageOption option) {
  return this_ptr->supportsOption(option);
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageWriter_supportedImageFormats() {
  return new QList< QByteArray >(QImageWriter::supportedImageFormats());
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageWriter_supportedMimeTypes() {
  return new QList< QByteArray >(QImageWriter::supportedMimeTypes());
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QImageWriter_imageFormatsForMimeType(QByteArray const * mimeType) {
  return new QList< QByteArray >(QImageWriter::imageFormatsForMimeType(*mimeType));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_QMatrix4x4() {
  return new QMatrix4x4();
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_QMatrix4x42(float const * values) {
  return new QMatrix4x4(values);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_QMatrix4x43(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
  return new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_QMatrix4x44(float const * values, int cols, int rows) {
  return new QMatrix4x4(values, cols, rows);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_QMatrix4x45(QTransform const * transform) {
  return new QMatrix4x4(*transform);
}


RITUAL_EXPORT float const * ctr_qt_gui_ffi_QMatrix4x4_operator__(QMatrix4x4 const * this_ptr, int row, int column) {
  return &this_ptr->operator()(row, column);
}


RITUAL_EXPORT float * ctr_qt_gui_ffi_QMatrix4x4_operator__1(QMatrix4x4 * this_ptr, int row, int column) {
  return &this_ptr->operator()(row, column);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QMatrix4x4_column(QMatrix4x4 const * this_ptr, int index) {
  return new QVector4D(this_ptr->column(index));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_setColumn(QMatrix4x4 * this_ptr, int index, QVector4D const * value) {
  this_ptr->setColumn(index, *value);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QMatrix4x4_row(QMatrix4x4 const * this_ptr, int index) {
  return new QVector4D(this_ptr->row(index));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_setRow(QMatrix4x4 * this_ptr, int index, QVector4D const * value) {
  this_ptr->setRow(index, *value);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QMatrix4x4_isAffine(QMatrix4x4 const * this_ptr) {
  return this_ptr->isAffine();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QMatrix4x4_isIdentity(QMatrix4x4 const * this_ptr) {
  return this_ptr->isIdentity();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_setToIdentity(QMatrix4x4 * this_ptr) {
  this_ptr->setToIdentity();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_fill(QMatrix4x4 * this_ptr, float value) {
  this_ptr->fill(value);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QMatrix4x4_determinant(QMatrix4x4 const * this_ptr) {
  return this_ptr->determinant();
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_inverted(QMatrix4x4 const * this_ptr, bool * invertible) {
  return new QMatrix4x4(this_ptr->inverted(invertible));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_transposed(QMatrix4x4 const * this_ptr) {
  return new QMatrix4x4(this_ptr->transposed());
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_operator__2(QMatrix4x4 * this_ptr, QMatrix4x4 const * other) {
  return &this_ptr->operator+=(*other);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_operator__3(QMatrix4x4 * this_ptr, QMatrix4x4 const * other) {
  return &this_ptr->operator-=(*other);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_operator__4(QMatrix4x4 * this_ptr, QMatrix4x4 const * other) {
  return &this_ptr->operator*=(*other);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_operator__5(QMatrix4x4 * this_ptr, float factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_operator__6(QMatrix4x4 * this_ptr, float divisor) {
  return &this_ptr->operator/=(divisor);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QMatrix4x4_operator__7(QMatrix4x4 const * this_ptr, QMatrix4x4 const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_scale(QMatrix4x4 * this_ptr, QVector3D const * vector) {
  this_ptr->scale(*vector);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_translate(QMatrix4x4 * this_ptr, QVector3D const * vector) {
  this_ptr->translate(*vector);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_rotate(QMatrix4x4 * this_ptr, float angle, QVector3D const * vector) {
  this_ptr->rotate(angle, *vector);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_scale1(QMatrix4x4 * this_ptr, float x, float y) {
  this_ptr->scale(x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_scale2(QMatrix4x4 * this_ptr, float x, float y, float z) {
  this_ptr->scale(x, y, z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_scale3(QMatrix4x4 * this_ptr, float factor) {
  this_ptr->scale(factor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_translate1(QMatrix4x4 * this_ptr, float x, float y) {
  this_ptr->translate(x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_translate2(QMatrix4x4 * this_ptr, float x, float y, float z) {
  this_ptr->translate(x, y, z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_rotate1(QMatrix4x4 * this_ptr, float angle, float x, float y, float z) {
  this_ptr->rotate(angle, x, y, z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_rotate2(QMatrix4x4 * this_ptr, QQuaternion const * quaternion) {
  this_ptr->rotate(*quaternion);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_ortho(QMatrix4x4 * this_ptr, QRect const * rect) {
  this_ptr->ortho(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_ortho1(QMatrix4x4 * this_ptr, QRectF const * rect) {
  this_ptr->ortho(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_ortho2(QMatrix4x4 * this_ptr, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  this_ptr->ortho(left, right, bottom, top, nearPlane, farPlane);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_frustum(QMatrix4x4 * this_ptr, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  this_ptr->frustum(left, right, bottom, top, nearPlane, farPlane);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_perspective(QMatrix4x4 * this_ptr, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
  this_ptr->perspective(verticalAngle, aspectRatio, nearPlane, farPlane);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_lookAt(QMatrix4x4 * this_ptr, QVector3D const * eye, QVector3D const * center, QVector3D const * up) {
  this_ptr->lookAt(*eye, *center, *up);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_viewport(QMatrix4x4 * this_ptr, QRectF const * rect) {
  this_ptr->viewport(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_viewport1(QMatrix4x4 * this_ptr, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
  this_ptr->viewport(left, bottom, width, height, nearPlane, farPlane);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_flipCoordinates(QMatrix4x4 * this_ptr) {
  this_ptr->flipCoordinates();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_copyDataTo(QMatrix4x4 const * this_ptr, float * values) {
  this_ptr->copyDataTo(values);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QMatrix4x4_toTransform(QMatrix4x4 const * this_ptr) {
  return new QTransform(this_ptr->toTransform());
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QMatrix4x4_toTransform1(QMatrix4x4 const * this_ptr, float distanceToPlane) {
  return new QTransform(this_ptr->toTransform(distanceToPlane));
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QMatrix4x4_map(QMatrix4x4 const * this_ptr, QPoint const * point) {
  return new QPoint(this_ptr->map(*point));
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QMatrix4x4_map1(QMatrix4x4 const * this_ptr, QPointF const * point) {
  return new QPointF(this_ptr->map(*point));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QMatrix4x4_map2(QMatrix4x4 const * this_ptr, QVector3D const * point) {
  return new QVector3D(this_ptr->map(*point));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QMatrix4x4_mapVector(QMatrix4x4 const * this_ptr, QVector3D const * vector) {
  return new QVector3D(this_ptr->mapVector(*vector));
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QMatrix4x4_map3(QMatrix4x4 const * this_ptr, QVector4D const * point) {
  return new QVector4D(this_ptr->map(*point));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QMatrix4x4_mapRect(QMatrix4x4 const * this_ptr, QRect const * rect) {
  return new QRect(this_ptr->mapRect(*rect));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QMatrix4x4_mapRect1(QMatrix4x4 const * this_ptr, QRectF const * rect) {
  return new QRectF(this_ptr->mapRect(*rect));
}


RITUAL_EXPORT float * ctr_qt_gui_ffi_QMatrix4x4_data(QMatrix4x4 * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT float const * ctr_qt_gui_ffi_QMatrix4x4_data1(QMatrix4x4 const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT float const * ctr_qt_gui_ffi_QMatrix4x4_constData(QMatrix4x4 const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_optimize(QMatrix4x4 * this_ptr) {
  this_ptr->optimize();
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QMatrix4x4_operator_QVariant(QMatrix4x4 const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_projectedRotate(QMatrix4x4 * this_ptr, float angle, float x, float y, float z, float distanceToPlane) {
  this_ptr->projectedRotate(angle, x, y, z, distanceToPlane);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_projectedRotate1(QMatrix4x4 * this_ptr, float angle, float x, float y, float z) {
  this_ptr->projectedRotate(angle, x, y, z);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMatrix4x4_flags(QMatrix4x4 const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_operator_165(QMatrix4x4 const * matrix, float divisor) {
  return new QMatrix4x4(operator/(*matrix, divisor));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_operator_166(QMatrix4x4 const * m1, QMatrix4x4 const * m2) {
  return new QMatrix4x4(operator+(*m1, *m2));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_operator_167(QMatrix4x4 const * m1, QMatrix4x4 const * m2) {
  return new QMatrix4x4(operator-(*m1, *m2));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_operator_168(QMatrix4x4 const * m1, QMatrix4x4 const * m2) {
  return new QMatrix4x4(operator*(*m1, *m2));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_operator_169(QVector3D const * vector, QMatrix4x4 const * matrix) {
  return new QVector3D(operator*(*vector, *matrix));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_operator_170(QMatrix4x4 const * matrix, QVector3D const * vector) {
  return new QVector3D(operator*(*matrix, *vector));
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_operator_171(QVector4D const * vector, QMatrix4x4 const * matrix) {
  return new QVector4D(operator*(*vector, *matrix));
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_operator_172(QMatrix4x4 const * matrix, QVector4D const * vector) {
  return new QVector4D(operator*(*matrix, *vector));
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_operator_173(QPoint const * point, QMatrix4x4 const * matrix) {
  return new QPoint(operator*(*point, *matrix));
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_operator_174(QPointF const * point, QMatrix4x4 const * matrix) {
  return new QPointF(operator*(*point, *matrix));
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_operator_175(QMatrix4x4 const * matrix, QPoint const * point) {
  return new QPoint(operator*(*matrix, *point));
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_operator_176(QMatrix4x4 const * matrix, QPointF const * point) {
  return new QPointF(operator*(*matrix, *point));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_operator_177(QMatrix4x4 const * matrix) {
  return new QMatrix4x4(operator-(*matrix));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_operator_178(float factor, QMatrix4x4 const * matrix) {
  return new QMatrix4x4(operator*(factor, *matrix));
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_operator_179(QMatrix4x4 const * matrix, float factor) {
  return new QMatrix4x4(operator*(*matrix, factor));
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__67(QDebug const * dbg, QMatrix4x4 const * m) {
  return new QDebug(operator<<(*dbg, *m));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__68(QDataStream * arg1, QMatrix4x4 const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__69(QDataStream * arg1, QMatrix4x4 * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QMovie_metaObject(QMovie const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QMovie_qt_metacast(QMovie * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMovie_qt_metacall(QMovie * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QMovie_tr(char const * s, char const * c, int n) {
  return new QString(QMovie::tr(s, c, n));
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie(QObject * parent) {
  return new QMovie(parent);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie1(QIODevice * device, QByteArray const * format, QObject * parent) {
  return new QMovie(device, *format, parent);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie2(QString const * fileName, QByteArray const * format, QObject * parent) {
  return new QMovie(*fileName, *format, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_dQMovie(QMovie * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QMovie_supportedFormats() {
  return new QList< QByteArray >(QMovie::supportedFormats());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setDevice(QMovie * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_gui_ffi_QMovie_device(QMovie const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setFileName(QMovie * this_ptr, QString const * fileName) {
  this_ptr->setFileName(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QMovie_fileName(QMovie const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setFormat(QMovie * this_ptr, QByteArray const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QMovie_format(QMovie const * this_ptr) {
  return new QByteArray(this_ptr->format());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setBackgroundColor(QMovie * this_ptr, QColor const * color) {
  this_ptr->setBackgroundColor(*color);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QMovie_backgroundColor(QMovie const * this_ptr) {
  return new QColor(this_ptr->backgroundColor());
}


RITUAL_EXPORT QMovie::MovieState ctr_qt_gui_ffi_QMovie_state(QMovie const * this_ptr) {
  return this_ptr->state();
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QMovie_frameRect(QMovie const * this_ptr) {
  return new QRect(this_ptr->frameRect());
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QMovie_currentImage(QMovie const * this_ptr) {
  return new QImage(this_ptr->currentImage());
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QMovie_currentPixmap(QMovie const * this_ptr) {
  return new QPixmap(this_ptr->currentPixmap());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QMovie_isValid(QMovie const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QImageReader::ImageReaderError ctr_qt_gui_ffi_QMovie_lastError(QMovie const * this_ptr) {
  return this_ptr->lastError();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QMovie_lastErrorString(QMovie const * this_ptr) {
  return new QString(this_ptr->lastErrorString());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QMovie_jumpToFrame(QMovie * this_ptr, int frameNumber) {
  return this_ptr->jumpToFrame(frameNumber);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMovie_loopCount(QMovie const * this_ptr) {
  return this_ptr->loopCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMovie_frameCount(QMovie const * this_ptr) {
  return this_ptr->frameCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMovie_nextFrameDelay(QMovie const * this_ptr) {
  return this_ptr->nextFrameDelay();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMovie_currentFrameNumber(QMovie const * this_ptr) {
  return this_ptr->currentFrameNumber();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMovie_speed(QMovie const * this_ptr) {
  return this_ptr->speed();
}


RITUAL_EXPORT QBindable< int > * ctr_qt_gui_ffi_QMovie_bindableSpeed(QMovie * this_ptr) {
  return new QBindable< int >(this_ptr->bindableSpeed());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QMovie_scaledSize(QMovie * this_ptr) {
  return new QSize(this_ptr->scaledSize());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setScaledSize(QMovie * this_ptr, QSize const * size) {
  this_ptr->setScaledSize(*size);
}


RITUAL_EXPORT QMovie::CacheMode ctr_qt_gui_ffi_QMovie_cacheMode(QMovie const * this_ptr) {
  return this_ptr->cacheMode();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setCacheMode(QMovie * this_ptr, QMovie::CacheMode mode) {
  this_ptr->setCacheMode(mode);
}


RITUAL_EXPORT QBindable< QMovie::CacheMode > * ctr_qt_gui_ffi_QMovie_bindableCacheMode(QMovie * this_ptr) {
  return new QBindable< QMovie::CacheMode >(this_ptr->bindableCacheMode());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_start(QMovie * this_ptr) {
  this_ptr->start();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QMovie_jumpToNextFrame(QMovie * this_ptr) {
  return this_ptr->jumpToNextFrame();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setPaused(QMovie * this_ptr, bool paused) {
  this_ptr->setPaused(paused);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_stop(QMovie * this_ptr) {
  this_ptr->stop();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMovie_setSpeed(QMovie * this_ptr, int percentSpeed) {
  this_ptr->setSpeed(percentSpeed);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QOffscreenSurface_metaObject(QOffscreenSurface const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QOffscreenSurface_qt_metacast(QOffscreenSurface * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOffscreenSurface_qt_metacall(QOffscreenSurface * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QOffscreenSurface_tr(char const * s, char const * c, int n) {
  return new QString(QOffscreenSurface::tr(s, c, n));
}


RITUAL_EXPORT QOffscreenSurface * ctr_qt_gui_ffi_QOffscreenSurface_QOffscreenSurface(QScreen * screen, QObject * parent) {
  return new QOffscreenSurface(screen, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOffscreenSurface_dQOffscreenSurface(QOffscreenSurface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSurface::SurfaceType ctr_qt_gui_ffi_QOffscreenSurface_surfaceType(QOffscreenSurface const * this_ptr) {
  return this_ptr->surfaceType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOffscreenSurface_create(QOffscreenSurface * this_ptr) {
  this_ptr->create();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOffscreenSurface_destroy(QOffscreenSurface * this_ptr) {
  this_ptr->destroy();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOffscreenSurface_isValid(QOffscreenSurface const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOffscreenSurface_setFormat(QOffscreenSurface * this_ptr, QSurfaceFormat const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QOffscreenSurface_format(QOffscreenSurface const * this_ptr) {
  return new QSurfaceFormat(this_ptr->format());
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QOffscreenSurface_requestedFormat(QOffscreenSurface const * this_ptr) {
  return new QSurfaceFormat(this_ptr->requestedFormat());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QOffscreenSurface_size(QOffscreenSurface const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_QOffscreenSurface_screen(QOffscreenSurface const * this_ptr) {
  return this_ptr->screen();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOffscreenSurface_setScreen(QOffscreenSurface * this_ptr, QScreen * screen) {
  this_ptr->setScreen(screen);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QOpenGLContextGroup_metaObject(QOpenGLContextGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QOpenGLContextGroup_qt_metacast(QOpenGLContextGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOpenGLContextGroup_qt_metacall(QOpenGLContextGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QOpenGLContextGroup_tr(char const * s, char const * c, int n) {
  return new QString(QOpenGLContextGroup::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLContextGroup_dQOpenGLContextGroup(QOpenGLContextGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QOpenGLContext * > * ctr_qt_gui_ffi_QOpenGLContextGroup_shares(QOpenGLContextGroup const * this_ptr) {
  return new QList< QOpenGLContext * >(this_ptr->shares());
}


RITUAL_EXPORT QOpenGLContextGroup * ctr_qt_gui_ffi_QOpenGLContextGroup_currentContextGroup() {
  return QOpenGLContextGroup::currentContextGroup();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QOpenGLContext_metaObject(QOpenGLContext const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QOpenGLContext_qt_metacast(QOpenGLContext * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOpenGLContext_qt_metacall(QOpenGLContext * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QOpenGLContext_tr(char const * s, char const * c, int n) {
  return new QString(QOpenGLContext::tr(s, c, n));
}


RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_QOpenGLContext_QOpenGLContext(QObject * parent) {
  return new QOpenGLContext(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLContext_dQOpenGLContext(QOpenGLContext * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLContext_setFormat(QOpenGLContext * this_ptr, QSurfaceFormat const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLContext_setShareContext(QOpenGLContext * this_ptr, QOpenGLContext * shareContext) {
  this_ptr->setShareContext(shareContext);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLContext_setScreen(QOpenGLContext * this_ptr, QScreen * screen) {
  this_ptr->setScreen(screen);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLContext_create(QOpenGLContext * this_ptr) {
  return this_ptr->create();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLContext_isValid(QOpenGLContext const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QOpenGLContext_format(QOpenGLContext const * this_ptr) {
  return new QSurfaceFormat(this_ptr->format());
}


RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_QOpenGLContext_shareContext(QOpenGLContext const * this_ptr) {
  return this_ptr->shareContext();
}


RITUAL_EXPORT QOpenGLContextGroup * ctr_qt_gui_ffi_QOpenGLContext_shareGroup(QOpenGLContext const * this_ptr) {
  return this_ptr->shareGroup();
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_QOpenGLContext_screen(QOpenGLContext const * this_ptr) {
  return this_ptr->screen();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLContext_defaultFramebufferObject(QOpenGLContext const * this_ptr) {
  return this_ptr->defaultFramebufferObject();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLContext_makeCurrent(QOpenGLContext * this_ptr, QSurface * surface) {
  return this_ptr->makeCurrent(surface);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLContext_doneCurrent(QOpenGLContext * this_ptr) {
  this_ptr->doneCurrent();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLContext_swapBuffers(QOpenGLContext * this_ptr, QSurface * surface) {
  this_ptr->swapBuffers(surface);
}


RITUAL_EXPORT void (*ctr_qt_gui_ffi_QOpenGLContext_getProcAddress(QOpenGLContext const * this_ptr, QByteArray const * procName))() {
  return this_ptr->getProcAddress(*procName);
}


RITUAL_EXPORT void (*ctr_qt_gui_ffi_QOpenGLContext_getProcAddress1(QOpenGLContext const * this_ptr, char const * procName))() {
  return this_ptr->getProcAddress(procName);
}


RITUAL_EXPORT QSurface * ctr_qt_gui_ffi_QOpenGLContext_surface(QOpenGLContext const * this_ptr) {
  return this_ptr->surface();
}


RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_QOpenGLContext_currentContext() {
  return QOpenGLContext::currentContext();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLContext_areSharing(QOpenGLContext * first, QOpenGLContext * second) {
  return QOpenGLContext::areSharing(first, second);
}


RITUAL_EXPORT QOpenGLFunctions * ctr_qt_gui_ffi_QOpenGLContext_functions(QOpenGLContext const * this_ptr) {
  return this_ptr->functions();
}


RITUAL_EXPORT QOpenGLExtraFunctions * ctr_qt_gui_ffi_QOpenGLContext_extraFunctions(QOpenGLContext const * this_ptr) {
  return this_ptr->extraFunctions();
}


RITUAL_EXPORT QSet< QByteArray > * ctr_qt_gui_ffi_QOpenGLContext_extensions(QOpenGLContext const * this_ptr) {
  return new QSet< QByteArray >(this_ptr->extensions());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLContext_hasExtension(QOpenGLContext const * this_ptr, QByteArray const * extension) {
  return this_ptr->hasExtension(*extension);
}


RITUAL_EXPORT QOpenGLContext::OpenGLModuleType ctr_qt_gui_ffi_QOpenGLContext_openGLModuleType() {
  return QOpenGLContext::openGLModuleType();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLContext_isOpenGLES(QOpenGLContext const * this_ptr) {
  return this_ptr->isOpenGLES();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLContext_supportsThreadedOpenGL() {
  return QOpenGLContext::supportsThreadedOpenGL();
}


RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_QOpenGLContext_globalShareContext() {
  return QOpenGLContext::globalShareContext();
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__70(QDebug const * debug, QOpenGLContext const * ctx) {
  return new QDebug(operator<<(*debug, ctx));
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__71(QDebug const * debug, QOpenGLContextGroup const * cg) {
  return new QDebug(operator<<(*debug, cg));
}


#ifndef _WIN32
RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_QNativeInterface_QEGLContext_fromNative(void * context, void * display, QOpenGLContext * shareContext) {
  return QNativeInterface::QEGLContext::fromNative(context, display, shareContext);
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QNativeInterface_QEGLContext_nativeContext(QNativeInterface::QEGLContext const * this_ptr) {
  return this_ptr->nativeContext();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QNativeInterface_QEGLContext_config(QNativeInterface::QEGLContext const * this_ptr) {
  return this_ptr->config();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QNativeInterface_QEGLContext_display(QNativeInterface::QEGLContext const * this_ptr) {
  return this_ptr->display();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QNativeInterface_QEGLContext_invalidateContext(QNativeInterface::QEGLContext * this_ptr) {
  this_ptr->invalidateContext();
}
#endif


RITUAL_EXPORT QOpenGLFunctions * ctr_qt_gui_ffi_QOpenGLFunctions_QOpenGLFunctions() {
  return new QOpenGLFunctions();
}


RITUAL_EXPORT QOpenGLFunctions * ctr_qt_gui_ffi_QOpenGLFunctions_QOpenGLFunctions1(QOpenGLContext * context) {
  return new QOpenGLFunctions(context);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_dQOpenGLFunctions(QOpenGLFunctions * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOpenGLFunctions_openGLFeatures(QOpenGLFunctions const * this_ptr) {
  return int(this_ptr->openGLFeatures());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QOpenGLFunctions_hasOpenGLFeature(QOpenGLFunctions const * this_ptr, QOpenGLFunctions::OpenGLFeature feature) {
  return this_ptr->hasOpenGLFeature(feature);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_initializeOpenGLFunctions(QOpenGLFunctions * this_ptr) {
  this_ptr->initializeOpenGLFunctions();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBindTexture(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int texture) {
  this_ptr->glBindTexture(target, texture);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBlendFunc(QOpenGLFunctions * this_ptr, unsigned int sfactor, unsigned int dfactor) {
  this_ptr->glBlendFunc(sfactor, dfactor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glClear(QOpenGLFunctions * this_ptr, unsigned int mask) {
  this_ptr->glClear(mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glClearColor(QOpenGLFunctions * this_ptr, float red, float green, float blue, float alpha) {
  this_ptr->glClearColor(red, green, blue, alpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glClearStencil(QOpenGLFunctions * this_ptr, int s) {
  this_ptr->glClearStencil(s);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glColorMask(QOpenGLFunctions * this_ptr, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
  this_ptr->glColorMask(red, green, blue, alpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glCopyTexImage2D(QOpenGLFunctions * this_ptr, unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border) {
  this_ptr->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glCopyTexSubImage2D(QOpenGLFunctions * this_ptr, unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height) {
  this_ptr->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glCullFace(QOpenGLFunctions * this_ptr, unsigned int mode) {
  this_ptr->glCullFace(mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDeleteTextures(QOpenGLFunctions * this_ptr, int n, unsigned int const * textures) {
  this_ptr->glDeleteTextures(n, textures);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDepthFunc(QOpenGLFunctions * this_ptr, unsigned int func) {
  this_ptr->glDepthFunc(func);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDepthMask(QOpenGLFunctions * this_ptr, unsigned char flag) {
  this_ptr->glDepthMask(flag);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDisable(QOpenGLFunctions * this_ptr, unsigned int cap) {
  this_ptr->glDisable(cap);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDrawArrays(QOpenGLFunctions * this_ptr, unsigned int mode, int first, int count) {
  this_ptr->glDrawArrays(mode, first, count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDrawElements(QOpenGLFunctions * this_ptr, unsigned int mode, int count, unsigned int type, void const * indices) {
  this_ptr->glDrawElements(mode, count, type, indices);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glEnable(QOpenGLFunctions * this_ptr, unsigned int cap) {
  this_ptr->glEnable(cap);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glFinish(QOpenGLFunctions * this_ptr) {
  this_ptr->glFinish();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glFlush(QOpenGLFunctions * this_ptr) {
  this_ptr->glFlush();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glFrontFace(QOpenGLFunctions * this_ptr, unsigned int mode) {
  this_ptr->glFrontFace(mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGenTextures(QOpenGLFunctions * this_ptr, int n, unsigned int * textures) {
  this_ptr->glGenTextures(n, textures);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetBooleanv(QOpenGLFunctions * this_ptr, unsigned int pname, unsigned char * params) {
  this_ptr->glGetBooleanv(pname, params);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLFunctions_glGetError(QOpenGLFunctions * this_ptr) {
  return this_ptr->glGetError();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetFloatv(QOpenGLFunctions * this_ptr, unsigned int pname, float * params) {
  this_ptr->glGetFloatv(pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetIntegerv(QOpenGLFunctions * this_ptr, unsigned int pname, int * params) {
  this_ptr->glGetIntegerv(pname, params);
}


RITUAL_EXPORT unsigned char const * ctr_qt_gui_ffi_QOpenGLFunctions_glGetString(QOpenGLFunctions * this_ptr, unsigned int name) {
  return this_ptr->glGetString(name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetTexParameterfv(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, float * params) {
  this_ptr->glGetTexParameterfv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetTexParameteriv(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, int * params) {
  this_ptr->glGetTexParameteriv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glHint(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int mode) {
  this_ptr->glHint(target, mode);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLFunctions_glIsEnabled(QOpenGLFunctions * this_ptr, unsigned int cap) {
  return this_ptr->glIsEnabled(cap);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLFunctions_glIsTexture(QOpenGLFunctions * this_ptr, unsigned int texture) {
  return this_ptr->glIsTexture(texture);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glLineWidth(QOpenGLFunctions * this_ptr, float width) {
  this_ptr->glLineWidth(width);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glPixelStorei(QOpenGLFunctions * this_ptr, unsigned int pname, int param) {
  this_ptr->glPixelStorei(pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glPolygonOffset(QOpenGLFunctions * this_ptr, float factor, float units) {
  this_ptr->glPolygonOffset(factor, units);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glReadPixels(QOpenGLFunctions * this_ptr, int x, int y, int width, int height, unsigned int format, unsigned int type, void * pixels) {
  this_ptr->glReadPixels(x, y, width, height, format, type, pixels);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glScissor(QOpenGLFunctions * this_ptr, int x, int y, int width, int height) {
  this_ptr->glScissor(x, y, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glStencilFunc(QOpenGLFunctions * this_ptr, unsigned int func, int ref, unsigned int mask) {
  this_ptr->glStencilFunc(func, ref, mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glStencilMask(QOpenGLFunctions * this_ptr, unsigned int mask) {
  this_ptr->glStencilMask(mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glStencilOp(QOpenGLFunctions * this_ptr, unsigned int fail, unsigned int zfail, unsigned int zpass) {
  this_ptr->glStencilOp(fail, zfail, zpass);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glTexImage2D(QOpenGLFunctions * this_ptr, unsigned int target, int level, int internalformat, int width, int height, int border, unsigned int format, unsigned int type, void const * pixels) {
  this_ptr->glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glTexParameterf(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, float param) {
  this_ptr->glTexParameterf(target, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glTexParameterfv(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, float const * params) {
  this_ptr->glTexParameterfv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glTexParameteri(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, int param) {
  this_ptr->glTexParameteri(target, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glTexParameteriv(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, int const * params) {
  this_ptr->glTexParameteriv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glTexSubImage2D(QOpenGLFunctions * this_ptr, unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, unsigned int type, void const * pixels) {
  this_ptr->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glViewport(QOpenGLFunctions * this_ptr, int x, int y, int width, int height) {
  this_ptr->glViewport(x, y, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glActiveTexture(QOpenGLFunctions * this_ptr, unsigned int texture) {
  this_ptr->glActiveTexture(texture);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glAttachShader(QOpenGLFunctions * this_ptr, unsigned int program, unsigned int shader) {
  this_ptr->glAttachShader(program, shader);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBindAttribLocation(QOpenGLFunctions * this_ptr, unsigned int program, unsigned int index, char const * name) {
  this_ptr->glBindAttribLocation(program, index, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBindBuffer(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int buffer) {
  this_ptr->glBindBuffer(target, buffer);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBindFramebuffer(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int framebuffer) {
  this_ptr->glBindFramebuffer(target, framebuffer);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBindRenderbuffer(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int renderbuffer) {
  this_ptr->glBindRenderbuffer(target, renderbuffer);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBlendColor(QOpenGLFunctions * this_ptr, float red, float green, float blue, float alpha) {
  this_ptr->glBlendColor(red, green, blue, alpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBlendEquation(QOpenGLFunctions * this_ptr, unsigned int mode) {
  this_ptr->glBlendEquation(mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBlendEquationSeparate(QOpenGLFunctions * this_ptr, unsigned int modeRGB, unsigned int modeAlpha) {
  this_ptr->glBlendEquationSeparate(modeRGB, modeAlpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBlendFuncSeparate(QOpenGLFunctions * this_ptr, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha) {
  this_ptr->glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBufferData(QOpenGLFunctions * this_ptr, unsigned int target, long size, void const * data, unsigned int usage) {
  this_ptr->glBufferData(target, size, data, usage);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glBufferSubData(QOpenGLFunctions * this_ptr, unsigned int target, long offset, long size, void const * data) {
  this_ptr->glBufferSubData(target, offset, size, data);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLFunctions_glCheckFramebufferStatus(QOpenGLFunctions * this_ptr, unsigned int target) {
  return this_ptr->glCheckFramebufferStatus(target);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glClearDepthf(QOpenGLFunctions * this_ptr, float depth) {
  this_ptr->glClearDepthf(depth);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glCompileShader(QOpenGLFunctions * this_ptr, unsigned int shader) {
  this_ptr->glCompileShader(shader);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glCompressedTexImage2D(QOpenGLFunctions * this_ptr, unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, void const * data) {
  this_ptr->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glCompressedTexSubImage2D(QOpenGLFunctions * this_ptr, unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, void const * data) {
  this_ptr->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLFunctions_glCreateProgram(QOpenGLFunctions * this_ptr) {
  return this_ptr->glCreateProgram();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLFunctions_glCreateShader(QOpenGLFunctions * this_ptr, unsigned int type) {
  return this_ptr->glCreateShader(type);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDeleteBuffers(QOpenGLFunctions * this_ptr, int n, unsigned int const * buffers) {
  this_ptr->glDeleteBuffers(n, buffers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDeleteFramebuffers(QOpenGLFunctions * this_ptr, int n, unsigned int const * framebuffers) {
  this_ptr->glDeleteFramebuffers(n, framebuffers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDeleteProgram(QOpenGLFunctions * this_ptr, unsigned int program) {
  this_ptr->glDeleteProgram(program);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDeleteRenderbuffers(QOpenGLFunctions * this_ptr, int n, unsigned int const * renderbuffers) {
  this_ptr->glDeleteRenderbuffers(n, renderbuffers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDeleteShader(QOpenGLFunctions * this_ptr, unsigned int shader) {
  this_ptr->glDeleteShader(shader);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDepthRangef(QOpenGLFunctions * this_ptr, float zNear, float zFar) {
  this_ptr->glDepthRangef(zNear, zFar);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDetachShader(QOpenGLFunctions * this_ptr, unsigned int program, unsigned int shader) {
  this_ptr->glDetachShader(program, shader);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glDisableVertexAttribArray(QOpenGLFunctions * this_ptr, unsigned int index) {
  this_ptr->glDisableVertexAttribArray(index);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glEnableVertexAttribArray(QOpenGLFunctions * this_ptr, unsigned int index) {
  this_ptr->glEnableVertexAttribArray(index);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glFramebufferRenderbuffer(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer) {
  this_ptr->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glFramebufferTexture2D(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level) {
  this_ptr->glFramebufferTexture2D(target, attachment, textarget, texture, level);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGenBuffers(QOpenGLFunctions * this_ptr, int n, unsigned int * buffers) {
  this_ptr->glGenBuffers(n, buffers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGenerateMipmap(QOpenGLFunctions * this_ptr, unsigned int target) {
  this_ptr->glGenerateMipmap(target);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGenFramebuffers(QOpenGLFunctions * this_ptr, int n, unsigned int * framebuffers) {
  this_ptr->glGenFramebuffers(n, framebuffers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGenRenderbuffers(QOpenGLFunctions * this_ptr, int n, unsigned int * renderbuffers) {
  this_ptr->glGenRenderbuffers(n, renderbuffers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetActiveAttrib(QOpenGLFunctions * this_ptr, unsigned int program, unsigned int index, int bufsize, int * length, int * size, unsigned int * type, char * name) {
  this_ptr->glGetActiveAttrib(program, index, bufsize, length, size, type, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetActiveUniform(QOpenGLFunctions * this_ptr, unsigned int program, unsigned int index, int bufsize, int * length, int * size, unsigned int * type, char * name) {
  this_ptr->glGetActiveUniform(program, index, bufsize, length, size, type, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetAttachedShaders(QOpenGLFunctions * this_ptr, unsigned int program, int maxcount, int * count, unsigned int * shaders) {
  this_ptr->glGetAttachedShaders(program, maxcount, count, shaders);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOpenGLFunctions_glGetAttribLocation(QOpenGLFunctions * this_ptr, unsigned int program, char const * name) {
  return this_ptr->glGetAttribLocation(program, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetBufferParameteriv(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, int * params) {
  this_ptr->glGetBufferParameteriv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetFramebufferAttachmentParameteriv(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int attachment, unsigned int pname, int * params) {
  this_ptr->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetProgramiv(QOpenGLFunctions * this_ptr, unsigned int program, unsigned int pname, int * params) {
  this_ptr->glGetProgramiv(program, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetProgramInfoLog(QOpenGLFunctions * this_ptr, unsigned int program, int bufsize, int * length, char * infolog) {
  this_ptr->glGetProgramInfoLog(program, bufsize, length, infolog);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetRenderbufferParameteriv(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int pname, int * params) {
  this_ptr->glGetRenderbufferParameteriv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetShaderiv(QOpenGLFunctions * this_ptr, unsigned int shader, unsigned int pname, int * params) {
  this_ptr->glGetShaderiv(shader, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetShaderInfoLog(QOpenGLFunctions * this_ptr, unsigned int shader, int bufsize, int * length, char * infolog) {
  this_ptr->glGetShaderInfoLog(shader, bufsize, length, infolog);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetShaderPrecisionFormat(QOpenGLFunctions * this_ptr, unsigned int shadertype, unsigned int precisiontype, int * range, int * precision) {
  this_ptr->glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetShaderSource(QOpenGLFunctions * this_ptr, unsigned int shader, int bufsize, int * length, char * source) {
  this_ptr->glGetShaderSource(shader, bufsize, length, source);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetUniformfv(QOpenGLFunctions * this_ptr, unsigned int program, int location, float * params) {
  this_ptr->glGetUniformfv(program, location, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetUniformiv(QOpenGLFunctions * this_ptr, unsigned int program, int location, int * params) {
  this_ptr->glGetUniformiv(program, location, params);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOpenGLFunctions_glGetUniformLocation(QOpenGLFunctions * this_ptr, unsigned int program, char const * name) {
  return this_ptr->glGetUniformLocation(program, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetVertexAttribfv(QOpenGLFunctions * this_ptr, unsigned int index, unsigned int pname, float * params) {
  this_ptr->glGetVertexAttribfv(index, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetVertexAttribiv(QOpenGLFunctions * this_ptr, unsigned int index, unsigned int pname, int * params) {
  this_ptr->glGetVertexAttribiv(index, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glGetVertexAttribPointerv(QOpenGLFunctions * this_ptr, unsigned int index, unsigned int pname, void * * pointer) {
  this_ptr->glGetVertexAttribPointerv(index, pname, pointer);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLFunctions_glIsBuffer(QOpenGLFunctions * this_ptr, unsigned int buffer) {
  return this_ptr->glIsBuffer(buffer);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLFunctions_glIsFramebuffer(QOpenGLFunctions * this_ptr, unsigned int framebuffer) {
  return this_ptr->glIsFramebuffer(framebuffer);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLFunctions_glIsProgram(QOpenGLFunctions * this_ptr, unsigned int program) {
  return this_ptr->glIsProgram(program);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLFunctions_glIsRenderbuffer(QOpenGLFunctions * this_ptr, unsigned int renderbuffer) {
  return this_ptr->glIsRenderbuffer(renderbuffer);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLFunctions_glIsShader(QOpenGLFunctions * this_ptr, unsigned int shader) {
  return this_ptr->glIsShader(shader);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glLinkProgram(QOpenGLFunctions * this_ptr, unsigned int program) {
  this_ptr->glLinkProgram(program);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glReleaseShaderCompiler(QOpenGLFunctions * this_ptr) {
  this_ptr->glReleaseShaderCompiler();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glRenderbufferStorage(QOpenGLFunctions * this_ptr, unsigned int target, unsigned int internalformat, int width, int height) {
  this_ptr->glRenderbufferStorage(target, internalformat, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glSampleCoverage(QOpenGLFunctions * this_ptr, float value, unsigned char invert) {
  this_ptr->glSampleCoverage(value, invert);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glShaderBinary(QOpenGLFunctions * this_ptr, int n, unsigned int const * shaders, unsigned int binaryformat, void const * binary, int length) {
  this_ptr->glShaderBinary(n, shaders, binaryformat, binary, length);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glShaderSource(QOpenGLFunctions * this_ptr, unsigned int shader, int count, char const * * string, int const * length) {
  this_ptr->glShaderSource(shader, count, string, length);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glStencilFuncSeparate(QOpenGLFunctions * this_ptr, unsigned int face, unsigned int func, int ref, unsigned int mask) {
  this_ptr->glStencilFuncSeparate(face, func, ref, mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glStencilMaskSeparate(QOpenGLFunctions * this_ptr, unsigned int face, unsigned int mask) {
  this_ptr->glStencilMaskSeparate(face, mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glStencilOpSeparate(QOpenGLFunctions * this_ptr, unsigned int face, unsigned int fail, unsigned int zfail, unsigned int zpass) {
  this_ptr->glStencilOpSeparate(face, fail, zfail, zpass);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform1f(QOpenGLFunctions * this_ptr, int location, float x) {
  this_ptr->glUniform1f(location, x);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform1fv(QOpenGLFunctions * this_ptr, int location, int count, float const * v) {
  this_ptr->glUniform1fv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform1i(QOpenGLFunctions * this_ptr, int location, int x) {
  this_ptr->glUniform1i(location, x);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform1iv(QOpenGLFunctions * this_ptr, int location, int count, int const * v) {
  this_ptr->glUniform1iv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform2f(QOpenGLFunctions * this_ptr, int location, float x, float y) {
  this_ptr->glUniform2f(location, x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform2fv(QOpenGLFunctions * this_ptr, int location, int count, float const * v) {
  this_ptr->glUniform2fv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform2i(QOpenGLFunctions * this_ptr, int location, int x, int y) {
  this_ptr->glUniform2i(location, x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform2iv(QOpenGLFunctions * this_ptr, int location, int count, int const * v) {
  this_ptr->glUniform2iv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform3f(QOpenGLFunctions * this_ptr, int location, float x, float y, float z) {
  this_ptr->glUniform3f(location, x, y, z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform3fv(QOpenGLFunctions * this_ptr, int location, int count, float const * v) {
  this_ptr->glUniform3fv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform3i(QOpenGLFunctions * this_ptr, int location, int x, int y, int z) {
  this_ptr->glUniform3i(location, x, y, z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform3iv(QOpenGLFunctions * this_ptr, int location, int count, int const * v) {
  this_ptr->glUniform3iv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform4f(QOpenGLFunctions * this_ptr, int location, float x, float y, float z, float w) {
  this_ptr->glUniform4f(location, x, y, z, w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform4fv(QOpenGLFunctions * this_ptr, int location, int count, float const * v) {
  this_ptr->glUniform4fv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform4i(QOpenGLFunctions * this_ptr, int location, int x, int y, int z, int w) {
  this_ptr->glUniform4i(location, x, y, z, w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniform4iv(QOpenGLFunctions * this_ptr, int location, int count, int const * v) {
  this_ptr->glUniform4iv(location, count, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniformMatrix2fv(QOpenGLFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix2fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniformMatrix3fv(QOpenGLFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix3fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUniformMatrix4fv(QOpenGLFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix4fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glUseProgram(QOpenGLFunctions * this_ptr, unsigned int program) {
  this_ptr->glUseProgram(program);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glValidateProgram(QOpenGLFunctions * this_ptr, unsigned int program) {
  this_ptr->glValidateProgram(program);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib1f(QOpenGLFunctions * this_ptr, unsigned int indx, float x) {
  this_ptr->glVertexAttrib1f(indx, x);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib1fv(QOpenGLFunctions * this_ptr, unsigned int indx, float const * values) {
  this_ptr->glVertexAttrib1fv(indx, values);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib2f(QOpenGLFunctions * this_ptr, unsigned int indx, float x, float y) {
  this_ptr->glVertexAttrib2f(indx, x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib2fv(QOpenGLFunctions * this_ptr, unsigned int indx, float const * values) {
  this_ptr->glVertexAttrib2fv(indx, values);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib3f(QOpenGLFunctions * this_ptr, unsigned int indx, float x, float y, float z) {
  this_ptr->glVertexAttrib3f(indx, x, y, z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib3fv(QOpenGLFunctions * this_ptr, unsigned int indx, float const * values) {
  this_ptr->glVertexAttrib3fv(indx, values);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib4f(QOpenGLFunctions * this_ptr, unsigned int indx, float x, float y, float z, float w) {
  this_ptr->glVertexAttrib4f(indx, x, y, z, w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttrib4fv(QOpenGLFunctions * this_ptr, unsigned int indx, float const * values) {
  this_ptr->glVertexAttrib4fv(indx, values);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLFunctions_glVertexAttribPointer(QOpenGLFunctions * this_ptr, unsigned int indx, int size, unsigned int type, unsigned char normalized, int stride, void const * ptr) {
  this_ptr->glVertexAttribPointer(indx, size, type, normalized, stride, ptr);
}


RITUAL_EXPORT QOpenGLExtraFunctions * ctr_qt_gui_ffi_QOpenGLExtraFunctions_QOpenGLExtraFunctions() {
  return new QOpenGLExtraFunctions();
}


RITUAL_EXPORT QOpenGLExtraFunctions * ctr_qt_gui_ffi_QOpenGLExtraFunctions_QOpenGLExtraFunctions1(QOpenGLContext * context) {
  return new QOpenGLExtraFunctions(context);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_dQOpenGLExtraFunctions(QOpenGLExtraFunctions * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glReadBuffer(QOpenGLExtraFunctions * this_ptr, unsigned int mode) {
  this_ptr->glReadBuffer(mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawRangeElements(QOpenGLExtraFunctions * this_ptr, unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, void const * indices) {
  this_ptr->glDrawRangeElements(mode, start, end, count, type, indices);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexImage3D(QOpenGLExtraFunctions * this_ptr, unsigned int target, int level, int internalformat, int width, int height, int depth, int border, unsigned int format, unsigned int type, void const * pixels) {
  this_ptr->glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexSubImage3D(QOpenGLExtraFunctions * this_ptr, unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type, void const * pixels) {
  this_ptr->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glCopyTexSubImage3D(QOpenGLExtraFunctions * this_ptr, unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) {
  this_ptr->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glCompressedTexImage3D(QOpenGLExtraFunctions * this_ptr, unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, void const * data) {
  this_ptr->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glCompressedTexSubImage3D(QOpenGLExtraFunctions * this_ptr, unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, void const * data) {
  this_ptr->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGenQueries(QOpenGLExtraFunctions * this_ptr, int n, unsigned int * ids) {
  this_ptr->glGenQueries(n, ids);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDeleteQueries(QOpenGLExtraFunctions * this_ptr, int n, unsigned int const * ids) {
  this_ptr->glDeleteQueries(n, ids);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLExtraFunctions_glIsQuery(QOpenGLExtraFunctions * this_ptr, unsigned int id) {
  return this_ptr->glIsQuery(id);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBeginQuery(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int id) {
  this_ptr->glBeginQuery(target, id);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glEndQuery(QOpenGLExtraFunctions * this_ptr, unsigned int target) {
  this_ptr->glEndQuery(target);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetQueryiv(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, int * params) {
  this_ptr->glGetQueryiv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetQueryObjectuiv(QOpenGLExtraFunctions * this_ptr, unsigned int id, unsigned int pname, unsigned int * params) {
  this_ptr->glGetQueryObjectuiv(id, pname, params);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUnmapBuffer(QOpenGLExtraFunctions * this_ptr, unsigned int target) {
  return this_ptr->glUnmapBuffer(target);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetBufferPointerv(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, void * * params) {
  this_ptr->glGetBufferPointerv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawBuffers(QOpenGLExtraFunctions * this_ptr, int n, unsigned int const * bufs) {
  this_ptr->glDrawBuffers(n, bufs);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniformMatrix2x3fv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix2x3fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniformMatrix3x2fv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix3x2fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniformMatrix2x4fv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix2x4fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniformMatrix4x2fv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix4x2fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniformMatrix3x4fv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix3x4fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniformMatrix4x3fv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glUniformMatrix4x3fv(location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBlitFramebuffer(QOpenGLExtraFunctions * this_ptr, int srcX0, int srcY0, int srcX1, int srcY1, int dstX0, int dstY0, int dstX1, int dstY1, unsigned int mask, unsigned int filter) {
  this_ptr->glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glRenderbufferStorageMultisample(QOpenGLExtraFunctions * this_ptr, unsigned int target, int samples, unsigned int internalformat, int width, int height) {
  this_ptr->glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glFramebufferTextureLayer(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer) {
  this_ptr->glFramebufferTextureLayer(target, attachment, texture, level, layer);
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QOpenGLExtraFunctions_glMapBufferRange(QOpenGLExtraFunctions * this_ptr, unsigned int target, long offset, long length, unsigned int access) {
  return this_ptr->glMapBufferRange(target, offset, length, access);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glFlushMappedBufferRange(QOpenGLExtraFunctions * this_ptr, unsigned int target, long offset, long length) {
  this_ptr->glFlushMappedBufferRange(target, offset, length);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindVertexArray(QOpenGLExtraFunctions * this_ptr, unsigned int array) {
  this_ptr->glBindVertexArray(array);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDeleteVertexArrays(QOpenGLExtraFunctions * this_ptr, int n, unsigned int const * arrays) {
  this_ptr->glDeleteVertexArrays(n, arrays);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGenVertexArrays(QOpenGLExtraFunctions * this_ptr, int n, unsigned int * arrays) {
  this_ptr->glGenVertexArrays(n, arrays);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLExtraFunctions_glIsVertexArray(QOpenGLExtraFunctions * this_ptr, unsigned int array) {
  return this_ptr->glIsVertexArray(array);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetIntegeri_v(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index, int * data) {
  this_ptr->glGetIntegeri_v(target, index, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBeginTransformFeedback(QOpenGLExtraFunctions * this_ptr, unsigned int primitiveMode) {
  this_ptr->glBeginTransformFeedback(primitiveMode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glEndTransformFeedback(QOpenGLExtraFunctions * this_ptr) {
  this_ptr->glEndTransformFeedback();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindBufferRange(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index, unsigned int buffer, long offset, long size) {
  this_ptr->glBindBufferRange(target, index, buffer, offset, size);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindBufferBase(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index, unsigned int buffer) {
  this_ptr->glBindBufferBase(target, index, buffer);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTransformFeedbackVaryings(QOpenGLExtraFunctions * this_ptr, unsigned int program, int count, char const * const * varyings, unsigned int bufferMode) {
  this_ptr->glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetTransformFeedbackVarying(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) {
  this_ptr->glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribIPointer(QOpenGLExtraFunctions * this_ptr, unsigned int index, int size, unsigned int type, int stride, void const * pointer) {
  this_ptr->glVertexAttribIPointer(index, size, type, stride, pointer);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetVertexAttribIiv(QOpenGLExtraFunctions * this_ptr, unsigned int index, unsigned int pname, int * params) {
  this_ptr->glGetVertexAttribIiv(index, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetVertexAttribIuiv(QOpenGLExtraFunctions * this_ptr, unsigned int index, unsigned int pname, unsigned int * params) {
  this_ptr->glGetVertexAttribIuiv(index, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribI4i(QOpenGLExtraFunctions * this_ptr, unsigned int index, int x, int y, int z, int w) {
  this_ptr->glVertexAttribI4i(index, x, y, z, w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribI4ui(QOpenGLExtraFunctions * this_ptr, unsigned int index, unsigned int x, unsigned int y, unsigned int z, unsigned int w) {
  this_ptr->glVertexAttribI4ui(index, x, y, z, w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribI4iv(QOpenGLExtraFunctions * this_ptr, unsigned int index, int const * v) {
  this_ptr->glVertexAttribI4iv(index, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribI4uiv(QOpenGLExtraFunctions * this_ptr, unsigned int index, unsigned int const * v) {
  this_ptr->glVertexAttribI4uiv(index, v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetUniformuiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, unsigned int * params) {
  this_ptr->glGetUniformuiv(program, location, params);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetFragDataLocation(QOpenGLExtraFunctions * this_ptr, unsigned int program, char const * name) {
  return this_ptr->glGetFragDataLocation(program, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform1ui(QOpenGLExtraFunctions * this_ptr, int location, unsigned int v0) {
  this_ptr->glUniform1ui(location, v0);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform2ui(QOpenGLExtraFunctions * this_ptr, int location, unsigned int v0, unsigned int v1) {
  this_ptr->glUniform2ui(location, v0, v1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform3ui(QOpenGLExtraFunctions * this_ptr, int location, unsigned int v0, unsigned int v1, unsigned int v2) {
  this_ptr->glUniform3ui(location, v0, v1, v2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform4ui(QOpenGLExtraFunctions * this_ptr, int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3) {
  this_ptr->glUniform4ui(location, v0, v1, v2, v3);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform1uiv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned int const * value) {
  this_ptr->glUniform1uiv(location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform2uiv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned int const * value) {
  this_ptr->glUniform2uiv(location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform3uiv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned int const * value) {
  this_ptr->glUniform3uiv(location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniform4uiv(QOpenGLExtraFunctions * this_ptr, int location, int count, unsigned int const * value) {
  this_ptr->glUniform4uiv(location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glClearBufferiv(QOpenGLExtraFunctions * this_ptr, unsigned int buffer, int drawbuffer, int const * value) {
  this_ptr->glClearBufferiv(buffer, drawbuffer, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glClearBufferuiv(QOpenGLExtraFunctions * this_ptr, unsigned int buffer, int drawbuffer, unsigned int const * value) {
  this_ptr->glClearBufferuiv(buffer, drawbuffer, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glClearBufferfv(QOpenGLExtraFunctions * this_ptr, unsigned int buffer, int drawbuffer, float const * value) {
  this_ptr->glClearBufferfv(buffer, drawbuffer, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glClearBufferfi(QOpenGLExtraFunctions * this_ptr, unsigned int buffer, int drawbuffer, float depth, int stencil) {
  this_ptr->glClearBufferfi(buffer, drawbuffer, depth, stencil);
}


RITUAL_EXPORT unsigned char const * ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetStringi(QOpenGLExtraFunctions * this_ptr, unsigned int name, unsigned int index) {
  return this_ptr->glGetStringi(name, index);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glCopyBufferSubData(QOpenGLExtraFunctions * this_ptr, unsigned int readTarget, unsigned int writeTarget, long readOffset, long writeOffset, long size) {
  this_ptr->glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetUniformIndices(QOpenGLExtraFunctions * this_ptr, unsigned int program, int uniformCount, char const * const * uniformNames, unsigned int * uniformIndices) {
  this_ptr->glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetActiveUniformsiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int uniformCount, unsigned int const * uniformIndices, unsigned int pname, int * params) {
  this_ptr->glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetUniformBlockIndex(QOpenGLExtraFunctions * this_ptr, unsigned int program, char const * uniformBlockName) {
  return this_ptr->glGetUniformBlockIndex(program, uniformBlockName);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetActiveUniformBlockiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params) {
  this_ptr->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetActiveUniformBlockName(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName) {
  this_ptr->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUniformBlockBinding(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding) {
  this_ptr->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawArraysInstanced(QOpenGLExtraFunctions * this_ptr, unsigned int mode, int first, int count, int instancecount) {
  this_ptr->glDrawArraysInstanced(mode, first, count, instancecount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawElementsInstanced(QOpenGLExtraFunctions * this_ptr, unsigned int mode, int count, unsigned int type, void const * indices, int instancecount) {
  this_ptr->glDrawElementsInstanced(mode, count, type, indices, instancecount);
}


#ifdef _WIN32
RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetInteger64v(QOpenGLExtraFunctions * this_ptr, unsigned int pname, long * data) {
  this_ptr->glGetInteger64v(pname, reinterpret_cast<GLint64 *>(data));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetInteger64i_v(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index, long * data) {
  this_ptr->glGetInteger64i_v(target, index, reinterpret_cast<GLint64 *>(data));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetBufferParameteri64v(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, long * params) {
  this_ptr->glGetBufferParameteri64v(target, pname, reinterpret_cast<GLint64 *>(params));
}
#else
RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetInteger64v(QOpenGLExtraFunctions * this_ptr, unsigned int pname, long * data) {
  this_ptr->glGetInteger64v(pname, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetInteger64i_v(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index, long * data) {
  this_ptr->glGetInteger64i_v(target, index, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetBufferParameteri64v(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, long * params) {
  this_ptr->glGetBufferParameteri64v(target, pname, params);
}
#endif


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGenSamplers(QOpenGLExtraFunctions * this_ptr, int count, unsigned int * samplers) {
  this_ptr->glGenSamplers(count, samplers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDeleteSamplers(QOpenGLExtraFunctions * this_ptr, int count, unsigned int const * samplers) {
  this_ptr->glDeleteSamplers(count, samplers);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLExtraFunctions_glIsSampler(QOpenGLExtraFunctions * this_ptr, unsigned int sampler) {
  return this_ptr->glIsSampler(sampler);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindSampler(QOpenGLExtraFunctions * this_ptr, unsigned int unit, unsigned int sampler) {
  this_ptr->glBindSampler(unit, sampler);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glSamplerParameteri(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, int param) {
  this_ptr->glSamplerParameteri(sampler, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glSamplerParameteriv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, int const * param) {
  this_ptr->glSamplerParameteriv(sampler, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glSamplerParameterf(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, float param) {
  this_ptr->glSamplerParameterf(sampler, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glSamplerParameterfv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, float const * param) {
  this_ptr->glSamplerParameterfv(sampler, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetSamplerParameteriv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, int * params) {
  this_ptr->glGetSamplerParameteriv(sampler, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetSamplerParameterfv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, float * params) {
  this_ptr->glGetSamplerParameterfv(sampler, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribDivisor(QOpenGLExtraFunctions * this_ptr, unsigned int index, unsigned int divisor) {
  this_ptr->glVertexAttribDivisor(index, divisor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindTransformFeedback(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int id) {
  this_ptr->glBindTransformFeedback(target, id);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDeleteTransformFeedbacks(QOpenGLExtraFunctions * this_ptr, int n, unsigned int const * ids) {
  this_ptr->glDeleteTransformFeedbacks(n, ids);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGenTransformFeedbacks(QOpenGLExtraFunctions * this_ptr, int n, unsigned int * ids) {
  this_ptr->glGenTransformFeedbacks(n, ids);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLExtraFunctions_glIsTransformFeedback(QOpenGLExtraFunctions * this_ptr, unsigned int id) {
  return this_ptr->glIsTransformFeedback(id);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glPauseTransformFeedback(QOpenGLExtraFunctions * this_ptr) {
  this_ptr->glPauseTransformFeedback();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glResumeTransformFeedback(QOpenGLExtraFunctions * this_ptr) {
  this_ptr->glResumeTransformFeedback();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramBinary(QOpenGLExtraFunctions * this_ptr, unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary) {
  this_ptr->glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramBinary(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int binaryFormat, void const * binary, int length) {
  this_ptr->glProgramBinary(program, binaryFormat, binary, length);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramParameteri(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int pname, int value) {
  this_ptr->glProgramParameteri(program, pname, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glInvalidateFramebuffer(QOpenGLExtraFunctions * this_ptr, unsigned int target, int numAttachments, unsigned int const * attachments) {
  this_ptr->glInvalidateFramebuffer(target, numAttachments, attachments);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glInvalidateSubFramebuffer(QOpenGLExtraFunctions * this_ptr, unsigned int target, int numAttachments, unsigned int const * attachments, int x, int y, int width, int height) {
  this_ptr->glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexStorage2D(QOpenGLExtraFunctions * this_ptr, unsigned int target, int levels, unsigned int internalformat, int width, int height) {
  this_ptr->glTexStorage2D(target, levels, internalformat, width, height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexStorage3D(QOpenGLExtraFunctions * this_ptr, unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth) {
  this_ptr->glTexStorage3D(target, levels, internalformat, width, height, depth);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetInternalformativ(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, int * params) {
  this_ptr->glGetInternalformativ(target, internalformat, pname, bufSize, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDispatchCompute(QOpenGLExtraFunctions * this_ptr, unsigned int num_groups_x, unsigned int num_groups_y, unsigned int num_groups_z) {
  this_ptr->glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDispatchComputeIndirect(QOpenGLExtraFunctions * this_ptr, long indirect) {
  this_ptr->glDispatchComputeIndirect(indirect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawArraysIndirect(QOpenGLExtraFunctions * this_ptr, unsigned int mode, void const * indirect) {
  this_ptr->glDrawArraysIndirect(mode, indirect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawElementsIndirect(QOpenGLExtraFunctions * this_ptr, unsigned int mode, unsigned int type, void const * indirect) {
  this_ptr->glDrawElementsIndirect(mode, type, indirect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glFramebufferParameteri(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, int param) {
  this_ptr->glFramebufferParameteri(target, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetFramebufferParameteriv(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, int * params) {
  this_ptr->glGetFramebufferParameteriv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramInterfaceiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int programInterface, unsigned int pname, int * params) {
  this_ptr->glGetProgramInterfaceiv(program, programInterface, pname, params);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramResourceIndex(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int programInterface, char const * name) {
  return this_ptr->glGetProgramResourceIndex(program, programInterface, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramResourceName(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int programInterface, unsigned int index, int bufSize, int * length, char * name) {
  this_ptr->glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramResourceiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int programInterface, unsigned int index, int propCount, unsigned int const * props, int bufSize, int * length, int * params) {
  this_ptr->glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramResourceLocation(QOpenGLExtraFunctions * this_ptr, unsigned int program, unsigned int programInterface, char const * name) {
  return this_ptr->glGetProgramResourceLocation(program, programInterface, name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glUseProgramStages(QOpenGLExtraFunctions * this_ptr, unsigned int pipeline, unsigned int stages, unsigned int program) {
  this_ptr->glUseProgramStages(pipeline, stages, program);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glActiveShaderProgram(QOpenGLExtraFunctions * this_ptr, unsigned int pipeline, unsigned int program) {
  this_ptr->glActiveShaderProgram(pipeline, program);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLExtraFunctions_glCreateShaderProgramv(QOpenGLExtraFunctions * this_ptr, unsigned int type, int count, char const * const * strings) {
  return this_ptr->glCreateShaderProgramv(type, count, strings);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindProgramPipeline(QOpenGLExtraFunctions * this_ptr, unsigned int pipeline) {
  this_ptr->glBindProgramPipeline(pipeline);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDeleteProgramPipelines(QOpenGLExtraFunctions * this_ptr, int n, unsigned int const * pipelines) {
  this_ptr->glDeleteProgramPipelines(n, pipelines);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGenProgramPipelines(QOpenGLExtraFunctions * this_ptr, int n, unsigned int * pipelines) {
  this_ptr->glGenProgramPipelines(n, pipelines);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLExtraFunctions_glIsProgramPipeline(QOpenGLExtraFunctions * this_ptr, unsigned int pipeline) {
  return this_ptr->glIsProgramPipeline(pipeline);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramPipelineiv(QOpenGLExtraFunctions * this_ptr, unsigned int pipeline, unsigned int pname, int * params) {
  this_ptr->glGetProgramPipelineiv(pipeline, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform1i(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int v0) {
  this_ptr->glProgramUniform1i(program, location, v0);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform2i(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int v0, int v1) {
  this_ptr->glProgramUniform2i(program, location, v0, v1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform3i(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int v0, int v1, int v2) {
  this_ptr->glProgramUniform3i(program, location, v0, v1, v2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform4i(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int v0, int v1, int v2, int v3) {
  this_ptr->glProgramUniform4i(program, location, v0, v1, v2, v3);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform1ui(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, unsigned int v0) {
  this_ptr->glProgramUniform1ui(program, location, v0);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform2ui(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, unsigned int v0, unsigned int v1) {
  this_ptr->glProgramUniform2ui(program, location, v0, v1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform3ui(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2) {
  this_ptr->glProgramUniform3ui(program, location, v0, v1, v2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform4ui(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3) {
  this_ptr->glProgramUniform4ui(program, location, v0, v1, v2, v3);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform1f(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, float v0) {
  this_ptr->glProgramUniform1f(program, location, v0);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform2f(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, float v0, float v1) {
  this_ptr->glProgramUniform2f(program, location, v0, v1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform3f(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, float v0, float v1, float v2) {
  this_ptr->glProgramUniform3f(program, location, v0, v1, v2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform4f(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, float v0, float v1, float v2, float v3) {
  this_ptr->glProgramUniform4f(program, location, v0, v1, v2, v3);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform1iv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, int const * value) {
  this_ptr->glProgramUniform1iv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform2iv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, int const * value) {
  this_ptr->glProgramUniform2iv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform3iv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, int const * value) {
  this_ptr->glProgramUniform3iv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform4iv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, int const * value) {
  this_ptr->glProgramUniform4iv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform1uiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned int const * value) {
  this_ptr->glProgramUniform1uiv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform2uiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned int const * value) {
  this_ptr->glProgramUniform2uiv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform3uiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned int const * value) {
  this_ptr->glProgramUniform3uiv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform4uiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned int const * value) {
  this_ptr->glProgramUniform4uiv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform1fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, float const * value) {
  this_ptr->glProgramUniform1fv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform2fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, float const * value) {
  this_ptr->glProgramUniform2fv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform3fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, float const * value) {
  this_ptr->glProgramUniform3fv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniform4fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, float const * value) {
  this_ptr->glProgramUniform4fv(program, location, count, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix2fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix2fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix3fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix3fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix4fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix4fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix2x3fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix3x2fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix2x4fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix4x2fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix3x4fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glProgramUniformMatrix4x3fv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int count, unsigned char transpose, float const * value) {
  this_ptr->glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glValidateProgramPipeline(QOpenGLExtraFunctions * this_ptr, unsigned int pipeline) {
  this_ptr->glValidateProgramPipeline(pipeline);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetProgramPipelineInfoLog(QOpenGLExtraFunctions * this_ptr, unsigned int pipeline, int bufSize, int * length, char * infoLog) {
  this_ptr->glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindImageTexture(QOpenGLExtraFunctions * this_ptr, unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format) {
  this_ptr->glBindImageTexture(unit, texture, level, layered, layer, access, format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetBooleani_v(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index, unsigned char * data) {
  this_ptr->glGetBooleani_v(target, index, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glMemoryBarrier(QOpenGLExtraFunctions * this_ptr, unsigned int barriers) {
  this_ptr->glMemoryBarrier(barriers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glMemoryBarrierByRegion(QOpenGLExtraFunctions * this_ptr, unsigned int barriers) {
  this_ptr->glMemoryBarrierByRegion(barriers);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexStorage2DMultisample(QOpenGLExtraFunctions * this_ptr, unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations) {
  this_ptr->glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetMultisamplefv(QOpenGLExtraFunctions * this_ptr, unsigned int pname, unsigned int index, float * val) {
  this_ptr->glGetMultisamplefv(pname, index, val);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glSampleMaski(QOpenGLExtraFunctions * this_ptr, unsigned int maskNumber, unsigned int mask) {
  this_ptr->glSampleMaski(maskNumber, mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetTexLevelParameteriv(QOpenGLExtraFunctions * this_ptr, unsigned int target, int level, unsigned int pname, int * params) {
  this_ptr->glGetTexLevelParameteriv(target, level, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetTexLevelParameterfv(QOpenGLExtraFunctions * this_ptr, unsigned int target, int level, unsigned int pname, float * params) {
  this_ptr->glGetTexLevelParameterfv(target, level, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBindVertexBuffer(QOpenGLExtraFunctions * this_ptr, unsigned int bindingindex, unsigned int buffer, long offset, int stride) {
  this_ptr->glBindVertexBuffer(bindingindex, buffer, offset, stride);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribFormat(QOpenGLExtraFunctions * this_ptr, unsigned int attribindex, int size, unsigned int type, unsigned char normalized, unsigned int relativeoffset) {
  this_ptr->glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribIFormat(QOpenGLExtraFunctions * this_ptr, unsigned int attribindex, int size, unsigned int type, unsigned int relativeoffset) {
  this_ptr->glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexAttribBinding(QOpenGLExtraFunctions * this_ptr, unsigned int attribindex, unsigned int bindingindex) {
  this_ptr->glVertexAttribBinding(attribindex, bindingindex);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glVertexBindingDivisor(QOpenGLExtraFunctions * this_ptr, unsigned int bindingindex, unsigned int divisor) {
  this_ptr->glVertexBindingDivisor(bindingindex, divisor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBlendBarrier(QOpenGLExtraFunctions * this_ptr) {
  this_ptr->glBlendBarrier();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glCopyImageSubData(QOpenGLExtraFunctions * this_ptr, unsigned int srcName, unsigned int srcTarget, int srcLevel, int srcX, int srcY, int srcZ, unsigned int dstName, unsigned int dstTarget, int dstLevel, int dstX, int dstY, int dstZ, int srcWidth, int srcHeight, int srcDepth) {
  this_ptr->glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDebugMessageControl(QOpenGLExtraFunctions * this_ptr, unsigned int source, unsigned int type, unsigned int severity, int count, unsigned int const * ids, unsigned char enabled) {
  this_ptr->glDebugMessageControl(source, type, severity, count, ids, enabled);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDebugMessageInsert(QOpenGLExtraFunctions * this_ptr, unsigned int source, unsigned int type, unsigned int id, unsigned int severity, int length, char const * buf) {
  this_ptr->glDebugMessageInsert(source, type, id, severity, length, buf);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDebugMessageCallback(QOpenGLExtraFunctions * this_ptr, void (*callback)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *, void const *), void const * userParam) {
  this_ptr->glDebugMessageCallback(callback, userParam);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetDebugMessageLog(QOpenGLExtraFunctions * this_ptr, unsigned int count, int bufSize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog) {
  return this_ptr->glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glPushDebugGroup(QOpenGLExtraFunctions * this_ptr, unsigned int source, unsigned int id, int length, char const * message) {
  this_ptr->glPushDebugGroup(source, id, length, message);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glPopDebugGroup(QOpenGLExtraFunctions * this_ptr) {
  this_ptr->glPopDebugGroup();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glObjectLabel(QOpenGLExtraFunctions * this_ptr, unsigned int identifier, unsigned int name, int length, char const * label) {
  this_ptr->glObjectLabel(identifier, name, length, label);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetObjectLabel(QOpenGLExtraFunctions * this_ptr, unsigned int identifier, unsigned int name, int bufSize, int * length, char * label) {
  this_ptr->glGetObjectLabel(identifier, name, bufSize, length, label);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glObjectPtrLabel(QOpenGLExtraFunctions * this_ptr, void const * ptr, int length, char const * label) {
  this_ptr->glObjectPtrLabel(ptr, length, label);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetObjectPtrLabel(QOpenGLExtraFunctions * this_ptr, void const * ptr, int bufSize, int * length, char * label) {
  this_ptr->glGetObjectPtrLabel(ptr, bufSize, length, label);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetPointerv(QOpenGLExtraFunctions * this_ptr, unsigned int pname, void * * params) {
  this_ptr->glGetPointerv(pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glEnablei(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index) {
  this_ptr->glEnablei(target, index);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDisablei(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index) {
  this_ptr->glDisablei(target, index);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBlendEquationi(QOpenGLExtraFunctions * this_ptr, unsigned int buf, unsigned int mode) {
  this_ptr->glBlendEquationi(buf, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBlendEquationSeparatei(QOpenGLExtraFunctions * this_ptr, unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha) {
  this_ptr->glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBlendFunci(QOpenGLExtraFunctions * this_ptr, unsigned int buf, unsigned int src, unsigned int dst) {
  this_ptr->glBlendFunci(buf, src, dst);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glBlendFuncSeparatei(QOpenGLExtraFunctions * this_ptr, unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha) {
  this_ptr->glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glColorMaski(QOpenGLExtraFunctions * this_ptr, unsigned int index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
  this_ptr->glColorMaski(index, r, g, b, a);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QOpenGLExtraFunctions_glIsEnabledi(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int index) {
  return this_ptr->glIsEnabledi(target, index);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawElementsBaseVertex(QOpenGLExtraFunctions * this_ptr, unsigned int mode, int count, unsigned int type, void const * indices, int basevertex) {
  this_ptr->glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawRangeElementsBaseVertex(QOpenGLExtraFunctions * this_ptr, unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, void const * indices, int basevertex) {
  this_ptr->glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glDrawElementsInstancedBaseVertex(QOpenGLExtraFunctions * this_ptr, unsigned int mode, int count, unsigned int type, void const * indices, int instancecount, int basevertex) {
  this_ptr->glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glFramebufferTexture(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int attachment, unsigned int texture, int level) {
  this_ptr->glFramebufferTexture(target, attachment, texture, level);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glPrimitiveBoundingBox(QOpenGLExtraFunctions * this_ptr, float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW) {
  this_ptr->glPrimitiveBoundingBox(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetGraphicsResetStatus(QOpenGLExtraFunctions * this_ptr) {
  return this_ptr->glGetGraphicsResetStatus();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glReadnPixels(QOpenGLExtraFunctions * this_ptr, int x, int y, int width, int height, unsigned int format, unsigned int type, int bufSize, void * data) {
  this_ptr->glReadnPixels(x, y, width, height, format, type, bufSize, data);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetnUniformfv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int bufSize, float * params) {
  this_ptr->glGetnUniformfv(program, location, bufSize, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetnUniformiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int bufSize, int * params) {
  this_ptr->glGetnUniformiv(program, location, bufSize, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetnUniformuiv(QOpenGLExtraFunctions * this_ptr, unsigned int program, int location, int bufSize, unsigned int * params) {
  this_ptr->glGetnUniformuiv(program, location, bufSize, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glMinSampleShading(QOpenGLExtraFunctions * this_ptr, float value) {
  this_ptr->glMinSampleShading(value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glPatchParameteri(QOpenGLExtraFunctions * this_ptr, unsigned int pname, int value) {
  this_ptr->glPatchParameteri(pname, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexParameterIiv(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, int const * params) {
  this_ptr->glTexParameterIiv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexParameterIuiv(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, unsigned int const * params) {
  this_ptr->glTexParameterIuiv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetTexParameterIiv(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, int * params) {
  this_ptr->glGetTexParameterIiv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetTexParameterIuiv(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int pname, unsigned int * params) {
  this_ptr->glGetTexParameterIuiv(target, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glSamplerParameterIiv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, int const * param) {
  this_ptr->glSamplerParameterIiv(sampler, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glSamplerParameterIuiv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, unsigned int const * param) {
  this_ptr->glSamplerParameterIuiv(sampler, pname, param);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetSamplerParameterIiv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, int * params) {
  this_ptr->glGetSamplerParameterIiv(sampler, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glGetSamplerParameterIuiv(QOpenGLExtraFunctions * this_ptr, unsigned int sampler, unsigned int pname, unsigned int * params) {
  this_ptr->glGetSamplerParameterIuiv(sampler, pname, params);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexBuffer(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int internalformat, unsigned int buffer) {
  this_ptr->glTexBuffer(target, internalformat, buffer);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexBufferRange(QOpenGLExtraFunctions * this_ptr, unsigned int target, unsigned int internalformat, unsigned int buffer, long offset, long size) {
  this_ptr->glTexBufferRange(target, internalformat, buffer, offset, size);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QOpenGLExtraFunctions_glTexStorage3DMultisample(QOpenGLExtraFunctions * this_ptr, unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations) {
  this_ptr->glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize() {
  return new QPageSize();
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize1(QPageSize::PageSizeId pageSizeId) {
  return new QPageSize(pageSizeId);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize2(QSize const * pointSize, QString const * name, QPageSize::SizeMatchPolicy matchPolicy) {
  return new QPageSize(*pointSize, *name, matchPolicy);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize3(QSizeF const * size, QPageSize::Unit units, QString const * name, QPageSize::SizeMatchPolicy matchPolicy) {
  return new QPageSize(*size, units, *name, matchPolicy);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_QPageSize4(QPageSize const * other) {
  return new QPageSize(*other);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageSize_operator_1(QPageSize * this_ptr, QPageSize const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageSize_dQPageSize(QPageSize * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageSize_swap(QPageSize * this_ptr, QPageSize * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageSize_isEquivalentTo(QPageSize const * this_ptr, QPageSize const * other) {
  return this_ptr->isEquivalentTo(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageSize_isValid(QPageSize const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPageSize_key(QPageSize const * this_ptr) {
  return new QString(this_ptr->key());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPageSize_name(QPageSize const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT QPageSize::PageSizeId ctr_qt_gui_ffi_QPageSize_id(QPageSize const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPageSize_windowsId(QPageSize const * this_ptr) {
  return this_ptr->windowsId();
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QPageSize_definitionSize(QPageSize const * this_ptr) {
  return new QSizeF(this_ptr->definitionSize());
}


RITUAL_EXPORT QPageSize::Unit ctr_qt_gui_ffi_QPageSize_definitionUnits(QPageSize const * this_ptr) {
  return this_ptr->definitionUnits();
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QPageSize_size(QPageSize const * this_ptr, QPageSize::Unit units) {
  return new QSizeF(this_ptr->size(units));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QPageSize_sizePoints(QPageSize const * this_ptr) {
  return new QSize(this_ptr->sizePoints());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QPageSize_sizePixels(QPageSize const * this_ptr, int resolution) {
  return new QSize(this_ptr->sizePixels(resolution));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPageSize_rect(QPageSize const * this_ptr, QPageSize::Unit units) {
  return new QRectF(this_ptr->rect(units));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPageSize_rectPoints(QPageSize const * this_ptr) {
  return new QRect(this_ptr->rectPoints());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPageSize_rectPixels(QPageSize const * this_ptr, int resolution) {
  return new QRect(this_ptr->rectPixels(resolution));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPageSize_key1(QPageSize::PageSizeId pageSizeId) {
  return new QString(QPageSize::key(pageSizeId));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPageSize_name1(QPageSize::PageSizeId pageSizeId) {
  return new QString(QPageSize::name(pageSizeId));
}


RITUAL_EXPORT QPageSize::PageSizeId ctr_qt_gui_ffi_QPageSize_id1(QSize const * pointSize, QPageSize::SizeMatchPolicy matchPolicy) {
  return QPageSize::id(*pointSize, matchPolicy);
}


RITUAL_EXPORT QPageSize::PageSizeId ctr_qt_gui_ffi_QPageSize_id2(QSizeF const * size, QPageSize::Unit units, QPageSize::SizeMatchPolicy matchPolicy) {
  return QPageSize::id(*size, units, matchPolicy);
}


RITUAL_EXPORT QPageSize::PageSizeId ctr_qt_gui_ffi_QPageSize_id3(int windowsId) {
  return QPageSize::id(windowsId);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPageSize_windowsId1(QPageSize::PageSizeId pageSizeId) {
  return QPageSize::windowsId(pageSizeId);
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QPageSize_definitionSize1(QPageSize::PageSizeId pageSizeId) {
  return new QSizeF(QPageSize::definitionSize(pageSizeId));
}


RITUAL_EXPORT QPageSize::Unit ctr_qt_gui_ffi_QPageSize_definitionUnits1(QPageSize::PageSizeId pageSizeId) {
  return QPageSize::definitionUnits(pageSizeId);
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QPageSize_size1(QPageSize::PageSizeId pageSizeId, QPageSize::Unit units) {
  return new QSizeF(QPageSize::size(pageSizeId, units));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QPageSize_sizePoints1(QPageSize::PageSizeId pageSizeId) {
  return new QSize(QPageSize::sizePoints(pageSizeId));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QPageSize_sizePixels1(QPageSize::PageSizeId pageSizeId, int resolution) {
  return new QSize(QPageSize::sizePixels(pageSizeId, resolution));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap31(QPageSize * value1, QPageSize * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__72(QDebug const * dbg, QPageSize const * pageSize) {
  return new QDebug(operator<<(*dbg, *pageSize));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QPageSize(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPageSize(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QPageSize__PageSizeId(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPageSize__PageSizeId(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QPageSize__Unit(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPageSize__Unit(*arg1);
}


RITUAL_EXPORT QPageLayout * ctr_qt_gui_ffi_QPageLayout_QPageLayout() {
  return new QPageLayout();
}


RITUAL_EXPORT QPageLayout * ctr_qt_gui_ffi_QPageLayout_QPageLayout1(QPageSize const * pageSize, QPageLayout::Orientation orientation, QMarginsF const * margins, QPageLayout::Unit units, QMarginsF const * minMargins) {
  return new QPageLayout(*pageSize, orientation, *margins, units, *minMargins);
}


RITUAL_EXPORT QPageLayout * ctr_qt_gui_ffi_QPageLayout_QPageLayout2(QPageLayout const * other) {
  return new QPageLayout(*other);
}


RITUAL_EXPORT QPageLayout * ctr_qt_gui_ffi_QPageLayout_operator_1(QPageLayout * this_ptr, QPageLayout const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_dQPageLayout(QPageLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_swap(QPageLayout * this_ptr, QPageLayout * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_isEquivalentTo(QPageLayout const * this_ptr, QPageLayout const * other) {
  return this_ptr->isEquivalentTo(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_isValid(QPageLayout const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_setMode(QPageLayout * this_ptr, QPageLayout::Mode mode) {
  this_ptr->setMode(mode);
}


RITUAL_EXPORT QPageLayout::Mode ctr_qt_gui_ffi_QPageLayout_mode(QPageLayout const * this_ptr) {
  return this_ptr->mode();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_setPageSize(QPageLayout * this_ptr, QPageSize const * pageSize, QMarginsF const * minMargins) {
  this_ptr->setPageSize(*pageSize, *minMargins);
}


RITUAL_EXPORT QPageSize * ctr_qt_gui_ffi_QPageLayout_pageSize(QPageLayout const * this_ptr) {
  return new QPageSize(this_ptr->pageSize());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_setOrientation(QPageLayout * this_ptr, QPageLayout::Orientation orientation) {
  this_ptr->setOrientation(orientation);
}


RITUAL_EXPORT QPageLayout::Orientation ctr_qt_gui_ffi_QPageLayout_orientation(QPageLayout const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_setUnits(QPageLayout * this_ptr, QPageLayout::Unit units) {
  this_ptr->setUnits(units);
}


RITUAL_EXPORT QPageLayout::Unit ctr_qt_gui_ffi_QPageLayout_units(QPageLayout const * this_ptr) {
  return this_ptr->units();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setMargins(QPageLayout * this_ptr, QMarginsF const * margins, QPageLayout::OutOfBoundsPolicy outOfBoundsPolicy) {
  return this_ptr->setMargins(*margins, outOfBoundsPolicy);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setLeftMargin(QPageLayout * this_ptr, double leftMargin, QPageLayout::OutOfBoundsPolicy outOfBoundsPolicy) {
  return this_ptr->setLeftMargin(leftMargin, outOfBoundsPolicy);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setRightMargin(QPageLayout * this_ptr, double rightMargin, QPageLayout::OutOfBoundsPolicy outOfBoundsPolicy) {
  return this_ptr->setRightMargin(rightMargin, outOfBoundsPolicy);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setTopMargin(QPageLayout * this_ptr, double topMargin, QPageLayout::OutOfBoundsPolicy outOfBoundsPolicy) {
  return this_ptr->setTopMargin(topMargin, outOfBoundsPolicy);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageLayout_setBottomMargin(QPageLayout * this_ptr, double bottomMargin, QPageLayout::OutOfBoundsPolicy outOfBoundsPolicy) {
  return this_ptr->setBottomMargin(bottomMargin, outOfBoundsPolicy);
}


RITUAL_EXPORT QMarginsF * ctr_qt_gui_ffi_QPageLayout_margins(QPageLayout const * this_ptr) {
  return new QMarginsF(this_ptr->margins());
}


RITUAL_EXPORT QMarginsF * ctr_qt_gui_ffi_QPageLayout_margins1(QPageLayout const * this_ptr, QPageLayout::Unit units) {
  return new QMarginsF(this_ptr->margins(units));
}


RITUAL_EXPORT QMargins * ctr_qt_gui_ffi_QPageLayout_marginsPoints(QPageLayout const * this_ptr) {
  return new QMargins(this_ptr->marginsPoints());
}


RITUAL_EXPORT QMargins * ctr_qt_gui_ffi_QPageLayout_marginsPixels(QPageLayout const * this_ptr, int resolution) {
  return new QMargins(this_ptr->marginsPixels(resolution));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageLayout_setMinimumMargins(QPageLayout * this_ptr, QMarginsF const * minMargins) {
  this_ptr->setMinimumMargins(*minMargins);
}


RITUAL_EXPORT QMarginsF * ctr_qt_gui_ffi_QPageLayout_minimumMargins(QPageLayout const * this_ptr) {
  return new QMarginsF(this_ptr->minimumMargins());
}


RITUAL_EXPORT QMarginsF * ctr_qt_gui_ffi_QPageLayout_maximumMargins(QPageLayout const * this_ptr) {
  return new QMarginsF(this_ptr->maximumMargins());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPageLayout_fullRect(QPageLayout const * this_ptr) {
  return new QRectF(this_ptr->fullRect());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPageLayout_fullRect1(QPageLayout const * this_ptr, QPageLayout::Unit units) {
  return new QRectF(this_ptr->fullRect(units));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPageLayout_fullRectPoints(QPageLayout const * this_ptr) {
  return new QRect(this_ptr->fullRectPoints());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPageLayout_fullRectPixels(QPageLayout const * this_ptr, int resolution) {
  return new QRect(this_ptr->fullRectPixels(resolution));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPageLayout_paintRect(QPageLayout const * this_ptr) {
  return new QRectF(this_ptr->paintRect());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPageLayout_paintRect1(QPageLayout const * this_ptr, QPageLayout::Unit units) {
  return new QRectF(this_ptr->paintRect(units));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPageLayout_paintRectPoints(QPageLayout const * this_ptr) {
  return new QRect(this_ptr->paintRectPoints());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPageLayout_paintRectPixels(QPageLayout const * this_ptr, int resolution) {
  return new QRect(this_ptr->paintRectPixels(resolution));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap32(QPageLayout * value1, QPageLayout * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__73(QDebug const * dbg, QPageLayout const * pageLayout) {
  return new QDebug(operator<<(*dbg, *pageLayout));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QPageLayout(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPageLayout(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QPageLayout__Unit(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPageLayout__Unit(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QPageLayout__Orientation(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPageLayout__Orientation(*arg1);
}


RITUAL_EXPORT QPageRanges * ctr_qt_gui_ffi_QPageRanges_QPageRanges() {
  return new QPageRanges();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageRanges_dQPageRanges(QPageRanges * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPageRanges * ctr_qt_gui_ffi_QPageRanges_QPageRanges1(QPageRanges const * other) {
  return new QPageRanges(*other);
}


RITUAL_EXPORT QPageRanges * ctr_qt_gui_ffi_QPageRanges_operator_(QPageRanges * this_ptr, QPageRanges const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageRanges_swap(QPageRanges * this_ptr, QPageRanges * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageRanges_Range_contains(QPageRanges::Range const * this_ptr, int pageNumber) {
  return this_ptr->contains(pageNumber);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageRanges_addPage(QPageRanges * this_ptr, int pageNumber) {
  this_ptr->addPage(pageNumber);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageRanges_addRange(QPageRanges * this_ptr, int from, int to) {
  this_ptr->addRange(from, to);
}


RITUAL_EXPORT QList< QPageRanges::Range > * ctr_qt_gui_ffi_QPageRanges_toRangeList(QPageRanges const * this_ptr) {
  return new QList< QPageRanges::Range >(this_ptr->toRangeList());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageRanges_clear(QPageRanges * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPageRanges_toString(QPageRanges const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QPageRanges * ctr_qt_gui_ffi_QPageRanges_fromString(QString const * ranges) {
  return new QPageRanges(QPageRanges::fromString(*ranges));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageRanges_contains(QPageRanges const * this_ptr, int pageNumber) {
  return this_ptr->contains(pageNumber);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPageRanges_isEmpty(QPageRanges const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPageRanges_firstPage(QPageRanges const * this_ptr) {
  return this_ptr->firstPage();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPageRanges_lastPage(QPageRanges const * this_ptr) {
  return this_ptr->lastPage();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageRanges_detach(QPageRanges * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__74(QDataStream * arg1, QPageRanges const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__75(QDataStream * arg1, QPageRanges * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__76(QDebug const * dbg, QPageRanges const * pageRanges) {
  return new QDebug(operator<<(*dbg, *pageRanges));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap33(QPageRanges * value1, QPageRanges * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QPageRanges(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPageRanges(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPagedPaintDevice_dQPagedPaintDevice(QPagedPaintDevice * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPagedPaintDevice_newPage(QPagedPaintDevice * this_ptr) {
  return this_ptr->newPage();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPagedPaintDevice_setPageLayout(QPagedPaintDevice * this_ptr, QPageLayout const * pageLayout) {
  return this_ptr->setPageLayout(*pageLayout);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPagedPaintDevice_setPageSize(QPagedPaintDevice * this_ptr, QPageSize const * pageSize) {
  return this_ptr->setPageSize(*pageSize);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPagedPaintDevice_setPageOrientation(QPagedPaintDevice * this_ptr, QPageLayout::Orientation orientation) {
  return this_ptr->setPageOrientation(orientation);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPagedPaintDevice_setPageMargins(QPagedPaintDevice * this_ptr, QMarginsF const * margins, QPageLayout::Unit units) {
  return this_ptr->setPageMargins(*margins, units);
}


RITUAL_EXPORT QPageLayout * ctr_qt_gui_ffi_QPagedPaintDevice_pageLayout(QPagedPaintDevice const * this_ptr) {
  return new QPageLayout(this_ptr->pageLayout());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPagedPaintDevice_setPageRanges(QPagedPaintDevice * this_ptr, QPageRanges const * ranges) {
  this_ptr->setPageRanges(*ranges);
}


RITUAL_EXPORT QPageRanges * ctr_qt_gui_ffi_QPagedPaintDevice_pageRanges(QPagedPaintDevice const * this_ptr) {
  return new QPageRanges(this_ptr->pageRanges());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPaintDeviceWindow_metaObject(QPaintDeviceWindow const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QPaintDeviceWindow_qt_metacast(QPaintDeviceWindow * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDeviceWindow_qt_metacall(QPaintDeviceWindow * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPaintDeviceWindow_tr(char const * s, char const * c, int n) {
  return new QString(QPaintDeviceWindow::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintDeviceWindow_update(QPaintDeviceWindow * this_ptr, QRect const * rect) {
  this_ptr->update(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintDeviceWindow_update1(QPaintDeviceWindow * this_ptr, QRegion const * region) {
  this_ptr->update(*region);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintDeviceWindow_update2(QPaintDeviceWindow * this_ptr) {
  this_ptr->update();
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_create(QPointF const * pos, QRectF const * sourceRect, double scaleX, double scaleY, double rotation, double opacity) {
  return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, scaleX, scaleY, rotation, opacity));
}


RITUAL_EXPORT QPainter * ctr_qt_gui_ffi_QPainter_QPainter() {
  return new QPainter();
}


RITUAL_EXPORT QPainter * ctr_qt_gui_ffi_QPainter_QPainter1(QPaintDevice * arg1) {
  return new QPainter(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_dQPainter(QPainter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_QPainter_device(QPainter const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainter_begin(QPainter * this_ptr, QPaintDevice * arg1) {
  return this_ptr->begin(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainter_end(QPainter * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainter_isActive(QPainter const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setCompositionMode(QPainter * this_ptr, QPainter::CompositionMode mode) {
  this_ptr->setCompositionMode(mode);
}


RITUAL_EXPORT QPainter::CompositionMode ctr_qt_gui_ffi_QPainter_compositionMode(QPainter const * this_ptr) {
  return this_ptr->compositionMode();
}


RITUAL_EXPORT QFont const * ctr_qt_gui_ffi_QPainter_font(QPainter const * this_ptr) {
  return &this_ptr->font();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setFont(QPainter * this_ptr, QFont const * f) {
  this_ptr->setFont(*f);
}


RITUAL_EXPORT QFontMetrics * ctr_qt_gui_ffi_QPainter_fontMetrics(QPainter const * this_ptr) {
  return new QFontMetrics(this_ptr->fontMetrics());
}


RITUAL_EXPORT QFontInfo * ctr_qt_gui_ffi_QPainter_fontInfo(QPainter const * this_ptr) {
  return new QFontInfo(this_ptr->fontInfo());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setPen(QPainter * this_ptr, QColor const * color) {
  this_ptr->setPen(*color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setPen1(QPainter * this_ptr, QPen const * pen) {
  this_ptr->setPen(*pen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setPen2(QPainter * this_ptr, Qt::PenStyle style) {
  this_ptr->setPen(style);
}


RITUAL_EXPORT QPen const * ctr_qt_gui_ffi_QPainter_pen(QPainter const * this_ptr) {
  return &this_ptr->pen();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBrush(QPainter * this_ptr, QBrush const * brush) {
  this_ptr->setBrush(*brush);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBrush1(QPainter * this_ptr, Qt::BrushStyle style) {
  this_ptr->setBrush(style);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBrush2(QPainter * this_ptr, QColor const * color) {
  this_ptr->setBrush(*color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBrush3(QPainter * this_ptr, Qt::GlobalColor color) {
  this_ptr->setBrush(color);
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPainter_brush(QPainter const * this_ptr) {
  return &this_ptr->brush();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBackgroundMode(QPainter * this_ptr, Qt::BGMode mode) {
  this_ptr->setBackgroundMode(mode);
}


RITUAL_EXPORT Qt::BGMode ctr_qt_gui_ffi_QPainter_backgroundMode(QPainter const * this_ptr) {
  return this_ptr->backgroundMode();
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QPainter_brushOrigin(QPainter const * this_ptr) {
  return new QPoint(this_ptr->brushOrigin());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBrushOrigin(QPainter * this_ptr, int x, int y) {
  this_ptr->setBrushOrigin(x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBrushOrigin1(QPainter * this_ptr, QPoint const * arg1) {
  this_ptr->setBrushOrigin(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBrushOrigin2(QPainter * this_ptr, QPointF const * arg1) {
  this_ptr->setBrushOrigin(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setBackground(QPainter * this_ptr, QBrush const * bg) {
  this_ptr->setBackground(*bg);
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPainter_background(QPainter const * this_ptr) {
  return &this_ptr->background();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_opacity(QPainter const * this_ptr) {
  return this_ptr->opacity();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setOpacity(QPainter * this_ptr, double opacity) {
  this_ptr->setOpacity(opacity);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QPainter_clipRegion(QPainter const * this_ptr) {
  return new QRegion(this_ptr->clipRegion());
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainter_clipPath(QPainter const * this_ptr) {
  return new QPainterPath(this_ptr->clipPath());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRect(QPainter * this_ptr, QRectF const * arg1, Qt::ClipOperation op) {
  this_ptr->setClipRect(*arg1, op);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRect1(QPainter * this_ptr, QRect const * arg1, Qt::ClipOperation op) {
  this_ptr->setClipRect(*arg1, op);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRect2(QPainter * this_ptr, int x, int y, int w, int h, Qt::ClipOperation op) {
  this_ptr->setClipRect(x, y, w, h, op);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipRegion(QPainter * this_ptr, QRegion const * arg1, Qt::ClipOperation op) {
  this_ptr->setClipRegion(*arg1, op);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipPath(QPainter * this_ptr, QPainterPath const * path, Qt::ClipOperation op) {
  this_ptr->setClipPath(*path, op);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setClipping(QPainter * this_ptr, bool enable) {
  this_ptr->setClipping(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainter_hasClipping(QPainter const * this_ptr) {
  return this_ptr->hasClipping();
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPainter_clipBoundingRect(QPainter const * this_ptr) {
  return new QRectF(this_ptr->clipBoundingRect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_save(QPainter * this_ptr) {
  this_ptr->save();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_restore(QPainter * this_ptr) {
  this_ptr->restore();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setTransform(QPainter * this_ptr, QTransform const * transform, bool combine) {
  this_ptr->setTransform(*transform, combine);
}


RITUAL_EXPORT QTransform const * ctr_qt_gui_ffi_QPainter_transform(QPainter const * this_ptr) {
  return &this_ptr->transform();
}


RITUAL_EXPORT QTransform const * ctr_qt_gui_ffi_QPainter_deviceTransform(QPainter const * this_ptr) {
  return &this_ptr->deviceTransform();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_resetTransform(QPainter * this_ptr) {
  this_ptr->resetTransform();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setWorldTransform(QPainter * this_ptr, QTransform const * matrix, bool combine) {
  this_ptr->setWorldTransform(*matrix, combine);
}


RITUAL_EXPORT QTransform const * ctr_qt_gui_ffi_QPainter_worldTransform(QPainter const * this_ptr) {
  return &this_ptr->worldTransform();
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QPainter_combinedTransform(QPainter const * this_ptr) {
  return new QTransform(this_ptr->combinedTransform());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setWorldMatrixEnabled(QPainter * this_ptr, bool enabled) {
  this_ptr->setWorldMatrixEnabled(enabled);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainter_worldMatrixEnabled(QPainter const * this_ptr) {
  return this_ptr->worldMatrixEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_scale(QPainter * this_ptr, double sx, double sy) {
  this_ptr->scale(sx, sy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_shear(QPainter * this_ptr, double sh, double sv) {
  this_ptr->shear(sh, sv);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_rotate(QPainter * this_ptr, double a) {
  this_ptr->rotate(a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_translate(QPainter * this_ptr, QPointF const * offset) {
  this_ptr->translate(*offset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_translate1(QPainter * this_ptr, QPoint const * offset) {
  this_ptr->translate(*offset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_translate2(QPainter * this_ptr, double dx, double dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPainter_window(QPainter const * this_ptr) {
  return new QRect(this_ptr->window());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setWindow(QPainter * this_ptr, QRect const * window) {
  this_ptr->setWindow(*window);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setWindow1(QPainter * this_ptr, int x, int y, int w, int h) {
  this_ptr->setWindow(x, y, w, h);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPainter_viewport(QPainter const * this_ptr) {
  return new QRect(this_ptr->viewport());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setViewport(QPainter * this_ptr, QRect const * viewport) {
  this_ptr->setViewport(*viewport);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setViewport1(QPainter * this_ptr, int x, int y, int w, int h) {
  this_ptr->setViewport(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setViewTransformEnabled(QPainter * this_ptr, bool enable) {
  this_ptr->setViewTransformEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainter_viewTransformEnabled(QPainter const * this_ptr) {
  return this_ptr->viewTransformEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_strokePath(QPainter * this_ptr, QPainterPath const * path, QPen const * pen) {
  this_ptr->strokePath(*path, *pen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillPath(QPainter * this_ptr, QPainterPath const * path, QBrush const * brush) {
  this_ptr->fillPath(*path, *brush);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPath(QPainter * this_ptr, QPainterPath const * path) {
  this_ptr->drawPath(*path);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPoint(QPainter * this_ptr, QPointF const * pt) {
  this_ptr->drawPoint(*pt);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPoint1(QPainter * this_ptr, QPoint const * p) {
  this_ptr->drawPoint(*p);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPoint2(QPainter * this_ptr, int x, int y) {
  this_ptr->drawPoint(x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPoints(QPainter * this_ptr, QPointF const * points, int pointCount) {
  this_ptr->drawPoints(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPoints1(QPainter * this_ptr, QPolygonF const * points) {
  this_ptr->drawPoints(*points);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPoints2(QPainter * this_ptr, QPoint const * points, int pointCount) {
  this_ptr->drawPoints(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPoints3(QPainter * this_ptr, QPolygon const * points) {
  this_ptr->drawPoints(*points);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLine(QPainter * this_ptr, QLineF const * line) {
  this_ptr->drawLine(*line);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLine1(QPainter * this_ptr, QLine const * line) {
  this_ptr->drawLine(*line);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLine2(QPainter * this_ptr, int x1, int y1, int x2, int y2) {
  this_ptr->drawLine(x1, y1, x2, y2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLine3(QPainter * this_ptr, QPoint const * p1, QPoint const * p2) {
  this_ptr->drawLine(*p1, *p2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLine4(QPainter * this_ptr, QPointF const * p1, QPointF const * p2) {
  this_ptr->drawLine(*p1, *p2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines(QPainter * this_ptr, QLineF const * lines, int lineCount) {
  this_ptr->drawLines(lines, lineCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines1(QPainter * this_ptr, QList< QLineF > const * lines) {
  this_ptr->drawLines(*lines);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines2(QPainter * this_ptr, QPointF const * pointPairs, int lineCount) {
  this_ptr->drawLines(pointPairs, lineCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines3(QPainter * this_ptr, QList< QPointF > const * pointPairs) {
  this_ptr->drawLines(*pointPairs);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines4(QPainter * this_ptr, QLine const * lines, int lineCount) {
  this_ptr->drawLines(lines, lineCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines5(QPainter * this_ptr, QList< QLine > const * lines) {
  this_ptr->drawLines(*lines);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines6(QPainter * this_ptr, QPoint const * pointPairs, int lineCount) {
  this_ptr->drawLines(pointPairs, lineCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawLines7(QPainter * this_ptr, QList< QPoint > const * pointPairs) {
  this_ptr->drawLines(*pointPairs);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRect(QPainter * this_ptr, QRectF const * rect) {
  this_ptr->drawRect(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRect1(QPainter * this_ptr, int x1, int y1, int w, int h) {
  this_ptr->drawRect(x1, y1, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRect2(QPainter * this_ptr, QRect const * rect) {
  this_ptr->drawRect(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRects(QPainter * this_ptr, QRectF const * rects, int rectCount) {
  this_ptr->drawRects(rects, rectCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRects1(QPainter * this_ptr, QList< QRectF > const * rectangles) {
  this_ptr->drawRects(*rectangles);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRects2(QPainter * this_ptr, QRect const * rects, int rectCount) {
  this_ptr->drawRects(rects, rectCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRects3(QPainter * this_ptr, QList< QRect > const * rectangles) {
  this_ptr->drawRects(*rectangles);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawEllipse(QPainter * this_ptr, QRectF const * r) {
  this_ptr->drawEllipse(*r);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawEllipse1(QPainter * this_ptr, QRect const * r) {
  this_ptr->drawEllipse(*r);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawEllipse2(QPainter * this_ptr, int x, int y, int w, int h) {
  this_ptr->drawEllipse(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawEllipse3(QPainter * this_ptr, QPointF const * center, double rx, double ry) {
  this_ptr->drawEllipse(*center, rx, ry);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawEllipse4(QPainter * this_ptr, QPoint const * center, int rx, int ry) {
  this_ptr->drawEllipse(*center, rx, ry);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolyline(QPainter * this_ptr, QPointF const * points, int pointCount) {
  this_ptr->drawPolyline(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolyline1(QPainter * this_ptr, QPolygonF const * polyline) {
  this_ptr->drawPolyline(*polyline);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolyline2(QPainter * this_ptr, QPoint const * points, int pointCount) {
  this_ptr->drawPolyline(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolyline3(QPainter * this_ptr, QPolygon const * polygon) {
  this_ptr->drawPolyline(*polygon);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon(QPainter * this_ptr, QPointF const * points, int pointCount, Qt::FillRule fillRule) {
  this_ptr->drawPolygon(points, pointCount, fillRule);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon1(QPainter * this_ptr, QPolygonF const * polygon, Qt::FillRule fillRule) {
  this_ptr->drawPolygon(*polygon, fillRule);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon2(QPainter * this_ptr, QPoint const * points, int pointCount, Qt::FillRule fillRule) {
  this_ptr->drawPolygon(points, pointCount, fillRule);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPolygon3(QPainter * this_ptr, QPolygon const * polygon, Qt::FillRule fillRule) {
  this_ptr->drawPolygon(*polygon, fillRule);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawConvexPolygon(QPainter * this_ptr, QPointF const * points, int pointCount) {
  this_ptr->drawConvexPolygon(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawConvexPolygon1(QPainter * this_ptr, QPolygonF const * polygon) {
  this_ptr->drawConvexPolygon(*polygon);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawConvexPolygon2(QPainter * this_ptr, QPoint const * points, int pointCount) {
  this_ptr->drawConvexPolygon(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawConvexPolygon3(QPainter * this_ptr, QPolygon const * polygon) {
  this_ptr->drawConvexPolygon(*polygon);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawArc(QPainter * this_ptr, QRectF const * rect, int a, int alen) {
  this_ptr->drawArc(*rect, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawArc1(QPainter * this_ptr, QRect const * arg1, int a, int alen) {
  this_ptr->drawArc(*arg1, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawArc2(QPainter * this_ptr, int x, int y, int w, int h, int a, int alen) {
  this_ptr->drawArc(x, y, w, h, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPie(QPainter * this_ptr, QRectF const * rect, int a, int alen) {
  this_ptr->drawPie(*rect, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPie1(QPainter * this_ptr, int x, int y, int w, int h, int a, int alen) {
  this_ptr->drawPie(x, y, w, h, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPie2(QPainter * this_ptr, QRect const * arg1, int a, int alen) {
  this_ptr->drawPie(*arg1, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawChord(QPainter * this_ptr, QRectF const * rect, int a, int alen) {
  this_ptr->drawChord(*rect, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawChord1(QPainter * this_ptr, int x, int y, int w, int h, int a, int alen) {
  this_ptr->drawChord(x, y, w, h, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawChord2(QPainter * this_ptr, QRect const * arg1, int a, int alen) {
  this_ptr->drawChord(*arg1, a, alen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRoundedRect(QPainter * this_ptr, QRectF const * rect, double xRadius, double yRadius, Qt::SizeMode mode) {
  this_ptr->drawRoundedRect(*rect, xRadius, yRadius, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRoundedRect1(QPainter * this_ptr, int x, int y, int w, int h, double xRadius, double yRadius, Qt::SizeMode mode) {
  this_ptr->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawRoundedRect2(QPainter * this_ptr, QRect const * rect, double xRadius, double yRadius, Qt::SizeMode mode) {
  this_ptr->drawRoundedRect(*rect, xRadius, yRadius, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTiledPixmap(QPainter * this_ptr, QRectF const * rect, QPixmap const * pm, QPointF const * offset) {
  this_ptr->drawTiledPixmap(*rect, *pm, *offset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTiledPixmap1(QPainter * this_ptr, int x, int y, int w, int h, QPixmap const * arg5, int sx, int sy) {
  this_ptr->drawTiledPixmap(x, y, w, h, *arg5, sx, sy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTiledPixmap2(QPainter * this_ptr, QRect const * arg1, QPixmap const * arg2, QPoint const * arg3) {
  this_ptr->drawTiledPixmap(*arg1, *arg2, *arg3);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPicture(QPainter * this_ptr, QPointF const * p, QPicture const * picture) {
  this_ptr->drawPicture(*p, *picture);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPicture1(QPainter * this_ptr, int x, int y, QPicture const * picture) {
  this_ptr->drawPicture(x, y, *picture);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPicture2(QPainter * this_ptr, QPoint const * p, QPicture const * picture) {
  this_ptr->drawPicture(*p, *picture);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap(QPainter * this_ptr, QRectF const * targetRect, QPixmap const * pixmap, QRectF const * sourceRect) {
  this_ptr->drawPixmap(*targetRect, *pixmap, *sourceRect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap1(QPainter * this_ptr, QRect const * targetRect, QPixmap const * pixmap, QRect const * sourceRect) {
  this_ptr->drawPixmap(*targetRect, *pixmap, *sourceRect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap2(QPainter * this_ptr, int x, int y, int w, int h, QPixmap const * pm, int sx, int sy, int sw, int sh) {
  this_ptr->drawPixmap(x, y, w, h, *pm, sx, sy, sw, sh);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap3(QPainter * this_ptr, int x, int y, QPixmap const * pm, int sx, int sy, int sw, int sh) {
  this_ptr->drawPixmap(x, y, *pm, sx, sy, sw, sh);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap4(QPainter * this_ptr, QPointF const * p, QPixmap const * pm, QRectF const * sr) {
  this_ptr->drawPixmap(*p, *pm, *sr);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap5(QPainter * this_ptr, QPoint const * p, QPixmap const * pm, QRect const * sr) {
  this_ptr->drawPixmap(*p, *pm, *sr);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap6(QPainter * this_ptr, QPointF const * p, QPixmap const * pm) {
  this_ptr->drawPixmap(*p, *pm);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap7(QPainter * this_ptr, QPoint const * p, QPixmap const * pm) {
  this_ptr->drawPixmap(*p, *pm);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap8(QPainter * this_ptr, int x, int y, QPixmap const * pm) {
  this_ptr->drawPixmap(x, y, *pm);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap9(QPainter * this_ptr, QRect const * r, QPixmap const * pm) {
  this_ptr->drawPixmap(*r, *pm);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmap10(QPainter * this_ptr, int x, int y, int w, int h, QPixmap const * pm) {
  this_ptr->drawPixmap(x, y, w, h, *pm);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawPixmapFragments(QPainter * this_ptr, QPainter::PixmapFragment const * fragments, int fragmentCount, QPixmap const * pixmap, int hints) {
  this_ptr->drawPixmapFragments(fragments, fragmentCount, *pixmap, QFlags< QPainter::PixmapFragmentHint >(hints));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage(QPainter * this_ptr, QRectF const * targetRect, QImage const * image, QRectF const * sourceRect, int flags) {
  this_ptr->drawImage(*targetRect, *image, *sourceRect, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage1(QPainter * this_ptr, QRect const * targetRect, QImage const * image, QRect const * sourceRect, int flags) {
  this_ptr->drawImage(*targetRect, *image, *sourceRect, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage2(QPainter * this_ptr, QPointF const * p, QImage const * image, QRectF const * sr, int flags) {
  this_ptr->drawImage(*p, *image, *sr, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage3(QPainter * this_ptr, QPoint const * p, QImage const * image, QRect const * sr, int flags) {
  this_ptr->drawImage(*p, *image, *sr, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage4(QPainter * this_ptr, QRectF const * r, QImage const * image) {
  this_ptr->drawImage(*r, *image);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage5(QPainter * this_ptr, QRect const * r, QImage const * image) {
  this_ptr->drawImage(*r, *image);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage6(QPainter * this_ptr, QPointF const * p, QImage const * image) {
  this_ptr->drawImage(*p, *image);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage7(QPainter * this_ptr, QPoint const * p, QImage const * image) {
  this_ptr->drawImage(*p, *image);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawImage8(QPainter * this_ptr, int x, int y, QImage const * image, int sx, int sy, int sw, int sh, int flags) {
  this_ptr->drawImage(x, y, *image, sx, sy, sw, sh, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setLayoutDirection(QPainter * this_ptr, Qt::LayoutDirection direction) {
  this_ptr->setLayoutDirection(direction);
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_gui_ffi_QPainter_layoutDirection(QPainter const * this_ptr) {
  return this_ptr->layoutDirection();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawGlyphRun(QPainter * this_ptr, QPointF const * position, QGlyphRun const * glyphRun) {
  this_ptr->drawGlyphRun(*position, *glyphRun);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawStaticText(QPainter * this_ptr, QPointF const * topLeftPosition, QStaticText const * staticText) {
  this_ptr->drawStaticText(*topLeftPosition, *staticText);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawStaticText1(QPainter * this_ptr, QPoint const * topLeftPosition, QStaticText const * staticText) {
  this_ptr->drawStaticText(*topLeftPosition, *staticText);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawStaticText2(QPainter * this_ptr, int left, int top, QStaticText const * staticText) {
  this_ptr->drawStaticText(left, top, *staticText);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText(QPainter * this_ptr, QPointF const * p, QString const * s) {
  this_ptr->drawText(*p, *s);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText1(QPainter * this_ptr, QPoint const * p, QString const * s) {
  this_ptr->drawText(*p, *s);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText2(QPainter * this_ptr, int x, int y, QString const * s) {
  this_ptr->drawText(x, y, *s);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText3(QPainter * this_ptr, QPointF const * p, QString const * str, int tf, int justificationPadding) {
  this_ptr->drawText(*p, *str, tf, justificationPadding);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText4(QPainter * this_ptr, QRectF const * r, int flags, QString const * text, QRectF * br) {
  this_ptr->drawText(*r, flags, *text, br);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText5(QPainter * this_ptr, QRect const * r, int flags, QString const * text, QRect * br) {
  this_ptr->drawText(*r, flags, *text, br);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText6(QPainter * this_ptr, int x, int y, int w, int h, int flags, QString const * text, QRect * br) {
  this_ptr->drawText(x, y, w, h, flags, *text, br);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawText7(QPainter * this_ptr, QRectF const * r, QString const * text, QTextOption const * o) {
  this_ptr->drawText(*r, *text, *o);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPainter_boundingRect(QPainter * this_ptr, QRectF const * rect, int flags, QString const * text) {
  return new QRectF(this_ptr->boundingRect(*rect, flags, *text));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPainter_boundingRect1(QPainter * this_ptr, QRect const * rect, int flags, QString const * text) {
  return new QRect(this_ptr->boundingRect(*rect, flags, *text));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPainter_boundingRect2(QPainter * this_ptr, int x, int y, int w, int h, int flags, QString const * text) {
  return new QRect(this_ptr->boundingRect(x, y, w, h, flags, *text));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPainter_boundingRect3(QPainter * this_ptr, QRectF const * rect, QString const * text, QTextOption const * o) {
  return new QRectF(this_ptr->boundingRect(*rect, *text, *o));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTextItem(QPainter * this_ptr, QPointF const * p, QTextItem const * ti) {
  this_ptr->drawTextItem(*p, *ti);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTextItem1(QPainter * this_ptr, int x, int y, QTextItem const * ti) {
  this_ptr->drawTextItem(x, y, *ti);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_drawTextItem2(QPainter * this_ptr, QPoint const * p, QTextItem const * ti) {
  this_ptr->drawTextItem(*p, *ti);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect(QPainter * this_ptr, QRectF const * arg1, QBrush const * arg2) {
  this_ptr->fillRect(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect1(QPainter * this_ptr, int x, int y, int w, int h, QBrush const * arg5) {
  this_ptr->fillRect(x, y, w, h, *arg5);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect2(QPainter * this_ptr, QRect const * arg1, QBrush const * arg2) {
  this_ptr->fillRect(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect3(QPainter * this_ptr, QRectF const * arg1, QColor const * color) {
  this_ptr->fillRect(*arg1, *color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect4(QPainter * this_ptr, int x, int y, int w, int h, QColor const * color) {
  this_ptr->fillRect(x, y, w, h, *color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect5(QPainter * this_ptr, QRect const * arg1, QColor const * color) {
  this_ptr->fillRect(*arg1, *color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect6(QPainter * this_ptr, int x, int y, int w, int h, Qt::GlobalColor c) {
  this_ptr->fillRect(x, y, w, h, c);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect7(QPainter * this_ptr, QRect const * r, Qt::GlobalColor c) {
  this_ptr->fillRect(*r, c);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect8(QPainter * this_ptr, QRectF const * r, Qt::GlobalColor c) {
  this_ptr->fillRect(*r, c);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect9(QPainter * this_ptr, int x, int y, int w, int h, Qt::BrushStyle style) {
  this_ptr->fillRect(x, y, w, h, style);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect10(QPainter * this_ptr, QRect const * r, Qt::BrushStyle style) {
  this_ptr->fillRect(*r, style);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect11(QPainter * this_ptr, QRectF const * r, Qt::BrushStyle style) {
  this_ptr->fillRect(*r, style);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect12(QPainter * this_ptr, int x, int y, int w, int h, QGradient::Preset preset) {
  this_ptr->fillRect(x, y, w, h, preset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect13(QPainter * this_ptr, QRect const * r, QGradient::Preset preset) {
  this_ptr->fillRect(*r, preset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_fillRect14(QPainter * this_ptr, QRectF const * r, QGradient::Preset preset) {
  this_ptr->fillRect(*r, preset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_eraseRect(QPainter * this_ptr, QRectF const * arg1) {
  this_ptr->eraseRect(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_eraseRect1(QPainter * this_ptr, int x, int y, int w, int h) {
  this_ptr->eraseRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_eraseRect2(QPainter * this_ptr, QRect const * arg1) {
  this_ptr->eraseRect(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setRenderHint(QPainter * this_ptr, QPainter::RenderHint hint, bool on) {
  this_ptr->setRenderHint(hint, on);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_setRenderHints(QPainter * this_ptr, int hints, bool on) {
  this_ptr->setRenderHints(QFlags< QPainter::RenderHint >(hints), on);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPainter_renderHints(QPainter const * this_ptr) {
  return int(this_ptr->renderHints());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainter_testRenderHint(QPainter const * this_ptr, QPainter::RenderHint hint) {
  return this_ptr->testRenderHint(hint);
}


RITUAL_EXPORT QPaintEngine * ctr_qt_gui_ffi_QPainter_paintEngine(QPainter const * this_ptr) {
  return this_ptr->paintEngine();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_beginNativePainting(QPainter * this_ptr) {
  this_ptr->beginNativePainting();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_endNativePainting(QPainter * this_ptr) {
  this_ptr->endNativePainting();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextItem_descent(QTextItem const * this_ptr) {
  return this_ptr->descent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextItem_ascent(QTextItem const * this_ptr) {
  return this_ptr->ascent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextItem_width(QTextItem const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextItem_renderFlags(QTextItem const * this_ptr) {
  return int(this_ptr->renderFlags());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextItem_text(QTextItem const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QTextItem_font(QTextItem const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_dQPaintEngine(QPaintEngine * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngine_isActive(QPaintEngine const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_setActive(QPaintEngine * this_ptr, bool newState) {
  this_ptr->setActive(newState);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngine_begin(QPaintEngine * this_ptr, QPaintDevice * pdev) {
  return this_ptr->begin(pdev);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngine_end(QPaintEngine * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_updateState(QPaintEngine * this_ptr, QPaintEngineState const * state) {
  this_ptr->updateState(*state);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawRects(QPaintEngine * this_ptr, QRect const * rects, int rectCount) {
  this_ptr->drawRects(rects, rectCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawRects1(QPaintEngine * this_ptr, QRectF const * rects, int rectCount) {
  this_ptr->drawRects(rects, rectCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawLines(QPaintEngine * this_ptr, QLine const * lines, int lineCount) {
  this_ptr->drawLines(lines, lineCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawLines1(QPaintEngine * this_ptr, QLineF const * lines, int lineCount) {
  this_ptr->drawLines(lines, lineCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawEllipse(QPaintEngine * this_ptr, QRectF const * r) {
  this_ptr->drawEllipse(*r);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawEllipse1(QPaintEngine * this_ptr, QRect const * r) {
  this_ptr->drawEllipse(*r);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawPath(QPaintEngine * this_ptr, QPainterPath const * path) {
  this_ptr->drawPath(*path);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawPoints(QPaintEngine * this_ptr, QPointF const * points, int pointCount) {
  this_ptr->drawPoints(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawPoints1(QPaintEngine * this_ptr, QPoint const * points, int pointCount) {
  this_ptr->drawPoints(points, pointCount);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawPolygon(QPaintEngine * this_ptr, QPointF const * points, int pointCount, QPaintEngine::PolygonDrawMode mode) {
  this_ptr->drawPolygon(points, pointCount, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawPolygon1(QPaintEngine * this_ptr, QPoint const * points, int pointCount, QPaintEngine::PolygonDrawMode mode) {
  this_ptr->drawPolygon(points, pointCount, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawPixmap(QPaintEngine * this_ptr, QRectF const * r, QPixmap const * pm, QRectF const * sr) {
  this_ptr->drawPixmap(*r, *pm, *sr);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawTextItem(QPaintEngine * this_ptr, QPointF const * p, QTextItem const * textItem) {
  this_ptr->drawTextItem(*p, *textItem);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawTiledPixmap(QPaintEngine * this_ptr, QRectF const * r, QPixmap const * pixmap, QPointF const * s) {
  this_ptr->drawTiledPixmap(*r, *pixmap, *s);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_drawImage(QPaintEngine * this_ptr, QRectF const * r, QImage const * pm, QRectF const * sr, int flags) {
  this_ptr->drawImage(*r, *pm, *sr, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_setPaintDevice(QPaintEngine * this_ptr, QPaintDevice * device) {
  this_ptr->setPaintDevice(device);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_QPaintEngine_paintDevice(QPaintEngine const * this_ptr) {
  return this_ptr->paintDevice();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_setSystemClip(QPaintEngine * this_ptr, QRegion const * baseClip) {
  this_ptr->setSystemClip(*baseClip);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QPaintEngine_systemClip(QPaintEngine const * this_ptr) {
  return new QRegion(this_ptr->systemClip());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_setSystemRect(QPaintEngine * this_ptr, QRect const * rect) {
  this_ptr->setSystemRect(*rect);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPaintEngine_systemRect(QPaintEngine const * this_ptr) {
  return new QRect(this_ptr->systemRect());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QPaintEngine_coordinateOffset(QPaintEngine const * this_ptr) {
  return new QPoint(this_ptr->coordinateOffset());
}


RITUAL_EXPORT QPaintEngine::Type ctr_qt_gui_ffi_QPaintEngine_type(QPaintEngine const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_fix_neg_rect(QPaintEngine * this_ptr, int * x, int * y, int * w, int * h) {
  this_ptr->fix_neg_rect(x, y, w, h);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngine_testDirty(QPaintEngine * this_ptr, int df) {
  return this_ptr->testDirty(QFlags< QPaintEngine::DirtyFlag >(df));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_setDirty(QPaintEngine * this_ptr, int df) {
  this_ptr->setDirty(QFlags< QPaintEngine::DirtyFlag >(df));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_clearDirty(QPaintEngine * this_ptr, int df) {
  this_ptr->clearDirty(QFlags< QPaintEngine::DirtyFlag >(df));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngine_hasFeature(QPaintEngine const * this_ptr, int feature) {
  return this_ptr->hasFeature(QFlags< QPaintEngine::PaintEngineFeature >(feature));
}


RITUAL_EXPORT QPainter * ctr_qt_gui_ffi_QPaintEngine_painter(QPaintEngine const * this_ptr) {
  return this_ptr->painter();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngine_syncState(QPaintEngine * this_ptr) {
  this_ptr->syncState();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngine_isExtended(QPaintEngine const * this_ptr) {
  return this_ptr->isExtended();
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPaintEngine_createPixmap(QPaintEngine * this_ptr, QSize const * size) {
  return new QPixmap(this_ptr->createPixmap(*size));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPaintEngine_createPixmapFromImage(QPaintEngine * this_ptr, QImage const * image, int flags) {
  return new QPixmap(this_ptr->createPixmapFromImage(*image, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintEngineState_state(QPaintEngineState const * this_ptr) {
  return int(this_ptr->state());
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPaintEngineState_pen(QPaintEngineState const * this_ptr) {
  return new QPen(this_ptr->pen());
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QPaintEngineState_brush(QPaintEngineState const * this_ptr) {
  return new QBrush(this_ptr->brush());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QPaintEngineState_brushOrigin(QPaintEngineState const * this_ptr) {
  return new QPointF(this_ptr->brushOrigin());
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QPaintEngineState_backgroundBrush(QPaintEngineState const * this_ptr) {
  return new QBrush(this_ptr->backgroundBrush());
}


RITUAL_EXPORT Qt::BGMode ctr_qt_gui_ffi_QPaintEngineState_backgroundMode(QPaintEngineState const * this_ptr) {
  return this_ptr->backgroundMode();
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QPaintEngineState_font(QPaintEngineState const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QPaintEngineState_transform(QPaintEngineState const * this_ptr) {
  return new QTransform(this_ptr->transform());
}


RITUAL_EXPORT Qt::ClipOperation ctr_qt_gui_ffi_QPaintEngineState_clipOperation(QPaintEngineState const * this_ptr) {
  return this_ptr->clipOperation();
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QPaintEngineState_clipRegion(QPaintEngineState const * this_ptr) {
  return new QRegion(this_ptr->clipRegion());
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPaintEngineState_clipPath(QPaintEngineState const * this_ptr) {
  return new QPainterPath(this_ptr->clipPath());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngineState_isClipEnabled(QPaintEngineState const * this_ptr) {
  return this_ptr->isClipEnabled();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintEngineState_renderHints(QPaintEngineState const * this_ptr) {
  return int(this_ptr->renderHints());
}


RITUAL_EXPORT QPainter::CompositionMode ctr_qt_gui_ffi_QPaintEngineState_compositionMode(QPaintEngineState const * this_ptr) {
  return this_ptr->compositionMode();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPaintEngineState_opacity(QPaintEngineState const * this_ptr) {
  return this_ptr->opacity();
}


RITUAL_EXPORT QPainter * ctr_qt_gui_ffi_QPaintEngineState_painter(QPaintEngineState const * this_ptr) {
  return this_ptr->painter();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngineState_brushNeedsResolving(QPaintEngineState const * this_ptr) {
  return this_ptr->brushNeedsResolving();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintEngineState_penNeedsResolving(QPaintEngineState const * this_ptr) {
  return this_ptr->penNeedsResolving();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_Element_isMoveTo(QPainterPath::Element const * this_ptr) {
  return this_ptr->isMoveTo();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_Element_isLineTo(QPainterPath::Element const * this_ptr) {
  return this_ptr->isLineTo();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_Element_isCurveTo(QPainterPath::Element const * this_ptr) {
  return this_ptr->isCurveTo();
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QPainterPath_Element_operator_QPointF(QPainterPath::Element const * this_ptr) {
  return new QPointF(this_ptr->operator QPointF());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_Element_operator__(QPainterPath::Element const * this_ptr, QPainterPath::Element const * e) {
  return this_ptr->operator==(*e);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_QPainterPath() {
  return new QPainterPath();
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_QPainterPath1(QPointF const * startPoint) {
  return new QPainterPath(*startPoint);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_QPainterPath2(QPainterPath const * other) {
  return new QPainterPath(*other);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator_(QPainterPath * this_ptr, QPainterPath const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_dQPainterPath(QPainterPath * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_swap(QPainterPath * this_ptr, QPainterPath * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_clear(QPainterPath * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_reserve(QPainterPath * this_ptr, int size) {
  this_ptr->reserve(size);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPainterPath_capacity(QPainterPath const * this_ptr) {
  return this_ptr->capacity();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_closeSubpath(QPainterPath * this_ptr) {
  this_ptr->closeSubpath();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_moveTo(QPainterPath * this_ptr, QPointF const * p) {
  this_ptr->moveTo(*p);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_moveTo1(QPainterPath * this_ptr, double x, double y) {
  this_ptr->moveTo(x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_lineTo(QPainterPath * this_ptr, QPointF const * p) {
  this_ptr->lineTo(*p);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_lineTo1(QPainterPath * this_ptr, double x, double y) {
  this_ptr->lineTo(x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_arcMoveTo(QPainterPath * this_ptr, QRectF const * rect, double angle) {
  this_ptr->arcMoveTo(*rect, angle);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_arcMoveTo1(QPainterPath * this_ptr, double x, double y, double w, double h, double angle) {
  this_ptr->arcMoveTo(x, y, w, h, angle);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_arcTo(QPainterPath * this_ptr, QRectF const * rect, double startAngle, double arcLength) {
  this_ptr->arcTo(*rect, startAngle, arcLength);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_arcTo1(QPainterPath * this_ptr, double x, double y, double w, double h, double startAngle, double arcLength) {
  this_ptr->arcTo(x, y, w, h, startAngle, arcLength);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_cubicTo(QPainterPath * this_ptr, QPointF const * ctrlPt1, QPointF const * ctrlPt2, QPointF const * endPt) {
  this_ptr->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_cubicTo1(QPainterPath * this_ptr, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
  this_ptr->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_quadTo(QPainterPath * this_ptr, QPointF const * ctrlPt, QPointF const * endPt) {
  this_ptr->quadTo(*ctrlPt, *endPt);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_quadTo1(QPainterPath * this_ptr, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
  this_ptr->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QPainterPath_currentPosition(QPainterPath const * this_ptr) {
  return new QPointF(this_ptr->currentPosition());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addRect(QPainterPath * this_ptr, QRectF const * rect) {
  this_ptr->addRect(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addRect1(QPainterPath * this_ptr, double x, double y, double w, double h) {
  this_ptr->addRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addEllipse(QPainterPath * this_ptr, QRectF const * rect) {
  this_ptr->addEllipse(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addEllipse1(QPainterPath * this_ptr, double x, double y, double w, double h) {
  this_ptr->addEllipse(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addEllipse2(QPainterPath * this_ptr, QPointF const * center, double rx, double ry) {
  this_ptr->addEllipse(*center, rx, ry);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addPolygon(QPainterPath * this_ptr, QPolygonF const * polygon) {
  this_ptr->addPolygon(*polygon);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addText(QPainterPath * this_ptr, QPointF const * point, QFont const * f, QString const * text) {
  this_ptr->addText(*point, *f, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addText1(QPainterPath * this_ptr, double x, double y, QFont const * f, QString const * text) {
  this_ptr->addText(x, y, *f, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addPath(QPainterPath * this_ptr, QPainterPath const * path) {
  this_ptr->addPath(*path);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addRegion(QPainterPath * this_ptr, QRegion const * region) {
  this_ptr->addRegion(*region);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addRoundedRect(QPainterPath * this_ptr, QRectF const * rect, double xRadius, double yRadius, Qt::SizeMode mode) {
  this_ptr->addRoundedRect(*rect, xRadius, yRadius, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_addRoundedRect1(QPainterPath * this_ptr, double x, double y, double w, double h, double xRadius, double yRadius, Qt::SizeMode mode) {
  this_ptr->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_connectPath(QPainterPath * this_ptr, QPainterPath const * path) {
  this_ptr->connectPath(*path);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_contains(QPainterPath const * this_ptr, QPointF const * pt) {
  return this_ptr->contains(*pt);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_contains1(QPainterPath const * this_ptr, QRectF const * rect) {
  return this_ptr->contains(*rect);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_intersects(QPainterPath const * this_ptr, QRectF const * rect) {
  return this_ptr->intersects(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_translate(QPainterPath * this_ptr, double dx, double dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_translate1(QPainterPath * this_ptr, QPointF const * offset) {
  this_ptr->translate(*offset);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_translated(QPainterPath const * this_ptr, double dx, double dy) {
  return new QPainterPath(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_translated1(QPainterPath const * this_ptr, QPointF const * offset) {
  return new QPainterPath(this_ptr->translated(*offset));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPainterPath_boundingRect(QPainterPath const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPainterPath_controlPointRect(QPainterPath const * this_ptr) {
  return new QRectF(this_ptr->controlPointRect());
}


RITUAL_EXPORT Qt::FillRule ctr_qt_gui_ffi_QPainterPath_fillRule(QPainterPath const * this_ptr) {
  return this_ptr->fillRule();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_setFillRule(QPainterPath * this_ptr, Qt::FillRule fillRule) {
  this_ptr->setFillRule(fillRule);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_isEmpty(QPainterPath const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_toReversed(QPainterPath const * this_ptr) {
  return new QPainterPath(this_ptr->toReversed());
}


RITUAL_EXPORT QList< QPolygonF > * ctr_qt_gui_ffi_QPainterPath_toSubpathPolygons(QPainterPath const * this_ptr, QTransform const * matrix) {
  return new QList< QPolygonF >(this_ptr->toSubpathPolygons(*matrix));
}


RITUAL_EXPORT QList< QPolygonF > * ctr_qt_gui_ffi_QPainterPath_toFillPolygons(QPainterPath const * this_ptr, QTransform const * matrix) {
  return new QList< QPolygonF >(this_ptr->toFillPolygons(*matrix));
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPainterPath_toFillPolygon(QPainterPath const * this_ptr, QTransform const * matrix) {
  return new QPolygonF(this_ptr->toFillPolygon(*matrix));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPainterPath_elementCount(QPainterPath const * this_ptr) {
  return this_ptr->elementCount();
}


RITUAL_EXPORT QPainterPath::Element * ctr_qt_gui_ffi_QPainterPath_elementAt(QPainterPath const * this_ptr, int i) {
  return new QPainterPath::Element(this_ptr->elementAt(i));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_setElementPositionAt(QPainterPath * this_ptr, int i, double x, double y) {
  this_ptr->setElementPositionAt(i, x, y);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_isCachingEnabled(QPainterPath const * this_ptr) {
  return this_ptr->isCachingEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_setCachingEnabled(QPainterPath * this_ptr, bool enabled) {
  this_ptr->setCachingEnabled(enabled);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPath_length(QPainterPath const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPath_percentAtLength(QPainterPath const * this_ptr, double len) {
  return this_ptr->percentAtLength(len);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QPainterPath_pointAtPercent(QPainterPath const * this_ptr, double t) {
  return new QPointF(this_ptr->pointAtPercent(t));
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPath_angleAtPercent(QPainterPath const * this_ptr, double t) {
  return this_ptr->angleAtPercent(t);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPath_slopeAtPercent(QPainterPath const * this_ptr, double t) {
  return this_ptr->slopeAtPercent(t);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_trimmed(QPainterPath const * this_ptr, double fromFraction, double toFraction, double offset) {
  return new QPainterPath(this_ptr->trimmed(fromFraction, toFraction, offset));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_intersects1(QPainterPath const * this_ptr, QPainterPath const * p) {
  return this_ptr->intersects(*p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_contains2(QPainterPath const * this_ptr, QPainterPath const * p) {
  return this_ptr->contains(*p);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_united(QPainterPath const * this_ptr, QPainterPath const * r) {
  return new QPainterPath(this_ptr->united(*r));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_intersected(QPainterPath const * this_ptr, QPainterPath const * r) {
  return new QPainterPath(this_ptr->intersected(*r));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_subtracted(QPainterPath const * this_ptr, QPainterPath const * r) {
  return new QPainterPath(this_ptr->subtracted(*r));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_simplified(QPainterPath const * this_ptr) {
  return new QPainterPath(this_ptr->simplified());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPainterPath_operator__(QPainterPath const * this_ptr, QPainterPath const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator_2(QPainterPath const * this_ptr, QPainterPath const * other) {
  return new QPainterPath(this_ptr->operator&(*other));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator_3(QPainterPath const * this_ptr, QPainterPath const * other) {
  return new QPainterPath(this_ptr->operator|(*other));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator_4(QPainterPath const * this_ptr, QPainterPath const * other) {
  return new QPainterPath(this_ptr->operator+(*other));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator_5(QPainterPath const * this_ptr, QPainterPath const * other) {
  return new QPainterPath(this_ptr->operator-(*other));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator__2(QPainterPath * this_ptr, QPainterPath const * other) {
  return &this_ptr->operator&=(*other);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator__3(QPainterPath * this_ptr, QPainterPath const * other) {
  return &this_ptr->operator|=(*other);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator__4(QPainterPath * this_ptr, QPainterPath const * other) {
  return &this_ptr->operator+=(*other);
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPath_operator__5(QPainterPath * this_ptr, QPainterPath const * other) {
  return &this_ptr->operator-=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap34(QPainterPath * value1, QPainterPath * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__77(QDataStream * arg1, QPainterPath const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__78(QDataStream * arg1, QPainterPath * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QPainterPathStroker * ctr_qt_gui_ffi_QPainterPathStroker_QPainterPathStroker() {
  return new QPainterPathStroker();
}


RITUAL_EXPORT QPainterPathStroker * ctr_qt_gui_ffi_QPainterPathStroker_QPainterPathStroker1(QPen const * pen) {
  return new QPainterPathStroker(*pen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_dQPainterPathStroker(QPainterPathStroker * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setWidth(QPainterPathStroker * this_ptr, double width) {
  this_ptr->setWidth(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPathStroker_width(QPainterPathStroker const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setCapStyle(QPainterPathStroker * this_ptr, Qt::PenCapStyle style) {
  this_ptr->setCapStyle(style);
}


RITUAL_EXPORT Qt::PenCapStyle ctr_qt_gui_ffi_QPainterPathStroker_capStyle(QPainterPathStroker const * this_ptr) {
  return this_ptr->capStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setJoinStyle(QPainterPathStroker * this_ptr, Qt::PenJoinStyle style) {
  this_ptr->setJoinStyle(style);
}


RITUAL_EXPORT Qt::PenJoinStyle ctr_qt_gui_ffi_QPainterPathStroker_joinStyle(QPainterPathStroker const * this_ptr) {
  return this_ptr->joinStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setMiterLimit(QPainterPathStroker * this_ptr, double length) {
  this_ptr->setMiterLimit(length);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPathStroker_miterLimit(QPainterPathStroker const * this_ptr) {
  return this_ptr->miterLimit();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setCurveThreshold(QPainterPathStroker * this_ptr, double threshold) {
  this_ptr->setCurveThreshold(threshold);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPathStroker_curveThreshold(QPainterPathStroker const * this_ptr) {
  return this_ptr->curveThreshold();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setDashPattern(QPainterPathStroker * this_ptr, Qt::PenStyle arg1) {
  this_ptr->setDashPattern(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setDashPattern1(QPainterPathStroker * this_ptr, QList< double > const * dashPattern) {
  this_ptr->setDashPattern(*dashPattern);
}


RITUAL_EXPORT QList< double > * ctr_qt_gui_ffi_QPainterPathStroker_dashPattern(QPainterPathStroker const * this_ptr) {
  return new QList< double >(this_ptr->dashPattern());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPathStroker_setDashOffset(QPainterPathStroker * this_ptr, double offset) {
  this_ptr->setDashOffset(offset);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPathStroker_dashOffset(QPainterPathStroker const * this_ptr) {
  return this_ptr->dashOffset();
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QPainterPathStroker_createStroke(QPainterPathStroker const * this_ptr, QPainterPath const * path) {
  return new QPainterPath(this_ptr->createStroke(*path));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_operator_235(QPainterPath const * p, QTransform const * m) {
  return new QPainterPath(operator*(*p, *m));
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__79(QDebug const * arg1, QPainterPath const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterStateGuard_swap(QPainterStateGuard * this_ptr, QPainterStateGuard * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QPainterStateGuard * ctr_qt_gui_ffi_QPainterStateGuard_QPainterStateGuard1(QPainter * painter, QPainterStateGuard::InitialState state) {
  return new QPainterStateGuard(painter, state);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterStateGuard_dQPainterStateGuard(QPainterStateGuard * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterStateGuard_save(QPainterStateGuard * this_ptr) {
  this_ptr->save();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterStateGuard_restore(QPainterStateGuard * this_ptr) {
  this_ptr->restore();
}


RITUAL_EXPORT QPdfOutputIntent * ctr_qt_gui_ffi_QPdfOutputIntent_QPdfOutputIntent() {
  return new QPdfOutputIntent();
}


RITUAL_EXPORT QPdfOutputIntent * ctr_qt_gui_ffi_QPdfOutputIntent_QPdfOutputIntent1(QPdfOutputIntent const * other) {
  return new QPdfOutputIntent(*other);
}


RITUAL_EXPORT QPdfOutputIntent * ctr_qt_gui_ffi_QPdfOutputIntent_operator_(QPdfOutputIntent * this_ptr, QPdfOutputIntent const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfOutputIntent_dQPdfOutputIntent(QPdfOutputIntent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfOutputIntent_swap(QPdfOutputIntent * this_ptr, QPdfOutputIntent * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPdfOutputIntent_outputConditionIdentifier(QPdfOutputIntent const * this_ptr) {
  return new QString(this_ptr->outputConditionIdentifier());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfOutputIntent_setOutputConditionIdentifier(QPdfOutputIntent * this_ptr, QString const * identifier) {
  this_ptr->setOutputConditionIdentifier(*identifier);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPdfOutputIntent_outputCondition(QPdfOutputIntent const * this_ptr) {
  return new QString(this_ptr->outputCondition());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfOutputIntent_setOutputCondition(QPdfOutputIntent * this_ptr, QString const * condition) {
  this_ptr->setOutputCondition(*condition);
}


RITUAL_EXPORT QUrl * ctr_qt_gui_ffi_QPdfOutputIntent_registryName(QPdfOutputIntent const * this_ptr) {
  return new QUrl(this_ptr->registryName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfOutputIntent_setRegistryName(QPdfOutputIntent * this_ptr, QUrl const * name) {
  this_ptr->setRegistryName(*name);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QPdfOutputIntent_outputProfile(QPdfOutputIntent const * this_ptr) {
  return new QColorSpace(this_ptr->outputProfile());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfOutputIntent_setOutputProfile(QPdfOutputIntent * this_ptr, QColorSpace const * profile) {
  this_ptr->setOutputProfile(*profile);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap35(QPdfOutputIntent * value1, QPdfOutputIntent * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPdfWriter_metaObject(QPdfWriter const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QPdfWriter_qt_metacast(QPdfWriter * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPdfWriter_qt_metacall(QPdfWriter * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPdfWriter_tr(char const * s, char const * c, int n) {
  return new QString(QPdfWriter::tr(s, c, n));
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_QPdfWriter_QPdfWriter(QString const * filename) {
  return new QPdfWriter(*filename);
}


RITUAL_EXPORT QPdfWriter * ctr_qt_gui_ffi_QPdfWriter_QPdfWriter1(QIODevice * device) {
  return new QPdfWriter(device);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_dQPdfWriter(QPdfWriter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setPdfVersion(QPdfWriter * this_ptr, QPagedPaintDevice::PdfVersion version) {
  this_ptr->setPdfVersion(version);
}


RITUAL_EXPORT QPagedPaintDevice::PdfVersion ctr_qt_gui_ffi_QPdfWriter_pdfVersion(QPdfWriter const * this_ptr) {
  return this_ptr->pdfVersion();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPdfWriter_title(QPdfWriter const * this_ptr) {
  return new QString(this_ptr->title());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setTitle(QPdfWriter * this_ptr, QString const * title) {
  this_ptr->setTitle(*title);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPdfWriter_creator(QPdfWriter const * this_ptr) {
  return new QString(this_ptr->creator());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setCreator(QPdfWriter * this_ptr, QString const * creator) {
  this_ptr->setCreator(*creator);
}


RITUAL_EXPORT QUuid * ctr_qt_gui_ffi_QPdfWriter_documentId(QPdfWriter const * this_ptr) {
  return new QUuid(this_ptr->documentId());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setDocumentId(QPdfWriter * this_ptr, QUuid const * documentId) {
  this_ptr->setDocumentId(*documentId);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPdfWriter_author(QPdfWriter const * this_ptr) {
  return new QString(this_ptr->author());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setAuthor(QPdfWriter * this_ptr, QString const * author) {
  this_ptr->setAuthor(*author);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPdfWriter_newPage(QPdfWriter * this_ptr) {
  return this_ptr->newPage();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setResolution(QPdfWriter * this_ptr, int resolution) {
  this_ptr->setResolution(resolution);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPdfWriter_resolution(QPdfWriter const * this_ptr) {
  return this_ptr->resolution();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setDocumentXmpMetadata(QPdfWriter * this_ptr, QByteArray const * xmpMetadata) {
  this_ptr->setDocumentXmpMetadata(*xmpMetadata);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QPdfWriter_documentXmpMetadata(QPdfWriter const * this_ptr) {
  return new QByteArray(this_ptr->documentXmpMetadata());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_addFileAttachment(QPdfWriter * this_ptr, QString const * fileName, QByteArray const * data, QString const * mimeType) {
  this_ptr->addFileAttachment(*fileName, *data, *mimeType);
}


RITUAL_EXPORT QPdfWriter::ColorModel ctr_qt_gui_ffi_QPdfWriter_colorModel(QPdfWriter const * this_ptr) {
  return this_ptr->colorModel();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setColorModel(QPdfWriter * this_ptr, QPdfWriter::ColorModel model) {
  this_ptr->setColorModel(model);
}


RITUAL_EXPORT QPdfOutputIntent * ctr_qt_gui_ffi_QPdfWriter_outputIntent(QPdfWriter const * this_ptr) {
  return new QPdfOutputIntent(this_ptr->outputIntent());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPdfWriter_setOutputIntent(QPdfWriter * this_ptr, QPdfOutputIntent const * intent) {
  this_ptr->setOutputIntent(*intent);
}


RITUAL_EXPORT QPicture * ctr_qt_gui_ffi_QPicture_QPicture(int formatVersion) {
  return new QPicture(formatVersion);
}


RITUAL_EXPORT QPicture * ctr_qt_gui_ffi_QPicture_QPicture1(QPicture const * arg1) {
  return new QPicture(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPicture_dQPicture(QPicture * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPicture_isNull(QPicture const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPicture_devType(QPicture const * this_ptr) {
  return this_ptr->devType();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QPicture_size(QPicture const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT char const * ctr_qt_gui_ffi_QPicture_data(QPicture const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPicture_setData(QPicture * this_ptr, char const * data, unsigned int size) {
  this_ptr->setData(data, size);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPicture_play(QPicture * this_ptr, QPainter * p) {
  return this_ptr->play(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPicture_load(QPicture * this_ptr, QIODevice * dev) {
  return this_ptr->load(dev);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPicture_load1(QPicture * this_ptr, QString const * fileName) {
  return this_ptr->load(*fileName);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPicture_save(QPicture * this_ptr, QIODevice * dev) {
  return this_ptr->save(dev);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPicture_save1(QPicture * this_ptr, QString const * fileName) {
  return this_ptr->save(*fileName);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPicture_boundingRect(QPicture const * this_ptr) {
  return new QRect(this_ptr->boundingRect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPicture_setBoundingRect(QPicture * this_ptr, QRect const * r) {
  this_ptr->setBoundingRect(*r);
}


RITUAL_EXPORT QPicture * ctr_qt_gui_ffi_QPicture_operator_(QPicture * this_ptr, QPicture const * p) {
  return &this_ptr->operator=(*p);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPicture_swap(QPicture * this_ptr, QPicture * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPicture_detach(QPicture * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPicture_isDetached(QPicture const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT QPaintEngine * ctr_qt_gui_ffi_QPicture_paintEngine(QPicture const * this_ptr) {
  return this_ptr->paintEngine();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap36(QPicture * value1, QPicture * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__80(QDataStream * arg1, QPicture const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__81(QDataStream * arg1, QPicture * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QPixmapCache::Key * ctr_qt_gui_ffi_QPixmapCache_Key_Key() {
  return new QPixmapCache::Key();
}


RITUAL_EXPORT QPixmapCache::Key * ctr_qt_gui_ffi_QPixmapCache_Key_Key1(QPixmapCache::Key const * other) {
  return new QPixmapCache::Key(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmapCache_Key_dKey(QPixmapCache::Key * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmapCache_Key_operator__(QPixmapCache::Key const * this_ptr, QPixmapCache::Key const * key) {
  return this_ptr->operator==(*key);
}


RITUAL_EXPORT QPixmapCache::Key * ctr_qt_gui_ffi_QPixmapCache_Key_operator_1(QPixmapCache::Key * this_ptr, QPixmapCache::Key const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmapCache_Key_swap(QPixmapCache::Key * this_ptr, QPixmapCache::Key * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmapCache_Key_isValid(QPixmapCache::Key const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPixmapCache_cacheLimit() {
  return QPixmapCache::cacheLimit();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmapCache_setCacheLimit(int arg1) {
  QPixmapCache::setCacheLimit(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmapCache_find(QString const * key, QPixmap * pixmap) {
  return QPixmapCache::find(*key, pixmap);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmapCache_find1(QPixmapCache::Key const * key, QPixmap * pixmap) {
  return QPixmapCache::find(*key, pixmap);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmapCache_insert(QString const * key, QPixmap const * pixmap) {
  return QPixmapCache::insert(*key, *pixmap);
}


RITUAL_EXPORT QPixmapCache::Key * ctr_qt_gui_ffi_QPixmapCache_insert1(QPixmap const * pixmap) {
  return new QPixmapCache::Key(QPixmapCache::insert(*pixmap));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmapCache_replace(QPixmapCache::Key const * key, QPixmap const * pixmap) {
  return QPixmapCache::replace(*key, *pixmap);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmapCache_remove(QString const * key) {
  QPixmapCache::remove(*key);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmapCache_remove1(QPixmapCache::Key const * key) {
  QPixmapCache::remove(*key);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmapCache_clear() {
  QPixmapCache::clear();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap37(QPixmapCache::Key * value1, QPixmapCache::Key * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_QQuaternion() {
  return new QQuaternion();
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_QQuaternion2(float scalar, float xpos, float ypos, float zpos) {
  return new QQuaternion(scalar, xpos, ypos, zpos);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_QQuaternion3(float scalar, QVector3D const * vector) {
  return new QQuaternion(scalar, *vector);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_QQuaternion4(QVector4D const * vector) {
  return new QQuaternion(*vector);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QQuaternion_isNull(QQuaternion const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QQuaternion_isIdentity(QQuaternion const * this_ptr) {
  return this_ptr->isIdentity();
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QQuaternion_vector(QQuaternion const * this_ptr) {
  return new QVector3D(this_ptr->vector());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_setVector(QQuaternion * this_ptr, QVector3D const * vector) {
  this_ptr->setVector(*vector);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_setVector1(QQuaternion * this_ptr, float x, float y, float z) {
  this_ptr->setVector(x, y, z);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QQuaternion_x(QQuaternion const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QQuaternion_y(QQuaternion const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QQuaternion_z(QQuaternion const * this_ptr) {
  return this_ptr->z();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QQuaternion_scalar(QQuaternion const * this_ptr) {
  return this_ptr->scalar();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_setX(QQuaternion * this_ptr, float x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_setY(QQuaternion * this_ptr, float y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_setZ(QQuaternion * this_ptr, float z) {
  this_ptr->setZ(z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_setScalar(QQuaternion * this_ptr, float scalar) {
  this_ptr->setScalar(scalar);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QQuaternion_dotProduct(QQuaternion const * q1, QQuaternion const * q2) {
  return QQuaternion::dotProduct(*q1, *q2);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QQuaternion_length(QQuaternion const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QQuaternion_lengthSquared(QQuaternion const * this_ptr) {
  return this_ptr->lengthSquared();
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_normalized(QQuaternion const * this_ptr) {
  return new QQuaternion(this_ptr->normalized());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_normalize(QQuaternion * this_ptr) {
  this_ptr->normalize();
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_inverted(QQuaternion const * this_ptr) {
  return new QQuaternion(this_ptr->inverted());
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_conjugated(QQuaternion const * this_ptr) {
  return new QQuaternion(this_ptr->conjugated());
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QQuaternion_rotatedVector(QQuaternion const * this_ptr, QVector3D const * vector) {
  return new QVector3D(this_ptr->rotatedVector(*vector));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_operator__(QQuaternion * this_ptr, QQuaternion const * quaternion) {
  return &this_ptr->operator+=(*quaternion);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_operator__1(QQuaternion * this_ptr, QQuaternion const * quaternion) {
  return &this_ptr->operator-=(*quaternion);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_operator__2(QQuaternion * this_ptr, float factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_operator__3(QQuaternion * this_ptr, QQuaternion const * quaternion) {
  return &this_ptr->operator*=(*quaternion);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_operator__4(QQuaternion * this_ptr, float divisor) {
  return &this_ptr->operator/=(divisor);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QQuaternion_toVector4D(QQuaternion const * this_ptr) {
  return new QVector4D(this_ptr->toVector4D());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QQuaternion_operator_QVariant(QQuaternion const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_getAxisAndAngle(QQuaternion const * this_ptr, QVector3D * axis, float * angle) {
  this_ptr->getAxisAndAngle(axis, angle);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_fromAxisAndAngle(QVector3D const * axis, float angle) {
  return new QQuaternion(QQuaternion::fromAxisAndAngle(*axis, angle));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_getAxisAndAngle1(QQuaternion const * this_ptr, float * x, float * y, float * z, float * angle) {
  this_ptr->getAxisAndAngle(x, y, z, angle);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_fromAxisAndAngle1(float x, float y, float z, float angle) {
  return new QQuaternion(QQuaternion::fromAxisAndAngle(x, y, z, angle));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QQuaternion_toEulerAngles(QQuaternion const * this_ptr) {
  return new QVector3D(this_ptr->toEulerAngles());
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_fromEulerAngles(QVector3D const * angles) {
  return new QQuaternion(QQuaternion::fromEulerAngles(*angles));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_getEulerAngles(QQuaternion const * this_ptr, float * pitch, float * yaw, float * roll) {
  this_ptr->getEulerAngles(pitch, yaw, roll);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_fromEulerAngles1(float pitch, float yaw, float roll) {
  return new QQuaternion(QQuaternion::fromEulerAngles(pitch, yaw, roll));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_getAxes(QQuaternion const * this_ptr, QVector3D * xAxis, QVector3D * yAxis, QVector3D * zAxis) {
  this_ptr->getAxes(xAxis, yAxis, zAxis);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_fromAxes(QVector3D const * xAxis, QVector3D const * yAxis, QVector3D const * zAxis) {
  return new QQuaternion(QQuaternion::fromAxes(*xAxis, *yAxis, *zAxis));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_fromDirection(QVector3D const * direction, QVector3D const * up) {
  return new QQuaternion(QQuaternion::fromDirection(*direction, *up));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_rotationTo(QVector3D const * from, QVector3D const * to) {
  return new QQuaternion(QQuaternion::rotationTo(*from, *to));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_slerp(QQuaternion const * q1, QQuaternion const * q2, float t) {
  return new QQuaternion(QQuaternion::slerp(*q1, *q2, t));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_nlerp(QQuaternion const * q1, QQuaternion const * q2, float t) {
  return new QQuaternion(QQuaternion::nlerp(*q1, *q2, t));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_operator_236(QQuaternion const * q1, QQuaternion const * q2) {
  return new QQuaternion(operator*(*q1, *q2));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_operator_237(QQuaternion const * q1, QQuaternion const * q2) {
  return new QQuaternion(operator+(*q1, *q2));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_operator_238(QQuaternion const * q1, QQuaternion const * q2) {
  return new QQuaternion(operator-(*q1, *q2));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_operator_239(float factor, QQuaternion const * quaternion) {
  return new QQuaternion(operator*(factor, *quaternion));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_operator_240(QQuaternion const * quaternion, float factor) {
  return new QQuaternion(operator*(*quaternion, factor));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_operator_241(QQuaternion const * quaternion) {
  return new QQuaternion(operator-(*quaternion));
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_operator_242(QQuaternion const * quaternion, float divisor) {
  return new QQuaternion(operator/(*quaternion, divisor));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_qFuzzyCompare1(QQuaternion const * q1, QQuaternion const * q2) {
  return qFuzzyCompare(*q1, *q2);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_operator_243(QQuaternion const * quaternion, QVector3D const * vec) {
  return new QVector3D(operator*(*quaternion, *vec));
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__82(QDebug const * dbg, QQuaternion const * q) {
  return new QDebug(operator<<(*dbg, *q));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__83(QDataStream * arg1, QQuaternion const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__84(QDataStream * arg1, QQuaternion * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QRasterWindow_metaObject(QRasterWindow const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QRasterWindow_qt_metacast(QRasterWindow * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QRasterWindow_qt_metacall(QRasterWindow * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QRasterWindow_tr(char const * s, char const * c, int n) {
  return new QString(QRasterWindow::tr(s, c, n));
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_QRasterWindow_QRasterWindow(QWindow * parent) {
  return new QRasterWindow(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRasterWindow_dQRasterWindow(QRasterWindow * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QSessionManager_metaObject(QSessionManager const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QSessionManager_qt_metacast(QSessionManager * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSessionManager_qt_metacall(QSessionManager * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QSessionManager_tr(char const * s, char const * c, int n) {
  return new QString(QSessionManager::tr(s, c, n));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QSessionManager_sessionId(QSessionManager const * this_ptr) {
  return new QString(this_ptr->sessionId());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QSessionManager_sessionKey(QSessionManager const * this_ptr) {
  return new QString(this_ptr->sessionKey());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSessionManager_allowsInteraction(QSessionManager * this_ptr) {
  return this_ptr->allowsInteraction();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSessionManager_allowsErrorInteraction(QSessionManager * this_ptr) {
  return this_ptr->allowsErrorInteraction();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_release(QSessionManager * this_ptr) {
  this_ptr->release();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_cancel(QSessionManager * this_ptr) {
  this_ptr->cancel();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_setRestartHint(QSessionManager * this_ptr, QSessionManager::RestartHint arg1) {
  this_ptr->setRestartHint(arg1);
}


RITUAL_EXPORT QSessionManager::RestartHint ctr_qt_gui_ffi_QSessionManager_restartHint(QSessionManager const * this_ptr) {
  return this_ptr->restartHint();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_setRestartCommand(QSessionManager * this_ptr, QList< QString > const * arg1) {
  this_ptr->setRestartCommand(*arg1);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QSessionManager_restartCommand(QSessionManager const * this_ptr) {
  return new QList< QString >(this_ptr->restartCommand());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_setDiscardCommand(QSessionManager * this_ptr, QList< QString > const * arg1) {
  this_ptr->setDiscardCommand(*arg1);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QSessionManager_discardCommand(QSessionManager const * this_ptr) {
  return new QList< QString >(this_ptr->discardCommand());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_setManagerProperty(QSessionManager * this_ptr, QString const * name, QString const * value) {
  this_ptr->setManagerProperty(*name, *value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_setManagerProperty1(QSessionManager * this_ptr, QString const * name, QList< QString > const * value) {
  this_ptr->setManagerProperty(*name, *value);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSessionManager_isPhase2(QSessionManager const * this_ptr) {
  return this_ptr->isPhase2();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSessionManager_requestPhase2(QSessionManager * this_ptr) {
  this_ptr->requestPhase2();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QShortcut_metaObject(QShortcut const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QShortcut_qt_metacast(QShortcut * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QShortcut_qt_metacall(QShortcut * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QShortcut_tr(char const * s, char const * c, int n) {
  return new QString(QShortcut::tr(s, c, n));
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut(QObject * parent) {
  return new QShortcut(parent);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut1(QKeySequence const * key, QObject * parent, char const * member, char const * ambiguousMember, Qt::ShortcutContext context) {
  return new QShortcut(*key, parent, member, ambiguousMember, context);
}


RITUAL_EXPORT QShortcut * ctr_qt_gui_ffi_QShortcut_QShortcut2(QKeySequence::StandardKey key, QObject * parent, char const * member, char const * ambiguousMember, Qt::ShortcutContext context) {
  return new QShortcut(key, parent, member, ambiguousMember, context);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_dQShortcut(QShortcut * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_setKey(QShortcut * this_ptr, QKeySequence const * key) {
  this_ptr->setKey(*key);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QShortcut_key(QShortcut const * this_ptr) {
  return new QKeySequence(this_ptr->key());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_setKeys(QShortcut * this_ptr, QKeySequence::StandardKey key) {
  this_ptr->setKeys(key);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_setKeys1(QShortcut * this_ptr, QList< QKeySequence > const * keys) {
  this_ptr->setKeys(*keys);
}


RITUAL_EXPORT QList< QKeySequence > * ctr_qt_gui_ffi_QShortcut_keys(QShortcut const * this_ptr) {
  return new QList< QKeySequence >(this_ptr->keys());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_setEnabled(QShortcut * this_ptr, bool enable) {
  this_ptr->setEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QShortcut_isEnabled(QShortcut const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_setContext(QShortcut * this_ptr, Qt::ShortcutContext context) {
  this_ptr->setContext(context);
}


RITUAL_EXPORT Qt::ShortcutContext ctr_qt_gui_ffi_QShortcut_context(QShortcut const * this_ptr) {
  return this_ptr->context();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_setAutoRepeat(QShortcut * this_ptr, bool on) {
  this_ptr->setAutoRepeat(on);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QShortcut_autoRepeat(QShortcut const * this_ptr) {
  return this_ptr->autoRepeat();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QShortcut_id(QShortcut const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcut_setWhatsThis(QShortcut * this_ptr, QString const * text) {
  this_ptr->setWhatsThis(*text);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QShortcut_whatsThis(QShortcut const * this_ptr) {
  return new QString(this_ptr->whatsThis());
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_QStandardItem() {
  return new QStandardItem();
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_QStandardItem1(QString const * text) {
  return new QStandardItem(*text);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_QStandardItem2(QIcon const * icon, QString const * text) {
  return new QStandardItem(*icon, *text);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_QStandardItem3(int rows, int columns) {
  return new QStandardItem(rows, columns);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_dQStandardItem(QStandardItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QStandardItem_data(QStandardItem const * this_ptr, int role) {
  return new QVariant(this_ptr->data(role));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_multiData(QStandardItem const * this_ptr, QModelRoleDataSpan const * roleDataSpan) {
  this_ptr->multiData(*roleDataSpan);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setData(QStandardItem * this_ptr, QVariant const * value, int role) {
  this_ptr->setData(*value, role);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_clearData(QStandardItem * this_ptr) {
  this_ptr->clearData();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStandardItem_text(QStandardItem const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setText(QStandardItem * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QStandardItem_icon(QStandardItem const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setIcon(QStandardItem * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStandardItem_toolTip(QStandardItem const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setToolTip(QStandardItem * this_ptr, QString const * toolTip) {
  this_ptr->setToolTip(*toolTip);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStandardItem_statusTip(QStandardItem const * this_ptr) {
  return new QString(this_ptr->statusTip());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setStatusTip(QStandardItem * this_ptr, QString const * statusTip) {
  this_ptr->setStatusTip(*statusTip);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStandardItem_whatsThis(QStandardItem const * this_ptr) {
  return new QString(this_ptr->whatsThis());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setWhatsThis(QStandardItem * this_ptr, QString const * whatsThis) {
  this_ptr->setWhatsThis(*whatsThis);
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QStandardItem_sizeHint(QStandardItem const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setSizeHint(QStandardItem * this_ptr, QSize const * sizeHint) {
  this_ptr->setSizeHint(*sizeHint);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QStandardItem_font(QStandardItem const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setFont(QStandardItem * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItem_textAlignment(QStandardItem const * this_ptr) {
  return int(this_ptr->textAlignment());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setTextAlignment(QStandardItem * this_ptr, int textAlignment) {
  this_ptr->setTextAlignment(QFlags< Qt::AlignmentFlag >(textAlignment));
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QStandardItem_background(QStandardItem const * this_ptr) {
  return new QBrush(this_ptr->background());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setBackground(QStandardItem * this_ptr, QBrush const * brush) {
  this_ptr->setBackground(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QStandardItem_foreground(QStandardItem const * this_ptr) {
  return new QBrush(this_ptr->foreground());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setForeground(QStandardItem * this_ptr, QBrush const * brush) {
  this_ptr->setForeground(*brush);
}


RITUAL_EXPORT Qt::CheckState ctr_qt_gui_ffi_QStandardItem_checkState(QStandardItem const * this_ptr) {
  return this_ptr->checkState();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setCheckState(QStandardItem * this_ptr, Qt::CheckState checkState) {
  this_ptr->setCheckState(checkState);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStandardItem_accessibleText(QStandardItem const * this_ptr) {
  return new QString(this_ptr->accessibleText());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setAccessibleText(QStandardItem * this_ptr, QString const * accessibleText) {
  this_ptr->setAccessibleText(*accessibleText);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStandardItem_accessibleDescription(QStandardItem const * this_ptr) {
  return new QString(this_ptr->accessibleDescription());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setAccessibleDescription(QStandardItem * this_ptr, QString const * accessibleDescription) {
  this_ptr->setAccessibleDescription(*accessibleDescription);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItem_flags(QStandardItem const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setFlags(QStandardItem * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< Qt::ItemFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isEnabled(QStandardItem const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setEnabled(QStandardItem * this_ptr, bool enabled) {
  this_ptr->setEnabled(enabled);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isEditable(QStandardItem const * this_ptr) {
  return this_ptr->isEditable();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setEditable(QStandardItem * this_ptr, bool editable) {
  this_ptr->setEditable(editable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isSelectable(QStandardItem const * this_ptr) {
  return this_ptr->isSelectable();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setSelectable(QStandardItem * this_ptr, bool selectable) {
  this_ptr->setSelectable(selectable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isCheckable(QStandardItem const * this_ptr) {
  return this_ptr->isCheckable();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setCheckable(QStandardItem * this_ptr, bool checkable) {
  this_ptr->setCheckable(checkable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isAutoTristate(QStandardItem const * this_ptr) {
  return this_ptr->isAutoTristate();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setAutoTristate(QStandardItem * this_ptr, bool tristate) {
  this_ptr->setAutoTristate(tristate);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isUserTristate(QStandardItem const * this_ptr) {
  return this_ptr->isUserTristate();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setUserTristate(QStandardItem * this_ptr, bool tristate) {
  this_ptr->setUserTristate(tristate);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isDragEnabled(QStandardItem const * this_ptr) {
  return this_ptr->isDragEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setDragEnabled(QStandardItem * this_ptr, bool dragEnabled) {
  this_ptr->setDragEnabled(dragEnabled);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_isDropEnabled(QStandardItem const * this_ptr) {
  return this_ptr->isDropEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setDropEnabled(QStandardItem * this_ptr, bool dropEnabled) {
  this_ptr->setDropEnabled(dropEnabled);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_parent(QStandardItem const * this_ptr) {
  return this_ptr->parent();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItem_row(QStandardItem const * this_ptr) {
  return this_ptr->row();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItem_column(QStandardItem const * this_ptr) {
  return this_ptr->column();
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QStandardItem_index(QStandardItem const * this_ptr) {
  return new QModelIndex(this_ptr->index());
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_QStandardItem_model(QStandardItem const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItem_rowCount(QStandardItem const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setRowCount(QStandardItem * this_ptr, int rows) {
  this_ptr->setRowCount(rows);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItem_columnCount(QStandardItem const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setColumnCount(QStandardItem * this_ptr, int columns) {
  this_ptr->setColumnCount(columns);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_hasChildren(QStandardItem const * this_ptr) {
  return this_ptr->hasChildren();
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_child(QStandardItem const * this_ptr, int row, int column) {
  return this_ptr->child(row, column);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setChild(QStandardItem * this_ptr, int row, int column, QStandardItem * item) {
  this_ptr->setChild(row, column, item);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_setChild1(QStandardItem * this_ptr, int row, QStandardItem * item) {
  this_ptr->setChild(row, item);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_insertRow(QStandardItem * this_ptr, int row, QList< QStandardItem * > const * items) {
  this_ptr->insertRow(row, *items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_insertColumn(QStandardItem * this_ptr, int column, QList< QStandardItem * > const * items) {
  this_ptr->insertColumn(column, *items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_insertRows(QStandardItem * this_ptr, int row, QList< QStandardItem * > const * items) {
  this_ptr->insertRows(row, *items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_insertRows1(QStandardItem * this_ptr, int row, int count) {
  this_ptr->insertRows(row, count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_insertColumns(QStandardItem * this_ptr, int column, int count) {
  this_ptr->insertColumns(column, count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_removeRow(QStandardItem * this_ptr, int row) {
  this_ptr->removeRow(row);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_removeColumn(QStandardItem * this_ptr, int column) {
  this_ptr->removeColumn(column);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_removeRows(QStandardItem * this_ptr, int row, int count) {
  this_ptr->removeRows(row, count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_removeColumns(QStandardItem * this_ptr, int column, int count) {
  this_ptr->removeColumns(column, count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_appendRow(QStandardItem * this_ptr, QList< QStandardItem * > const * items) {
  this_ptr->appendRow(*items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_appendRows(QStandardItem * this_ptr, QList< QStandardItem * > const * items) {
  this_ptr->appendRows(*items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_appendColumn(QStandardItem * this_ptr, QList< QStandardItem * > const * items) {
  this_ptr->appendColumn(*items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_insertRow1(QStandardItem * this_ptr, int row, QStandardItem * item) {
  this_ptr->insertRow(row, item);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_appendRow1(QStandardItem * this_ptr, QStandardItem * item) {
  this_ptr->appendRow(item);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_takeChild(QStandardItem * this_ptr, int row, int column) {
  return this_ptr->takeChild(row, column);
}


RITUAL_EXPORT QList< QStandardItem * > * ctr_qt_gui_ffi_QStandardItem_takeRow(QStandardItem * this_ptr, int row) {
  return new QList< QStandardItem * >(this_ptr->takeRow(row));
}


RITUAL_EXPORT QList< QStandardItem * > * ctr_qt_gui_ffi_QStandardItem_takeColumn(QStandardItem * this_ptr, int column) {
  return new QList< QStandardItem * >(this_ptr->takeColumn(column));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_sortChildren(QStandardItem * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sortChildren(column, order);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItem_clone(QStandardItem const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItem_type(QStandardItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_read(QStandardItem * this_ptr, QDataStream * in) {
  this_ptr->read(*in);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItem_write(QStandardItem const * this_ptr, QDataStream * out) {
  this_ptr->write(*out);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItem_operator_(QStandardItem const * this_ptr, QStandardItem const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QStandardItemModel_metaObject(QStandardItemModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QStandardItemModel_qt_metacast(QStandardItemModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_qt_metacall(QStandardItemModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStandardItemModel_tr(char const * s, char const * c, int n) {
  return new QString(QStandardItemModel::tr(s, c, n));
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_QStandardItemModel_QStandardItemModel(QObject * parent) {
  return new QStandardItemModel(parent);
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_QStandardItemModel_QStandardItemModel1(int rows, int columns, QObject * parent) {
  return new QStandardItemModel(rows, columns, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_dQStandardItemModel(QStandardItemModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setItemRoleNames(QStandardItemModel * this_ptr, QHash< int, QByteArray > const * roleNames) {
  this_ptr->setItemRoleNames(*roleNames);
}


RITUAL_EXPORT QHash< int, QByteArray > * ctr_qt_gui_ffi_QStandardItemModel_roleNames(QStandardItemModel const * this_ptr) {
  return new QHash< int, QByteArray >(this_ptr->roleNames());
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QStandardItemModel_index(QStandardItemModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QStandardItemModel_parent(QStandardItemModel const * this_ptr, QModelIndex const * child) {
  return new QModelIndex(this_ptr->parent(*child));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_rowCount(QStandardItemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_columnCount(QStandardItemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_hasChildren(QStandardItemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->hasChildren(*parent);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QStandardItemModel_data(QStandardItemModel const * this_ptr, QModelIndex const * index, int role) {
  return new QVariant(this_ptr->data(*index, role));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_multiData(QStandardItemModel const * this_ptr, QModelIndex const * index, QModelRoleDataSpan const * roleDataSpan) {
  this_ptr->multiData(*index, *roleDataSpan);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_setData(QStandardItemModel * this_ptr, QModelIndex const * index, QVariant const * value, int role) {
  return this_ptr->setData(*index, *value, role);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_clearItemData(QStandardItemModel * this_ptr, QModelIndex const * index) {
  return this_ptr->clearItemData(*index);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QStandardItemModel_headerData(QStandardItemModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_setHeaderData(QStandardItemModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value, int role) {
  return this_ptr->setHeaderData(section, orientation, *value, role);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertRows(QStandardItemModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->insertRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertColumns(QStandardItemModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->insertColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_removeRows(QStandardItemModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->removeRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_removeColumns(QStandardItemModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->removeColumns(column, count, *parent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_flags(QStandardItemModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_supportedDropActions(QStandardItemModel const * this_ptr) {
  return int(this_ptr->supportedDropActions());
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_gui_ffi_QStandardItemModel_itemData(QStandardItemModel const * this_ptr, QModelIndex const * index) {
  return new QMap< int, QVariant >(this_ptr->itemData(*index));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_setItemData(QStandardItemModel * this_ptr, QModelIndex const * index, QMap< int, QVariant > const * roles) {
  return this_ptr->setItemData(*index, *roles);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_clear(QStandardItemModel * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_sort(QStandardItemModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_itemFromIndex(QStandardItemModel const * this_ptr, QModelIndex const * index) {
  return this_ptr->itemFromIndex(*index);
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QStandardItemModel_indexFromItem(QStandardItemModel const * this_ptr, QStandardItem const * item) {
  return new QModelIndex(this_ptr->indexFromItem(item));
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_item(QStandardItemModel const * this_ptr, int row, int column) {
  return this_ptr->item(row, column);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setItem(QStandardItemModel * this_ptr, int row, int column, QStandardItem * item) {
  this_ptr->setItem(row, column, item);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setItem1(QStandardItemModel * this_ptr, int row, QStandardItem * item) {
  this_ptr->setItem(row, item);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_invisibleRootItem(QStandardItemModel const * this_ptr) {
  return this_ptr->invisibleRootItem();
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_horizontalHeaderItem(QStandardItemModel const * this_ptr, int column) {
  return this_ptr->horizontalHeaderItem(column);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setHorizontalHeaderItem(QStandardItemModel * this_ptr, int column, QStandardItem * item) {
  this_ptr->setHorizontalHeaderItem(column, item);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_verticalHeaderItem(QStandardItemModel const * this_ptr, int row) {
  return this_ptr->verticalHeaderItem(row);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setVerticalHeaderItem(QStandardItemModel * this_ptr, int row, QStandardItem * item) {
  this_ptr->setVerticalHeaderItem(row, item);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setHorizontalHeaderLabels(QStandardItemModel * this_ptr, QList< QString > const * labels) {
  this_ptr->setHorizontalHeaderLabels(*labels);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setVerticalHeaderLabels(QStandardItemModel * this_ptr, QList< QString > const * labels) {
  this_ptr->setVerticalHeaderLabels(*labels);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setRowCount(QStandardItemModel * this_ptr, int rows) {
  this_ptr->setRowCount(rows);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setColumnCount(QStandardItemModel * this_ptr, int columns) {
  this_ptr->setColumnCount(columns);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_appendRow(QStandardItemModel * this_ptr, QList< QStandardItem * > const * items) {
  this_ptr->appendRow(*items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_appendColumn(QStandardItemModel * this_ptr, QList< QStandardItem * > const * items) {
  this_ptr->appendColumn(*items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_appendRow1(QStandardItemModel * this_ptr, QStandardItem * item) {
  this_ptr->appendRow(item);
}


} // extern "C"
