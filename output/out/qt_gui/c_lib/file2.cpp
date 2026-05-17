#include "qt_gui_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFont_substitutes(QString const * arg1) {
  return new QList< QString >(QFont::substitutes(*arg1));
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFont_substitutions() {
  return new QList< QString >(QFont::substitutions());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_insertSubstitution(QString const * arg1, QString const * arg2) {
  QFont::insertSubstitution(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_insertSubstitutions(QString const * arg1, QList< QString > const * arg2) {
  QFont::insertSubstitutions(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_removeSubstitutions(QString const * arg1) {
  QFont::removeSubstitutions(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_initialize() {
  QFont::initialize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_cleanup() {
  QFont::cleanup();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_cacheStatistics() {
  QFont::cacheStatistics();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFont_defaultFamily(QFont const * this_ptr) {
  return new QString(this_ptr->defaultFamily());
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFont_resolve(QFont const * this_ptr, QFont const * arg1) {
  return new QFont(this_ptr->resolve(*arg1));
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QFont_resolveMask(QFont const * this_ptr) {
  return this_ptr->resolveMask();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setResolveMask(QFont * this_ptr, unsigned int mask) {
  this_ptr->setResolveMask(mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setLegacyWeight(QFont * this_ptr, int legacyWeight) {
  this_ptr->setLegacyWeight(legacyWeight);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFont_legacyWeight(QFont const * this_ptr) {
  return this_ptr->legacyWeight();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap8(QFont * value1, QFont * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash3(QFont const * font, unsigned long seed) {
  return qHash(*font, seed);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__42(QDataStream * arg1, QFont const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__43(QDataStream * arg1, QFont * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__44(QDebug const * arg1, QFont const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QList< int > * ctr_qt_gui_ffi_QFontDatabase_standardSizes() {
  return new QList< int >(QFontDatabase::standardSizes());
}


RITUAL_EXPORT QFontDatabase * ctr_qt_gui_ffi_QFontDatabase_QFontDatabase() {
  return new QFontDatabase();
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem > * ctr_qt_gui_ffi_QFontDatabase_writingSystems() {
  return new QList< QFontDatabase::WritingSystem >(QFontDatabase::writingSystems());
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem > * ctr_qt_gui_ffi_QFontDatabase_writingSystems1(QString const * family) {
  return new QList< QFontDatabase::WritingSystem >(QFontDatabase::writingSystems(*family));
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFontDatabase_families(QFontDatabase::WritingSystem writingSystem) {
  return new QList< QString >(QFontDatabase::families(writingSystem));
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFontDatabase_styles(QString const * family) {
  return new QList< QString >(QFontDatabase::styles(*family));
}


RITUAL_EXPORT QList< int > * ctr_qt_gui_ffi_QFontDatabase_pointSizes(QString const * family, QString const * style) {
  return new QList< int >(QFontDatabase::pointSizes(*family, *style));
}


RITUAL_EXPORT QList< int > * ctr_qt_gui_ffi_QFontDatabase_smoothSizes(QString const * family, QString const * style) {
  return new QList< int >(QFontDatabase::smoothSizes(*family, *style));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontDatabase_styleString(QFont const * font) {
  return new QString(QFontDatabase::styleString(*font));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontDatabase_styleString1(QFontInfo const * fontInfo) {
  return new QString(QFontDatabase::styleString(*fontInfo));
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFontDatabase_font(QString const * family, QString const * style, int pointSize) {
  return new QFont(QFontDatabase::font(*family, *style, pointSize));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_isBitmapScalable(QString const * family, QString const * style) {
  return QFontDatabase::isBitmapScalable(*family, *style);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_isSmoothlyScalable(QString const * family, QString const * style) {
  return QFontDatabase::isSmoothlyScalable(*family, *style);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_isScalable(QString const * family, QString const * style) {
  return QFontDatabase::isScalable(*family, *style);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_isFixedPitch(QString const * family, QString const * style) {
  return QFontDatabase::isFixedPitch(*family, *style);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_italic(QString const * family, QString const * style) {
  return QFontDatabase::italic(*family, *style);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_bold(QString const * family, QString const * style) {
  return QFontDatabase::bold(*family, *style);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontDatabase_weight(QString const * family, QString const * style) {
  return QFontDatabase::weight(*family, *style);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_hasFamily(QString const * family) {
  return QFontDatabase::hasFamily(*family);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_isPrivateFamily(QString const * family) {
  return QFontDatabase::isPrivateFamily(*family);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontDatabase_writingSystemName(QFontDatabase::WritingSystem writingSystem) {
  return new QString(QFontDatabase::writingSystemName(writingSystem));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontDatabase_writingSystemSample(QFontDatabase::WritingSystem writingSystem) {
  return new QString(QFontDatabase::writingSystemSample(writingSystem));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontDatabase_addApplicationFont(QString const * fileName) {
  return QFontDatabase::addApplicationFont(*fileName);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFontDatabase_addApplicationFontFromData(QByteArray const * fontData) {
  return QFontDatabase::addApplicationFontFromData(*fontData);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFontDatabase_applicationFontFamilies(int id) {
  return new QList< QString >(QFontDatabase::applicationFontFamilies(id));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_removeApplicationFont(int id) {
  return QFontDatabase::removeApplicationFont(id);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_removeAllApplicationFonts() {
  return QFontDatabase::removeAllApplicationFonts();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontDatabase_addApplicationFallbackFontFamily(QChar::Script script, QString const * familyName) {
  QFontDatabase::addApplicationFallbackFontFamily(script, *familyName);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_removeApplicationFallbackFontFamily(QChar::Script script, QString const * familyName) {
  return QFontDatabase::removeApplicationFallbackFontFamily(script, *familyName);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontDatabase_setApplicationFallbackFontFamilies(QChar::Script arg1, QList< QString > const * familyNames) {
  QFontDatabase::setApplicationFallbackFontFamilies(arg1, *familyNames);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFontDatabase_applicationFallbackFontFamilies(QChar::Script script) {
  return new QList< QString >(QFontDatabase::applicationFallbackFontFamilies(script));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontDatabase_addApplicationEmojiFontFamily(QString const * familyName) {
  QFontDatabase::addApplicationEmojiFontFamily(*familyName);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFontDatabase_removeApplicationEmojiFontFamily(QString const * familyName) {
  return QFontDatabase::removeApplicationEmojiFontFamily(*familyName);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontDatabase_setApplicationEmojiFontFamilies(QList< QString > const * familyNames) {
  QFontDatabase::setApplicationEmojiFontFamilies(*familyNames);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFontDatabase_applicationEmojiFontFamilies() {
  return new QList< QString >(QFontDatabase::applicationEmojiFontFamilies());
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFontDatabase_systemFont(QFontDatabase::SystemFont type) {
  return new QFont(QFontDatabase::systemFont(type));
}


RITUAL_EXPORT QRawFont * ctr_qt_gui_ffi_QRawFont_QRawFont() {
  return new QRawFont();
}


RITUAL_EXPORT QRawFont * ctr_qt_gui_ffi_QRawFont_QRawFont1(QString const * fileName, double pixelSize, QFont::HintingPreference hintingPreference) {
  return new QRawFont(*fileName, pixelSize, hintingPreference);
}


RITUAL_EXPORT QRawFont * ctr_qt_gui_ffi_QRawFont_QRawFont2(QByteArray const * fontData, double pixelSize, QFont::HintingPreference hintingPreference) {
  return new QRawFont(*fontData, pixelSize, hintingPreference);
}


RITUAL_EXPORT QRawFont * ctr_qt_gui_ffi_QRawFont_QRawFont3(QRawFont const * other) {
  return new QRawFont(*other);
}


RITUAL_EXPORT QRawFont * ctr_qt_gui_ffi_QRawFont_operator_1(QRawFont * this_ptr, QRawFont const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRawFont_dQRawFont(QRawFont * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRawFont_swap(QRawFont * this_ptr, QRawFont * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRawFont_isValid(QRawFont const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRawFont_operator__(QRawFont const * this_ptr, QRawFont const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QRawFont_familyName(QRawFont const * this_ptr) {
  return new QString(this_ptr->familyName());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QRawFont_styleName(QRawFont const * this_ptr) {
  return new QString(this_ptr->styleName());
}


RITUAL_EXPORT QFont::Style ctr_qt_gui_ffi_QRawFont_style(QRawFont const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QRawFont_weight(QRawFont const * this_ptr) {
  return this_ptr->weight();
}


RITUAL_EXPORT QList< unsigned int > * ctr_qt_gui_ffi_QRawFont_glyphIndexesForString(QRawFont const * this_ptr, QString const * text) {
  return new QList< unsigned int >(this_ptr->glyphIndexesForString(*text));
}


RITUAL_EXPORT QList< QPointF > * ctr_qt_gui_ffi_QRawFont_advancesForGlyphIndexes(QRawFont const * this_ptr, QList< unsigned int > const * glyphIndexes) {
  return new QList< QPointF >(this_ptr->advancesForGlyphIndexes(*glyphIndexes));
}


RITUAL_EXPORT QList< QPointF > * ctr_qt_gui_ffi_QRawFont_advancesForGlyphIndexes1(QRawFont const * this_ptr, QList< unsigned int > const * glyphIndexes, int layoutFlags) {
  return new QList< QPointF >(this_ptr->advancesForGlyphIndexes(*glyphIndexes, QFlags< QRawFont::LayoutFlag >(layoutFlags)));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRawFont_glyphIndexesForChars(QRawFont const * this_ptr, QChar const * chars, int numChars, unsigned int * glyphIndexes, int * numGlyphs) {
  return this_ptr->glyphIndexesForChars(chars, numChars, glyphIndexes, numGlyphs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRawFont_advancesForGlyphIndexes2(QRawFont const * this_ptr, unsigned int const * glyphIndexes, QPointF * advances, int numGlyphs) {
  return this_ptr->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRawFont_advancesForGlyphIndexes3(QRawFont const * this_ptr, unsigned int const * glyphIndexes, QPointF * advances, int numGlyphs, int layoutFlags) {
  return this_ptr->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs, QFlags< QRawFont::LayoutFlag >(layoutFlags));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QRawFont_alphaMapForGlyph(QRawFont const * this_ptr, unsigned int glyphIndex, QRawFont::AntialiasingType antialiasingType, QTransform const * transform) {
  return new QImage(this_ptr->alphaMapForGlyph(glyphIndex, antialiasingType, *transform));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QRawFont_pathForGlyph(QRawFont const * this_ptr, unsigned int glyphIndex) {
  return new QPainterPath(this_ptr->pathForGlyph(glyphIndex));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QRawFont_boundingRect(QRawFont const * this_ptr, unsigned int glyphIndex) {
  return new QRectF(this_ptr->boundingRect(glyphIndex));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRawFont_setPixelSize(QRawFont * this_ptr, double pixelSize) {
  this_ptr->setPixelSize(pixelSize);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_pixelSize(QRawFont const * this_ptr) {
  return this_ptr->pixelSize();
}


RITUAL_EXPORT QFont::HintingPreference ctr_qt_gui_ffi_QRawFont_hintingPreference(QRawFont const * this_ptr) {
  return this_ptr->hintingPreference();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_ascent(QRawFont const * this_ptr) {
  return this_ptr->ascent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_capHeight(QRawFont const * this_ptr) {
  return this_ptr->capHeight();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_descent(QRawFont const * this_ptr) {
  return this_ptr->descent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_leading(QRawFont const * this_ptr) {
  return this_ptr->leading();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_xHeight(QRawFont const * this_ptr) {
  return this_ptr->xHeight();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_averageCharWidth(QRawFont const * this_ptr) {
  return this_ptr->averageCharWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_maxCharWidth(QRawFont const * this_ptr) {
  return this_ptr->maxCharWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_lineThickness(QRawFont const * this_ptr) {
  return this_ptr->lineThickness();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_underlinePosition(QRawFont const * this_ptr) {
  return this_ptr->underlinePosition();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRawFont_unitsPerEm(QRawFont const * this_ptr) {
  return this_ptr->unitsPerEm();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRawFont_loadFromFile(QRawFont * this_ptr, QString const * fileName, double pixelSize, QFont::HintingPreference hintingPreference) {
  this_ptr->loadFromFile(*fileName, pixelSize, hintingPreference);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRawFont_loadFromData(QRawFont * this_ptr, QByteArray const * fontData, double pixelSize, QFont::HintingPreference hintingPreference) {
  this_ptr->loadFromData(*fontData, pixelSize, hintingPreference);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRawFont_supportsCharacter(QRawFont const * this_ptr, unsigned int ucs4) {
  return this_ptr->supportsCharacter(ucs4);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRawFont_supportsCharacter1(QRawFont const * this_ptr, QChar const * character) {
  return this_ptr->supportsCharacter(*character);
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem > * ctr_qt_gui_ffi_QRawFont_supportedWritingSystems(QRawFont const * this_ptr) {
  return new QList< QFontDatabase::WritingSystem >(this_ptr->supportedWritingSystems());
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QRawFont_fontTable(QRawFont const * this_ptr, char const * tagName) {
  return new QByteArray(this_ptr->fontTable(tagName));
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QRawFont_fontTable1(QRawFont const * this_ptr, QFont::Tag const * tag) {
  return new QByteArray(this_ptr->fontTable(*tag));
}


RITUAL_EXPORT QRawFont * ctr_qt_gui_ffi_QRawFont_fromFont(QFont const * font, QFontDatabase::WritingSystem writingSystem) {
  return new QRawFont(QRawFont::fromFont(*font, writingSystem));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap9(QRawFont * value1, QRawFont * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash4(QRawFont const * font, unsigned long seed) {
  return qHash(*font, seed);
}


RITUAL_EXPORT QGlyphRun * ctr_qt_gui_ffi_QGlyphRun_QGlyphRun() {
  return new QGlyphRun();
}


RITUAL_EXPORT QGlyphRun * ctr_qt_gui_ffi_QGlyphRun_QGlyphRun1(QGlyphRun const * other) {
  return new QGlyphRun(*other);
}


RITUAL_EXPORT QGlyphRun * ctr_qt_gui_ffi_QGlyphRun_operator_1(QGlyphRun * this_ptr, QGlyphRun const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_dQGlyphRun(QGlyphRun * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_swap(QGlyphRun * this_ptr, QGlyphRun * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QRawFont * ctr_qt_gui_ffi_QGlyphRun_rawFont(QGlyphRun const * this_ptr) {
  return new QRawFont(this_ptr->rawFont());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setRawFont(QGlyphRun * this_ptr, QRawFont const * rawFont) {
  this_ptr->setRawFont(*rawFont);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setRawData(QGlyphRun * this_ptr, unsigned int const * glyphIndexArray, QPointF const * glyphPositionArray, int size) {
  this_ptr->setRawData(glyphIndexArray, glyphPositionArray, size);
}


RITUAL_EXPORT QList< unsigned int > * ctr_qt_gui_ffi_QGlyphRun_glyphIndexes(QGlyphRun const * this_ptr) {
  return new QList< unsigned int >(this_ptr->glyphIndexes());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setGlyphIndexes(QGlyphRun * this_ptr, QList< unsigned int > const * glyphIndexes) {
  this_ptr->setGlyphIndexes(*glyphIndexes);
}


RITUAL_EXPORT QList< QPointF > * ctr_qt_gui_ffi_QGlyphRun_positions(QGlyphRun const * this_ptr) {
  return new QList< QPointF >(this_ptr->positions());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setPositions(QGlyphRun * this_ptr, QList< QPointF > const * positions) {
  this_ptr->setPositions(*positions);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_clear(QGlyphRun * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGlyphRun_operator__(QGlyphRun const * this_ptr, QGlyphRun const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setOverline(QGlyphRun * this_ptr, bool overline) {
  this_ptr->setOverline(overline);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGlyphRun_overline(QGlyphRun const * this_ptr) {
  return this_ptr->overline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setUnderline(QGlyphRun * this_ptr, bool underline) {
  this_ptr->setUnderline(underline);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGlyphRun_underline(QGlyphRun const * this_ptr) {
  return this_ptr->underline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setStrikeOut(QGlyphRun * this_ptr, bool strikeOut) {
  this_ptr->setStrikeOut(strikeOut);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGlyphRun_strikeOut(QGlyphRun const * this_ptr) {
  return this_ptr->strikeOut();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setRightToLeft(QGlyphRun * this_ptr, bool on) {
  this_ptr->setRightToLeft(on);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGlyphRun_isRightToLeft(QGlyphRun const * this_ptr) {
  return this_ptr->isRightToLeft();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setFlag(QGlyphRun * this_ptr, QGlyphRun::GlyphRunFlag flag, bool enabled) {
  this_ptr->setFlag(flag, enabled);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setFlags(QGlyphRun * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< QGlyphRun::GlyphRunFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QGlyphRun_flags(QGlyphRun const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setBoundingRect(QGlyphRun * this_ptr, QRectF const * boundingRect) {
  this_ptr->setBoundingRect(*boundingRect);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QGlyphRun_boundingRect(QGlyphRun const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QList< long long > * ctr_qt_gui_ffi_QGlyphRun_stringIndexes(QGlyphRun const * this_ptr) {
  return new QList< long long >(this_ptr->stringIndexes());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setStringIndexes(QGlyphRun * this_ptr, QList< long long > const * stringIndexes) {
  this_ptr->setStringIndexes(*stringIndexes);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGlyphRun_setSourceString(QGlyphRun * this_ptr, QString const * sourceString) {
  this_ptr->setSourceString(*sourceString);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGlyphRun_sourceString(QGlyphRun const * this_ptr) {
  return new QString(this_ptr->sourceString());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGlyphRun_isEmpty(QGlyphRun const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap10(QGlyphRun * value1, QGlyphRun * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_Qt_mightBeRichText(QAnyStringView const * arg1) {
  return Qt::mightBeRichText(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_Qt_convertFromPlainText(QString const * plain, Qt::WhiteSpaceMode mode) {
  return new QString(Qt::convertFromPlainText(*plain, mode));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractUndoItem_dQAbstractUndoItem(QAbstractUndoItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractUndoItem_undo(QAbstractUndoItem * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractUndoItem_redo(QAbstractUndoItem * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextDocument_metaObject(QTextDocument const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QTextDocument_qt_metacast(QTextDocument * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_qt_metacall(QTextDocument * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocument_tr(char const * s, char const * c, int n) {
  return new QString(QTextDocument::tr(s, c, n));
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QTextDocument_QTextDocument(QObject * parent) {
  return new QTextDocument(parent);
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QTextDocument_QTextDocument1(QString const * text, QObject * parent) {
  return new QTextDocument(*text, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_dQTextDocument(QTextDocument * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QTextDocument_clone(QTextDocument const * this_ptr, QObject * parent) {
  return this_ptr->clone(parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocument_isEmpty(QTextDocument const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_clear(QTextDocument * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setUndoRedoEnabled(QTextDocument * this_ptr, bool enable) {
  this_ptr->setUndoRedoEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocument_isUndoRedoEnabled(QTextDocument const * this_ptr) {
  return this_ptr->isUndoRedoEnabled();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocument_isUndoAvailable(QTextDocument const * this_ptr) {
  return this_ptr->isUndoAvailable();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocument_isRedoAvailable(QTextDocument const * this_ptr) {
  return this_ptr->isRedoAvailable();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_availableUndoSteps(QTextDocument const * this_ptr) {
  return this_ptr->availableUndoSteps();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_availableRedoSteps(QTextDocument const * this_ptr) {
  return this_ptr->availableRedoSteps();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_revision(QTextDocument const * this_ptr) {
  return this_ptr->revision();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setDocumentLayout(QTextDocument * this_ptr, QAbstractTextDocumentLayout * layout) {
  this_ptr->setDocumentLayout(layout);
}


RITUAL_EXPORT QAbstractTextDocumentLayout * ctr_qt_gui_ffi_QTextDocument_documentLayout(QTextDocument const * this_ptr) {
  return this_ptr->documentLayout();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setMetaInformation(QTextDocument * this_ptr, QTextDocument::MetaInformation info, QString const * arg2) {
  this_ptr->setMetaInformation(info, *arg2);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocument_metaInformation(QTextDocument const * this_ptr, QTextDocument::MetaInformation info) {
  return new QString(this_ptr->metaInformation(info));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocument_toHtml(QTextDocument const * this_ptr) {
  return new QString(this_ptr->toHtml());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setHtml(QTextDocument * this_ptr, QString const * html) {
  this_ptr->setHtml(*html);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocument_toMarkdown(QTextDocument const * this_ptr, int features) {
  return new QString(this_ptr->toMarkdown(QFlags< QTextDocument::MarkdownFeature >(features)));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setMarkdown(QTextDocument * this_ptr, QString const * markdown, int features) {
  this_ptr->setMarkdown(*markdown, QFlags< QTextDocument::MarkdownFeature >(features));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocument_toRawText(QTextDocument const * this_ptr) {
  return new QString(this_ptr->toRawText());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocument_toPlainText(QTextDocument const * this_ptr) {
  return new QString(this_ptr->toPlainText());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setPlainText(QTextDocument * this_ptr, QString const * text) {
  this_ptr->setPlainText(*text);
}


RITUAL_EXPORT QChar * ctr_qt_gui_ffi_QTextDocument_characterAt(QTextDocument const * this_ptr, int pos) {
  return new QChar(this_ptr->characterAt(pos));
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextDocument_find(QTextDocument const * this_ptr, QString const * subString, int from, int options) {
  return new QTextCursor(this_ptr->find(*subString, from, QFlags< QTextDocument::FindFlag >(options)));
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextDocument_find1(QTextDocument const * this_ptr, QString const * subString, QTextCursor const * cursor, int options) {
  return new QTextCursor(this_ptr->find(*subString, *cursor, QFlags< QTextDocument::FindFlag >(options)));
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextDocument_find2(QTextDocument const * this_ptr, QRegularExpression const * expr, int from, int options) {
  return new QTextCursor(this_ptr->find(*expr, from, QFlags< QTextDocument::FindFlag >(options)));
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextDocument_find3(QTextDocument const * this_ptr, QRegularExpression const * expr, QTextCursor const * cursor, int options) {
  return new QTextCursor(this_ptr->find(*expr, *cursor, QFlags< QTextDocument::FindFlag >(options)));
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextDocument_frameAt(QTextDocument const * this_ptr, int pos) {
  return this_ptr->frameAt(pos);
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextDocument_rootFrame(QTextDocument const * this_ptr) {
  return this_ptr->rootFrame();
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_QTextDocument_object(QTextDocument const * this_ptr, int objectIndex) {
  return this_ptr->object(objectIndex);
}


RITUAL_EXPORT QTextObject * ctr_qt_gui_ffi_QTextDocument_objectForFormat(QTextDocument const * this_ptr, QTextFormat const * arg1) {
  return this_ptr->objectForFormat(*arg1);
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextDocument_findBlock(QTextDocument const * this_ptr, int pos) {
  return new QTextBlock(this_ptr->findBlock(pos));
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextDocument_findBlockByNumber(QTextDocument const * this_ptr, int blockNumber) {
  return new QTextBlock(this_ptr->findBlockByNumber(blockNumber));
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextDocument_findBlockByLineNumber(QTextDocument const * this_ptr, int blockNumber) {
  return new QTextBlock(this_ptr->findBlockByLineNumber(blockNumber));
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextDocument_begin(QTextDocument const * this_ptr) {
  return new QTextBlock(this_ptr->begin());
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextDocument_end(QTextDocument const * this_ptr) {
  return new QTextBlock(this_ptr->end());
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextDocument_firstBlock(QTextDocument const * this_ptr) {
  return new QTextBlock(this_ptr->firstBlock());
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextDocument_lastBlock(QTextDocument const * this_ptr) {
  return new QTextBlock(this_ptr->lastBlock());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setPageSize(QTextDocument * this_ptr, QSizeF const * size) {
  this_ptr->setPageSize(*size);
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QTextDocument_pageSize(QTextDocument const * this_ptr) {
  return new QSizeF(this_ptr->pageSize());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setDefaultFont(QTextDocument * this_ptr, QFont const * font) {
  this_ptr->setDefaultFont(*font);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QTextDocument_defaultFont(QTextDocument const * this_ptr) {
  return new QFont(this_ptr->defaultFont());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setSuperScriptBaseline(QTextDocument * this_ptr, double baseline) {
  this_ptr->setSuperScriptBaseline(baseline);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextDocument_superScriptBaseline(QTextDocument const * this_ptr) {
  return this_ptr->superScriptBaseline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setSubScriptBaseline(QTextDocument * this_ptr, double baseline) {
  this_ptr->setSubScriptBaseline(baseline);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextDocument_subScriptBaseline(QTextDocument const * this_ptr) {
  return this_ptr->subScriptBaseline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setBaselineOffset(QTextDocument * this_ptr, double baseline) {
  this_ptr->setBaselineOffset(baseline);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextDocument_baselineOffset(QTextDocument const * this_ptr) {
  return this_ptr->baselineOffset();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_pageCount(QTextDocument const * this_ptr) {
  return this_ptr->pageCount();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocument_isModified(QTextDocument const * this_ptr) {
  return this_ptr->isModified();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_print(QTextDocument const * this_ptr, QPagedPaintDevice * printer) {
  this_ptr->print(printer);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QTextDocument_resource(QTextDocument const * this_ptr, int type, QUrl const * name) {
  return new QVariant(this_ptr->resource(type, *name));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_addResource(QTextDocument * this_ptr, int type, QUrl const * name, QVariant const * resource) {
  this_ptr->addResource(type, *name, *resource);
}


RITUAL_EXPORT QList< QTextFormat > * ctr_qt_gui_ffi_QTextDocument_allFormats(QTextDocument const * this_ptr) {
  return new QList< QTextFormat >(this_ptr->allFormats());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_markContentsDirty(QTextDocument * this_ptr, int from, int length) {
  this_ptr->markContentsDirty(from, length);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setUseDesignMetrics(QTextDocument * this_ptr, bool b) {
  this_ptr->setUseDesignMetrics(b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocument_useDesignMetrics(QTextDocument const * this_ptr) {
  return this_ptr->useDesignMetrics();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setLayoutEnabled(QTextDocument * this_ptr, bool b) {
  this_ptr->setLayoutEnabled(b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocument_isLayoutEnabled(QTextDocument const * this_ptr) {
  return this_ptr->isLayoutEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_drawContents(QTextDocument * this_ptr, QPainter * painter, QRectF const * rect) {
  this_ptr->drawContents(painter, *rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setTextWidth(QTextDocument * this_ptr, double width) {
  this_ptr->setTextWidth(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextDocument_textWidth(QTextDocument const * this_ptr) {
  return this_ptr->textWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextDocument_idealWidth(QTextDocument const * this_ptr) {
  return this_ptr->idealWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextDocument_indentWidth(QTextDocument const * this_ptr) {
  return this_ptr->indentWidth();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setIndentWidth(QTextDocument * this_ptr, double width) {
  this_ptr->setIndentWidth(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextDocument_documentMargin(QTextDocument const * this_ptr) {
  return this_ptr->documentMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setDocumentMargin(QTextDocument * this_ptr, double margin) {
  this_ptr->setDocumentMargin(margin);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_adjustSize(QTextDocument * this_ptr) {
  this_ptr->adjustSize();
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QTextDocument_size(QTextDocument const * this_ptr) {
  return new QSizeF(this_ptr->size());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_blockCount(QTextDocument const * this_ptr) {
  return this_ptr->blockCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_lineCount(QTextDocument const * this_ptr) {
  return this_ptr->lineCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_characterCount(QTextDocument const * this_ptr) {
  return this_ptr->characterCount();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setDefaultStyleSheet(QTextDocument * this_ptr, QString const * sheet) {
  this_ptr->setDefaultStyleSheet(*sheet);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocument_defaultStyleSheet(QTextDocument const * this_ptr) {
  return new QString(this_ptr->defaultStyleSheet());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_undo(QTextDocument * this_ptr, QTextCursor * cursor) {
  this_ptr->undo(cursor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_redo(QTextDocument * this_ptr, QTextCursor * cursor) {
  this_ptr->redo(cursor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_clearUndoRedoStacks(QTextDocument * this_ptr, QTextDocument::Stacks historyToClear) {
  this_ptr->clearUndoRedoStacks(historyToClear);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextDocument_maximumBlockCount(QTextDocument const * this_ptr) {
  return this_ptr->maximumBlockCount();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setMaximumBlockCount(QTextDocument * this_ptr, int maximum) {
  this_ptr->setMaximumBlockCount(maximum);
}


RITUAL_EXPORT QTextOption * ctr_qt_gui_ffi_QTextDocument_defaultTextOption(QTextDocument const * this_ptr) {
  return new QTextOption(this_ptr->defaultTextOption());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setDefaultTextOption(QTextDocument * this_ptr, QTextOption const * option) {
  this_ptr->setDefaultTextOption(*option);
}


RITUAL_EXPORT QUrl * ctr_qt_gui_ffi_QTextDocument_baseUrl(QTextDocument const * this_ptr) {
  return new QUrl(this_ptr->baseUrl());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setBaseUrl(QTextDocument * this_ptr, QUrl const * url) {
  this_ptr->setBaseUrl(*url);
}


RITUAL_EXPORT Qt::CursorMoveStyle ctr_qt_gui_ffi_QTextDocument_defaultCursorMoveStyle(QTextDocument const * this_ptr) {
  return this_ptr->defaultCursorMoveStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setDefaultCursorMoveStyle(QTextDocument * this_ptr, Qt::CursorMoveStyle style) {
  this_ptr->setDefaultCursorMoveStyle(style);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_undo1(QTextDocument * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_redo1(QTextDocument * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_appendUndoItem(QTextDocument * this_ptr, QAbstractUndoItem * arg1) {
  this_ptr->appendUndoItem(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocument_setModified(QTextDocument * this_ptr, bool m) {
  this_ptr->setModified(m);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush() {
  return new QBrush();
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush1(Qt::BrushStyle bs) {
  return new QBrush(bs);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush2(QColor const * color, Qt::BrushStyle bs) {
  return new QBrush(*color, bs);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush3(Qt::GlobalColor color, Qt::BrushStyle bs) {
  return new QBrush(color, bs);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush4(QColor const * color, QPixmap const * pixmap) {
  return new QBrush(*color, *pixmap);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush5(Qt::GlobalColor color, QPixmap const * pixmap) {
  return new QBrush(color, *pixmap);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush6(QPixmap const * pixmap) {
  return new QBrush(*pixmap);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush7(QImage const * image) {
  return new QBrush(*image);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush8(QBrush const * brush) {
  return new QBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_QBrush9(QGradient const * gradient) {
  return new QBrush(*gradient);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_dQBrush(QBrush * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_operator_(QBrush * this_ptr, QBrush const * brush) {
  return &this_ptr->operator=(*brush);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_swap(QBrush * this_ptr, QBrush * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_operator_2(QBrush * this_ptr, Qt::BrushStyle style) {
  return &this_ptr->operator=(style);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_operator_3(QBrush * this_ptr, QColor const * color) {
  return &this_ptr->operator=(*color);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QBrush_operator_4(QBrush * this_ptr, Qt::GlobalColor color) {
  return &this_ptr->operator=(color);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QBrush_operator_QVariant(QBrush const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT Qt::BrushStyle ctr_qt_gui_ffi_QBrush_style(QBrush const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_setStyle(QBrush * this_ptr, Qt::BrushStyle arg1) {
  this_ptr->setStyle(arg1);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QBrush_transform(QBrush const * this_ptr) {
  return new QTransform(this_ptr->transform());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_setTransform(QBrush * this_ptr, QTransform const * arg1) {
  this_ptr->setTransform(*arg1);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QBrush_texture(QBrush const * this_ptr) {
  return new QPixmap(this_ptr->texture());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_setTexture(QBrush * this_ptr, QPixmap const * pixmap) {
  this_ptr->setTexture(*pixmap);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QBrush_textureImage(QBrush const * this_ptr) {
  return new QImage(this_ptr->textureImage());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_setTextureImage(QBrush * this_ptr, QImage const * image) {
  this_ptr->setTextureImage(*image);
}


RITUAL_EXPORT QColor const * ctr_qt_gui_ffi_QBrush_color(QBrush const * this_ptr) {
  return &this_ptr->color();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_setColor(QBrush * this_ptr, QColor const * color) {
  this_ptr->setColor(*color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrush_setColor1(QBrush * this_ptr, Qt::GlobalColor color) {
  this_ptr->setColor(color);
}


RITUAL_EXPORT QGradient const * ctr_qt_gui_ffi_QBrush_gradient(QBrush const * this_ptr) {
  return this_ptr->gradient();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QBrush_isOpaque(QBrush const * this_ptr) {
  return this_ptr->isOpaque();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QBrush_operator__(QBrush const * this_ptr, QBrush const * b) {
  return this_ptr->operator==(*b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QBrush_isDetached(QBrush const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap11(QBrush * value1, QBrush * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__45(QDataStream * arg1, QBrush const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__46(QDataStream * arg1, QBrush * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__47(QDebug const * arg1, QBrush const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QGradient * ctr_qt_gui_ffi_QGradient_QGradient() {
  return new QGradient();
}


RITUAL_EXPORT QGradient * ctr_qt_gui_ffi_QGradient_QGradient1(QGradient::Preset arg1) {
  return new QGradient(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGradient_dQGradient(QGradient * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGradient::Type ctr_qt_gui_ffi_QGradient_type(QGradient const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGradient_setSpread(QGradient * this_ptr, QGradient::Spread spread) {
  this_ptr->setSpread(spread);
}


RITUAL_EXPORT QGradient::Spread ctr_qt_gui_ffi_QGradient_spread(QGradient const * this_ptr) {
  return this_ptr->spread();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGradient_setColorAt(QGradient * this_ptr, double pos, QColor const * color) {
  this_ptr->setColorAt(pos, *color);
}


RITUAL_EXPORT QGradient::CoordinateMode ctr_qt_gui_ffi_QGradient_coordinateMode(QGradient const * this_ptr) {
  return this_ptr->coordinateMode();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGradient_setCoordinateMode(QGradient * this_ptr, QGradient::CoordinateMode mode) {
  this_ptr->setCoordinateMode(mode);
}


RITUAL_EXPORT QGradient::InterpolationMode ctr_qt_gui_ffi_QGradient_interpolationMode(QGradient const * this_ptr) {
  return this_ptr->interpolationMode();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGradient_setInterpolationMode(QGradient * this_ptr, QGradient::InterpolationMode mode) {
  this_ptr->setInterpolationMode(mode);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGradient_operator__(QGradient const * this_ptr, QGradient const * gradient) {
  return this_ptr->operator==(*gradient);
}


RITUAL_EXPORT QLinearGradient * ctr_qt_gui_ffi_QLinearGradient_QLinearGradient() {
  return new QLinearGradient();
}


RITUAL_EXPORT QLinearGradient * ctr_qt_gui_ffi_QLinearGradient_QLinearGradient1(QPointF const * start, QPointF const * finalStop) {
  return new QLinearGradient(*start, *finalStop);
}


RITUAL_EXPORT QLinearGradient * ctr_qt_gui_ffi_QLinearGradient_QLinearGradient2(double xStart, double yStart, double xFinalStop, double yFinalStop) {
  return new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QLinearGradient_dQLinearGradient(QLinearGradient * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QLinearGradient_start(QLinearGradient const * this_ptr) {
  return new QPointF(this_ptr->start());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QLinearGradient_setStart(QLinearGradient * this_ptr, QPointF const * start) {
  this_ptr->setStart(*start);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QLinearGradient_setStart1(QLinearGradient * this_ptr, double x, double y) {
  this_ptr->setStart(x, y);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QLinearGradient_finalStop(QLinearGradient const * this_ptr) {
  return new QPointF(this_ptr->finalStop());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QLinearGradient_setFinalStop(QLinearGradient * this_ptr, QPointF const * stop) {
  this_ptr->setFinalStop(*stop);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QLinearGradient_setFinalStop1(QLinearGradient * this_ptr, double x, double y) {
  this_ptr->setFinalStop(x, y);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient() {
  return new QRadialGradient();
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient1(QPointF const * center, double radius, QPointF const * focalPoint) {
  return new QRadialGradient(*center, radius, *focalPoint);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient2(double cx, double cy, double radius, double fx, double fy) {
  return new QRadialGradient(cx, cy, radius, fx, fy);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient3(QPointF const * center, double radius) {
  return new QRadialGradient(*center, radius);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient4(double cx, double cy, double radius) {
  return new QRadialGradient(cx, cy, radius);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient5(QPointF const * center, double centerRadius, QPointF const * focalPoint, double focalRadius) {
  return new QRadialGradient(*center, centerRadius, *focalPoint, focalRadius);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient6(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
  return new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_dQRadialGradient(QRadialGradient * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QRadialGradient_center(QRadialGradient const * this_ptr) {
  return new QPointF(this_ptr->center());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_setCenter(QRadialGradient * this_ptr, QPointF const * center) {
  this_ptr->setCenter(*center);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_setCenter1(QRadialGradient * this_ptr, double x, double y) {
  this_ptr->setCenter(x, y);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QRadialGradient_focalPoint(QRadialGradient const * this_ptr) {
  return new QPointF(this_ptr->focalPoint());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_setFocalPoint(QRadialGradient * this_ptr, QPointF const * focalPoint) {
  this_ptr->setFocalPoint(*focalPoint);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_setFocalPoint1(QRadialGradient * this_ptr, double x, double y) {
  this_ptr->setFocalPoint(x, y);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRadialGradient_radius(QRadialGradient const * this_ptr) {
  return this_ptr->radius();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_setRadius(QRadialGradient * this_ptr, double radius) {
  this_ptr->setRadius(radius);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRadialGradient_centerRadius(QRadialGradient const * this_ptr) {
  return this_ptr->centerRadius();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_setCenterRadius(QRadialGradient * this_ptr, double radius) {
  this_ptr->setCenterRadius(radius);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QRadialGradient_focalRadius(QRadialGradient const * this_ptr) {
  return this_ptr->focalRadius();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRadialGradient_setFocalRadius(QRadialGradient * this_ptr, double radius) {
  this_ptr->setFocalRadius(radius);
}


RITUAL_EXPORT QConicalGradient * ctr_qt_gui_ffi_QConicalGradient_QConicalGradient() {
  return new QConicalGradient();
}


RITUAL_EXPORT QConicalGradient * ctr_qt_gui_ffi_QConicalGradient_QConicalGradient1(QPointF const * center, double startAngle) {
  return new QConicalGradient(*center, startAngle);
}


RITUAL_EXPORT QConicalGradient * ctr_qt_gui_ffi_QConicalGradient_QConicalGradient2(double cx, double cy, double startAngle) {
  return new QConicalGradient(cx, cy, startAngle);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QConicalGradient_dQConicalGradient(QConicalGradient * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QConicalGradient_center(QConicalGradient const * this_ptr) {
  return new QPointF(this_ptr->center());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QConicalGradient_setCenter(QConicalGradient * this_ptr, QPointF const * center) {
  this_ptr->setCenter(*center);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QConicalGradient_setCenter1(QConicalGradient * this_ptr, double x, double y) {
  this_ptr->setCenter(x, y);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QConicalGradient_angle(QConicalGradient const * this_ptr) {
  return this_ptr->angle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QConicalGradient_setAngle(QConicalGradient * this_ptr, double angle) {
  this_ptr->setAngle(angle);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__48(QDataStream * arg1, QPen const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__49(QDataStream * arg1, QPen * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_QPen() {
  return new QPen();
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_QPen1(Qt::PenStyle arg1) {
  return new QPen(arg1);
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_QPen2(QColor const * color) {
  return new QPen(*color);
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_QPen3(QBrush const * brush, double width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j) {
  return new QPen(*brush, width, s, c, j);
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_QPen4(QPen const * pen) {
  return new QPen(*pen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_dQPen(QPen * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_operator_(QPen * this_ptr, QPen const * pen) {
  return &this_ptr->operator=(*pen);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_swap(QPen * this_ptr, QPen * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_operator_2(QPen * this_ptr, QColor const * color) {
  return &this_ptr->operator=(*color);
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QPen_operator_3(QPen * this_ptr, Qt::PenStyle style) {
  return &this_ptr->operator=(style);
}


RITUAL_EXPORT Qt::PenStyle ctr_qt_gui_ffi_QPen_style(QPen const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setStyle(QPen * this_ptr, Qt::PenStyle arg1) {
  this_ptr->setStyle(arg1);
}


RITUAL_EXPORT QList< double > * ctr_qt_gui_ffi_QPen_dashPattern(QPen const * this_ptr) {
  return new QList< double >(this_ptr->dashPattern());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setDashPattern(QPen * this_ptr, QList< double > const * pattern) {
  this_ptr->setDashPattern(*pattern);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPen_dashOffset(QPen const * this_ptr) {
  return this_ptr->dashOffset();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setDashOffset(QPen * this_ptr, double doffset) {
  this_ptr->setDashOffset(doffset);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPen_miterLimit(QPen const * this_ptr) {
  return this_ptr->miterLimit();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setMiterLimit(QPen * this_ptr, double limit) {
  this_ptr->setMiterLimit(limit);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPen_widthF(QPen const * this_ptr) {
  return this_ptr->widthF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setWidthF(QPen * this_ptr, double width) {
  this_ptr->setWidthF(width);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPen_width(QPen const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setWidth(QPen * this_ptr, int width) {
  this_ptr->setWidth(width);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QPen_color(QPen const * this_ptr) {
  return new QColor(this_ptr->color());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setColor(QPen * this_ptr, QColor const * color) {
  this_ptr->setColor(*color);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QPen_brush(QPen const * this_ptr) {
  return new QBrush(this_ptr->brush());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setBrush(QPen * this_ptr, QBrush const * brush) {
  this_ptr->setBrush(*brush);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPen_isSolid(QPen const * this_ptr) {
  return this_ptr->isSolid();
}


RITUAL_EXPORT Qt::PenCapStyle ctr_qt_gui_ffi_QPen_capStyle(QPen const * this_ptr) {
  return this_ptr->capStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setCapStyle(QPen * this_ptr, Qt::PenCapStyle pcs) {
  this_ptr->setCapStyle(pcs);
}


RITUAL_EXPORT Qt::PenJoinStyle ctr_qt_gui_ffi_QPen_joinStyle(QPen const * this_ptr) {
  return this_ptr->joinStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setJoinStyle(QPen * this_ptr, Qt::PenJoinStyle pcs) {
  this_ptr->setJoinStyle(pcs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPen_isCosmetic(QPen const * this_ptr) {
  return this_ptr->isCosmetic();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPen_setCosmetic(QPen * this_ptr, bool cosmetic) {
  this_ptr->setCosmetic(cosmetic);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPen_operator__(QPen const * this_ptr, QPen const * p) {
  return this_ptr->operator==(*p);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QPen_operator_QVariant(QPen const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPen_isDetached(QPen * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap12(QPen * value1, QPen * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__50(QDebug const * arg1, QPen const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QTextOption::Tab * ctr_qt_gui_ffi_QTextOption_Tab_Tab() {
  return new QTextOption::Tab();
}


RITUAL_EXPORT QTextOption::Tab * ctr_qt_gui_ffi_QTextOption_Tab_Tab1(double pos, QTextOption::TabType tabType, QChar const * delim) {
  return new QTextOption::Tab(pos, tabType, *delim);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextOption_Tab_operator__(QTextOption::Tab const * this_ptr, QTextOption::Tab const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT QTextOption * ctr_qt_gui_ffi_QTextOption_QTextOption() {
  return new QTextOption();
}


RITUAL_EXPORT QTextOption * ctr_qt_gui_ffi_QTextOption_QTextOption1(int alignment) {
  return new QTextOption(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_dQTextOption(QTextOption * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextOption * ctr_qt_gui_ffi_QTextOption_QTextOption2(QTextOption const * o) {
  return new QTextOption(*o);
}


RITUAL_EXPORT QTextOption * ctr_qt_gui_ffi_QTextOption_operator_(QTextOption * this_ptr, QTextOption const * o) {
  return &this_ptr->operator=(*o);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setAlignment(QTextOption * this_ptr, int alignment) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextOption_alignment(QTextOption const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setTextDirection(QTextOption * this_ptr, Qt::LayoutDirection aDirection) {
  this_ptr->setTextDirection(aDirection);
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_gui_ffi_QTextOption_textDirection(QTextOption const * this_ptr) {
  return this_ptr->textDirection();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setWrapMode(QTextOption * this_ptr, QTextOption::WrapMode wrap) {
  this_ptr->setWrapMode(wrap);
}


RITUAL_EXPORT QTextOption::WrapMode ctr_qt_gui_ffi_QTextOption_wrapMode(QTextOption const * this_ptr) {
  return this_ptr->wrapMode();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setFlags(QTextOption * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< QTextOption::Flag >(flags));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextOption_flags(QTextOption const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setTabStopDistance(QTextOption * this_ptr, double tabStopDistance) {
  this_ptr->setTabStopDistance(tabStopDistance);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextOption_tabStopDistance(QTextOption const * this_ptr) {
  return this_ptr->tabStopDistance();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setTabArray(QTextOption * this_ptr, QList< double > const * tabStops) {
  this_ptr->setTabArray(*tabStops);
}


RITUAL_EXPORT QList< double > * ctr_qt_gui_ffi_QTextOption_tabArray(QTextOption const * this_ptr) {
  return new QList< double >(this_ptr->tabArray());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setTabs(QTextOption * this_ptr, QList< QTextOption::Tab > const * tabStops) {
  this_ptr->setTabs(*tabStops);
}


RITUAL_EXPORT QList< QTextOption::Tab > * ctr_qt_gui_ffi_QTextOption_tabs(QTextOption const * this_ptr) {
  return new QList< QTextOption::Tab >(this_ptr->tabs());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_setUseDesignMetrics(QTextOption * this_ptr, bool b) {
  this_ptr->setUseDesignMetrics(b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextOption_useDesignMetrics(QTextOption const * this_ptr) {
  return this_ptr->useDesignMetrics();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QTextOption_Tab(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QTextOption_Tab(*arg1);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__51(QDebug const * arg1, QTextLength const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextLength_QTextLength() {
  return new QTextLength();
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextLength_QTextLength1(QTextLength::Type type, double value) {
  return new QTextLength(type, value);
}


RITUAL_EXPORT QTextLength::Type ctr_qt_gui_ffi_QTextLength_type(QTextLength const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLength_value(QTextLength const * this_ptr, double maximumLength) {
  return this_ptr->value(maximumLength);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLength_rawValue(QTextLength const * this_ptr) {
  return this_ptr->rawValue();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextLength_operator__(QTextLength const * this_ptr, QTextLength const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QTextLength_operator_QVariant(QTextLength const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__52(QDebug const * arg1, QTextFormat const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QTextFormat_QTextFormat() {
  return new QTextFormat();
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QTextFormat_QTextFormat1(int type) {
  return new QTextFormat(type);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QTextFormat_QTextFormat2(QTextFormat const * rhs) {
  return new QTextFormat(*rhs);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QTextFormat_operator_(QTextFormat * this_ptr, QTextFormat const * rhs) {
  return &this_ptr->operator=(*rhs);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_dQTextFormat(QTextFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_swap(QTextFormat * this_ptr, QTextFormat * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_merge(QTextFormat * this_ptr, QTextFormat const * other) {
  this_ptr->merge(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isValid(QTextFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isEmpty(QTextFormat const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFormat_type(QTextFormat const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFormat_objectIndex(QTextFormat const * this_ptr) {
  return this_ptr->objectIndex();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_setObjectIndex(QTextFormat * this_ptr, int object) {
  this_ptr->setObjectIndex(object);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QTextFormat_property(QTextFormat const * this_ptr, int propertyId) {
  return new QVariant(this_ptr->property(propertyId));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_setProperty(QTextFormat * this_ptr, int propertyId, QVariant const * value) {
  this_ptr->setProperty(propertyId, *value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_clearProperty(QTextFormat * this_ptr, int propertyId) {
  this_ptr->clearProperty(propertyId);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_hasProperty(QTextFormat const * this_ptr, int propertyId) {
  return this_ptr->hasProperty(propertyId);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_boolProperty(QTextFormat const * this_ptr, int propertyId) {
  return this_ptr->boolProperty(propertyId);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFormat_intProperty(QTextFormat const * this_ptr, int propertyId) {
  return this_ptr->intProperty(propertyId);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFormat_doubleProperty(QTextFormat const * this_ptr, int propertyId) {
  return this_ptr->doubleProperty(propertyId);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextFormat_stringProperty(QTextFormat const * this_ptr, int propertyId) {
  return new QString(this_ptr->stringProperty(propertyId));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QTextFormat_colorProperty(QTextFormat const * this_ptr, int propertyId) {
  return new QColor(this_ptr->colorProperty(propertyId));
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QTextFormat_penProperty(QTextFormat const * this_ptr, int propertyId) {
  return new QPen(this_ptr->penProperty(propertyId));
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextFormat_brushProperty(QTextFormat const * this_ptr, int propertyId) {
  return new QBrush(this_ptr->brushProperty(propertyId));
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextFormat_lengthProperty(QTextFormat const * this_ptr, int propertyId) {
  return new QTextLength(this_ptr->lengthProperty(propertyId));
}


RITUAL_EXPORT QList< QTextLength > * ctr_qt_gui_ffi_QTextFormat_lengthVectorProperty(QTextFormat const * this_ptr, int propertyId) {
  return new QList< QTextLength >(this_ptr->lengthVectorProperty(propertyId));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_setProperty1(QTextFormat * this_ptr, int propertyId, QList< QTextLength > const * lengths) {
  this_ptr->setProperty(propertyId, *lengths);
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_gui_ffi_QTextFormat_properties(QTextFormat const * this_ptr) {
  return new QMap< int, QVariant >(this_ptr->properties());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFormat_propertyCount(QTextFormat const * this_ptr) {
  return this_ptr->propertyCount();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_setObjectType(QTextFormat * this_ptr, int type) {
  this_ptr->setObjectType(type);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFormat_objectType(QTextFormat const * this_ptr) {
  return this_ptr->objectType();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isCharFormat(QTextFormat const * this_ptr) {
  return this_ptr->isCharFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isBlockFormat(QTextFormat const * this_ptr) {
  return this_ptr->isBlockFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isListFormat(QTextFormat const * this_ptr) {
  return this_ptr->isListFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isFrameFormat(QTextFormat const * this_ptr) {
  return this_ptr->isFrameFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isImageFormat(QTextFormat const * this_ptr) {
  return this_ptr->isImageFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isTableFormat(QTextFormat const * this_ptr) {
  return this_ptr->isTableFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_isTableCellFormat(QTextFormat const * this_ptr) {
  return this_ptr->isTableCellFormat();
}


RITUAL_EXPORT QTextBlockFormat * ctr_qt_gui_ffi_QTextFormat_toBlockFormat(QTextFormat const * this_ptr) {
  return new QTextBlockFormat(this_ptr->toBlockFormat());
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextFormat_toCharFormat(QTextFormat const * this_ptr) {
  return new QTextCharFormat(this_ptr->toCharFormat());
}


RITUAL_EXPORT QTextListFormat * ctr_qt_gui_ffi_QTextFormat_toListFormat(QTextFormat const * this_ptr) {
  return new QTextListFormat(this_ptr->toListFormat());
}


RITUAL_EXPORT QTextTableFormat * ctr_qt_gui_ffi_QTextFormat_toTableFormat(QTextFormat const * this_ptr) {
  return new QTextTableFormat(this_ptr->toTableFormat());
}


RITUAL_EXPORT QTextFrameFormat * ctr_qt_gui_ffi_QTextFormat_toFrameFormat(QTextFormat const * this_ptr) {
  return new QTextFrameFormat(this_ptr->toFrameFormat());
}


RITUAL_EXPORT QTextImageFormat * ctr_qt_gui_ffi_QTextFormat_toImageFormat(QTextFormat const * this_ptr) {
  return new QTextImageFormat(this_ptr->toImageFormat());
}


RITUAL_EXPORT QTextTableCellFormat * ctr_qt_gui_ffi_QTextFormat_toTableCellFormat(QTextFormat const * this_ptr) {
  return new QTextTableCellFormat(this_ptr->toTableCellFormat());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFormat_operator__(QTextFormat const * this_ptr, QTextFormat const * rhs) {
  return this_ptr->operator==(*rhs);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QTextFormat_operator_QVariant(QTextFormat const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_setLayoutDirection(QTextFormat * this_ptr, Qt::LayoutDirection direction) {
  this_ptr->setLayoutDirection(direction);
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_gui_ffi_QTextFormat_layoutDirection(QTextFormat const * this_ptr) {
  return this_ptr->layoutDirection();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_setBackground(QTextFormat * this_ptr, QBrush const * brush) {
  this_ptr->setBackground(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextFormat_background(QTextFormat const * this_ptr) {
  return new QBrush(this_ptr->background());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_clearBackground(QTextFormat * this_ptr) {
  this_ptr->clearBackground();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_setForeground(QTextFormat * this_ptr, QBrush const * brush) {
  this_ptr->setForeground(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextFormat_foreground(QTextFormat const * this_ptr) {
  return new QBrush(this_ptr->foreground());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFormat_clearForeground(QTextFormat * this_ptr) {
  this_ptr->clearForeground();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap13(QTextFormat * value1, QTextFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextCharFormat_QTextCharFormat() {
  return new QTextCharFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_isValid(QTextCharFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFont(QTextCharFormat * this_ptr, QFont const * font, QTextCharFormat::FontPropertiesInheritanceBehavior behavior) {
  this_ptr->setFont(*font, behavior);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QTextCharFormat_font(QTextCharFormat const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontFamily(QTextCharFormat * this_ptr, QString const * family) {
  this_ptr->setFontFamily(*family);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextCharFormat_fontFamily(QTextCharFormat const * this_ptr) {
  return new QString(this_ptr->fontFamily());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontFamilies(QTextCharFormat * this_ptr, QList< QString > const * families) {
  this_ptr->setFontFamilies(*families);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QTextCharFormat_fontFamilies(QTextCharFormat const * this_ptr) {
  return new QVariant(this_ptr->fontFamilies());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontStyleName(QTextCharFormat * this_ptr, QString const * styleName) {
  this_ptr->setFontStyleName(*styleName);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QTextCharFormat_fontStyleName(QTextCharFormat const * this_ptr) {
  return new QVariant(this_ptr->fontStyleName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontPointSize(QTextCharFormat * this_ptr, double size) {
  this_ptr->setFontPointSize(size);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextCharFormat_fontPointSize(QTextCharFormat const * this_ptr) {
  return this_ptr->fontPointSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontWeight(QTextCharFormat * this_ptr, int weight) {
  this_ptr->setFontWeight(weight);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCharFormat_fontWeight(QTextCharFormat const * this_ptr) {
  return this_ptr->fontWeight();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontItalic(QTextCharFormat * this_ptr, bool italic) {
  this_ptr->setFontItalic(italic);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_fontItalic(QTextCharFormat const * this_ptr) {
  return this_ptr->fontItalic();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontCapitalization(QTextCharFormat * this_ptr, QFont::Capitalization capitalization) {
  this_ptr->setFontCapitalization(capitalization);
}


RITUAL_EXPORT QFont::Capitalization ctr_qt_gui_ffi_QTextCharFormat_fontCapitalization(QTextCharFormat const * this_ptr) {
  return this_ptr->fontCapitalization();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontLetterSpacingType(QTextCharFormat * this_ptr, QFont::SpacingType letterSpacingType) {
  this_ptr->setFontLetterSpacingType(letterSpacingType);
}


RITUAL_EXPORT QFont::SpacingType ctr_qt_gui_ffi_QTextCharFormat_fontLetterSpacingType(QTextCharFormat const * this_ptr) {
  return this_ptr->fontLetterSpacingType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontLetterSpacing(QTextCharFormat * this_ptr, double spacing) {
  this_ptr->setFontLetterSpacing(spacing);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextCharFormat_fontLetterSpacing(QTextCharFormat const * this_ptr) {
  return this_ptr->fontLetterSpacing();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontWordSpacing(QTextCharFormat * this_ptr, double spacing) {
  this_ptr->setFontWordSpacing(spacing);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextCharFormat_fontWordSpacing(QTextCharFormat const * this_ptr) {
  return this_ptr->fontWordSpacing();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontUnderline(QTextCharFormat * this_ptr, bool underline) {
  this_ptr->setFontUnderline(underline);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_fontUnderline(QTextCharFormat const * this_ptr) {
  return this_ptr->fontUnderline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontOverline(QTextCharFormat * this_ptr, bool overline) {
  this_ptr->setFontOverline(overline);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_fontOverline(QTextCharFormat const * this_ptr) {
  return this_ptr->fontOverline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontStrikeOut(QTextCharFormat * this_ptr, bool strikeOut) {
  this_ptr->setFontStrikeOut(strikeOut);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_fontStrikeOut(QTextCharFormat const * this_ptr) {
  return this_ptr->fontStrikeOut();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setUnderlineColor(QTextCharFormat * this_ptr, QColor const * color) {
  this_ptr->setUnderlineColor(*color);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QTextCharFormat_underlineColor(QTextCharFormat const * this_ptr) {
  return new QColor(this_ptr->underlineColor());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontFixedPitch(QTextCharFormat * this_ptr, bool fixedPitch) {
  this_ptr->setFontFixedPitch(fixedPitch);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_fontFixedPitch(QTextCharFormat const * this_ptr) {
  return this_ptr->fontFixedPitch();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontStretch(QTextCharFormat * this_ptr, int factor) {
  this_ptr->setFontStretch(factor);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCharFormat_fontStretch(QTextCharFormat const * this_ptr) {
  return this_ptr->fontStretch();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontStyleHint(QTextCharFormat * this_ptr, QFont::StyleHint hint, QFont::StyleStrategy strategy) {
  this_ptr->setFontStyleHint(hint, strategy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontStyleStrategy(QTextCharFormat * this_ptr, QFont::StyleStrategy strategy) {
  this_ptr->setFontStyleStrategy(strategy);
}


RITUAL_EXPORT QFont::StyleHint ctr_qt_gui_ffi_QTextCharFormat_fontStyleHint(QTextCharFormat const * this_ptr) {
  return this_ptr->fontStyleHint();
}


RITUAL_EXPORT QFont::StyleStrategy ctr_qt_gui_ffi_QTextCharFormat_fontStyleStrategy(QTextCharFormat const * this_ptr) {
  return this_ptr->fontStyleStrategy();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontHintingPreference(QTextCharFormat * this_ptr, QFont::HintingPreference hintingPreference) {
  this_ptr->setFontHintingPreference(hintingPreference);
}


RITUAL_EXPORT QFont::HintingPreference ctr_qt_gui_ffi_QTextCharFormat_fontHintingPreference(QTextCharFormat const * this_ptr) {
  return this_ptr->fontHintingPreference();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setFontKerning(QTextCharFormat * this_ptr, bool enable) {
  this_ptr->setFontKerning(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_fontKerning(QTextCharFormat const * this_ptr) {
  return this_ptr->fontKerning();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setUnderlineStyle(QTextCharFormat * this_ptr, QTextCharFormat::UnderlineStyle style) {
  this_ptr->setUnderlineStyle(style);
}


RITUAL_EXPORT QTextCharFormat::UnderlineStyle ctr_qt_gui_ffi_QTextCharFormat_underlineStyle(QTextCharFormat const * this_ptr) {
  return this_ptr->underlineStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setVerticalAlignment(QTextCharFormat * this_ptr, QTextCharFormat::VerticalAlignment alignment) {
  this_ptr->setVerticalAlignment(alignment);
}


RITUAL_EXPORT QTextCharFormat::VerticalAlignment ctr_qt_gui_ffi_QTextCharFormat_verticalAlignment(QTextCharFormat const * this_ptr) {
  return this_ptr->verticalAlignment();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setTextOutline(QTextCharFormat * this_ptr, QPen const * pen) {
  this_ptr->setTextOutline(*pen);
}


RITUAL_EXPORT QPen * ctr_qt_gui_ffi_QTextCharFormat_textOutline(QTextCharFormat const * this_ptr) {
  return new QPen(this_ptr->textOutline());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setToolTip(QTextCharFormat * this_ptr, QString const * tip) {
  this_ptr->setToolTip(*tip);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextCharFormat_toolTip(QTextCharFormat const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setSuperScriptBaseline(QTextCharFormat * this_ptr, double baseline) {
  this_ptr->setSuperScriptBaseline(baseline);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextCharFormat_superScriptBaseline(QTextCharFormat const * this_ptr) {
  return this_ptr->superScriptBaseline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setSubScriptBaseline(QTextCharFormat * this_ptr, double baseline) {
  this_ptr->setSubScriptBaseline(baseline);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextCharFormat_subScriptBaseline(QTextCharFormat const * this_ptr) {
  return this_ptr->subScriptBaseline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setBaselineOffset(QTextCharFormat * this_ptr, double baseline) {
  this_ptr->setBaselineOffset(baseline);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextCharFormat_baselineOffset(QTextCharFormat const * this_ptr) {
  return this_ptr->baselineOffset();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setAnchor(QTextCharFormat * this_ptr, bool anchor) {
  this_ptr->setAnchor(anchor);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCharFormat_isAnchor(QTextCharFormat const * this_ptr) {
  return this_ptr->isAnchor();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setAnchorHref(QTextCharFormat * this_ptr, QString const * value) {
  this_ptr->setAnchorHref(*value);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextCharFormat_anchorHref(QTextCharFormat const * this_ptr) {
  return new QString(this_ptr->anchorHref());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setAnchorNames(QTextCharFormat * this_ptr, QList< QString > const * names) {
  this_ptr->setAnchorNames(*names);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QTextCharFormat_anchorNames(QTextCharFormat const * this_ptr) {
  return new QList< QString >(this_ptr->anchorNames());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setTableCellRowSpan(QTextCharFormat * this_ptr, int tableCellRowSpan) {
  this_ptr->setTableCellRowSpan(tableCellRowSpan);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCharFormat_tableCellRowSpan(QTextCharFormat const * this_ptr) {
  return this_ptr->tableCellRowSpan();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_setTableCellColumnSpan(QTextCharFormat * this_ptr, int tableCellColumnSpan) {
  this_ptr->setTableCellColumnSpan(tableCellColumnSpan);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCharFormat_tableCellColumnSpan(QTextCharFormat const * this_ptr) {
  return this_ptr->tableCellColumnSpan();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap14(QTextCharFormat * value1, QTextCharFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextBlockFormat * ctr_qt_gui_ffi_QTextBlockFormat_QTextBlockFormat() {
  return new QTextBlockFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlockFormat_isValid(QTextBlockFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setAlignment(QTextBlockFormat * this_ptr, int alignment) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlockFormat_alignment(QTextBlockFormat const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setTopMargin(QTextBlockFormat * this_ptr, double margin) {
  this_ptr->setTopMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextBlockFormat_topMargin(QTextBlockFormat const * this_ptr) {
  return this_ptr->topMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setBottomMargin(QTextBlockFormat * this_ptr, double margin) {
  this_ptr->setBottomMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextBlockFormat_bottomMargin(QTextBlockFormat const * this_ptr) {
  return this_ptr->bottomMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setLeftMargin(QTextBlockFormat * this_ptr, double margin) {
  this_ptr->setLeftMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextBlockFormat_leftMargin(QTextBlockFormat const * this_ptr) {
  return this_ptr->leftMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setRightMargin(QTextBlockFormat * this_ptr, double margin) {
  this_ptr->setRightMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextBlockFormat_rightMargin(QTextBlockFormat const * this_ptr) {
  return this_ptr->rightMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setTextIndent(QTextBlockFormat * this_ptr, double aindent) {
  this_ptr->setTextIndent(aindent);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextBlockFormat_textIndent(QTextBlockFormat const * this_ptr) {
  return this_ptr->textIndent();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setIndent(QTextBlockFormat * this_ptr, int indent) {
  this_ptr->setIndent(indent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlockFormat_indent(QTextBlockFormat const * this_ptr) {
  return this_ptr->indent();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setHeadingLevel(QTextBlockFormat * this_ptr, int alevel) {
  this_ptr->setHeadingLevel(alevel);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlockFormat_headingLevel(QTextBlockFormat const * this_ptr) {
  return this_ptr->headingLevel();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setLineHeight(QTextBlockFormat * this_ptr, double height, int heightType) {
  this_ptr->setLineHeight(height, heightType);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextBlockFormat_lineHeight(QTextBlockFormat const * this_ptr, double scriptLineHeight, double scaling) {
  return this_ptr->lineHeight(scriptLineHeight, scaling);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextBlockFormat_lineHeight1(QTextBlockFormat const * this_ptr) {
  return this_ptr->lineHeight();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlockFormat_lineHeightType(QTextBlockFormat const * this_ptr) {
  return this_ptr->lineHeightType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setNonBreakableLines(QTextBlockFormat * this_ptr, bool b) {
  this_ptr->setNonBreakableLines(b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlockFormat_nonBreakableLines(QTextBlockFormat const * this_ptr) {
  return this_ptr->nonBreakableLines();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setPageBreakPolicy(QTextBlockFormat * this_ptr, int flags) {
  this_ptr->setPageBreakPolicy(QFlags< QTextFormat::PageBreakFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlockFormat_pageBreakPolicy(QTextBlockFormat const * this_ptr) {
  return int(this_ptr->pageBreakPolicy());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setTabPositions(QTextBlockFormat * this_ptr, QList< QTextOption::Tab > const * tabs) {
  this_ptr->setTabPositions(*tabs);
}


RITUAL_EXPORT QList< QTextOption::Tab > * ctr_qt_gui_ffi_QTextBlockFormat_tabPositions(QTextBlockFormat const * this_ptr) {
  return new QList< QTextOption::Tab >(this_ptr->tabPositions());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_setMarker(QTextBlockFormat * this_ptr, QTextBlockFormat::MarkerType marker) {
  this_ptr->setMarker(marker);
}


RITUAL_EXPORT QTextBlockFormat::MarkerType ctr_qt_gui_ffi_QTextBlockFormat_marker(QTextBlockFormat const * this_ptr) {
  return this_ptr->marker();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap15(QTextBlockFormat * value1, QTextBlockFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextListFormat * ctr_qt_gui_ffi_QTextListFormat_QTextListFormat() {
  return new QTextListFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextListFormat_isValid(QTextListFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextListFormat_setStyle(QTextListFormat * this_ptr, QTextListFormat::Style style) {
  this_ptr->setStyle(style);
}


RITUAL_EXPORT QTextListFormat::Style ctr_qt_gui_ffi_QTextListFormat_style(QTextListFormat const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextListFormat_setIndent(QTextListFormat * this_ptr, int indent) {
  this_ptr->setIndent(indent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextListFormat_indent(QTextListFormat const * this_ptr) {
  return this_ptr->indent();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextListFormat_setNumberPrefix(QTextListFormat * this_ptr, QString const * numberPrefix) {
  this_ptr->setNumberPrefix(*numberPrefix);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextListFormat_numberPrefix(QTextListFormat const * this_ptr) {
  return new QString(this_ptr->numberPrefix());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextListFormat_setNumberSuffix(QTextListFormat * this_ptr, QString const * numberSuffix) {
  this_ptr->setNumberSuffix(*numberSuffix);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextListFormat_numberSuffix(QTextListFormat const * this_ptr) {
  return new QString(this_ptr->numberSuffix());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextListFormat_setStart(QTextListFormat * this_ptr, int indent) {
  this_ptr->setStart(indent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextListFormat_start(QTextListFormat const * this_ptr) {
  return this_ptr->start();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap16(QTextListFormat * value1, QTextListFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextImageFormat * ctr_qt_gui_ffi_QTextImageFormat_QTextImageFormat() {
  return new QTextImageFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextImageFormat_isValid(QTextImageFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextImageFormat_setName(QTextImageFormat * this_ptr, QString const * name) {
  this_ptr->setName(*name);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextImageFormat_name(QTextImageFormat const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextImageFormat_setWidth(QTextImageFormat * this_ptr, double width) {
  this_ptr->setWidth(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextImageFormat_width(QTextImageFormat const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextImageFormat_setMaximumWidth(QTextImageFormat * this_ptr, QTextLength const * maxWidth) {
  this_ptr->setMaximumWidth(*maxWidth);
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextImageFormat_maximumWidth(QTextImageFormat const * this_ptr) {
  return new QTextLength(this_ptr->maximumWidth());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextImageFormat_setHeight(QTextImageFormat * this_ptr, double height) {
  this_ptr->setHeight(height);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextImageFormat_height(QTextImageFormat const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextImageFormat_setQuality(QTextImageFormat * this_ptr, int quality) {
  this_ptr->setQuality(quality);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextImageFormat_setQuality1(QTextImageFormat * this_ptr) {
  this_ptr->setQuality();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextImageFormat_quality(QTextImageFormat const * this_ptr) {
  return this_ptr->quality();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap17(QTextImageFormat * value1, QTextImageFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextFrameFormat * ctr_qt_gui_ffi_QTextFrameFormat_QTextFrameFormat() {
  return new QTextFrameFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFrameFormat_isValid(QTextFrameFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setPosition(QTextFrameFormat * this_ptr, QTextFrameFormat::Position f) {
  this_ptr->setPosition(f);
}


RITUAL_EXPORT QTextFrameFormat::Position ctr_qt_gui_ffi_QTextFrameFormat_position(QTextFrameFormat const * this_ptr) {
  return this_ptr->position();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setBorder(QTextFrameFormat * this_ptr, double border) {
  this_ptr->setBorder(border);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFrameFormat_border(QTextFrameFormat const * this_ptr) {
  return this_ptr->border();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setBorderBrush(QTextFrameFormat * this_ptr, QBrush const * brush) {
  this_ptr->setBorderBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextFrameFormat_borderBrush(QTextFrameFormat const * this_ptr) {
  return new QBrush(this_ptr->borderBrush());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setBorderStyle(QTextFrameFormat * this_ptr, QTextFrameFormat::BorderStyle style) {
  this_ptr->setBorderStyle(style);
}


RITUAL_EXPORT QTextFrameFormat::BorderStyle ctr_qt_gui_ffi_QTextFrameFormat_borderStyle(QTextFrameFormat const * this_ptr) {
  return this_ptr->borderStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setMargin(QTextFrameFormat * this_ptr, double margin) {
  this_ptr->setMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFrameFormat_margin(QTextFrameFormat const * this_ptr) {
  return this_ptr->margin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setTopMargin(QTextFrameFormat * this_ptr, double margin) {
  this_ptr->setTopMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFrameFormat_topMargin(QTextFrameFormat const * this_ptr) {
  return this_ptr->topMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setBottomMargin(QTextFrameFormat * this_ptr, double margin) {
  this_ptr->setBottomMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFrameFormat_bottomMargin(QTextFrameFormat const * this_ptr) {
  return this_ptr->bottomMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setLeftMargin(QTextFrameFormat * this_ptr, double margin) {
  this_ptr->setLeftMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFrameFormat_leftMargin(QTextFrameFormat const * this_ptr) {
  return this_ptr->leftMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setRightMargin(QTextFrameFormat * this_ptr, double margin) {
  this_ptr->setRightMargin(margin);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFrameFormat_rightMargin(QTextFrameFormat const * this_ptr) {
  return this_ptr->rightMargin();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setPadding(QTextFrameFormat * this_ptr, double padding) {
  this_ptr->setPadding(padding);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextFrameFormat_padding(QTextFrameFormat const * this_ptr) {
  return this_ptr->padding();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setWidth(QTextFrameFormat * this_ptr, double width) {
  this_ptr->setWidth(width);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setWidth1(QTextFrameFormat * this_ptr, QTextLength const * length) {
  this_ptr->setWidth(*length);
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextFrameFormat_width(QTextFrameFormat const * this_ptr) {
  return new QTextLength(this_ptr->width());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setHeight(QTextFrameFormat * this_ptr, double height) {
  this_ptr->setHeight(height);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setHeight1(QTextFrameFormat * this_ptr, QTextLength const * height) {
  this_ptr->setHeight(*height);
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextFrameFormat_height(QTextFrameFormat const * this_ptr) {
  return new QTextLength(this_ptr->height());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_setPageBreakPolicy(QTextFrameFormat * this_ptr, int flags) {
  this_ptr->setPageBreakPolicy(QFlags< QTextFormat::PageBreakFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFrameFormat_pageBreakPolicy(QTextFrameFormat const * this_ptr) {
  return int(this_ptr->pageBreakPolicy());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap18(QTextFrameFormat * value1, QTextFrameFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextTableFormat * ctr_qt_gui_ffi_QTextTableFormat_QTextTableFormat() {
  return new QTextTableFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextTableFormat_isValid(QTextTableFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableFormat_columns(QTextTableFormat const * this_ptr) {
  return this_ptr->columns();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_setColumns(QTextTableFormat * this_ptr, int columns) {
  this_ptr->setColumns(columns);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_setColumnWidthConstraints(QTextTableFormat * this_ptr, QList< QTextLength > const * constraints) {
  this_ptr->setColumnWidthConstraints(*constraints);
}


RITUAL_EXPORT QList< QTextLength > * ctr_qt_gui_ffi_QTextTableFormat_columnWidthConstraints(QTextTableFormat const * this_ptr) {
  return new QList< QTextLength >(this_ptr->columnWidthConstraints());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_clearColumnWidthConstraints(QTextTableFormat * this_ptr) {
  this_ptr->clearColumnWidthConstraints();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableFormat_cellSpacing(QTextTableFormat const * this_ptr) {
  return this_ptr->cellSpacing();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_setCellSpacing(QTextTableFormat * this_ptr, double spacing) {
  this_ptr->setCellSpacing(spacing);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableFormat_cellPadding(QTextTableFormat const * this_ptr) {
  return this_ptr->cellPadding();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_setCellPadding(QTextTableFormat * this_ptr, double padding) {
  this_ptr->setCellPadding(padding);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_setAlignment(QTextTableFormat * this_ptr, int alignment) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableFormat_alignment(QTextTableFormat const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_setHeaderRowCount(QTextTableFormat * this_ptr, int count) {
  this_ptr->setHeaderRowCount(count);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableFormat_headerRowCount(QTextTableFormat const * this_ptr) {
  return this_ptr->headerRowCount();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_setBorderCollapse(QTextTableFormat * this_ptr, bool borderCollapse) {
  this_ptr->setBorderCollapse(borderCollapse);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextTableFormat_borderCollapse(QTextTableFormat const * this_ptr) {
  return this_ptr->borderCollapse();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap19(QTextTableFormat * value1, QTextTableFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextTableCellFormat * ctr_qt_gui_ffi_QTextTableCellFormat_QTextTableCellFormat() {
  return new QTextTableCellFormat();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextTableCellFormat_isValid(QTextTableCellFormat const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setTopPadding(QTextTableCellFormat * this_ptr, double padding) {
  this_ptr->setTopPadding(padding);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_topPadding(QTextTableCellFormat const * this_ptr) {
  return this_ptr->topPadding();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setBottomPadding(QTextTableCellFormat * this_ptr, double padding) {
  this_ptr->setBottomPadding(padding);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_bottomPadding(QTextTableCellFormat const * this_ptr) {
  return this_ptr->bottomPadding();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setLeftPadding(QTextTableCellFormat * this_ptr, double padding) {
  this_ptr->setLeftPadding(padding);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_leftPadding(QTextTableCellFormat const * this_ptr) {
  return this_ptr->leftPadding();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setRightPadding(QTextTableCellFormat * this_ptr, double padding) {
  this_ptr->setRightPadding(padding);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_rightPadding(QTextTableCellFormat const * this_ptr) {
  return this_ptr->rightPadding();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setPadding(QTextTableCellFormat * this_ptr, double padding) {
  this_ptr->setPadding(padding);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setTopBorder(QTextTableCellFormat * this_ptr, double width) {
  this_ptr->setTopBorder(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_topBorder(QTextTableCellFormat const * this_ptr) {
  return this_ptr->topBorder();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setBottomBorder(QTextTableCellFormat * this_ptr, double width) {
  this_ptr->setBottomBorder(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_bottomBorder(QTextTableCellFormat const * this_ptr) {
  return this_ptr->bottomBorder();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setLeftBorder(QTextTableCellFormat * this_ptr, double width) {
  this_ptr->setLeftBorder(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_leftBorder(QTextTableCellFormat const * this_ptr) {
  return this_ptr->leftBorder();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setRightBorder(QTextTableCellFormat * this_ptr, double width) {
  this_ptr->setRightBorder(width);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextTableCellFormat_rightBorder(QTextTableCellFormat const * this_ptr) {
  return this_ptr->rightBorder();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setBorder(QTextTableCellFormat * this_ptr, double width) {
  this_ptr->setBorder(width);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setTopBorderStyle(QTextTableCellFormat * this_ptr, QTextFrameFormat::BorderStyle style) {
  this_ptr->setTopBorderStyle(style);
}


RITUAL_EXPORT QTextFrameFormat::BorderStyle ctr_qt_gui_ffi_QTextTableCellFormat_topBorderStyle(QTextTableCellFormat const * this_ptr) {
  return this_ptr->topBorderStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setBottomBorderStyle(QTextTableCellFormat * this_ptr, QTextFrameFormat::BorderStyle style) {
  this_ptr->setBottomBorderStyle(style);
}


RITUAL_EXPORT QTextFrameFormat::BorderStyle ctr_qt_gui_ffi_QTextTableCellFormat_bottomBorderStyle(QTextTableCellFormat const * this_ptr) {
  return this_ptr->bottomBorderStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setLeftBorderStyle(QTextTableCellFormat * this_ptr, QTextFrameFormat::BorderStyle style) {
  this_ptr->setLeftBorderStyle(style);
}


RITUAL_EXPORT QTextFrameFormat::BorderStyle ctr_qt_gui_ffi_QTextTableCellFormat_leftBorderStyle(QTextTableCellFormat const * this_ptr) {
  return this_ptr->leftBorderStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setRightBorderStyle(QTextTableCellFormat * this_ptr, QTextFrameFormat::BorderStyle style) {
  this_ptr->setRightBorderStyle(style);
}


RITUAL_EXPORT QTextFrameFormat::BorderStyle ctr_qt_gui_ffi_QTextTableCellFormat_rightBorderStyle(QTextTableCellFormat const * this_ptr) {
  return this_ptr->rightBorderStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setBorderStyle(QTextTableCellFormat * this_ptr, QTextFrameFormat::BorderStyle style) {
  this_ptr->setBorderStyle(style);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setTopBorderBrush(QTextTableCellFormat * this_ptr, QBrush const * brush) {
  this_ptr->setTopBorderBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextTableCellFormat_topBorderBrush(QTextTableCellFormat const * this_ptr) {
  return new QBrush(this_ptr->topBorderBrush());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setBottomBorderBrush(QTextTableCellFormat * this_ptr, QBrush const * brush) {
  this_ptr->setBottomBorderBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextTableCellFormat_bottomBorderBrush(QTextTableCellFormat const * this_ptr) {
  return new QBrush(this_ptr->bottomBorderBrush());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setLeftBorderBrush(QTextTableCellFormat * this_ptr, QBrush const * brush) {
  this_ptr->setLeftBorderBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextTableCellFormat_leftBorderBrush(QTextTableCellFormat const * this_ptr) {
  return new QBrush(this_ptr->leftBorderBrush());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setRightBorderBrush(QTextTableCellFormat * this_ptr, QBrush const * brush) {
  this_ptr->setRightBorderBrush(*brush);
}


RITUAL_EXPORT QBrush * ctr_qt_gui_ffi_QTextTableCellFormat_rightBorderBrush(QTextTableCellFormat const * this_ptr) {
  return new QBrush(this_ptr->rightBorderBrush());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_setBorderBrush(QTextTableCellFormat * this_ptr, QBrush const * brush) {
  this_ptr->setBorderBrush(*brush);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap20(QTextTableCellFormat * value1, QTextTableCellFormat * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextCursor_QTextCursor() {
  return new QTextCursor();
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextCursor_QTextCursor1(QTextDocument * document) {
  return new QTextCursor(document);
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextCursor_QTextCursor4(QTextFrame * frame) {
  return new QTextCursor(frame);
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextCursor_QTextCursor5(QTextBlock const * block) {
  return new QTextCursor(*block);
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextCursor_QTextCursor6(QTextCursor const * cursor) {
  return new QTextCursor(*cursor);
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextCursor_operator_1(QTextCursor * this_ptr, QTextCursor const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_dQTextCursor(QTextCursor * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_swap(QTextCursor * this_ptr, QTextCursor * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_isNull(QTextCursor const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_setPosition(QTextCursor * this_ptr, int pos, QTextCursor::MoveMode mode) {
  this_ptr->setPosition(pos, mode);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_position(QTextCursor const * this_ptr) {
  return this_ptr->position();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_positionInBlock(QTextCursor const * this_ptr) {
  return this_ptr->positionInBlock();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_anchor(QTextCursor const * this_ptr) {
  return this_ptr->anchor();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertText(QTextCursor * this_ptr, QString const * text) {
  this_ptr->insertText(*text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertText1(QTextCursor * this_ptr, QString const * text, QTextCharFormat const * format) {
  this_ptr->insertText(*text, *format);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_movePosition(QTextCursor * this_ptr, QTextCursor::MoveOperation op, QTextCursor::MoveMode arg2, int n) {
  return this_ptr->movePosition(op, arg2, n);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_visualNavigation(QTextCursor const * this_ptr) {
  return this_ptr->visualNavigation();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_setVisualNavigation(QTextCursor * this_ptr, bool b) {
  this_ptr->setVisualNavigation(b);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_setVerticalMovementX(QTextCursor * this_ptr, int x) {
  this_ptr->setVerticalMovementX(x);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_verticalMovementX(QTextCursor const * this_ptr) {
  return this_ptr->verticalMovementX();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_setKeepPositionOnInsert(QTextCursor * this_ptr, bool b) {
  this_ptr->setKeepPositionOnInsert(b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_keepPositionOnInsert(QTextCursor const * this_ptr) {
  return this_ptr->keepPositionOnInsert();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_deleteChar(QTextCursor * this_ptr) {
  this_ptr->deleteChar();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_deletePreviousChar(QTextCursor * this_ptr) {
  this_ptr->deletePreviousChar();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_select(QTextCursor * this_ptr, QTextCursor::SelectionType selection) {
  this_ptr->select(selection);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_hasSelection(QTextCursor const * this_ptr) {
  return this_ptr->hasSelection();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_hasComplexSelection(QTextCursor const * this_ptr) {
  return this_ptr->hasComplexSelection();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_removeSelectedText(QTextCursor * this_ptr) {
  this_ptr->removeSelectedText();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_clearSelection(QTextCursor * this_ptr) {
  this_ptr->clearSelection();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_selectionStart(QTextCursor const * this_ptr) {
  return this_ptr->selectionStart();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_selectionEnd(QTextCursor const * this_ptr) {
  return this_ptr->selectionEnd();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextCursor_selectedText(QTextCursor const * this_ptr) {
  return new QString(this_ptr->selectedText());
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextCursor_selection(QTextCursor const * this_ptr) {
  return new QTextDocumentFragment(this_ptr->selection());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_selectedTableCells(QTextCursor const * this_ptr, int * firstRow, int * numRows, int * firstColumn, int * numColumns) {
  this_ptr->selectedTableCells(firstRow, numRows, firstColumn, numColumns);
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextCursor_block(QTextCursor const * this_ptr) {
  return new QTextBlock(this_ptr->block());
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextCursor_charFormat(QTextCursor const * this_ptr) {
  return new QTextCharFormat(this_ptr->charFormat());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_setCharFormat(QTextCursor * this_ptr, QTextCharFormat const * format) {
  this_ptr->setCharFormat(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_mergeCharFormat(QTextCursor * this_ptr, QTextCharFormat const * modifier) {
  this_ptr->mergeCharFormat(*modifier);
}


RITUAL_EXPORT QTextBlockFormat * ctr_qt_gui_ffi_QTextCursor_blockFormat(QTextCursor const * this_ptr) {
  return new QTextBlockFormat(this_ptr->blockFormat());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_setBlockFormat(QTextCursor * this_ptr, QTextBlockFormat const * format) {
  this_ptr->setBlockFormat(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_mergeBlockFormat(QTextCursor * this_ptr, QTextBlockFormat const * modifier) {
  this_ptr->mergeBlockFormat(*modifier);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextCursor_blockCharFormat(QTextCursor const * this_ptr) {
  return new QTextCharFormat(this_ptr->blockCharFormat());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_setBlockCharFormat(QTextCursor * this_ptr, QTextCharFormat const * format) {
  this_ptr->setBlockCharFormat(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_mergeBlockCharFormat(QTextCursor * this_ptr, QTextCharFormat const * modifier) {
  this_ptr->mergeBlockCharFormat(*modifier);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_atBlockStart(QTextCursor const * this_ptr) {
  return this_ptr->atBlockStart();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_atBlockEnd(QTextCursor const * this_ptr) {
  return this_ptr->atBlockEnd();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_atStart(QTextCursor const * this_ptr) {
  return this_ptr->atStart();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_atEnd(QTextCursor const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertBlock(QTextCursor * this_ptr) {
  this_ptr->insertBlock();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertBlock1(QTextCursor * this_ptr, QTextBlockFormat const * format) {
  this_ptr->insertBlock(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertBlock2(QTextCursor * this_ptr, QTextBlockFormat const * format, QTextCharFormat const * charFormat) {
  this_ptr->insertBlock(*format, *charFormat);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_QTextCursor_insertList(QTextCursor * this_ptr, QTextListFormat const * format) {
  return this_ptr->insertList(*format);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_QTextCursor_insertList1(QTextCursor * this_ptr, QTextListFormat::Style style) {
  return this_ptr->insertList(style);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_QTextCursor_createList(QTextCursor * this_ptr, QTextListFormat const * format) {
  return this_ptr->createList(*format);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_QTextCursor_createList1(QTextCursor * this_ptr, QTextListFormat::Style style) {
  return this_ptr->createList(style);
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_QTextCursor_currentList(QTextCursor const * this_ptr) {
  return this_ptr->currentList();
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_QTextCursor_insertTable(QTextCursor * this_ptr, int rows, int cols, QTextTableFormat const * format) {
  return this_ptr->insertTable(rows, cols, *format);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_QTextCursor_insertTable1(QTextCursor * this_ptr, int rows, int cols) {
  return this_ptr->insertTable(rows, cols);
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_QTextCursor_currentTable(QTextCursor const * this_ptr) {
  return this_ptr->currentTable();
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextCursor_insertFrame(QTextCursor * this_ptr, QTextFrameFormat const * format) {
  return this_ptr->insertFrame(*format);
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextCursor_currentFrame(QTextCursor const * this_ptr) {
  return this_ptr->currentFrame();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertFragment(QTextCursor * this_ptr, QTextDocumentFragment const * fragment) {
  this_ptr->insertFragment(*fragment);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertHtml(QTextCursor * this_ptr, QString const * html) {
  this_ptr->insertHtml(*html);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertMarkdown(QTextCursor * this_ptr, QString const * markdown, int features) {
  this_ptr->insertMarkdown(*markdown, QFlags< QTextDocument::MarkdownFeature >(features));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertImage(QTextCursor * this_ptr, QTextImageFormat const * format, QTextFrameFormat::Position alignment) {
  this_ptr->insertImage(*format, alignment);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertImage1(QTextCursor * this_ptr, QTextImageFormat const * format) {
  this_ptr->insertImage(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertImage2(QTextCursor * this_ptr, QString const * name) {
  this_ptr->insertImage(*name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_insertImage3(QTextCursor * this_ptr, QImage const * image, QString const * name) {
  this_ptr->insertImage(*image, *name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_beginEditBlock(QTextCursor * this_ptr) {
  this_ptr->beginEditBlock();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_joinPreviousEditBlock(QTextCursor * this_ptr) {
  this_ptr->joinPreviousEditBlock();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCursor_endEditBlock(QTextCursor * this_ptr) {
  this_ptr->endEditBlock();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_operator_2(QTextCursor const * this_ptr, QTextCursor const * rhs) {
  return this_ptr->operator<(*rhs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_operator__1(QTextCursor const * this_ptr, QTextCursor const * rhs) {
  return this_ptr->operator<=(*rhs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_operator__2(QTextCursor const * this_ptr, QTextCursor const * rhs) {
  return this_ptr->operator==(*rhs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_operator__3(QTextCursor const * this_ptr, QTextCursor const * rhs) {
  return this_ptr->operator>=(*rhs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_operator_3(QTextCursor const * this_ptr, QTextCursor const * rhs) {
  return this_ptr->operator>(*rhs);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextCursor_isCopyOf(QTextCursor const * this_ptr, QTextCursor const * other) {
  return this_ptr->isCopyOf(*other);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_blockNumber(QTextCursor const * this_ptr) {
  return this_ptr->blockNumber();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextCursor_columnNumber(QTextCursor const * this_ptr) {
  return this_ptr->columnNumber();
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QTextCursor_document(QTextCursor const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap21(QTextCursor * value1, QTextCursor * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QTextInlineObject * ctr_qt_gui_ffi_QTextInlineObject_QTextInlineObject1() {
  return new QTextInlineObject();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextInlineObject_isValid(QTextInlineObject const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QTextInlineObject_rect(QTextInlineObject const * this_ptr) {
  return new QRectF(this_ptr->rect());
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextInlineObject_width(QTextInlineObject const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextInlineObject_ascent(QTextInlineObject const * this_ptr) {
  return this_ptr->ascent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextInlineObject_descent(QTextInlineObject const * this_ptr) {
  return this_ptr->descent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextInlineObject_height(QTextInlineObject const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_gui_ffi_QTextInlineObject_textDirection(QTextInlineObject const * this_ptr) {
  return this_ptr->textDirection();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextInlineObject_setWidth(QTextInlineObject * this_ptr, double w) {
  this_ptr->setWidth(w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextInlineObject_setAscent(QTextInlineObject * this_ptr, double a) {
  this_ptr->setAscent(a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextInlineObject_setDescent(QTextInlineObject * this_ptr, double d) {
  this_ptr->setDescent(d);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextInlineObject_textPosition(QTextInlineObject const * this_ptr) {
  return this_ptr->textPosition();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextInlineObject_formatIndex(QTextInlineObject const * this_ptr) {
  return this_ptr->formatIndex();
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QTextInlineObject_format(QTextInlineObject const * this_ptr) {
  return new QTextFormat(this_ptr->format());
}


RITUAL_EXPORT QTextLayout * ctr_qt_gui_ffi_QTextLayout_QTextLayout() {
  return new QTextLayout();
}


RITUAL_EXPORT QTextLayout * ctr_qt_gui_ffi_QTextLayout_QTextLayout1(QString const * text) {
  return new QTextLayout(*text);
}


RITUAL_EXPORT QTextLayout * ctr_qt_gui_ffi_QTextLayout_QTextLayout2(QString const * text, QFont const * font, QPaintDevice const * paintdevice) {
  return new QTextLayout(*text, *font, paintdevice);
}


RITUAL_EXPORT QTextLayout * ctr_qt_gui_ffi_QTextLayout_QTextLayout3(QTextBlock const * b) {
  return new QTextLayout(*b);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_dQTextLayout(QTextLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setFont(QTextLayout * this_ptr, QFont const * f) {
  this_ptr->setFont(*f);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QTextLayout_font(QTextLayout const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setRawFont(QTextLayout * this_ptr, QRawFont const * rawFont) {
  this_ptr->setRawFont(*rawFont);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setText(QTextLayout * this_ptr, QString const * string) {
  this_ptr->setText(*string);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextLayout_text(QTextLayout const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setTextOption(QTextLayout * this_ptr, QTextOption const * option) {
  this_ptr->setTextOption(*option);
}


RITUAL_EXPORT QTextOption const * ctr_qt_gui_ffi_QTextLayout_textOption(QTextLayout const * this_ptr) {
  return &this_ptr->textOption();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setPreeditArea(QTextLayout * this_ptr, int position, QString const * text) {
  this_ptr->setPreeditArea(position, *text);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_preeditAreaPosition(QTextLayout const * this_ptr) {
  return this_ptr->preeditAreaPosition();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextLayout_preeditAreaText(QTextLayout const * this_ptr) {
  return new QString(this_ptr->preeditAreaText());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setFormats(QTextLayout * this_ptr, QList< QTextLayout::FormatRange > const * overrides) {
  this_ptr->setFormats(*overrides);
}


RITUAL_EXPORT QList< QTextLayout::FormatRange > * ctr_qt_gui_ffi_QTextLayout_formats(QTextLayout const * this_ptr) {
  return new QList< QTextLayout::FormatRange >(this_ptr->formats());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_clearFormats(QTextLayout * this_ptr) {
  this_ptr->clearFormats();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setCacheEnabled(QTextLayout * this_ptr, bool enable) {
  this_ptr->setCacheEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextLayout_cacheEnabled(QTextLayout const * this_ptr) {
  return this_ptr->cacheEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setCursorMoveStyle(QTextLayout * this_ptr, Qt::CursorMoveStyle style) {
  this_ptr->setCursorMoveStyle(style);
}


RITUAL_EXPORT Qt::CursorMoveStyle ctr_qt_gui_ffi_QTextLayout_cursorMoveStyle(QTextLayout const * this_ptr) {
  return this_ptr->cursorMoveStyle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_beginLayout(QTextLayout * this_ptr) {
  this_ptr->beginLayout();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_endLayout(QTextLayout * this_ptr) {
  this_ptr->endLayout();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_clearLayout(QTextLayout * this_ptr) {
  this_ptr->clearLayout();
}


RITUAL_EXPORT QTextLine * ctr_qt_gui_ffi_QTextLayout_createLine(QTextLayout * this_ptr) {
  return new QTextLine(this_ptr->createLine());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_lineCount(QTextLayout const * this_ptr) {
  return this_ptr->lineCount();
}


RITUAL_EXPORT QTextLine * ctr_qt_gui_ffi_QTextLayout_lineAt(QTextLayout const * this_ptr, int i) {
  return new QTextLine(this_ptr->lineAt(i));
}


RITUAL_EXPORT QTextLine * ctr_qt_gui_ffi_QTextLayout_lineForTextPosition(QTextLayout const * this_ptr, int pos) {
  return new QTextLine(this_ptr->lineForTextPosition(pos));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextLayout_isValidCursorPosition(QTextLayout const * this_ptr, int pos) {
  return this_ptr->isValidCursorPosition(pos);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_nextCursorPosition(QTextLayout const * this_ptr, int oldPos, QTextLayout::CursorMode mode) {
  return this_ptr->nextCursorPosition(oldPos, mode);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_previousCursorPosition(QTextLayout const * this_ptr, int oldPos, QTextLayout::CursorMode mode) {
  return this_ptr->previousCursorPosition(oldPos, mode);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_leftCursorPosition(QTextLayout const * this_ptr, int oldPos) {
  return this_ptr->leftCursorPosition(oldPos);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_rightCursorPosition(QTextLayout const * this_ptr, int oldPos) {
  return this_ptr->rightCursorPosition(oldPos);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_draw(QTextLayout const * this_ptr, QPainter * p, QPointF const * pos, QList< QTextLayout::FormatRange > const * selections, QRectF const * clip) {
  this_ptr->draw(p, *pos, *selections, *clip);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_drawCursor(QTextLayout const * this_ptr, QPainter * p, QPointF const * pos, int cursorPosition) {
  this_ptr->drawCursor(p, *pos, cursorPosition);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_drawCursor1(QTextLayout const * this_ptr, QPainter * p, QPointF const * pos, int cursorPosition, int width) {
  this_ptr->drawCursor(p, *pos, cursorPosition, width);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QTextLayout_position(QTextLayout const * this_ptr) {
  return new QPointF(this_ptr->position());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setPosition(QTextLayout * this_ptr, QPointF const * p) {
  this_ptr->setPosition(*p);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QTextLayout_boundingRect(QTextLayout const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLayout_minimumWidth(QTextLayout const * this_ptr) {
  return this_ptr->minimumWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLayout_maximumWidth(QTextLayout const * this_ptr) {
  return this_ptr->maximumWidth();
}


RITUAL_EXPORT QList< QGlyphRun > * ctr_qt_gui_ffi_QTextLayout_glyphRuns(QTextLayout const * this_ptr, int from, int length, int flags) {
  return new QList< QGlyphRun >(this_ptr->glyphRuns(from, length, QFlags< QTextLayout::GlyphRunRetrievalFlag >(flags)));
}


RITUAL_EXPORT QList< QGlyphRun > * ctr_qt_gui_ffi_QTextLayout_glyphRuns1(QTextLayout const * this_ptr, int from, int length) {
  return new QList< QGlyphRun >(this_ptr->glyphRuns(from, length));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_setFlags(QTextLayout * this_ptr, int flags) {
  this_ptr->setFlags(flags);
}


RITUAL_EXPORT QTextLine * ctr_qt_gui_ffi_QTextLine_QTextLine() {
  return new QTextLine();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextLine_isValid(QTextLine const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QTextLine_rect(QTextLine const * this_ptr) {
  return new QRectF(this_ptr->rect());
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_x(QTextLine const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_y(QTextLine const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_width(QTextLine const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_ascent(QTextLine const * this_ptr) {
  return this_ptr->ascent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_descent(QTextLine const * this_ptr) {
  return this_ptr->descent();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_height(QTextLine const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_leading(QTextLine const * this_ptr) {
  return this_ptr->leading();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLine_setLeadingIncluded(QTextLine * this_ptr, bool included) {
  this_ptr->setLeadingIncluded(included);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextLine_leadingIncluded(QTextLine const * this_ptr) {
  return this_ptr->leadingIncluded();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_naturalTextWidth(QTextLine const * this_ptr) {
  return this_ptr->naturalTextWidth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_horizontalAdvance(QTextLine const * this_ptr) {
  return this_ptr->horizontalAdvance();
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QTextLine_naturalTextRect(QTextLine const * this_ptr) {
  return new QRectF(this_ptr->naturalTextRect());
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_cursorToX(QTextLine const * this_ptr, int * cursorPos, QTextLine::Edge edge) {
  return this_ptr->cursorToX(cursorPos, edge);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextLine_cursorToX1(QTextLine const * this_ptr, int cursorPos, QTextLine::Edge edge) {
  return this_ptr->cursorToX(cursorPos, edge);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLine_xToCursor(QTextLine const * this_ptr, double x, QTextLine::CursorPosition arg2) {
  return this_ptr->xToCursor(x, arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLine_setLineWidth(QTextLine * this_ptr, double width) {
  this_ptr->setLineWidth(width);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLine_setNumColumns(QTextLine * this_ptr, int columns) {
  this_ptr->setNumColumns(columns);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLine_setNumColumns1(QTextLine * this_ptr, int columns, double alignmentWidth) {
  this_ptr->setNumColumns(columns, alignmentWidth);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLine_setPosition(QTextLine * this_ptr, QPointF const * pos) {
  this_ptr->setPosition(*pos);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QTextLine_position(QTextLine const * this_ptr) {
  return new QPointF(this_ptr->position());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLine_textStart(QTextLine const * this_ptr) {
  return this_ptr->textStart();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLine_textLength(QTextLine const * this_ptr) {
  return this_ptr->textLength();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLine_lineNumber(QTextLine const * this_ptr) {
  return this_ptr->lineNumber();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLine_draw(QTextLine const * this_ptr, QPainter * painter, QPointF const * position) {
  this_ptr->draw(painter, *position);
}


RITUAL_EXPORT QList< QGlyphRun > * ctr_qt_gui_ffi_QTextLine_glyphRuns(QTextLine const * this_ptr, int from, int length, int flags) {
  return new QList< QGlyphRun >(this_ptr->glyphRuns(from, length, QFlags< QTextLayout::GlyphRunRetrievalFlag >(flags)));
}


RITUAL_EXPORT QList< QGlyphRun > * ctr_qt_gui_ffi_QTextLine_glyphRuns1(QTextLine const * this_ptr, int from, int length) {
  return new QList< QGlyphRun >(this_ptr->glyphRuns(from, length));
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_QPalette() {
  return new QPalette();
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_QPalette1(QColor const * button) {
  return new QPalette(*button);
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_QPalette2(Qt::GlobalColor button) {
  return new QPalette(button);
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_QPalette3(QColor const * button, QColor const * window) {
  return new QPalette(*button, *window);
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_QPalette4(QBrush const * windowText, QBrush const * button, QBrush const * light, QBrush const * dark, QBrush const * mid, QBrush const * text, QBrush const * bright_text, QBrush const * base, QBrush const * window) {
  return new QPalette(*windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_QPalette5(QColor const * windowText, QColor const * window, QColor const * light, QColor const * dark, QColor const * mid, QColor const * text, QColor const * base) {
  return new QPalette(*windowText, *window, *light, *dark, *mid, *text, *base);
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_QPalette6(QPalette const * palette) {
  return new QPalette(*palette);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_dQPalette(QPalette * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_operator_(QPalette * this_ptr, QPalette const * palette) {
  return &this_ptr->operator=(*palette);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_swap(QPalette * this_ptr, QPalette * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QPalette_operator_QVariant(QPalette const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT QPalette::ColorGroup ctr_qt_gui_ffi_QPalette_currentColorGroup(QPalette const * this_ptr) {
  return this_ptr->currentColorGroup();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_setCurrentColorGroup(QPalette * this_ptr, QPalette::ColorGroup cg) {
  this_ptr->setCurrentColorGroup(cg);
}


RITUAL_EXPORT QColor const * ctr_qt_gui_ffi_QPalette_color(QPalette const * this_ptr, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  return &this_ptr->color(cg, cr);
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_brush(QPalette const * this_ptr, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  return &this_ptr->brush(cg, cr);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_setColor(QPalette * this_ptr, QPalette::ColorGroup cg, QPalette::ColorRole cr, QColor const * color) {
  this_ptr->setColor(cg, cr, *color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_setColor1(QPalette * this_ptr, QPalette::ColorRole cr, QColor const * color) {
  this_ptr->setColor(cr, *color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_setBrush(QPalette * this_ptr, QPalette::ColorRole cr, QBrush const * brush) {
  this_ptr->setBrush(cr, *brush);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPalette_isBrushSet(QPalette const * this_ptr, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  return this_ptr->isBrushSet(cg, cr);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_setBrush1(QPalette * this_ptr, QPalette::ColorGroup cg, QPalette::ColorRole cr, QBrush const * brush) {
  this_ptr->setBrush(cg, cr, *brush);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_setColorGroup(QPalette * this_ptr, QPalette::ColorGroup cr, QBrush const * windowText, QBrush const * button, QBrush const * light, QBrush const * dark, QBrush const * mid, QBrush const * text, QBrush const * bright_text, QBrush const * base, QBrush const * window) {
  this_ptr->setColorGroup(cr, *windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPalette_isEqual(QPalette const * this_ptr, QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) {
  return this_ptr->isEqual(cr1, cr2);
}


RITUAL_EXPORT QColor const * ctr_qt_gui_ffi_QPalette_color1(QPalette const * this_ptr, QPalette::ColorRole cr) {
  return &this_ptr->color(cr);
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_brush1(QPalette const * this_ptr, QPalette::ColorRole cr) {
  return &this_ptr->brush(cr);
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_windowText(QPalette const * this_ptr) {
  return &this_ptr->windowText();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_button(QPalette const * this_ptr) {
  return &this_ptr->button();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_light(QPalette const * this_ptr) {
  return &this_ptr->light();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_dark(QPalette const * this_ptr) {
  return &this_ptr->dark();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_mid(QPalette const * this_ptr) {
  return &this_ptr->mid();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_text(QPalette const * this_ptr) {
  return &this_ptr->text();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_base(QPalette const * this_ptr) {
  return &this_ptr->base();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_alternateBase(QPalette const * this_ptr) {
  return &this_ptr->alternateBase();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_toolTipBase(QPalette const * this_ptr) {
  return &this_ptr->toolTipBase();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_toolTipText(QPalette const * this_ptr) {
  return &this_ptr->toolTipText();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_window(QPalette const * this_ptr) {
  return &this_ptr->window();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_midlight(QPalette const * this_ptr) {
  return &this_ptr->midlight();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_brightText(QPalette const * this_ptr) {
  return &this_ptr->brightText();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_buttonText(QPalette const * this_ptr) {
  return &this_ptr->buttonText();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_shadow(QPalette const * this_ptr) {
  return &this_ptr->shadow();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_highlight(QPalette const * this_ptr) {
  return &this_ptr->highlight();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_highlightedText(QPalette const * this_ptr) {
  return &this_ptr->highlightedText();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_link(QPalette const * this_ptr) {
  return &this_ptr->link();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_linkVisited(QPalette const * this_ptr) {
  return &this_ptr->linkVisited();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_placeholderText(QPalette const * this_ptr) {
  return &this_ptr->placeholderText();
}


RITUAL_EXPORT QBrush const * ctr_qt_gui_ffi_QPalette_accent(QPalette const * this_ptr) {
  return &this_ptr->accent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPalette_operator__(QPalette const * this_ptr, QPalette const * p) {
  return this_ptr->operator==(*p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPalette_isCopyOf(QPalette const * this_ptr, QPalette const * p) {
  return this_ptr->isCopyOf(*p);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QPalette_cacheKey(QPalette const * this_ptr) {
  return this_ptr->cacheKey();
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QPalette_resolve(QPalette const * this_ptr, QPalette const * other) {
  return new QPalette(this_ptr->resolve(*other));
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QPalette_resolveMask(QPalette const * this_ptr) {
  return this_ptr->resolveMask();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPalette_setResolveMask(QPalette * this_ptr, unsigned long long mask) {
  this_ptr->setResolveMask(mask);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap22(QPalette * value1, QPalette * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__53(QDataStream * ds, QPalette const * p) {
  return &operator<<(*ds, *p);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__54(QDataStream * ds, QPalette * p) {
  return &operator>>(*ds, *p);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__55(QDebug const * arg1, QPalette const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_metaObject(QAbstractTextDocumentLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_qt_metacast(QAbstractTextDocumentLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAbstractTextDocumentLayout_qt_metacall(QAbstractTextDocumentLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractTextDocumentLayout::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractTextDocumentLayout_dQAbstractTextDocumentLayout(QAbstractTextDocumentLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractTextDocumentLayout::PaintContext * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_PaintContext() {
  return new QAbstractTextDocumentLayout::PaintContext();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractTextDocumentLayout_draw(QAbstractTextDocumentLayout * this_ptr, QPainter * painter, QAbstractTextDocumentLayout::PaintContext const * context) {
  this_ptr->draw(painter, *context);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAbstractTextDocumentLayout_hitTest(QAbstractTextDocumentLayout const * this_ptr, QPointF const * point, Qt::HitTestAccuracy accuracy) {
  return this_ptr->hitTest(*point, accuracy);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_anchorAt(QAbstractTextDocumentLayout const * this_ptr, QPointF const * pos) {
  return new QString(this_ptr->anchorAt(*pos));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_imageAt(QAbstractTextDocumentLayout const * this_ptr, QPointF const * pos) {
  return new QString(this_ptr->imageAt(*pos));
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_formatAt(QAbstractTextDocumentLayout const * this_ptr, QPointF const * pos) {
  return new QTextFormat(this_ptr->formatAt(*pos));
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_blockWithMarkerAt(QAbstractTextDocumentLayout const * this_ptr, QPointF const * pos) {
  return new QTextBlock(this_ptr->blockWithMarkerAt(*pos));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAbstractTextDocumentLayout_pageCount(QAbstractTextDocumentLayout const * this_ptr) {
  return this_ptr->pageCount();
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_documentSize(QAbstractTextDocumentLayout const * this_ptr) {
  return new QSizeF(this_ptr->documentSize());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_frameBoundingRect(QAbstractTextDocumentLayout const * this_ptr, QTextFrame * frame) {
  return new QRectF(this_ptr->frameBoundingRect(frame));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_blockBoundingRect(QAbstractTextDocumentLayout const * this_ptr, QTextBlock const * block) {
  return new QRectF(this_ptr->blockBoundingRect(*block));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractTextDocumentLayout_setPaintDevice(QAbstractTextDocumentLayout * this_ptr, QPaintDevice * device) {
  this_ptr->setPaintDevice(device);
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_paintDevice(QAbstractTextDocumentLayout const * this_ptr) {
  return this_ptr->paintDevice();
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_document(QAbstractTextDocumentLayout const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractTextDocumentLayout_registerHandler(QAbstractTextDocumentLayout * this_ptr, int objectType, QObject * component) {
  this_ptr->registerHandler(objectType, component);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractTextDocumentLayout_unregisterHandler(QAbstractTextDocumentLayout * this_ptr, int objectType, QObject * component) {
  this_ptr->unregisterHandler(objectType, component);
}


RITUAL_EXPORT QTextObjectInterface * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_handlerForObject(QAbstractTextDocumentLayout const * this_ptr, int objectType) {
  return this_ptr->handlerForObject(objectType);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextObjectInterface_dQTextObjectInterface(QTextObjectInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QTextObjectInterface_intrinsicSize(QTextObjectInterface * this_ptr, QTextDocument * doc, int posInDocument, QTextFormat const * format) {
  return new QSizeF(this_ptr->intrinsicSize(doc, posInDocument, *format));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextObjectInterface_drawObject(QTextObjectInterface * this_ptr, QPainter * painter, QRectF const * rect, QTextDocument * doc, int posInDocument, QTextFormat const * format) {
  this_ptr->drawObject(painter, *rect, doc, posInDocument, *format);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAccessibilityHints_metaObject(QAccessibilityHints const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QAccessibilityHints_qt_metacast(QAccessibilityHints * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibilityHints_qt_metacall(QAccessibilityHints * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibilityHints_tr(char const * s, char const * c, int n) {
  return new QString(QAccessibilityHints::tr(s, c, n));
}


RITUAL_EXPORT QAccessibilityHints * ctr_qt_gui_ffi_QAccessibilityHints_QAccessibilityHints(QObject * parent) {
  return new QAccessibilityHints(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibilityHints_dQAccessibilityHints(QAccessibilityHints * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::ContrastPreference ctr_qt_gui_ffi_QAccessibilityHints_contrastPreference(QAccessibilityHints const * this_ptr) {
  return this_ptr->contrastPreference();
}


RITUAL_EXPORT QAccessible::State * ctr_qt_gui_ffi_QAccessible_State_State() {
  return new QAccessible::State();
}


RITUAL_EXPORT void (*ctr_qt_gui_ffi_QAccessible_installUpdateHandler(void (*arg1)(QAccessibleEvent *)))(QAccessibleEvent *) {
  return QAccessible::installUpdateHandler(arg1);
}


RITUAL_EXPORT void (*ctr_qt_gui_ffi_QAccessible_installRootObjectHandler(void (*arg1)(QObject *)))(QObject *) {
  return QAccessible::installRootObjectHandler(arg1);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessible_queryAccessibleInterface(QObject * arg1) {
  return QAccessible::queryAccessibleInterface(arg1);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QAccessible_uniqueId(QAccessibleInterface * iface) {
  return QAccessible::uniqueId(iface);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessible_accessibleInterface(unsigned int uniqueId) {
  return QAccessible::accessibleInterface(uniqueId);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QAccessible_registerAccessibleInterface(QAccessibleInterface * iface) {
  return QAccessible::registerAccessibleInterface(iface);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessible_deleteAccessibleInterface(unsigned int uniqueId) {
  QAccessible::deleteAccessibleInterface(uniqueId);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessible_updateAccessibility(QAccessibleEvent * event) {
  QAccessible::updateAccessibility(event);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessible_isActive() {
  return QAccessible::isActive();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessible_setActive(bool active) {
  QAccessible::setActive(active);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessible_setRootObject(QObject * object) {
  QAccessible::setRootObject(object);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessible_cleanup() {
  QAccessible::cleanup();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleInterface_isValid(QAccessibleInterface const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QAccessibleInterface_object(QAccessibleInterface const * this_ptr) {
  return this_ptr->object();
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QAccessibleInterface_window(QAccessibleInterface const * this_ptr) {
  return this_ptr->window();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleInterface_focusChild(QAccessibleInterface const * this_ptr) {
  return this_ptr->focusChild();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleInterface_childAt(QAccessibleInterface const * this_ptr, int x, int y) {
  return this_ptr->childAt(x, y);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleInterface_parent(QAccessibleInterface const * this_ptr) {
  return this_ptr->parent();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleInterface_child(QAccessibleInterface const * this_ptr, int index) {
  return this_ptr->child(index);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleInterface_childCount(QAccessibleInterface const * this_ptr) {
  return this_ptr->childCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleInterface_indexOfChild(QAccessibleInterface const * this_ptr, QAccessibleInterface const * arg1) {
  return this_ptr->indexOfChild(arg1);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleInterface_text(QAccessibleInterface const * this_ptr, QAccessible::Text t) {
  return new QString(this_ptr->text(t));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleInterface_setText(QAccessibleInterface * this_ptr, QAccessible::Text t, QString const * text) {
  this_ptr->setText(t, *text);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QAccessibleInterface_rect(QAccessibleInterface const * this_ptr) {
  return new QRect(this_ptr->rect());
}


RITUAL_EXPORT QAccessible::Role ctr_qt_gui_ffi_QAccessibleInterface_role(QAccessibleInterface const * this_ptr) {
  return this_ptr->role();
}


RITUAL_EXPORT QAccessible::State * ctr_qt_gui_ffi_QAccessibleInterface_state(QAccessibleInterface const * this_ptr) {
  return new QAccessible::State(this_ptr->state());
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QAccessibleInterface_foregroundColor(QAccessibleInterface const * this_ptr) {
  return new QColor(this_ptr->foregroundColor());
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QAccessibleInterface_backgroundColor(QAccessibleInterface const * this_ptr) {
  return new QColor(this_ptr->backgroundColor());
}


RITUAL_EXPORT QAccessibleTextInterface * ctr_qt_gui_ffi_QAccessibleInterface_textInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->textInterface();
}


RITUAL_EXPORT QAccessibleEditableTextInterface * ctr_qt_gui_ffi_QAccessibleInterface_editableTextInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->editableTextInterface();
}


RITUAL_EXPORT QAccessibleValueInterface * ctr_qt_gui_ffi_QAccessibleInterface_valueInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->valueInterface();
}


RITUAL_EXPORT QAccessibleActionInterface * ctr_qt_gui_ffi_QAccessibleInterface_actionInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->actionInterface();
}


RITUAL_EXPORT QAccessibleTableInterface * ctr_qt_gui_ffi_QAccessibleInterface_tableInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->tableInterface();
}


RITUAL_EXPORT QAccessibleTableCellInterface * ctr_qt_gui_ffi_QAccessibleInterface_tableCellInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->tableCellInterface();
}


RITUAL_EXPORT QAccessibleHyperlinkInterface * ctr_qt_gui_ffi_QAccessibleInterface_hyperlinkInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->hyperlinkInterface();
}


RITUAL_EXPORT QAccessibleSelectionInterface * ctr_qt_gui_ffi_QAccessibleInterface_selectionInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->selectionInterface();
}


RITUAL_EXPORT QAccessibleAttributesInterface * ctr_qt_gui_ffi_QAccessibleInterface_attributesInterface(QAccessibleInterface * this_ptr) {
  return this_ptr->attributesInterface();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleInterface_virtual_hook(QAccessibleInterface * this_ptr, int id, void * data) {
  this_ptr->virtual_hook(id, data);
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QAccessibleInterface_interface_cast(QAccessibleInterface * this_ptr, QAccessible::InterfaceType arg1) {
  return this_ptr->interface_cast(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInterface_dQAccessibleTextInterface(QAccessibleTextInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInterface_selection(QAccessibleTextInterface const * this_ptr, int selectionIndex, int * startOffset, int * endOffset) {
  this_ptr->selection(selectionIndex, startOffset, endOffset);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextInterface_selectionCount(QAccessibleTextInterface const * this_ptr) {
  return this_ptr->selectionCount();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInterface_addSelection(QAccessibleTextInterface * this_ptr, int startOffset, int endOffset) {
  this_ptr->addSelection(startOffset, endOffset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInterface_removeSelection(QAccessibleTextInterface * this_ptr, int selectionIndex) {
  this_ptr->removeSelection(selectionIndex);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInterface_setSelection(QAccessibleTextInterface * this_ptr, int selectionIndex, int startOffset, int endOffset) {
  this_ptr->setSelection(selectionIndex, startOffset, endOffset);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextInterface_cursorPosition(QAccessibleTextInterface const * this_ptr) {
  return this_ptr->cursorPosition();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInterface_setCursorPosition(QAccessibleTextInterface * this_ptr, int position) {
  this_ptr->setCursorPosition(position);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextInterface_text(QAccessibleTextInterface const * this_ptr, int startOffset, int endOffset) {
  return new QString(this_ptr->text(startOffset, endOffset));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextInterface_textBeforeOffset(QAccessibleTextInterface const * this_ptr, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  return new QString(this_ptr->textBeforeOffset(offset, boundaryType, startOffset, endOffset));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextInterface_textAfterOffset(QAccessibleTextInterface const * this_ptr, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  return new QString(this_ptr->textAfterOffset(offset, boundaryType, startOffset, endOffset));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextInterface_textAtOffset(QAccessibleTextInterface const * this_ptr, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  return new QString(this_ptr->textAtOffset(offset, boundaryType, startOffset, endOffset));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextInterface_characterCount(QAccessibleTextInterface const * this_ptr) {
  return this_ptr->characterCount();
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QAccessibleTextInterface_characterRect(QAccessibleTextInterface const * this_ptr, int offset) {
  return new QRect(this_ptr->characterRect(offset));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextInterface_offsetAtPoint(QAccessibleTextInterface const * this_ptr, QPoint const * point) {
  return this_ptr->offsetAtPoint(*point);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInterface_scrollToSubstring(QAccessibleTextInterface * this_ptr, int startIndex, int endIndex) {
  this_ptr->scrollToSubstring(startIndex, endIndex);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextInterface_attributes(QAccessibleTextInterface const * this_ptr, int offset, int * startOffset, int * endOffset) {
  return new QString(this_ptr->attributes(offset, startOffset, endOffset));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleEditableTextInterface_dQAccessibleEditableTextInterface(QAccessibleEditableTextInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleEditableTextInterface_deleteText(QAccessibleEditableTextInterface * this_ptr, int startOffset, int endOffset) {
  this_ptr->deleteText(startOffset, endOffset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleEditableTextInterface_insertText(QAccessibleEditableTextInterface * this_ptr, int offset, QString const * text) {
  this_ptr->insertText(offset, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleEditableTextInterface_replaceText(QAccessibleEditableTextInterface * this_ptr, int startOffset, int endOffset, QString const * text) {
  this_ptr->replaceText(startOffset, endOffset, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleValueInterface_dQAccessibleValueInterface(QAccessibleValueInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QAccessibleValueInterface_currentValue(QAccessibleValueInterface const * this_ptr) {
  return new QVariant(this_ptr->currentValue());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleValueInterface_setCurrentValue(QAccessibleValueInterface * this_ptr, QVariant const * value) {
  this_ptr->setCurrentValue(*value);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QAccessibleValueInterface_maximumValue(QAccessibleValueInterface const * this_ptr) {
  return new QVariant(this_ptr->maximumValue());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QAccessibleValueInterface_minimumValue(QAccessibleValueInterface const * this_ptr) {
  return new QVariant(this_ptr->minimumValue());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QAccessibleValueInterface_minimumStepSize(QAccessibleValueInterface const * this_ptr) {
  return new QVariant(this_ptr->minimumStepSize());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableCellInterface_dQAccessibleTableCellInterface(QAccessibleTableCellInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleTableCellInterface_isSelected(QAccessibleTableCellInterface const * this_ptr) {
  return this_ptr->isSelected();
}


RITUAL_EXPORT QList< QAccessibleInterface * > * ctr_qt_gui_ffi_QAccessibleTableCellInterface_columnHeaderCells(QAccessibleTableCellInterface const * this_ptr) {
  return new QList< QAccessibleInterface * >(this_ptr->columnHeaderCells());
}


RITUAL_EXPORT QList< QAccessibleInterface * > * ctr_qt_gui_ffi_QAccessibleTableCellInterface_rowHeaderCells(QAccessibleTableCellInterface const * this_ptr) {
  return new QList< QAccessibleInterface * >(this_ptr->rowHeaderCells());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableCellInterface_columnIndex(QAccessibleTableCellInterface const * this_ptr) {
  return this_ptr->columnIndex();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableCellInterface_rowIndex(QAccessibleTableCellInterface const * this_ptr) {
  return this_ptr->rowIndex();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableCellInterface_columnExtent(QAccessibleTableCellInterface const * this_ptr) {
  return this_ptr->columnExtent();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableCellInterface_rowExtent(QAccessibleTableCellInterface const * this_ptr) {
  return this_ptr->rowExtent();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleTableCellInterface_table(QAccessibleTableCellInterface const * this_ptr) {
  return this_ptr->table();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableInterface_dQAccessibleTableInterface(QAccessibleTableInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleTableInterface_caption(QAccessibleTableInterface const * this_ptr) {
  return this_ptr->caption();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleTableInterface_summary(QAccessibleTableInterface const * this_ptr) {
  return this_ptr->summary();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleTableInterface_cellAt(QAccessibleTableInterface const * this_ptr, int row, int column) {
  return this_ptr->cellAt(row, column);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableInterface_selectedCellCount(QAccessibleTableInterface const * this_ptr) {
  return this_ptr->selectedCellCount();
}


RITUAL_EXPORT QList< QAccessibleInterface * > * ctr_qt_gui_ffi_QAccessibleTableInterface_selectedCells(QAccessibleTableInterface const * this_ptr) {
  return new QList< QAccessibleInterface * >(this_ptr->selectedCells());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTableInterface_columnDescription(QAccessibleTableInterface const * this_ptr, int column) {
  return new QString(this_ptr->columnDescription(column));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTableInterface_rowDescription(QAccessibleTableInterface const * this_ptr, int row) {
  return new QString(this_ptr->rowDescription(row));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableInterface_selectedColumnCount(QAccessibleTableInterface const * this_ptr) {
  return this_ptr->selectedColumnCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableInterface_selectedRowCount(QAccessibleTableInterface const * this_ptr) {
  return this_ptr->selectedRowCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableInterface_columnCount(QAccessibleTableInterface const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableInterface_rowCount(QAccessibleTableInterface const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT QList< int > * ctr_qt_gui_ffi_QAccessibleTableInterface_selectedColumns(QAccessibleTableInterface const * this_ptr) {
  return new QList< int >(this_ptr->selectedColumns());
}


RITUAL_EXPORT QList< int > * ctr_qt_gui_ffi_QAccessibleTableInterface_selectedRows(QAccessibleTableInterface const * this_ptr) {
  return new QList< int >(this_ptr->selectedRows());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleTableInterface_isColumnSelected(QAccessibleTableInterface const * this_ptr, int column) {
  return this_ptr->isColumnSelected(column);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleTableInterface_isRowSelected(QAccessibleTableInterface const * this_ptr, int row) {
  return this_ptr->isRowSelected(row);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleTableInterface_selectRow(QAccessibleTableInterface * this_ptr, int row) {
  return this_ptr->selectRow(row);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleTableInterface_selectColumn(QAccessibleTableInterface * this_ptr, int column) {
  return this_ptr->selectColumn(column);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleTableInterface_unselectRow(QAccessibleTableInterface * this_ptr, int row) {
  return this_ptr->unselectRow(row);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleTableInterface_unselectColumn(QAccessibleTableInterface * this_ptr, int column) {
  return this_ptr->unselectColumn(column);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableInterface_modelChange(QAccessibleTableInterface * this_ptr, QAccessibleTableModelChangeEvent * event) {
  this_ptr->modelChange(event);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_tr(char const * sourceText, char const * disambiguation, int n) {
  return new QString(QAccessibleActionInterface::tr(sourceText, disambiguation, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleActionInterface_dQAccessibleActionInterface(QAccessibleActionInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QAccessibleActionInterface_actionNames(QAccessibleActionInterface const * this_ptr) {
  return new QList< QString >(this_ptr->actionNames());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_localizedActionName(QAccessibleActionInterface const * this_ptr, QString const * name) {
  return new QString(this_ptr->localizedActionName(*name));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_localizedActionDescription(QAccessibleActionInterface const * this_ptr, QString const * name) {
  return new QString(this_ptr->localizedActionDescription(*name));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleActionInterface_doAction(QAccessibleActionInterface * this_ptr, QString const * actionName) {
  this_ptr->doAction(*actionName);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QAccessibleActionInterface_keyBindingsForAction(QAccessibleActionInterface const * this_ptr, QString const * actionName) {
  return new QList< QString >(this_ptr->keyBindingsForAction(*actionName));
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QAccessibleActionInterface_pressAction() {
  return &QAccessibleActionInterface::pressAction();
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QAccessibleActionInterface_increaseAction() {
  return &QAccessibleActionInterface::increaseAction();
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QAccessibleActionInterface_decreaseAction() {
  return &QAccessibleActionInterface::decreaseAction();
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QAccessibleActionInterface_showMenuAction() {
  return &QAccessibleActionInterface::showMenuAction();
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QAccessibleActionInterface_setFocusAction() {
  return &QAccessibleActionInterface::setFocusAction();
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QAccessibleActionInterface_toggleAction() {
  return &QAccessibleActionInterface::toggleAction();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_scrollLeftAction() {
  return new QString(QAccessibleActionInterface::scrollLeftAction());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_scrollRightAction() {
  return new QString(QAccessibleActionInterface::scrollRightAction());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_scrollUpAction() {
  return new QString(QAccessibleActionInterface::scrollUpAction());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_scrollDownAction() {
  return new QString(QAccessibleActionInterface::scrollDownAction());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_nextPageAction() {
  return new QString(QAccessibleActionInterface::nextPageAction());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleActionInterface_previousPageAction() {
  return new QString(QAccessibleActionInterface::previousPageAction());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleHyperlinkInterface_dQAccessibleHyperlinkInterface(QAccessibleHyperlinkInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleHyperlinkInterface_anchor(QAccessibleHyperlinkInterface const * this_ptr) {
  return new QString(this_ptr->anchor());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleHyperlinkInterface_anchorTarget(QAccessibleHyperlinkInterface const * this_ptr) {
  return new QString(this_ptr->anchorTarget());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleHyperlinkInterface_startIndex(QAccessibleHyperlinkInterface const * this_ptr) {
  return this_ptr->startIndex();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleHyperlinkInterface_endIndex(QAccessibleHyperlinkInterface const * this_ptr) {
  return this_ptr->endIndex();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleHyperlinkInterface_isValid(QAccessibleHyperlinkInterface const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleSelectionInterface_dQAccessibleSelectionInterface(QAccessibleSelectionInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleSelectionInterface_selectedItemCount(QAccessibleSelectionInterface const * this_ptr) {
  return this_ptr->selectedItemCount();
}


RITUAL_EXPORT QList< QAccessibleInterface * > * ctr_qt_gui_ffi_QAccessibleSelectionInterface_selectedItems(QAccessibleSelectionInterface const * this_ptr) {
  return new QList< QAccessibleInterface * >(this_ptr->selectedItems());
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleSelectionInterface_selectedItem(QAccessibleSelectionInterface const * this_ptr, int selectionIndex) {
  return this_ptr->selectedItem(selectionIndex);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleSelectionInterface_isSelected(QAccessibleSelectionInterface const * this_ptr, QAccessibleInterface * childItem) {
  return this_ptr->isSelected(childItem);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleSelectionInterface_select(QAccessibleSelectionInterface * this_ptr, QAccessibleInterface * childItem) {
  return this_ptr->select(childItem);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleSelectionInterface_unselect(QAccessibleSelectionInterface * this_ptr, QAccessibleInterface * childItem) {
  return this_ptr->unselect(childItem);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleSelectionInterface_selectAll(QAccessibleSelectionInterface * this_ptr) {
  return this_ptr->selectAll();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleSelectionInterface_clear(QAccessibleSelectionInterface * this_ptr) {
  return this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleAttributesInterface_dQAccessibleAttributesInterface(QAccessibleAttributesInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QAccessible::Attribute > * ctr_qt_gui_ffi_QAccessibleAttributesInterface_attributeKeys(QAccessibleAttributesInterface const * this_ptr) {
  return new QList< QAccessible::Attribute >(this_ptr->attributeKeys());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QAccessibleAttributesInterface_attributeValue(QAccessibleAttributesInterface const * this_ptr, QAccessible::Attribute key) {
  return new QVariant(this_ptr->attributeValue(key));
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_QAccessibleEvent_QAccessibleEvent(QObject * obj, QAccessible::Event typ) {
  return new QAccessibleEvent(obj, typ);
}


RITUAL_EXPORT QAccessibleEvent * ctr_qt_gui_ffi_QAccessibleEvent_QAccessibleEvent1(QAccessibleInterface * iface, QAccessible::Event typ) {
  return new QAccessibleEvent(iface, typ);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleEvent_dQAccessibleEvent(QAccessibleEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAccessible::Event ctr_qt_gui_ffi_QAccessibleEvent_type(QAccessibleEvent const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QAccessibleEvent_object(QAccessibleEvent const * this_ptr) {
  return this_ptr->object();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QAccessibleEvent_uniqueId(QAccessibleEvent const * this_ptr) {
  return this_ptr->uniqueId();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleEvent_setChild(QAccessibleEvent * this_ptr, int chld) {
  this_ptr->setChild(chld);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleEvent_child(QAccessibleEvent const * this_ptr) {
  return this_ptr->child();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleEvent_accessibleInterface(QAccessibleEvent const * this_ptr) {
  return this_ptr->accessibleInterface();
}


RITUAL_EXPORT QAccessibleStateChangeEvent * ctr_qt_gui_ffi_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent(QObject * obj, QAccessible::State const * state) {
  return new QAccessibleStateChangeEvent(obj, *state);
}


RITUAL_EXPORT QAccessibleStateChangeEvent * ctr_qt_gui_ffi_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent1(QAccessibleInterface * iface, QAccessible::State const * state) {
  return new QAccessibleStateChangeEvent(iface, *state);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleStateChangeEvent_dQAccessibleStateChangeEvent(QAccessibleStateChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAccessible::State * ctr_qt_gui_ffi_QAccessibleStateChangeEvent_changedStates(QAccessibleStateChangeEvent const * this_ptr) {
  return new QAccessible::State(this_ptr->changedStates());
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent(QObject * obj, int cursorPos) {
  return new QAccessibleTextCursorEvent(obj, cursorPos);
}


RITUAL_EXPORT QAccessibleTextCursorEvent * ctr_qt_gui_ffi_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent1(QAccessibleInterface * iface, int cursorPos) {
  return new QAccessibleTextCursorEvent(iface, cursorPos);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextCursorEvent_dQAccessibleTextCursorEvent(QAccessibleTextCursorEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextCursorEvent_setCursorPosition(QAccessibleTextCursorEvent * this_ptr, int position) {
  this_ptr->setCursorPosition(position);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextCursorEvent_cursorPosition(QAccessibleTextCursorEvent const * this_ptr) {
  return this_ptr->cursorPosition();
}


RITUAL_EXPORT QAccessibleTextSelectionEvent * ctr_qt_gui_ffi_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent(QObject * obj, int start, int end) {
  return new QAccessibleTextSelectionEvent(obj, start, end);
}


RITUAL_EXPORT QAccessibleTextSelectionEvent * ctr_qt_gui_ffi_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent1(QAccessibleInterface * iface, int start, int end) {
  return new QAccessibleTextSelectionEvent(iface, start, end);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextSelectionEvent_dQAccessibleTextSelectionEvent(QAccessibleTextSelectionEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextSelectionEvent_setSelection(QAccessibleTextSelectionEvent * this_ptr, int start, int end) {
  this_ptr->setSelection(start, end);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextSelectionEvent_selectionStart(QAccessibleTextSelectionEvent const * this_ptr) {
  return this_ptr->selectionStart();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextSelectionEvent_selectionEnd(QAccessibleTextSelectionEvent const * this_ptr) {
  return this_ptr->selectionEnd();
}


RITUAL_EXPORT QAccessibleTextInsertEvent * ctr_qt_gui_ffi_QAccessibleTextInsertEvent_QAccessibleTextInsertEvent(QObject * obj, int position, QString const * text) {
  return new QAccessibleTextInsertEvent(obj, position, *text);
}


RITUAL_EXPORT QAccessibleTextInsertEvent * ctr_qt_gui_ffi_QAccessibleTextInsertEvent_QAccessibleTextInsertEvent1(QAccessibleInterface * iface, int position, QString const * text) {
  return new QAccessibleTextInsertEvent(iface, position, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextInsertEvent_dQAccessibleTextInsertEvent(QAccessibleTextInsertEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextInsertEvent_textInserted(QAccessibleTextInsertEvent const * this_ptr) {
  return new QString(this_ptr->textInserted());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextInsertEvent_changePosition(QAccessibleTextInsertEvent const * this_ptr) {
  return this_ptr->changePosition();
}


RITUAL_EXPORT QAccessibleTextRemoveEvent * ctr_qt_gui_ffi_QAccessibleTextRemoveEvent_QAccessibleTextRemoveEvent(QObject * obj, int position, QString const * text) {
  return new QAccessibleTextRemoveEvent(obj, position, *text);
}


RITUAL_EXPORT QAccessibleTextRemoveEvent * ctr_qt_gui_ffi_QAccessibleTextRemoveEvent_QAccessibleTextRemoveEvent1(QAccessibleInterface * iface, int position, QString const * text) {
  return new QAccessibleTextRemoveEvent(iface, position, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextRemoveEvent_dQAccessibleTextRemoveEvent(QAccessibleTextRemoveEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextRemoveEvent_textRemoved(QAccessibleTextRemoveEvent const * this_ptr) {
  return new QString(this_ptr->textRemoved());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextRemoveEvent_changePosition(QAccessibleTextRemoveEvent const * this_ptr) {
  return this_ptr->changePosition();
}


RITUAL_EXPORT QAccessibleTextUpdateEvent * ctr_qt_gui_ffi_QAccessibleTextUpdateEvent_QAccessibleTextUpdateEvent(QObject * obj, int position, QString const * oldText, QString const * text) {
  return new QAccessibleTextUpdateEvent(obj, position, *oldText, *text);
}


RITUAL_EXPORT QAccessibleTextUpdateEvent * ctr_qt_gui_ffi_QAccessibleTextUpdateEvent_QAccessibleTextUpdateEvent1(QAccessibleInterface * iface, int position, QString const * oldText, QString const * text) {
  return new QAccessibleTextUpdateEvent(iface, position, *oldText, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTextUpdateEvent_dQAccessibleTextUpdateEvent(QAccessibleTextUpdateEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextUpdateEvent_textRemoved(QAccessibleTextUpdateEvent const * this_ptr) {
  return new QString(this_ptr->textRemoved());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleTextUpdateEvent_textInserted(QAccessibleTextUpdateEvent const * this_ptr) {
  return new QString(this_ptr->textInserted());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTextUpdateEvent_changePosition(QAccessibleTextUpdateEvent const * this_ptr) {
  return this_ptr->changePosition();
}


RITUAL_EXPORT QAccessibleValueChangeEvent * ctr_qt_gui_ffi_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent(QObject * obj, QVariant const * val) {
  return new QAccessibleValueChangeEvent(obj, *val);
}


RITUAL_EXPORT QAccessibleValueChangeEvent * ctr_qt_gui_ffi_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent1(QAccessibleInterface * iface, QVariant const * val) {
  return new QAccessibleValueChangeEvent(iface, *val);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleValueChangeEvent_dQAccessibleValueChangeEvent(QAccessibleValueChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleValueChangeEvent_setValue(QAccessibleValueChangeEvent * this_ptr, QVariant const * val) {
  this_ptr->setValue(*val);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QAccessibleValueChangeEvent_value(QAccessibleValueChangeEvent const * this_ptr) {
  return new QVariant(this_ptr->value());
}


RITUAL_EXPORT QAccessibleTableModelChangeEvent * ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return new QAccessibleTableModelChangeEvent(obj, changeType);
}


RITUAL_EXPORT QAccessibleTableModelChangeEvent * ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent1(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return new QAccessibleTableModelChangeEvent(iface, changeType);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_dQAccessibleTableModelChangeEvent(QAccessibleTableModelChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_setModelChangeType(QAccessibleTableModelChangeEvent * this_ptr, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  this_ptr->setModelChangeType(changeType);
}


RITUAL_EXPORT QAccessibleTableModelChangeEvent::ModelChangeType ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_modelChangeType(QAccessibleTableModelChangeEvent const * this_ptr) {
  return this_ptr->modelChangeType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_setFirstRow(QAccessibleTableModelChangeEvent * this_ptr, int row) {
  this_ptr->setFirstRow(row);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_setFirstColumn(QAccessibleTableModelChangeEvent * this_ptr, int col) {
  this_ptr->setFirstColumn(col);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_setLastRow(QAccessibleTableModelChangeEvent * this_ptr, int row) {
  this_ptr->setLastRow(row);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_setLastColumn(QAccessibleTableModelChangeEvent * this_ptr, int col) {
  this_ptr->setLastColumn(col);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_firstRow(QAccessibleTableModelChangeEvent const * this_ptr) {
  return this_ptr->firstRow();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_firstColumn(QAccessibleTableModelChangeEvent const * this_ptr) {
  return this_ptr->firstColumn();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_lastRow(QAccessibleTableModelChangeEvent const * this_ptr) {
  return this_ptr->lastRow();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessibleTableModelChangeEvent_lastColumn(QAccessibleTableModelChangeEvent const * this_ptr) {
  return this_ptr->lastColumn();
}


RITUAL_EXPORT QAccessibleAnnouncementEvent * ctr_qt_gui_ffi_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent(QObject * object, QString const * message) {
  return new QAccessibleAnnouncementEvent(object, *message);
}


RITUAL_EXPORT QAccessibleAnnouncementEvent * ctr_qt_gui_ffi_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent1(QAccessibleInterface * iface, QString const * message) {
  return new QAccessibleAnnouncementEvent(iface, *message);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleAnnouncementEvent_dQAccessibleAnnouncementEvent(QAccessibleAnnouncementEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessibleAnnouncementEvent_message(QAccessibleAnnouncementEvent const * this_ptr) {
  return new QString(this_ptr->message());
}


RITUAL_EXPORT QAccessible::AnnouncementPoliteness ctr_qt_gui_ffi_QAccessibleAnnouncementEvent_politeness(QAccessibleAnnouncementEvent const * this_ptr) {
  return this_ptr->politeness();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleAnnouncementEvent_setPoliteness(QAccessibleAnnouncementEvent * this_ptr, QAccessible::AnnouncementPoliteness politeness) {
  this_ptr->setPoliteness(politeness);
}


RITUAL_EXPORT char const * ctr_qt_gui_ffi_qAccessibleRoleString(QAccessible::Role role) {
  return qAccessibleRoleString(role);
}


RITUAL_EXPORT char const * ctr_qt_gui_ffi_qAccessibleEventString(QAccessible::Event event) {
  return qAccessibleEventString(event);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_qAccessibleLocalizedActionDescription(QString const * actionName) {
  return new QString(qAccessibleLocalizedActionDescription(*actionName));
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__56(QDebug const * d, QAccessibleInterface const * iface) {
  return new QDebug(operator<<(*d, iface));
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__57(QDebug const * d, QAccessibleEvent const * ev) {
  return new QDebug(operator<<(*d, *ev));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAccessibleObject_isValid(QAccessibleObject const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QAccessibleObject_object(QAccessibleObject const * this_ptr) {
  return this_ptr->object();
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QAccessibleObject_rect(QAccessibleObject const * this_ptr) {
  return new QRect(this_ptr->rect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessibleObject_setText(QAccessibleObject * this_ptr, QAccessible::Text t, QString const * text) {
  this_ptr->setText(t, *text);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleObject_childAt(QAccessibleObject const * this_ptr, int x, int y) {
  return this_ptr->childAt(x, y);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAccessiblePlugin_metaObject(QAccessiblePlugin const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QAccessiblePlugin_qt_metacast(QAccessiblePlugin * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAccessiblePlugin_qt_metacall(QAccessiblePlugin * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAccessiblePlugin_tr(char const * s, char const * c, int n) {
  return new QString(QAccessiblePlugin::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessiblePlugin_dQAccessiblePlugin(QAccessiblePlugin * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessiblePlugin_create(QAccessiblePlugin * this_ptr, QString const * key, QObject * object) {
  return this_ptr->create(*key, object);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAction_metaObject(QAction const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QAction_qt_metacast(QAction * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAction_qt_metacall(QAction * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAction_tr(char const * s, char const * c, int n) {
  return new QString(QAction::tr(s, c, n));
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QAction_QAction(QObject * parent) {
  return new QAction(parent);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QAction_QAction1(QString const * text, QObject * parent) {
  return new QAction(*text, parent);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QAction_QAction2(QIcon const * icon, QString const * text, QObject * parent) {
  return new QAction(*icon, *text, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_dQAction(QAction * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_gui_ffi_QAction_associatedObjects(QAction const * this_ptr) {
  return new QList< QObject * >(this_ptr->associatedObjects());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setActionGroup(QAction * this_ptr, QActionGroup * group) {
  this_ptr->setActionGroup(group);
}


RITUAL_EXPORT QActionGroup * ctr_qt_gui_ffi_QAction_actionGroup(QAction const * this_ptr) {
  return this_ptr->actionGroup();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setIcon(QAction * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QAction_icon(QAction const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setText(QAction * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAction_text(QAction const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setIconText(QAction * this_ptr, QString const * text) {
  this_ptr->setIconText(*text);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAction_iconText(QAction const * this_ptr) {
  return new QString(this_ptr->iconText());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setToolTip(QAction * this_ptr, QString const * tip) {
  this_ptr->setToolTip(*tip);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAction_toolTip(QAction const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setStatusTip(QAction * this_ptr, QString const * statusTip) {
  this_ptr->setStatusTip(*statusTip);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAction_statusTip(QAction const * this_ptr) {
  return new QString(this_ptr->statusTip());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setWhatsThis(QAction * this_ptr, QString const * what) {
  this_ptr->setWhatsThis(*what);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAction_whatsThis(QAction const * this_ptr) {
  return new QString(this_ptr->whatsThis());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setPriority(QAction * this_ptr, QAction::Priority priority) {
  this_ptr->setPriority(priority);
}


RITUAL_EXPORT QAction::Priority ctr_qt_gui_ffi_QAction_priority(QAction const * this_ptr) {
  return this_ptr->priority();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setSeparator(QAction * this_ptr, bool b) {
  this_ptr->setSeparator(b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_isSeparator(QAction const * this_ptr) {
  return this_ptr->isSeparator();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setShortcut(QAction * this_ptr, QKeySequence const * shortcut) {
  this_ptr->setShortcut(*shortcut);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QAction_shortcut(QAction const * this_ptr) {
  return new QKeySequence(this_ptr->shortcut());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setShortcuts(QAction * this_ptr, QList< QKeySequence > const * shortcuts) {
  this_ptr->setShortcuts(*shortcuts);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setShortcuts1(QAction * this_ptr, QKeySequence::StandardKey arg1) {
  this_ptr->setShortcuts(arg1);
}


RITUAL_EXPORT QList< QKeySequence > * ctr_qt_gui_ffi_QAction_shortcuts(QAction const * this_ptr) {
  return new QList< QKeySequence >(this_ptr->shortcuts());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setShortcutContext(QAction * this_ptr, Qt::ShortcutContext context) {
  this_ptr->setShortcutContext(context);
}


RITUAL_EXPORT Qt::ShortcutContext ctr_qt_gui_ffi_QAction_shortcutContext(QAction const * this_ptr) {
  return this_ptr->shortcutContext();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setAutoRepeat(QAction * this_ptr, bool arg1) {
  this_ptr->setAutoRepeat(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_autoRepeat(QAction const * this_ptr) {
  return this_ptr->autoRepeat();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setFont(QAction * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QAction_font(QAction const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setCheckable(QAction * this_ptr, bool arg1) {
  this_ptr->setCheckable(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_isCheckable(QAction const * this_ptr) {
  return this_ptr->isCheckable();
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QAction_data(QAction const * this_ptr) {
  return new QVariant(this_ptr->data());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setData(QAction * this_ptr, QVariant const * var) {
  this_ptr->setData(*var);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_isChecked(QAction const * this_ptr) {
  return this_ptr->isChecked();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_isEnabled(QAction const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_isVisible(QAction const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_activate(QAction * this_ptr, QAction::ActionEvent event) {
  this_ptr->activate(event);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setMenuRole(QAction * this_ptr, QAction::MenuRole menuRole) {
  this_ptr->setMenuRole(menuRole);
}


RITUAL_EXPORT QAction::MenuRole ctr_qt_gui_ffi_QAction_menuRole(QAction const * this_ptr) {
  return this_ptr->menuRole();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setIconVisibleInMenu(QAction * this_ptr, bool visible) {
  this_ptr->setIconVisibleInMenu(visible);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_isIconVisibleInMenu(QAction const * this_ptr) {
  return this_ptr->isIconVisibleInMenu();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setShortcutVisibleInContextMenu(QAction * this_ptr, bool show) {
  this_ptr->setShortcutVisibleInContextMenu(show);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_isShortcutVisibleInContextMenu(QAction const * this_ptr) {
  return this_ptr->isShortcutVisibleInContextMenu();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QAction_showStatusText(QAction * this_ptr, QObject * object) {
  return this_ptr->showStatusText(object);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_trigger(QAction * this_ptr) {
  this_ptr->trigger();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_hover(QAction * this_ptr) {
  this_ptr->hover();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setChecked(QAction * this_ptr, bool arg1) {
  this_ptr->setChecked(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_toggle(QAction * this_ptr) {
  this_ptr->toggle();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setEnabled(QAction * this_ptr, bool arg1) {
  this_ptr->setEnabled(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_resetEnabled(QAction * this_ptr) {
  this_ptr->resetEnabled();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setDisabled(QAction * this_ptr, bool b) {
  this_ptr->setDisabled(b);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAction_setVisible(QAction * this_ptr, bool arg1) {
  this_ptr->setVisible(arg1);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__58(QDebug const * arg1, QAction const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QActionGroup_metaObject(QActionGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QActionGroup_qt_metacast(QActionGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QActionGroup_qt_metacall(QActionGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QActionGroup_tr(char const * s, char const * c, int n) {
  return new QString(QActionGroup::tr(s, c, n));
}


RITUAL_EXPORT QActionGroup * ctr_qt_gui_ffi_QActionGroup_QActionGroup(QObject * parent) {
  return new QActionGroup(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionGroup_dQActionGroup(QActionGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QActionGroup_addAction(QActionGroup * this_ptr, QAction * a) {
  return this_ptr->addAction(a);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QActionGroup_addAction1(QActionGroup * this_ptr, QString const * text) {
  return this_ptr->addAction(*text);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QActionGroup_addAction2(QActionGroup * this_ptr, QIcon const * icon, QString const * text) {
  return this_ptr->addAction(*icon, *text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionGroup_removeAction(QActionGroup * this_ptr, QAction * a) {
  this_ptr->removeAction(a);
}


RITUAL_EXPORT QList< QAction * > * ctr_qt_gui_ffi_QActionGroup_actions(QActionGroup const * this_ptr) {
  return new QList< QAction * >(this_ptr->actions());
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QActionGroup_checkedAction(QActionGroup const * this_ptr) {
  return this_ptr->checkedAction();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QActionGroup_isExclusive(QActionGroup const * this_ptr) {
  return this_ptr->isExclusive();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QActionGroup_isEnabled(QActionGroup const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QActionGroup_isVisible(QActionGroup const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT QActionGroup::ExclusionPolicy ctr_qt_gui_ffi_QActionGroup_exclusionPolicy(QActionGroup const * this_ptr) {
  return this_ptr->exclusionPolicy();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionGroup_setEnabled(QActionGroup * this_ptr, bool arg1) {
  this_ptr->setEnabled(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionGroup_setDisabled(QActionGroup * this_ptr, bool b) {
  this_ptr->setDisabled(b);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionGroup_setVisible(QActionGroup * this_ptr, bool arg1) {
  this_ptr->setVisible(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionGroup_setExclusive(QActionGroup * this_ptr, bool arg1) {
  this_ptr->setExclusive(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionGroup_setExclusionPolicy(QActionGroup * this_ptr, QActionGroup::ExclusionPolicy policy) {
  this_ptr->setExclusionPolicy(policy);
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QSurfaceFormat_QSurfaceFormat() {
  return new QSurfaceFormat();
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QSurfaceFormat_QSurfaceFormat1(int options) {
  return new QSurfaceFormat(QFlags< QSurfaceFormat::FormatOption >(options));
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QSurfaceFormat_QSurfaceFormat2(QSurfaceFormat const * other) {
  return new QSurfaceFormat(*other);
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QSurfaceFormat_operator_(QSurfaceFormat * this_ptr, QSurfaceFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_dQSurfaceFormat(QSurfaceFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setDepthBufferSize(QSurfaceFormat * this_ptr, int size) {
  this_ptr->setDepthBufferSize(size);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_depthBufferSize(QSurfaceFormat const * this_ptr) {
  return this_ptr->depthBufferSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setStencilBufferSize(QSurfaceFormat * this_ptr, int size) {
  this_ptr->setStencilBufferSize(size);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_stencilBufferSize(QSurfaceFormat const * this_ptr) {
  return this_ptr->stencilBufferSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setRedBufferSize(QSurfaceFormat * this_ptr, int size) {
  this_ptr->setRedBufferSize(size);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_redBufferSize(QSurfaceFormat const * this_ptr) {
  return this_ptr->redBufferSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setGreenBufferSize(QSurfaceFormat * this_ptr, int size) {
  this_ptr->setGreenBufferSize(size);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_greenBufferSize(QSurfaceFormat const * this_ptr) {
  return this_ptr->greenBufferSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setBlueBufferSize(QSurfaceFormat * this_ptr, int size) {
  this_ptr->setBlueBufferSize(size);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_blueBufferSize(QSurfaceFormat const * this_ptr) {
  return this_ptr->blueBufferSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setAlphaBufferSize(QSurfaceFormat * this_ptr, int size) {
  this_ptr->setAlphaBufferSize(size);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_alphaBufferSize(QSurfaceFormat const * this_ptr) {
  return this_ptr->alphaBufferSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setSamples(QSurfaceFormat * this_ptr, int numSamples) {
  this_ptr->setSamples(numSamples);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_samples(QSurfaceFormat const * this_ptr) {
  return this_ptr->samples();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setSwapBehavior(QSurfaceFormat * this_ptr, QSurfaceFormat::SwapBehavior behavior) {
  this_ptr->setSwapBehavior(behavior);
}


RITUAL_EXPORT QSurfaceFormat::SwapBehavior ctr_qt_gui_ffi_QSurfaceFormat_swapBehavior(QSurfaceFormat const * this_ptr) {
  return this_ptr->swapBehavior();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSurfaceFormat_hasAlpha(QSurfaceFormat const * this_ptr) {
  return this_ptr->hasAlpha();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setProfile(QSurfaceFormat * this_ptr, QSurfaceFormat::OpenGLContextProfile profile) {
  this_ptr->setProfile(profile);
}


RITUAL_EXPORT QSurfaceFormat::OpenGLContextProfile ctr_qt_gui_ffi_QSurfaceFormat_profile(QSurfaceFormat const * this_ptr) {
  return this_ptr->profile();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setRenderableType(QSurfaceFormat * this_ptr, QSurfaceFormat::RenderableType type) {
  this_ptr->setRenderableType(type);
}


RITUAL_EXPORT QSurfaceFormat::RenderableType ctr_qt_gui_ffi_QSurfaceFormat_renderableType(QSurfaceFormat const * this_ptr) {
  return this_ptr->renderableType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setMajorVersion(QSurfaceFormat * this_ptr, int majorVersion) {
  this_ptr->setMajorVersion(majorVersion);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_majorVersion(QSurfaceFormat const * this_ptr) {
  return this_ptr->majorVersion();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setMinorVersion(QSurfaceFormat * this_ptr, int minorVersion) {
  this_ptr->setMinorVersion(minorVersion);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_minorVersion(QSurfaceFormat const * this_ptr) {
  return this_ptr->minorVersion();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setVersion(QSurfaceFormat * this_ptr, int major, int minor) {
  this_ptr->setVersion(major, minor);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSurfaceFormat_stereo(QSurfaceFormat const * this_ptr) {
  return this_ptr->stereo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setStereo(QSurfaceFormat * this_ptr, bool enable) {
  this_ptr->setStereo(enable);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setOptions(QSurfaceFormat * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QSurfaceFormat::FormatOption >(options));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setOption(QSurfaceFormat * this_ptr, QSurfaceFormat::FormatOption option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSurfaceFormat_testOption(QSurfaceFormat const * this_ptr, QSurfaceFormat::FormatOption option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_options(QSurfaceFormat const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSurfaceFormat_swapInterval(QSurfaceFormat const * this_ptr) {
  return this_ptr->swapInterval();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setSwapInterval(QSurfaceFormat * this_ptr, int interval) {
  this_ptr->setSwapInterval(interval);
}


RITUAL_EXPORT QColorSpace const * ctr_qt_gui_ffi_QSurfaceFormat_colorSpace(QSurfaceFormat const * this_ptr) {
  return &this_ptr->colorSpace();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setColorSpace(QSurfaceFormat * this_ptr, QColorSpace const * colorSpace) {
  this_ptr->setColorSpace(*colorSpace);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setColorSpace1(QSurfaceFormat * this_ptr, QSurfaceFormat::ColorSpace colorSpace) {
  this_ptr->setColorSpace(colorSpace);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurfaceFormat_setDefaultFormat(QSurfaceFormat const * format) {
  QSurfaceFormat::setDefaultFormat(*format);
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QSurfaceFormat_defaultFormat() {
  return new QSurfaceFormat(QSurfaceFormat::defaultFormat());
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__59(QDebug const * arg1, QSurfaceFormat const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSurface_dQSurface(QSurface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSurface::SurfaceClass ctr_qt_gui_ffi_QSurface_surfaceClass(QSurface const * this_ptr) {
  return this_ptr->surfaceClass();
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QSurface_format(QSurface const * this_ptr) {
  return new QSurfaceFormat(this_ptr->format());
}


RITUAL_EXPORT QSurface::SurfaceType ctr_qt_gui_ffi_QSurface_surfaceType(QSurface const * this_ptr) {
  return this_ptr->surfaceType();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSurface_supportsOpenGL(QSurface const * this_ptr) {
  return this_ptr->supportsOpenGL();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QSurface_size(QSurface const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QSurface_ptr(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QSurface_ptr(*arg1);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_QBitmap() {
  return new QBitmap();
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_QBitmap1(QPixmap const * arg1) {
  return new QBitmap(*arg1);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_QBitmap2(int w, int h) {
  return new QBitmap(w, h);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_QBitmap3(QSize const * arg1) {
  return new QBitmap(*arg1);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_QBitmap4(QString const * fileName, char const * format) {
  return new QBitmap(*fileName, format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBitmap_dQBitmap(QBitmap * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_operator_(QBitmap * this_ptr, QPixmap const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBitmap_swap(QBitmap * this_ptr, QBitmap * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QBitmap_operator_QVariant(QBitmap const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBitmap_clear(QBitmap * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_fromImage(QImage const * image, int flags) {
  return new QBitmap(QBitmap::fromImage(*image, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_fromData(QSize const * size, unsigned char const * bits, QImage::Format monoFormat) {
  return new QBitmap(QBitmap::fromData(*size, bits, monoFormat));
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_fromPixmap(QPixmap const * pixmap) {
  return new QBitmap(QBitmap::fromPixmap(*pixmap));
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_transformed(QBitmap const * this_ptr, QTransform const * matrix) {
  return new QBitmap(this_ptr->transformed(*matrix));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap23(QBitmap * value1, QBitmap * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QCursor_QCursor() {
  return new QCursor();
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QCursor_QCursor1(Qt::CursorShape shape) {
  return new QCursor(shape);
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QCursor_QCursor2(QBitmap const * bitmap, QBitmap const * mask, int hotX, int hotY) {
  return new QCursor(*bitmap, *mask, hotX, hotY);
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QCursor_QCursor3(QPixmap const * pixmap, int hotX, int hotY) {
  return new QCursor(*pixmap, hotX, hotY);
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QCursor_QCursor4(QCursor const * cursor) {
  return new QCursor(*cursor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCursor_dQCursor(QCursor * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QCursor_operator_(QCursor * this_ptr, QCursor const * cursor) {
  return &this_ptr->operator=(*cursor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCursor_swap(QCursor * this_ptr, QCursor * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QCursor_operator_QVariant(QCursor const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT Qt::CursorShape ctr_qt_gui_ffi_QCursor_shape(QCursor const * this_ptr) {
  return this_ptr->shape();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCursor_setShape(QCursor * this_ptr, Qt::CursorShape newShape) {
  this_ptr->setShape(newShape);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QCursor_bitmap(QCursor const * this_ptr, Qt::ReturnByValueConstant arg1) {
  return new QBitmap(this_ptr->bitmap(arg1));
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QCursor_mask(QCursor const * this_ptr, Qt::ReturnByValueConstant arg1) {
  return new QBitmap(this_ptr->mask(arg1));
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QCursor_bitmap1(QCursor const * this_ptr) {
  return new QBitmap(this_ptr->bitmap());
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QCursor_mask1(QCursor const * this_ptr) {
  return new QBitmap(this_ptr->mask());
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QCursor_pixmap(QCursor const * this_ptr) {
  return new QPixmap(this_ptr->pixmap());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QCursor_hotSpot(QCursor const * this_ptr) {
  return new QPoint(this_ptr->hotSpot());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QCursor_pos() {
  return new QPoint(QCursor::pos());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QCursor_pos1(QScreen const * screen) {
  return new QPoint(QCursor::pos(screen));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCursor_setPos(int x, int y) {
  QCursor::setPos(x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCursor_setPos1(QScreen * screen, int x, int y) {
  QCursor::setPos(screen, x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCursor_setPos2(QPoint const * p) {
  QCursor::setPos(*p);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCursor_setPos3(QScreen * screen, QPoint const * p) {
  QCursor::setPos(screen, *p);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap24(QCursor * value1, QCursor * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__60(QDataStream * outS, QCursor const * cursor) {
  return &operator<<(*outS, *cursor);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__61(QDataStream * inS, QCursor * cursor) {
  return &operator>>(*inS, *cursor);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__62(QDebug const * arg1, QCursor const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QWindow_metaObject(QWindow const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QWindow_qt_metacast(QWindow * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_qt_metacall(QWindow * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QWindow_tr(char const * s, char const * c, int n) {
  return new QString(QWindow::tr(s, c, n));
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QWindow_QWindow(QScreen * screen) {
  return new QWindow(screen);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QWindow_QWindow1(QWindow * parent) {
  return new QWindow(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_dQWindow(QWindow * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setSurfaceType(QWindow * this_ptr, QSurface::SurfaceType surfaceType) {
  this_ptr->setSurfaceType(surfaceType);
}


RITUAL_EXPORT QSurface::SurfaceType ctr_qt_gui_ffi_QWindow_surfaceType(QWindow const * this_ptr) {
  return this_ptr->surfaceType();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_isVisible(QWindow const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT QWindow::Visibility ctr_qt_gui_ffi_QWindow_visibility(QWindow const * this_ptr) {
  return this_ptr->visibility();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setVisibility(QWindow * this_ptr, QWindow::Visibility v) {
  this_ptr->setVisibility(v);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_create(QWindow * this_ptr) {
  this_ptr->create();
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QWindow_winId(QWindow const * this_ptr) {
  return this_ptr->winId();
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QWindow_parent(QWindow const * this_ptr, QWindow::AncestorMode mode) {
  return this_ptr->parent(mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setParent(QWindow * this_ptr, QWindow * parent) {
  this_ptr->setParent(parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_isTopLevel(QWindow const * this_ptr) {
  return this_ptr->isTopLevel();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_isModal(QWindow const * this_ptr) {
  return this_ptr->isModal();
}


RITUAL_EXPORT Qt::WindowModality ctr_qt_gui_ffi_QWindow_modality(QWindow const * this_ptr) {
  return this_ptr->modality();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setModality(QWindow * this_ptr, Qt::WindowModality modality) {
  this_ptr->setModality(modality);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setFormat(QWindow * this_ptr, QSurfaceFormat const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QWindow_format(QWindow const * this_ptr) {
  return new QSurfaceFormat(this_ptr->format());
}


RITUAL_EXPORT QSurfaceFormat * ctr_qt_gui_ffi_QWindow_requestedFormat(QWindow const * this_ptr) {
  return new QSurfaceFormat(this_ptr->requestedFormat());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setFlags(QWindow * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_flags(QWindow const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setFlag(QWindow * this_ptr, Qt::WindowType arg1, bool on) {
  this_ptr->setFlag(arg1, on);
}


RITUAL_EXPORT Qt::WindowType ctr_qt_gui_ffi_QWindow_type(QWindow const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QWindow_title(QWindow const * this_ptr) {
  return new QString(this_ptr->title());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setOpacity(QWindow * this_ptr, double level) {
  this_ptr->setOpacity(level);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QWindow_opacity(QWindow const * this_ptr) {
  return this_ptr->opacity();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setMask(QWindow * this_ptr, QRegion const * region) {
  this_ptr->setMask(*region);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QWindow_mask(QWindow const * this_ptr) {
  return new QRegion(this_ptr->mask());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_isActive(QWindow const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_reportContentOrientationChange(QWindow * this_ptr, Qt::ScreenOrientation orientation) {
  this_ptr->reportContentOrientationChange(orientation);
}


RITUAL_EXPORT Qt::ScreenOrientation ctr_qt_gui_ffi_QWindow_contentOrientation(QWindow const * this_ptr) {
  return this_ptr->contentOrientation();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QWindow_devicePixelRatio(QWindow const * this_ptr) {
  return this_ptr->devicePixelRatio();
}


RITUAL_EXPORT Qt::WindowState ctr_qt_gui_ffi_QWindow_windowState(QWindow const * this_ptr) {
  return this_ptr->windowState();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_windowStates(QWindow const * this_ptr) {
  return int(this_ptr->windowStates());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setWindowState(QWindow * this_ptr, Qt::WindowState state) {
  this_ptr->setWindowState(state);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setWindowStates(QWindow * this_ptr, int states) {
  this_ptr->setWindowStates(QFlags< Qt::WindowState >(states));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setTransientParent(QWindow * this_ptr, QWindow * parent) {
  this_ptr->setTransientParent(parent);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QWindow_transientParent(QWindow const * this_ptr) {
  return this_ptr->transientParent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_isAncestorOf(QWindow const * this_ptr, QWindow const * child, QWindow::AncestorMode mode) {
  return this_ptr->isAncestorOf(child, mode);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_isExposed(QWindow const * this_ptr) {
  return this_ptr->isExposed();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_minimumWidth(QWindow const * this_ptr) {
  return this_ptr->minimumWidth();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_minimumHeight(QWindow const * this_ptr) {
  return this_ptr->minimumHeight();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_maximumWidth(QWindow const * this_ptr) {
  return this_ptr->maximumWidth();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_maximumHeight(QWindow const * this_ptr) {
  return this_ptr->maximumHeight();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QWindow_minimumSize(QWindow const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QWindow_maximumSize(QWindow const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QWindow_baseSize(QWindow const * this_ptr) {
  return new QSize(this_ptr->baseSize());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QWindow_sizeIncrement(QWindow const * this_ptr) {
  return new QSize(this_ptr->sizeIncrement());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setMinimumSize(QWindow * this_ptr, QSize const * size) {
  this_ptr->setMinimumSize(*size);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setMaximumSize(QWindow * this_ptr, QSize const * size) {
  this_ptr->setMaximumSize(*size);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setBaseSize(QWindow * this_ptr, QSize const * size) {
  this_ptr->setBaseSize(*size);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setSizeIncrement(QWindow * this_ptr, QSize const * size) {
  this_ptr->setSizeIncrement(*size);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QWindow_geometry(QWindow const * this_ptr) {
  return new QRect(this_ptr->geometry());
}


RITUAL_EXPORT QMargins * ctr_qt_gui_ffi_QWindow_frameMargins(QWindow const * this_ptr) {
  return new QMargins(this_ptr->frameMargins());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QWindow_frameGeometry(QWindow const * this_ptr) {
  return new QRect(this_ptr->frameGeometry());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QWindow_framePosition(QWindow const * this_ptr) {
  return new QPoint(this_ptr->framePosition());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setFramePosition(QWindow * this_ptr, QPoint const * point) {
  this_ptr->setFramePosition(*point);
}


RITUAL_EXPORT QMargins * ctr_qt_gui_ffi_QWindow_safeAreaMargins(QWindow const * this_ptr) {
  return new QMargins(this_ptr->safeAreaMargins());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_width(QWindow const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_height(QWindow const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_x(QWindow const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindow_y(QWindow const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QWindow_size(QWindow const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QWindow_position(QWindow const * this_ptr) {
  return new QPoint(this_ptr->position());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setPosition(QWindow * this_ptr, QPoint const * pt) {
  this_ptr->setPosition(*pt);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setPosition1(QWindow * this_ptr, int posx, int posy) {
  this_ptr->setPosition(posx, posy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_resize(QWindow * this_ptr, QSize const * newSize) {
  this_ptr->resize(*newSize);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_resize1(QWindow * this_ptr, int w, int h) {
  this_ptr->resize(w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setFilePath(QWindow * this_ptr, QString const * filePath) {
  this_ptr->setFilePath(*filePath);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QWindow_filePath(QWindow const * this_ptr) {
  return new QString(this_ptr->filePath());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setIcon(QWindow * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QWindow_icon(QWindow const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_destroy(QWindow * this_ptr) {
  this_ptr->destroy();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_setKeyboardGrabEnabled(QWindow * this_ptr, bool grab) {
  return this_ptr->setKeyboardGrabEnabled(grab);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_setMouseGrabEnabled(QWindow * this_ptr, bool grab) {
  return this_ptr->setMouseGrabEnabled(grab);
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_QWindow_screen(QWindow const * this_ptr) {
  return this_ptr->screen();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setScreen(QWindow * this_ptr, QScreen * screen) {
  this_ptr->setScreen(screen);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QWindow_accessibleRoot(QWindow const * this_ptr) {
  return this_ptr->accessibleRoot();
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QWindow_focusObject(QWindow const * this_ptr) {
  return this_ptr->focusObject();
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QWindow_mapToGlobal(QWindow const * this_ptr, QPointF const * pos) {
  return new QPointF(this_ptr->mapToGlobal(*pos));
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QWindow_mapFromGlobal(QWindow const * this_ptr, QPointF const * pos) {
  return new QPointF(this_ptr->mapFromGlobal(*pos));
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QWindow_mapToGlobal1(QWindow const * this_ptr, QPoint const * pos) {
  return new QPoint(this_ptr->mapToGlobal(*pos));
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QWindow_mapFromGlobal1(QWindow const * this_ptr, QPoint const * pos) {
  return new QPoint(this_ptr->mapFromGlobal(*pos));
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QWindow_cursor(QWindow const * this_ptr) {
  return new QCursor(this_ptr->cursor());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setCursor(QWindow * this_ptr, QCursor const * arg1) {
  this_ptr->setCursor(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_unsetCursor(QWindow * this_ptr) {
  this_ptr->unsetCursor();
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QWindow_fromWinId(unsigned long long id) {
  return QWindow::fromWinId(id);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_requestActivate(QWindow * this_ptr) {
  this_ptr->requestActivate();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setVisible(QWindow * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_show(QWindow * this_ptr) {
  this_ptr->show();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_hide(QWindow * this_ptr) {
  this_ptr->hide();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_showMinimized(QWindow * this_ptr) {
  this_ptr->showMinimized();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_showMaximized(QWindow * this_ptr) {
  this_ptr->showMaximized();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_showFullScreen(QWindow * this_ptr) {
  this_ptr->showFullScreen();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_showNormal(QWindow * this_ptr) {
  this_ptr->showNormal();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_close(QWindow * this_ptr) {
  return this_ptr->close();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_raise(QWindow * this_ptr) {
  this_ptr->raise();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_lower(QWindow * this_ptr) {
  this_ptr->lower();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_startSystemResize(QWindow * this_ptr, int edges) {
  return this_ptr->startSystemResize(QFlags< Qt::Edge >(edges));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindow_startSystemMove(QWindow * this_ptr) {
  return this_ptr->startSystemMove();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setTitle(QWindow * this_ptr, QString const * arg1) {
  this_ptr->setTitle(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setX(QWindow * this_ptr, int arg) {
  this_ptr->setX(arg);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setY(QWindow * this_ptr, int arg) {
  this_ptr->setY(arg);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setWidth(QWindow * this_ptr, int arg) {
  this_ptr->setWidth(arg);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setHeight(QWindow * this_ptr, int arg) {
  this_ptr->setHeight(arg);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setGeometry(QWindow * this_ptr, int posx, int posy, int w, int h) {
  this_ptr->setGeometry(posx, posy, w, h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setGeometry1(QWindow * this_ptr, QRect const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setMinimumWidth(QWindow * this_ptr, int w) {
  this_ptr->setMinimumWidth(w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setMinimumHeight(QWindow * this_ptr, int h) {
  this_ptr->setMinimumHeight(h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setMaximumWidth(QWindow * this_ptr, int w) {
  this_ptr->setMaximumWidth(w);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_setMaximumHeight(QWindow * this_ptr, int h) {
  this_ptr->setMaximumHeight(h);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_alert(QWindow * this_ptr, int msec) {
  this_ptr->alert(msec);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindow_requestUpdate(QWindow * this_ptr) {
  this_ptr->requestUpdate();
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__63(QDebug const * arg1, QWindow const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QBackingStore * ctr_qt_gui_ffi_QBackingStore_QBackingStore(QWindow * window) {
  return new QBackingStore(window);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_dQBackingStore(QBackingStore * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QBackingStore_window(QBackingStore const * this_ptr) {
  return this_ptr->window();
}


RITUAL_EXPORT QPaintDevice * ctr_qt_gui_ffi_QBackingStore_paintDevice(QBackingStore * this_ptr) {
  return this_ptr->paintDevice();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_flush(QBackingStore * this_ptr, QRegion const * region, QWindow * window, QPoint const * offset) {
  this_ptr->flush(*region, window, *offset);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_resize(QBackingStore * this_ptr, QSize const * size) {
  this_ptr->resize(*size);
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QBackingStore_size(QBackingStore const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QBackingStore_scroll(QBackingStore * this_ptr, QRegion const * area, int dx, int dy) {
  return this_ptr->scroll(*area, dx, dy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_beginPaint(QBackingStore * this_ptr, QRegion const * arg1) {
  this_ptr->beginPaint(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_endPaint(QBackingStore * this_ptr) {
  this_ptr->endPaint();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBackingStore_setStaticContents(QBackingStore * this_ptr, QRegion const * region) {
  this_ptr->setStaticContents(*region);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QBackingStore_staticContents(QBackingStore const * this_ptr) {
  return new QRegion(this_ptr->staticContents());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QBackingStore_hasStaticContents(QBackingStore const * this_ptr) {
  return this_ptr->hasStaticContents();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QClipboard_metaObject(QClipboard const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QClipboard_qt_metacast(QClipboard * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QClipboard_qt_metacall(QClipboard * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QClipboard_tr(char const * s, char const * c, int n) {
  return new QString(QClipboard::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_clear(QClipboard * this_ptr, QClipboard::Mode mode) {
  this_ptr->clear(mode);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QClipboard_supportsSelection(QClipboard const * this_ptr) {
  return this_ptr->supportsSelection();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QClipboard_supportsFindBuffer(QClipboard const * this_ptr) {
  return this_ptr->supportsFindBuffer();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QClipboard_ownsSelection(QClipboard const * this_ptr) {
  return this_ptr->ownsSelection();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QClipboard_ownsClipboard(QClipboard const * this_ptr) {
  return this_ptr->ownsClipboard();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QClipboard_ownsFindBuffer(QClipboard const * this_ptr) {
  return this_ptr->ownsFindBuffer();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QClipboard_text(QClipboard const * this_ptr, QClipboard::Mode mode) {
  return new QString(this_ptr->text(mode));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QClipboard_text1(QClipboard const * this_ptr, QString * subtype, QClipboard::Mode mode) {
  return new QString(this_ptr->text(*subtype, mode));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setText(QClipboard * this_ptr, QString const * arg1, QClipboard::Mode mode) {
  this_ptr->setText(*arg1, mode);
}


RITUAL_EXPORT QMimeData const * ctr_qt_gui_ffi_QClipboard_mimeData(QClipboard const * this_ptr, QClipboard::Mode mode) {
  return this_ptr->mimeData(mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setMimeData(QClipboard * this_ptr, QMimeData * data, QClipboard::Mode mode) {
  this_ptr->setMimeData(data, mode);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QClipboard_image(QClipboard const * this_ptr, QClipboard::Mode mode) {
  return new QImage(this_ptr->image(mode));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QClipboard_pixmap(QClipboard const * this_ptr, QClipboard::Mode mode) {
  return new QPixmap(this_ptr->pixmap(mode));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setImage(QClipboard * this_ptr, QImage const * arg1, QClipboard::Mode mode) {
  this_ptr->setImage(*arg1, mode);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QClipboard_setPixmap(QClipboard * this_ptr, QPixmap const * arg1, QClipboard::Mode mode) {
  this_ptr->setPixmap(*arg1, mode);
}


RITUAL_EXPORT QColorTransform * ctr_qt_gui_ffi_QColorTransform_QColorTransform() {
  return new QColorTransform();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorTransform_dQColorTransform(QColorTransform * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QColorTransform * ctr_qt_gui_ffi_QColorTransform_QColorTransform1(QColorTransform const * colorTransform) {
  return new QColorTransform(*colorTransform);
}


RITUAL_EXPORT QColorTransform * ctr_qt_gui_ffi_QColorTransform_operator_(QColorTransform * this_ptr, QColorTransform const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorTransform_swap(QColorTransform * this_ptr, QColorTransform * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColorTransform_isIdentity(QColorTransform const * this_ptr) {
  return this_ptr->isIdentity();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QColorTransform_map(QColorTransform const * this_ptr, unsigned int argb) {
  return this_ptr->map(argb);
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QColorTransform_map1(QColorTransform const * this_ptr, QRgba64 const * rgba64) {
  return new QRgba64(this_ptr->map(*rgba64));
}


RITUAL_EXPORT QRgbaFloat< qfloat16 > * ctr_qt_gui_ffi_QColorTransform_map2(QColorTransform const * this_ptr, QRgbaFloat< qfloat16 > const * rgbafp16) {
  return new QRgbaFloat< qfloat16 >(this_ptr->map(*rgbafp16));
}


RITUAL_EXPORT QRgbaFloat< float > * ctr_qt_gui_ffi_QColorTransform_map3(QColorTransform const * this_ptr, QRgbaFloat< float > const * rgbafp32) {
  return new QRgbaFloat< float >(this_ptr->map(*rgbafp32));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColorTransform_map4(QColorTransform const * this_ptr, QColor const * color) {
  return new QColor(this_ptr->map(*color));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap25(QColorTransform * value1, QColorTransform * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QColorSpace::PrimaryPoints * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_fromPrimaries(QColorSpace::Primaries primaries) {
  return new QColorSpace::PrimaryPoints(QColorSpace::PrimaryPoints::fromPrimaries(primaries));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_isValid(QColorSpace::PrimaryPoints const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace() {
  return new QColorSpace();
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace1(QColorSpace::NamedColorSpace namedColorSpace) {
  return new QColorSpace(namedColorSpace);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace2(QPointF const * whitePoint, QColorSpace::TransferFunction transferFunction, float gamma) {
  return new QColorSpace(*whitePoint, transferFunction, gamma);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace3(QPointF const * whitePoint, QList< unsigned short > const * transferFunctionTable) {
  return new QColorSpace(*whitePoint, *transferFunctionTable);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace4(QColorSpace::Primaries primaries, QColorSpace::TransferFunction transferFunction, float gamma) {
  return new QColorSpace(primaries, transferFunction, gamma);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace5(QColorSpace::Primaries primaries, float gamma) {
  return new QColorSpace(primaries, gamma);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace6(QColorSpace::Primaries primaries, QList< unsigned short > const * transferFunctionTable) {
  return new QColorSpace(primaries, *transferFunctionTable);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace7(QPointF const * whitePoint, QPointF const * redPoint, QPointF const * greenPoint, QPointF const * bluePoint, QColorSpace::TransferFunction transferFunction, float gamma) {
  return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, transferFunction, gamma);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace8(QColorSpace::PrimaryPoints const * primaryPoints, QColorSpace::TransferFunction transferFunction, float gamma) {
  return new QColorSpace(*primaryPoints, transferFunction, gamma);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace9(QPointF const * whitePoint, QPointF const * redPoint, QPointF const * greenPoint, QPointF const * bluePoint, QList< unsigned short > const * transferFunctionTable) {
  return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, *transferFunctionTable);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace10(QPointF const * whitePoint, QPointF const * redPoint, QPointF const * greenPoint, QPointF const * bluePoint, QList< unsigned short > const * redTransferFunctionTable, QList< unsigned short > const * greenTransferFunctionTable, QList< unsigned short > const * blueTransferFunctionTable) {
  return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, *redTransferFunctionTable, *greenTransferFunctionTable, *blueTransferFunctionTable);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_dQColorSpace(QColorSpace * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_QColorSpace11(QColorSpace const * colorSpace) {
  return new QColorSpace(*colorSpace);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_operator_(QColorSpace * this_ptr, QColorSpace const * colorSpace) {
  return &this_ptr->operator=(*colorSpace);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_swap(QColorSpace * this_ptr, QColorSpace * colorSpace) {
  this_ptr->swap(*colorSpace);
}


RITUAL_EXPORT QColorSpace::Primaries ctr_qt_gui_ffi_QColorSpace_primaries(QColorSpace const * this_ptr) {
  return this_ptr->primaries();
}


RITUAL_EXPORT QColorSpace::TransferFunction ctr_qt_gui_ffi_QColorSpace_transferFunction(QColorSpace const * this_ptr) {
  return this_ptr->transferFunction();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColorSpace_gamma(QColorSpace const * this_ptr) {
  return this_ptr->gamma();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QColorSpace_description(QColorSpace const * this_ptr) {
  return new QString(this_ptr->description());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setDescription(QColorSpace * this_ptr, QString const * description) {
  this_ptr->setDescription(*description);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setTransferFunction(QColorSpace * this_ptr, QColorSpace::TransferFunction transferFunction, float gamma) {
  this_ptr->setTransferFunction(transferFunction, gamma);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setTransferFunction1(QColorSpace * this_ptr, QList< unsigned short > const * transferFunctionTable) {
  this_ptr->setTransferFunction(*transferFunctionTable);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setTransferFunctions(QColorSpace * this_ptr, QList< unsigned short > const * redTransferFunctionTable, QList< unsigned short > const * greenTransferFunctionTable, QList< unsigned short > const * blueTransferFunctionTable) {
  this_ptr->setTransferFunctions(*redTransferFunctionTable, *greenTransferFunctionTable, *blueTransferFunctionTable);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_withTransferFunction(QColorSpace const * this_ptr, QColorSpace::TransferFunction transferFunction, float gamma) {
  return new QColorSpace(this_ptr->withTransferFunction(transferFunction, gamma));
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_withTransferFunction1(QColorSpace const * this_ptr, QList< unsigned short > const * transferFunctionTable) {
  return new QColorSpace(this_ptr->withTransferFunction(*transferFunctionTable));
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_withTransferFunctions(QColorSpace const * this_ptr, QList< unsigned short > const * redTransferFunctionTable, QList< unsigned short > const * greenTransferFunctionTable, QList< unsigned short > const * blueTransferFunctionTable) {
  return new QColorSpace(this_ptr->withTransferFunctions(*redTransferFunctionTable, *greenTransferFunctionTable, *blueTransferFunctionTable));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setPrimaries(QColorSpace * this_ptr, QColorSpace::Primaries primariesId) {
  this_ptr->setPrimaries(primariesId);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setPrimaries1(QColorSpace * this_ptr, QPointF const * whitePoint, QPointF const * redPoint, QPointF const * greenPoint, QPointF const * bluePoint) {
  this_ptr->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setWhitePoint(QColorSpace * this_ptr, QPointF const * whitePoint) {
  this_ptr->setWhitePoint(*whitePoint);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QColorSpace_whitePoint(QColorSpace const * this_ptr) {
  return new QPointF(this_ptr->whitePoint());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_setPrimaryPoints(QColorSpace * this_ptr, QColorSpace::PrimaryPoints const * primaryPoints) {
  this_ptr->setPrimaryPoints(*primaryPoints);
}


RITUAL_EXPORT QColorSpace::PrimaryPoints * ctr_qt_gui_ffi_QColorSpace_primaryPoints(QColorSpace const * this_ptr) {
  return new QColorSpace::PrimaryPoints(this_ptr->primaryPoints());
}


RITUAL_EXPORT QColorSpace::TransformModel ctr_qt_gui_ffi_QColorSpace_transformModel(QColorSpace const * this_ptr) {
  return this_ptr->transformModel();
}


RITUAL_EXPORT QColorSpace::ColorModel ctr_qt_gui_ffi_QColorSpace_colorModel(QColorSpace const * this_ptr) {
  return this_ptr->colorModel();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_detach(QColorSpace * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColorSpace_isValid(QColorSpace const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColorSpace_isValidTarget(QColorSpace const * this_ptr) {
  return this_ptr->isValidTarget();
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QColorSpace_fromIccProfile(QByteArray const * iccProfile) {
  return new QColorSpace(QColorSpace::fromIccProfile(*iccProfile));
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QColorSpace_iccProfile(QColorSpace const * this_ptr) {
  return new QByteArray(this_ptr->iccProfile());
}


RITUAL_EXPORT QColorTransform * ctr_qt_gui_ffi_QColorSpace_transformationToColorSpace(QColorSpace const * this_ptr, QColorSpace const * colorspace) {
  return new QColorTransform(this_ptr->transformationToColorSpace(*colorspace));
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QColorSpace_operator_QVariant(QColorSpace const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap26(QColorSpace * value1, QColorSpace * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__64(QDataStream * arg1, QColorSpace const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__65(QDataStream * arg1, QColorSpace * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__66(QDebug const * arg1, QColorSpace const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QDesktopServices_openUrl(QUrl const * url) {
  return QDesktopServices::openUrl(*url);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDesktopServices_setUrlHandler(QString const * scheme, QObject * receiver, char const * method) {
  QDesktopServices::setUrlHandler(*scheme, receiver, method);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDesktopServices_unsetUrlHandler(QString const * scheme) {
  QDesktopServices::unsetUrlHandler(*scheme);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QDrag_metaObject(QDrag const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QDrag_qt_metacast(QDrag * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDrag_qt_metacall(QDrag * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QDrag_tr(char const * s, char const * c, int n) {
  return new QString(QDrag::tr(s, c, n));
}


RITUAL_EXPORT QDrag * ctr_qt_gui_ffi_QDrag_QDrag(QObject * dragSource) {
  return new QDrag(dragSource);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDrag_dQDrag(QDrag * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDrag_setMimeData(QDrag * this_ptr, QMimeData * data) {
  this_ptr->setMimeData(data);
}


RITUAL_EXPORT QMimeData * ctr_qt_gui_ffi_QDrag_mimeData(QDrag const * this_ptr) {
  return this_ptr->mimeData();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDrag_setPixmap(QDrag * this_ptr, QPixmap const * arg1) {
  this_ptr->setPixmap(*arg1);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QDrag_pixmap(QDrag const * this_ptr) {
  return new QPixmap(this_ptr->pixmap());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDrag_setHotSpot(QDrag * this_ptr, QPoint const * hotspot) {
  this_ptr->setHotSpot(*hotspot);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QDrag_hotSpot(QDrag const * this_ptr) {
  return new QPoint(this_ptr->hotSpot());
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QDrag_source(QDrag const * this_ptr) {
  return this_ptr->source();
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QDrag_target(QDrag const * this_ptr) {
  return this_ptr->target();
}


RITUAL_EXPORT Qt::DropAction ctr_qt_gui_ffi_QDrag_exec(QDrag * this_ptr, int supportedActions) {
  return this_ptr->exec(QFlags< Qt::DropAction >(supportedActions));
}


RITUAL_EXPORT Qt::DropAction ctr_qt_gui_ffi_QDrag_exec1(QDrag * this_ptr, int supportedActions, Qt::DropAction defaultAction) {
  return this_ptr->exec(QFlags< Qt::DropAction >(supportedActions), defaultAction);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDrag_setDragCursor(QDrag * this_ptr, QPixmap const * cursor, Qt::DropAction action) {
  this_ptr->setDragCursor(*cursor, action);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QDrag_dragCursor(QDrag const * this_ptr, Qt::DropAction action) {
  return new QPixmap(this_ptr->dragCursor(action));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDrag_supportedActions(QDrag const * this_ptr) {
  return int(this_ptr->supportedActions());
}


RITUAL_EXPORT Qt::DropAction ctr_qt_gui_ffi_QDrag_defaultAction(QDrag const * this_ptr) {
  return this_ptr->defaultAction();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDrag_cancel() {
  QDrag::cancel();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QFileSystemModel_metaObject(QFileSystemModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QFileSystemModel_qt_metacast(QFileSystemModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_qt_metacall(QFileSystemModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFileSystemModel_tr(char const * s, char const * c, int n) {
  return new QString(QFileSystemModel::tr(s, c, n));
}


RITUAL_EXPORT QFileSystemModel * ctr_qt_gui_ffi_QFileSystemModel_QFileSystemModel(QObject * parent) {
  return new QFileSystemModel(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_dQFileSystemModel(QFileSystemModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_index(QFileSystemModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_index1(QFileSystemModel const * this_ptr, QString const * path, int column) {
  return new QModelIndex(this_ptr->index(*path, column));
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_parent(QFileSystemModel const * this_ptr, QModelIndex const * child) {
  return new QModelIndex(this_ptr->parent(*child));
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_sibling(QFileSystemModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_hasChildren(QFileSystemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->hasChildren(*parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_canFetchMore(QFileSystemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->canFetchMore(*parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_fetchMore(QFileSystemModel * this_ptr, QModelIndex const * parent) {
  this_ptr->fetchMore(*parent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_rowCount(QFileSystemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_columnCount(QFileSystemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QFileSystemModel_myComputer(QFileSystemModel const * this_ptr, int role) {
  return new QVariant(this_ptr->myComputer(role));
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QFileSystemModel_data(QFileSystemModel const * this_ptr, QModelIndex const * index, int role) {
  return new QVariant(this_ptr->data(*index, role));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_setData(QFileSystemModel * this_ptr, QModelIndex const * index, QVariant const * value, int role) {
  return this_ptr->setData(*index, *value, role);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QFileSystemModel_headerData(QFileSystemModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_flags(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_sort(QFileSystemModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFileSystemModel_mimeTypes(QFileSystemModel const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypes());
}


RITUAL_EXPORT QMimeData * ctr_qt_gui_ffi_QFileSystemModel_mimeData(QFileSystemModel const * this_ptr, QList< QModelIndex > const * indexes) {
  return this_ptr->mimeData(*indexes);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_dropMimeData(QFileSystemModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_supportedDropActions(QFileSystemModel const * this_ptr) {
  return int(this_ptr->supportedDropActions());
}


RITUAL_EXPORT QHash< int, QByteArray > * ctr_qt_gui_ffi_QFileSystemModel_roleNames(QFileSystemModel const * this_ptr) {
  return new QHash< int, QByteArray >(this_ptr->roleNames());
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_setRootPath(QFileSystemModel * this_ptr, QString const * path) {
  return new QModelIndex(this_ptr->setRootPath(*path));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFileSystemModel_rootPath(QFileSystemModel const * this_ptr) {
  return new QString(this_ptr->rootPath());
}


RITUAL_EXPORT QDir * ctr_qt_gui_ffi_QFileSystemModel_rootDirectory(QFileSystemModel const * this_ptr) {
  return new QDir(this_ptr->rootDirectory());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setIconProvider(QFileSystemModel * this_ptr, QAbstractFileIconProvider * provider) {
  this_ptr->setIconProvider(provider);
}


RITUAL_EXPORT QAbstractFileIconProvider * ctr_qt_gui_ffi_QFileSystemModel_iconProvider(QFileSystemModel const * this_ptr) {
  return this_ptr->iconProvider();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setFilter(QFileSystemModel * this_ptr, int filters) {
  this_ptr->setFilter(QFlags< QDir::Filter >(filters));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_filter(QFileSystemModel const * this_ptr) {
  return int(this_ptr->filter());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setResolveSymlinks(QFileSystemModel * this_ptr, bool enable) {
  this_ptr->setResolveSymlinks(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_resolveSymlinks(QFileSystemModel const * this_ptr) {
  return this_ptr->resolveSymlinks();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setReadOnly(QFileSystemModel * this_ptr, bool enable) {
  this_ptr->setReadOnly(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_isReadOnly(QFileSystemModel const * this_ptr) {
  return this_ptr->isReadOnly();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setNameFilterDisables(QFileSystemModel * this_ptr, bool enable) {
  this_ptr->setNameFilterDisables(enable);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_nameFilterDisables(QFileSystemModel const * this_ptr) {
  return this_ptr->nameFilterDisables();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setNameFilters(QFileSystemModel * this_ptr, QList< QString > const * filters) {
  this_ptr->setNameFilters(*filters);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFileSystemModel_nameFilters(QFileSystemModel const * this_ptr) {
  return new QList< QString >(this_ptr->nameFilters());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setOption(QFileSystemModel * this_ptr, QFileSystemModel::Option option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_testOption(QFileSystemModel const * this_ptr, QFileSystemModel::Option option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileSystemModel_setOptions(QFileSystemModel * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QFileSystemModel::Option >(options));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_options(QFileSystemModel const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFileSystemModel_filePath(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return new QString(this_ptr->filePath(*index));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_isDir(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return this_ptr->isDir(*index);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QFileSystemModel_size(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return this_ptr->size(*index);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFileSystemModel_type(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return new QString(this_ptr->type(*index));
}


RITUAL_EXPORT QDateTime * ctr_qt_gui_ffi_QFileSystemModel_lastModified(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return new QDateTime(this_ptr->lastModified(*index));
}


RITUAL_EXPORT QDateTime * ctr_qt_gui_ffi_QFileSystemModel_lastModified1(QFileSystemModel const * this_ptr, QModelIndex const * index, QTimeZone const * tz) {
  return new QDateTime(this_ptr->lastModified(*index, *tz));
}


RITUAL_EXPORT QModelIndex * ctr_qt_gui_ffi_QFileSystemModel_mkdir(QFileSystemModel * this_ptr, QModelIndex const * parent, QString const * name) {
  return new QModelIndex(this_ptr->mkdir(*parent, *name));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_rmdir(QFileSystemModel * this_ptr, QModelIndex const * index) {
  return this_ptr->rmdir(*index);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFileSystemModel_fileName(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return new QString(this_ptr->fileName(*index));
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QFileSystemModel_fileIcon(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return new QIcon(this_ptr->fileIcon(*index));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFileSystemModel_permissions(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->permissions(*index));
}


RITUAL_EXPORT QFileInfo * ctr_qt_gui_ffi_QFileSystemModel_fileInfo(QFileSystemModel const * this_ptr, QModelIndex const * index) {
  return new QFileInfo(this_ptr->fileInfo(*index));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileSystemModel_remove(QFileSystemModel * this_ptr, QModelIndex const * index) {
  return this_ptr->remove(*index);
}


RITUAL_EXPORT QFontVariableAxis * ctr_qt_gui_ffi_QFontVariableAxis_QFontVariableAxis() {
  return new QFontVariableAxis();
}


RITUAL_EXPORT QFontVariableAxis * ctr_qt_gui_ffi_QFontVariableAxis_QFontVariableAxis2(QFontVariableAxis const * axis) {
  return new QFontVariableAxis(*axis);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontVariableAxis_dQFontVariableAxis(QFontVariableAxis * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontVariableAxis_swap(QFontVariableAxis * this_ptr, QFontVariableAxis * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QFontVariableAxis * ctr_qt_gui_ffi_QFontVariableAxis_operator_1(QFontVariableAxis * this_ptr, QFontVariableAxis const * axis) {
  return &this_ptr->operator=(*axis);
}


RITUAL_EXPORT QFont::Tag * ctr_qt_gui_ffi_QFontVariableAxis_tag(QFontVariableAxis const * this_ptr) {
  return new QFont::Tag(this_ptr->tag());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontVariableAxis_setTag(QFontVariableAxis * this_ptr, QFont::Tag const * tag) {
  this_ptr->setTag(*tag);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFontVariableAxis_name(QFontVariableAxis const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontVariableAxis_setName(QFontVariableAxis * this_ptr, QString const * name) {
  this_ptr->setName(*name);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontVariableAxis_minimumValue(QFontVariableAxis const * this_ptr) {
  return this_ptr->minimumValue();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontVariableAxis_setMinimumValue(QFontVariableAxis * this_ptr, double minimumValue) {
  this_ptr->setMinimumValue(minimumValue);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontVariableAxis_maximumValue(QFontVariableAxis const * this_ptr) {
  return this_ptr->maximumValue();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontVariableAxis_setMaximumValue(QFontVariableAxis * this_ptr, double maximumValue) {
  this_ptr->setMaximumValue(maximumValue);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFontVariableAxis_defaultValue(QFontVariableAxis const * this_ptr) {
  return this_ptr->defaultValue();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontVariableAxis_setDefaultValue(QFontVariableAxis * this_ptr, double defaultValue) {
  this_ptr->setDefaultValue(defaultValue);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap27(QFontVariableAxis * value1, QFontVariableAxis * value2) {
  swap(*value1, *value2);
}


} // extern "C"
