#include "qt_gui_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_insertRow(QStandardItemModel * this_ptr, int row, QList< QStandardItem * > const * items) {
  this_ptr->insertRow(row, *items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_insertColumn(QStandardItemModel * this_ptr, int column, QList< QStandardItem * > const * items) {
  this_ptr->insertColumn(column, *items);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_insertRow1(QStandardItemModel * this_ptr, int row, QStandardItem * item) {
  this_ptr->insertRow(row, item);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertRow2(QStandardItemModel * this_ptr, int row, QModelIndex const * parent) {
  return this_ptr->insertRow(row, *parent);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_insertColumn1(QStandardItemModel * this_ptr, int column, QModelIndex const * parent) {
  return this_ptr->insertColumn(column, *parent);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_takeItem(QStandardItemModel * this_ptr, int row, int column) {
  return this_ptr->takeItem(row, column);
}


RITUAL_EXPORT QList< QStandardItem * > * ctr_qt_gui_ffi_QStandardItemModel_takeRow(QStandardItemModel * this_ptr, int row) {
  return new QList< QStandardItem * >(this_ptr->takeRow(row));
}


RITUAL_EXPORT QList< QStandardItem * > * ctr_qt_gui_ffi_QStandardItemModel_takeColumn(QStandardItemModel * this_ptr, int column) {
  return new QList< QStandardItem * >(this_ptr->takeColumn(column));
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_takeHorizontalHeaderItem(QStandardItemModel * this_ptr, int column) {
  return this_ptr->takeHorizontalHeaderItem(column);
}


RITUAL_EXPORT QStandardItem * ctr_qt_gui_ffi_QStandardItemModel_takeVerticalHeaderItem(QStandardItemModel * this_ptr, int row) {
  return this_ptr->takeVerticalHeaderItem(row);
}


RITUAL_EXPORT QStandardItem const * ctr_qt_gui_ffi_QStandardItemModel_itemPrototype(QStandardItemModel const * this_ptr) {
  return this_ptr->itemPrototype();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setItemPrototype(QStandardItemModel * this_ptr, QStandardItem const * item) {
  this_ptr->setItemPrototype(item);
}


RITUAL_EXPORT QList< QStandardItem * > * ctr_qt_gui_ffi_QStandardItemModel_findItems(QStandardItemModel const * this_ptr, QString const * text, int flags, int column) {
  return new QList< QStandardItem * >(this_ptr->findItems(*text, QFlags< Qt::MatchFlag >(flags), column));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStandardItemModel_sortRole(QStandardItemModel const * this_ptr) {
  return this_ptr->sortRole();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStandardItemModel_setSortRole(QStandardItemModel * this_ptr, int role) {
  this_ptr->setSortRole(role);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_gui_ffi_QStandardItemModel_bindableSortRole(QStandardItemModel * this_ptr) {
  return new QBindable< int >(this_ptr->bindableSortRole());
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QStandardItemModel_mimeTypes(QStandardItemModel const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypes());
}


RITUAL_EXPORT QMimeData * ctr_qt_gui_ffi_QStandardItemModel_mimeData(QStandardItemModel const * this_ptr, QList< QModelIndex > const * indexes) {
  return this_ptr->mimeData(*indexes);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStandardItemModel_dropMimeData(QStandardItemModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__85(QDataStream * in, QStandardItem * item) {
  return &operator>>(*in, *item);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__86(QDataStream * out, QStandardItem const * item) {
  return &operator<<(*out, *item);
}


RITUAL_EXPORT QStaticText * ctr_qt_gui_ffi_QStaticText_QStaticText() {
  return new QStaticText();
}


RITUAL_EXPORT QStaticText * ctr_qt_gui_ffi_QStaticText_QStaticText1(QString const * text) {
  return new QStaticText(*text);
}


RITUAL_EXPORT QStaticText * ctr_qt_gui_ffi_QStaticText_QStaticText2(QStaticText const * other) {
  return new QStaticText(*other);
}


RITUAL_EXPORT QStaticText * ctr_qt_gui_ffi_QStaticText_operator_1(QStaticText * this_ptr, QStaticText const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_dQStaticText(QStaticText * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_swap(QStaticText * this_ptr, QStaticText * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_setText(QStaticText * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStaticText_text(QStaticText const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_setTextFormat(QStaticText * this_ptr, Qt::TextFormat textFormat) {
  this_ptr->setTextFormat(textFormat);
}


RITUAL_EXPORT Qt::TextFormat ctr_qt_gui_ffi_QStaticText_textFormat(QStaticText const * this_ptr) {
  return this_ptr->textFormat();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_setTextWidth(QStaticText * this_ptr, double textWidth) {
  this_ptr->setTextWidth(textWidth);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QStaticText_textWidth(QStaticText const * this_ptr) {
  return this_ptr->textWidth();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_setTextOption(QStaticText * this_ptr, QTextOption const * textOption) {
  this_ptr->setTextOption(*textOption);
}


RITUAL_EXPORT QTextOption * ctr_qt_gui_ffi_QStaticText_textOption(QStaticText const * this_ptr) {
  return new QTextOption(this_ptr->textOption());
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QStaticText_size(QStaticText const * this_ptr) {
  return new QSizeF(this_ptr->size());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_prepare(QStaticText * this_ptr, QTransform const * matrix, QFont const * font) {
  this_ptr->prepare(*matrix, *font);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStaticText_setPerformanceHint(QStaticText * this_ptr, QStaticText::PerformanceHint performanceHint) {
  this_ptr->setPerformanceHint(performanceHint);
}


RITUAL_EXPORT QStaticText::PerformanceHint ctr_qt_gui_ffi_QStaticText_performanceHint(QStaticText const * this_ptr) {
  return this_ptr->performanceHint();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStaticText_operator__(QStaticText const * this_ptr, QStaticText const * arg1) {
  return this_ptr->operator==(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap38(QStaticText * value1, QStaticText * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRegisterNormalizedMetaType_QStaticText(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QStaticText(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QStyleHints_metaObject(QStyleHints const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QStyleHints_qt_metacast(QStyleHints * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_qt_metacall(QStyleHints * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStyleHints_tr(char const * s, char const * c, int n) {
  return new QString(QStyleHints::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setMouseDoubleClickInterval(QStyleHints * this_ptr, int mouseDoubleClickInterval) {
  this_ptr->setMouseDoubleClickInterval(mouseDoubleClickInterval);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_mouseDoubleClickInterval(QStyleHints const * this_ptr) {
  return this_ptr->mouseDoubleClickInterval();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_mouseDoubleClickDistance(QStyleHints const * this_ptr) {
  return this_ptr->mouseDoubleClickDistance();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_touchDoubleTapDistance(QStyleHints const * this_ptr) {
  return this_ptr->touchDoubleTapDistance();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setMousePressAndHoldInterval(QStyleHints * this_ptr, int mousePressAndHoldInterval) {
  this_ptr->setMousePressAndHoldInterval(mousePressAndHoldInterval);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_mousePressAndHoldInterval(QStyleHints const * this_ptr) {
  return this_ptr->mousePressAndHoldInterval();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setStartDragDistance(QStyleHints * this_ptr, int startDragDistance) {
  this_ptr->setStartDragDistance(startDragDistance);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_startDragDistance(QStyleHints const * this_ptr) {
  return this_ptr->startDragDistance();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setStartDragTime(QStyleHints * this_ptr, int startDragTime) {
  this_ptr->setStartDragTime(startDragTime);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_startDragTime(QStyleHints const * this_ptr) {
  return this_ptr->startDragTime();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_startDragVelocity(QStyleHints const * this_ptr) {
  return this_ptr->startDragVelocity();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setKeyboardInputInterval(QStyleHints * this_ptr, int keyboardInputInterval) {
  this_ptr->setKeyboardInputInterval(keyboardInputInterval);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_keyboardInputInterval(QStyleHints const * this_ptr) {
  return this_ptr->keyboardInputInterval();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_keyboardAutoRepeatRate(QStyleHints const * this_ptr) {
  return this_ptr->keyboardAutoRepeatRate();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QStyleHints_keyboardAutoRepeatRateF(QStyleHints const * this_ptr) {
  return this_ptr->keyboardAutoRepeatRateF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setCursorFlashTime(QStyleHints * this_ptr, int cursorFlashTime) {
  this_ptr->setCursorFlashTime(cursorFlashTime);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_cursorFlashTime(QStyleHints const * this_ptr) {
  return this_ptr->cursorFlashTime();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_showIsFullScreen(QStyleHints const * this_ptr) {
  return this_ptr->showIsFullScreen();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_showIsMaximized(QStyleHints const * this_ptr) {
  return this_ptr->showIsMaximized();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_showShortcutsInContextMenus(QStyleHints const * this_ptr) {
  return this_ptr->showShortcutsInContextMenus();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setShowShortcutsInContextMenus(QStyleHints * this_ptr, bool showShortcutsInContextMenus) {
  this_ptr->setShowShortcutsInContextMenus(showShortcutsInContextMenus);
}


RITUAL_EXPORT Qt::ContextMenuTrigger ctr_qt_gui_ffi_QStyleHints_contextMenuTrigger(QStyleHints const * this_ptr) {
  return this_ptr->contextMenuTrigger();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setContextMenuTrigger(QStyleHints * this_ptr, Qt::ContextMenuTrigger contextMenuTrigger) {
  this_ptr->setContextMenuTrigger(contextMenuTrigger);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_menuSelectionWraps(QStyleHints const * this_ptr) {
  return this_ptr->menuSelectionWraps();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_passwordMaskDelay(QStyleHints const * this_ptr) {
  return this_ptr->passwordMaskDelay();
}


RITUAL_EXPORT QChar * ctr_qt_gui_ffi_QStyleHints_passwordMaskCharacter(QStyleHints const * this_ptr) {
  return new QChar(this_ptr->passwordMaskCharacter());
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QStyleHints_fontSmoothingGamma(QStyleHints const * this_ptr) {
  return this_ptr->fontSmoothingGamma();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_useRtlExtensions(QStyleHints const * this_ptr) {
  return this_ptr->useRtlExtensions();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_setFocusOnTouchRelease(QStyleHints const * this_ptr) {
  return this_ptr->setFocusOnTouchRelease();
}


RITUAL_EXPORT Qt::TabFocusBehavior ctr_qt_gui_ffi_QStyleHints_tabFocusBehavior(QStyleHints const * this_ptr) {
  return this_ptr->tabFocusBehavior();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setTabFocusBehavior(QStyleHints * this_ptr, Qt::TabFocusBehavior tabFocusBehavior) {
  this_ptr->setTabFocusBehavior(tabFocusBehavior);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_singleClickActivation(QStyleHints const * this_ptr) {
  return this_ptr->singleClickActivation();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QStyleHints_useHoverEffects(QStyleHints const * this_ptr) {
  return this_ptr->useHoverEffects();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setUseHoverEffects(QStyleHints * this_ptr, bool useHoverEffects) {
  this_ptr->setUseHoverEffects(useHoverEffects);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_wheelScrollLines(QStyleHints const * this_ptr) {
  return this_ptr->wheelScrollLines();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setWheelScrollLines(QStyleHints * this_ptr, int scrollLines) {
  this_ptr->setWheelScrollLines(scrollLines);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setMouseQuickSelectionThreshold(QStyleHints * this_ptr, int threshold) {
  this_ptr->setMouseQuickSelectionThreshold(threshold);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QStyleHints_mouseQuickSelectionThreshold(QStyleHints const * this_ptr) {
  return this_ptr->mouseQuickSelectionThreshold();
}


RITUAL_EXPORT Qt::ColorScheme ctr_qt_gui_ffi_QStyleHints_colorScheme(QStyleHints const * this_ptr) {
  return this_ptr->colorScheme();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_setColorScheme(QStyleHints * this_ptr, Qt::ColorScheme scheme) {
  this_ptr->setColorScheme(scheme);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_unsetColorScheme(QStyleHints * this_ptr) {
  this_ptr->unsetColorScheme();
}


RITUAL_EXPORT QAccessibilityHints const * ctr_qt_gui_ffi_QStyleHints_accessibility(QStyleHints const * this_ptr) {
  return this_ptr->accessibility();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextObject_metaObject(QTextObject const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QTextObject_qt_metacast(QTextObject * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextObject_qt_metacall(QTextObject * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextObject_tr(char const * s, char const * c, int n) {
  return new QString(QTextObject::tr(s, c, n));
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QTextObject_format(QTextObject const * this_ptr) {
  return new QTextFormat(this_ptr->format());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextObject_formatIndex(QTextObject const * this_ptr) {
  return this_ptr->formatIndex();
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QTextObject_document(QTextObject const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextObject_objectIndex(QTextObject const * this_ptr) {
  return this_ptr->objectIndex();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextBlockGroup_metaObject(QTextBlockGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QTextBlockGroup_qt_metacast(QTextBlockGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlockGroup_qt_metacall(QTextBlockGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextBlockGroup_tr(char const * s, char const * c, int n) {
  return new QString(QTextBlockGroup::tr(s, c, n));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextFrame_metaObject(QTextFrame const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QTextFrame_qt_metacast(QTextFrame * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFrame_qt_metacall(QTextFrame * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextFrame_tr(char const * s, char const * c, int n) {
  return new QString(QTextFrame::tr(s, c, n));
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextFrame_QTextFrame(QTextDocument * doc) {
  return new QTextFrame(doc);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrame_dQTextFrame(QTextFrame * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrame_setFrameFormat(QTextFrame * this_ptr, QTextFrameFormat const * format) {
  this_ptr->setFrameFormat(*format);
}


RITUAL_EXPORT QTextFrameFormat * ctr_qt_gui_ffi_QTextFrame_frameFormat(QTextFrame const * this_ptr) {
  return new QTextFrameFormat(this_ptr->frameFormat());
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextFrame_firstCursorPosition(QTextFrame const * this_ptr) {
  return new QTextCursor(this_ptr->firstCursorPosition());
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextFrame_lastCursorPosition(QTextFrame const * this_ptr) {
  return new QTextCursor(this_ptr->lastCursorPosition());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFrame_firstPosition(QTextFrame const * this_ptr) {
  return this_ptr->firstPosition();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFrame_lastPosition(QTextFrame const * this_ptr) {
  return this_ptr->lastPosition();
}


RITUAL_EXPORT QList< QTextFrame * > * ctr_qt_gui_ffi_QTextFrame_childFrames(QTextFrame const * this_ptr) {
  return new QList< QTextFrame * >(this_ptr->childFrames());
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextFrame_parentFrame(QTextFrame const * this_ptr) {
  return this_ptr->parentFrame();
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_iterator_iterator() {
  return new QTextFrame::iterator();
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextFrame_iterator_parentFrame(QTextFrame::iterator const * this_ptr) {
  return this_ptr->parentFrame();
}


RITUAL_EXPORT QTextFrame * ctr_qt_gui_ffi_QTextFrame_iterator_currentFrame(QTextFrame::iterator const * this_ptr) {
  return this_ptr->currentFrame();
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextFrame_iterator_currentBlock(QTextFrame::iterator const * this_ptr) {
  return new QTextBlock(this_ptr->currentBlock());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFrame_iterator_atEnd(QTextFrame::iterator const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFrame_iterator_operator__(QTextFrame::iterator const * this_ptr, QTextFrame::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_iterator_operator__2(QTextFrame::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_iterator_operator__3(QTextFrame::iterator * this_ptr, int arg1) {
  return new QTextFrame::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_iterator_operator__4(QTextFrame::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_iterator_operator__5(QTextFrame::iterator * this_ptr, int arg1) {
  return new QTextFrame::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_begin(QTextFrame const * this_ptr) {
  return new QTextFrame::iterator(this_ptr->begin());
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_end(QTextFrame const * this_ptr) {
  return new QTextFrame::iterator(this_ptr->end());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockUserData_dQTextBlockUserData(QTextBlockUserData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextBlock_QTextBlock1() {
  return new QTextBlock();
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextBlock_QTextBlock2(QTextBlock const * o) {
  return new QTextBlock(*o);
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextBlock_operator_(QTextBlock * this_ptr, QTextBlock const * o) {
  return &this_ptr->operator=(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlock_isValid(QTextBlock const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlock_operator__(QTextBlock const * this_ptr, QTextBlock const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlock_operator_1(QTextBlock const * this_ptr, QTextBlock const * o) {
  return this_ptr->operator<(*o);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_position(QTextBlock const * this_ptr) {
  return this_ptr->position();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_length(QTextBlock const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlock_contains(QTextBlock const * this_ptr, int position) {
  return this_ptr->contains(position);
}


RITUAL_EXPORT QTextLayout * ctr_qt_gui_ffi_QTextBlock_layout(QTextBlock const * this_ptr) {
  return this_ptr->layout();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_clearLayout(QTextBlock * this_ptr) {
  this_ptr->clearLayout();
}


RITUAL_EXPORT QTextBlockFormat * ctr_qt_gui_ffi_QTextBlock_blockFormat(QTextBlock const * this_ptr) {
  return new QTextBlockFormat(this_ptr->blockFormat());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_blockFormatIndex(QTextBlock const * this_ptr) {
  return this_ptr->blockFormatIndex();
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextBlock_charFormat(QTextBlock const * this_ptr) {
  return new QTextCharFormat(this_ptr->charFormat());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_charFormatIndex(QTextBlock const * this_ptr) {
  return this_ptr->charFormatIndex();
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_gui_ffi_QTextBlock_textDirection(QTextBlock const * this_ptr) {
  return this_ptr->textDirection();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextBlock_text(QTextBlock const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QList< QTextLayout::FormatRange > * ctr_qt_gui_ffi_QTextBlock_textFormats(QTextBlock const * this_ptr) {
  return new QList< QTextLayout::FormatRange >(this_ptr->textFormats());
}


RITUAL_EXPORT QTextDocument const * ctr_qt_gui_ffi_QTextBlock_document(QTextBlock const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_QTextBlock_textList(QTextBlock const * this_ptr) {
  return this_ptr->textList();
}


RITUAL_EXPORT QTextBlockUserData * ctr_qt_gui_ffi_QTextBlock_userData(QTextBlock const * this_ptr) {
  return this_ptr->userData();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_setUserData(QTextBlock * this_ptr, QTextBlockUserData * data) {
  this_ptr->setUserData(data);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_userState(QTextBlock const * this_ptr) {
  return this_ptr->userState();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_setUserState(QTextBlock * this_ptr, int state) {
  this_ptr->setUserState(state);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_revision(QTextBlock const * this_ptr) {
  return this_ptr->revision();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_setRevision(QTextBlock * this_ptr, int rev) {
  this_ptr->setRevision(rev);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlock_isVisible(QTextBlock const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_setVisible(QTextBlock * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_blockNumber(QTextBlock const * this_ptr) {
  return this_ptr->blockNumber();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_firstLineNumber(QTextBlock const * this_ptr) {
  return this_ptr->firstLineNumber();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_setLineCount(QTextBlock * this_ptr, int count) {
  this_ptr->setLineCount(count);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_lineCount(QTextBlock const * this_ptr) {
  return this_ptr->lineCount();
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_iterator_iterator() {
  return new QTextBlock::iterator();
}


RITUAL_EXPORT QTextFragment * ctr_qt_gui_ffi_QTextBlock_iterator_fragment(QTextBlock::iterator const * this_ptr) {
  return new QTextFragment(this_ptr->fragment());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlock_iterator_atEnd(QTextBlock::iterator const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextBlock_iterator_operator__(QTextBlock::iterator const * this_ptr, QTextBlock::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_iterator_operator__2(QTextBlock::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_iterator_operator__3(QTextBlock::iterator * this_ptr, int arg1) {
  return new QTextBlock::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_iterator_operator__4(QTextBlock::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_iterator_operator__5(QTextBlock::iterator * this_ptr, int arg1) {
  return new QTextBlock::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_begin(QTextBlock const * this_ptr) {
  return new QTextBlock::iterator(this_ptr->begin());
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_end(QTextBlock const * this_ptr) {
  return new QTextBlock::iterator(this_ptr->end());
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextBlock_next(QTextBlock const * this_ptr) {
  return new QTextBlock(this_ptr->next());
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextBlock_previous(QTextBlock const * this_ptr) {
  return new QTextBlock(this_ptr->previous());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextBlock_fragmentIndex(QTextBlock const * this_ptr) {
  return this_ptr->fragmentIndex();
}


RITUAL_EXPORT QTextFragment * ctr_qt_gui_ffi_QTextFragment_QTextFragment1() {
  return new QTextFragment();
}


RITUAL_EXPORT QTextFragment * ctr_qt_gui_ffi_QTextFragment_QTextFragment2(QTextFragment const * o) {
  return new QTextFragment(*o);
}


RITUAL_EXPORT QTextFragment * ctr_qt_gui_ffi_QTextFragment_operator_(QTextFragment * this_ptr, QTextFragment const * o) {
  return &this_ptr->operator=(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFragment_isValid(QTextFragment const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFragment_operator__(QTextFragment const * this_ptr, QTextFragment const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFragment_operator_1(QTextFragment const * this_ptr, QTextFragment const * o) {
  return this_ptr->operator<(*o);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFragment_position(QTextFragment const * this_ptr) {
  return this_ptr->position();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFragment_length(QTextFragment const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextFragment_contains(QTextFragment const * this_ptr, int position) {
  return this_ptr->contains(position);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextFragment_charFormat(QTextFragment const * this_ptr) {
  return new QTextCharFormat(this_ptr->charFormat());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextFragment_charFormatIndex(QTextFragment const * this_ptr) {
  return this_ptr->charFormatIndex();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextFragment_text(QTextFragment const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QList< QGlyphRun > * ctr_qt_gui_ffi_QTextFragment_glyphRuns(QTextFragment const * this_ptr, int from, int length) {
  return new QList< QGlyphRun >(this_ptr->glyphRuns(from, length));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QSyntaxHighlighter_metaObject(QSyntaxHighlighter const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QSyntaxHighlighter_qt_metacast(QSyntaxHighlighter * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSyntaxHighlighter_qt_metacall(QSyntaxHighlighter * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QSyntaxHighlighter_tr(char const * s, char const * c, int n) {
  return new QString(QSyntaxHighlighter::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSyntaxHighlighter_dQSyntaxHighlighter(QSyntaxHighlighter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSyntaxHighlighter_setDocument(QSyntaxHighlighter * this_ptr, QTextDocument * doc) {
  this_ptr->setDocument(doc);
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QSyntaxHighlighter_document(QSyntaxHighlighter const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSyntaxHighlighter_rehighlight(QSyntaxHighlighter * this_ptr) {
  this_ptr->rehighlight();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSyntaxHighlighter_rehighlightBlock(QSyntaxHighlighter * this_ptr, QTextBlock const * block) {
  this_ptr->rehighlightBlock(*block);
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_QTextDocumentFragment() {
  return new QTextDocumentFragment();
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_QTextDocumentFragment1(QTextDocument const * document) {
  return new QTextDocumentFragment(document);
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_QTextDocumentFragment2(QTextCursor const * range) {
  return new QTextDocumentFragment(*range);
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_QTextDocumentFragment3(QTextDocumentFragment const * rhs) {
  return new QTextDocumentFragment(*rhs);
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_operator_(QTextDocumentFragment * this_ptr, QTextDocumentFragment const * rhs) {
  return &this_ptr->operator=(*rhs);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocumentFragment_dQTextDocumentFragment(QTextDocumentFragment * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocumentFragment_isEmpty(QTextDocumentFragment const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocumentFragment_toPlainText(QTextDocumentFragment const * this_ptr) {
  return new QString(this_ptr->toPlainText());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocumentFragment_toRawText(QTextDocumentFragment const * this_ptr) {
  return new QString(this_ptr->toRawText());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocumentFragment_toHtml(QTextDocumentFragment const * this_ptr) {
  return new QString(this_ptr->toHtml());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocumentFragment_toMarkdown(QTextDocumentFragment const * this_ptr, int features) {
  return new QString(this_ptr->toMarkdown(QFlags< QTextDocument::MarkdownFeature >(features)));
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_fromPlainText(QString const * plainText) {
  return new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(*plainText));
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_fromHtml(QString const * html, QTextDocument const * resourceProvider) {
  return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(*html, resourceProvider));
}


RITUAL_EXPORT QTextDocumentFragment * ctr_qt_gui_ffi_QTextDocumentFragment_fromMarkdown(QString const * markdown, int features) {
  return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(*markdown, QFlags< QTextDocument::MarkdownFeature >(features)));
}


RITUAL_EXPORT QTextDocumentWriter * ctr_qt_gui_ffi_QTextDocumentWriter_QTextDocumentWriter() {
  return new QTextDocumentWriter();
}


RITUAL_EXPORT QTextDocumentWriter * ctr_qt_gui_ffi_QTextDocumentWriter_QTextDocumentWriter1(QIODevice * device, QByteArray const * format) {
  return new QTextDocumentWriter(device, *format);
}


RITUAL_EXPORT QTextDocumentWriter * ctr_qt_gui_ffi_QTextDocumentWriter_QTextDocumentWriter2(QString const * fileName, QByteArray const * format) {
  return new QTextDocumentWriter(*fileName, *format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocumentWriter_dQTextDocumentWriter(QTextDocumentWriter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocumentWriter_setFormat(QTextDocumentWriter * this_ptr, QByteArray const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QTextDocumentWriter_format(QTextDocumentWriter const * this_ptr) {
  return new QByteArray(this_ptr->format());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocumentWriter_setDevice(QTextDocumentWriter * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_gui_ffi_QTextDocumentWriter_device(QTextDocumentWriter const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextDocumentWriter_setFileName(QTextDocumentWriter * this_ptr, QString const * fileName) {
  this_ptr->setFileName(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextDocumentWriter_fileName(QTextDocumentWriter const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocumentWriter_write(QTextDocumentWriter * this_ptr, QTextDocument const * document) {
  return this_ptr->write(document);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextDocumentWriter_write1(QTextDocumentWriter * this_ptr, QTextDocumentFragment const * fragment) {
  return this_ptr->write(*fragment);
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_gui_ffi_QTextDocumentWriter_supportedDocumentFormats() {
  return new QList< QByteArray >(QTextDocumentWriter::supportedDocumentFormats());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextList_metaObject(QTextList const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QTextList_qt_metacast(QTextList * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextList_qt_metacall(QTextList * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextList_tr(char const * s, char const * c, int n) {
  return new QString(QTextList::tr(s, c, n));
}


RITUAL_EXPORT QTextList * ctr_qt_gui_ffi_QTextList_QTextList(QTextDocument * doc) {
  return new QTextList(doc);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextList_dQTextList(QTextList * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextList_count(QTextList const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QTextList_item(QTextList const * this_ptr, int i) {
  return new QTextBlock(this_ptr->item(i));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextList_itemNumber(QTextList const * this_ptr, QTextBlock const * arg1) {
  return this_ptr->itemNumber(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextList_itemText(QTextList const * this_ptr, QTextBlock const * arg1) {
  return new QString(this_ptr->itemText(*arg1));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextList_removeItem(QTextList * this_ptr, int i) {
  this_ptr->removeItem(i);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextList_remove(QTextList * this_ptr, QTextBlock const * arg1) {
  this_ptr->remove(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextList_add(QTextList * this_ptr, QTextBlock const * block) {
  this_ptr->add(*block);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextList_setFormat(QTextList * this_ptr, QTextListFormat const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QTextListFormat * ctr_qt_gui_ffi_QTextList_format(QTextList const * this_ptr) {
  return new QTextListFormat(this_ptr->format());
}


RITUAL_EXPORT QTextTableCell * ctr_qt_gui_ffi_QTextTableCell_QTextTableCell() {
  return new QTextTableCell();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCell_dQTextTableCell(QTextTableCell * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextTableCell * ctr_qt_gui_ffi_QTextTableCell_QTextTableCell1(QTextTableCell const * o) {
  return new QTextTableCell(*o);
}


RITUAL_EXPORT QTextTableCell * ctr_qt_gui_ffi_QTextTableCell_operator_(QTextTableCell * this_ptr, QTextTableCell const * o) {
  return &this_ptr->operator=(*o);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCell_setFormat(QTextTableCell * this_ptr, QTextCharFormat const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextTableCell_format(QTextTableCell const * this_ptr) {
  return new QTextCharFormat(this_ptr->format());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableCell_row(QTextTableCell const * this_ptr) {
  return this_ptr->row();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableCell_column(QTextTableCell const * this_ptr) {
  return this_ptr->column();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableCell_rowSpan(QTextTableCell const * this_ptr) {
  return this_ptr->rowSpan();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableCell_columnSpan(QTextTableCell const * this_ptr) {
  return this_ptr->columnSpan();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextTableCell_isValid(QTextTableCell const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextTableCell_firstCursorPosition(QTextTableCell const * this_ptr) {
  return new QTextCursor(this_ptr->firstCursorPosition());
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextTableCell_lastCursorPosition(QTextTableCell const * this_ptr) {
  return new QTextCursor(this_ptr->lastCursorPosition());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableCell_firstPosition(QTextTableCell const * this_ptr) {
  return this_ptr->firstPosition();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableCell_lastPosition(QTextTableCell const * this_ptr) {
  return this_ptr->lastPosition();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTextTableCell_operator__(QTextTableCell const * this_ptr, QTextTableCell const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextTableCell_begin(QTextTableCell const * this_ptr) {
  return new QTextFrame::iterator(this_ptr->begin());
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextTableCell_end(QTextTableCell const * this_ptr) {
  return new QTextFrame::iterator(this_ptr->end());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTableCell_tableCellFormatIndex(QTextTableCell const * this_ptr) {
  return this_ptr->tableCellFormatIndex();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextTable_metaObject(QTextTable const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QTextTable_qt_metacast(QTextTable * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTable_qt_metacall(QTextTable * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QTextTable_tr(char const * s, char const * c, int n) {
  return new QString(QTextTable::tr(s, c, n));
}


RITUAL_EXPORT QTextTable * ctr_qt_gui_ffi_QTextTable_QTextTable(QTextDocument * doc) {
  return new QTextTable(doc);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_dQTextTable(QTextTable * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_resize(QTextTable * this_ptr, int rows, int cols) {
  this_ptr->resize(rows, cols);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_insertRows(QTextTable * this_ptr, int pos, int num) {
  this_ptr->insertRows(pos, num);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_insertColumns(QTextTable * this_ptr, int pos, int num) {
  this_ptr->insertColumns(pos, num);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_appendRows(QTextTable * this_ptr, int count) {
  this_ptr->appendRows(count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_appendColumns(QTextTable * this_ptr, int count) {
  this_ptr->appendColumns(count);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_removeRows(QTextTable * this_ptr, int pos, int num) {
  this_ptr->removeRows(pos, num);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_removeColumns(QTextTable * this_ptr, int pos, int num) {
  this_ptr->removeColumns(pos, num);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_mergeCells(QTextTable * this_ptr, int row, int col, int numRows, int numCols) {
  this_ptr->mergeCells(row, col, numRows, numCols);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_mergeCells1(QTextTable * this_ptr, QTextCursor const * cursor) {
  this_ptr->mergeCells(*cursor);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_splitCell(QTextTable * this_ptr, int row, int col, int numRows, int numCols) {
  this_ptr->splitCell(row, col, numRows, numCols);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTable_rows(QTextTable const * this_ptr) {
  return this_ptr->rows();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextTable_columns(QTextTable const * this_ptr) {
  return this_ptr->columns();
}


RITUAL_EXPORT QTextTableCell * ctr_qt_gui_ffi_QTextTable_cellAt(QTextTable const * this_ptr, int row, int col) {
  return new QTextTableCell(this_ptr->cellAt(row, col));
}


RITUAL_EXPORT QTextTableCell * ctr_qt_gui_ffi_QTextTable_cellAt1(QTextTable const * this_ptr, int position) {
  return new QTextTableCell(this_ptr->cellAt(position));
}


RITUAL_EXPORT QTextTableCell * ctr_qt_gui_ffi_QTextTable_cellAt2(QTextTable const * this_ptr, QTextCursor const * c) {
  return new QTextTableCell(this_ptr->cellAt(*c));
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextTable_rowStart(QTextTable const * this_ptr, QTextCursor const * c) {
  return new QTextCursor(this_ptr->rowStart(*c));
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QTextTable_rowEnd(QTextTable const * this_ptr, QTextCursor const * c) {
  return new QTextCursor(this_ptr->rowEnd(*c));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTable_setFormat(QTextTable * this_ptr, QTextTableFormat const * format) {
  this_ptr->setFormat(*format);
}


RITUAL_EXPORT QTextTableFormat * ctr_qt_gui_ffi_QTextTable_format(QTextTable const * this_ptr) {
  return new QTextTableFormat(this_ptr->format());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QUndoGroup_metaObject(QUndoGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QUndoGroup_qt_metacast(QUndoGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoGroup_qt_metacall(QUndoGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoGroup_tr(char const * s, char const * c, int n) {
  return new QString(QUndoGroup::tr(s, c, n));
}


RITUAL_EXPORT QUndoGroup * ctr_qt_gui_ffi_QUndoGroup_QUndoGroup(QObject * parent) {
  return new QUndoGroup(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoGroup_dQUndoGroup(QUndoGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoGroup_addStack(QUndoGroup * this_ptr, QUndoStack * stack) {
  this_ptr->addStack(stack);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoGroup_removeStack(QUndoGroup * this_ptr, QUndoStack * stack) {
  this_ptr->removeStack(stack);
}


RITUAL_EXPORT QList< QUndoStack * > * ctr_qt_gui_ffi_QUndoGroup_stacks(QUndoGroup const * this_ptr) {
  return new QList< QUndoStack * >(this_ptr->stacks());
}


RITUAL_EXPORT QUndoStack * ctr_qt_gui_ffi_QUndoGroup_activeStack(QUndoGroup const * this_ptr) {
  return this_ptr->activeStack();
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoGroup_createUndoAction(QUndoGroup const * this_ptr, QObject * parent, QString const * prefix) {
  return this_ptr->createUndoAction(parent, *prefix);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoGroup_createRedoAction(QUndoGroup const * this_ptr, QObject * parent, QString const * prefix) {
  return this_ptr->createRedoAction(parent, *prefix);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoGroup_canUndo(QUndoGroup const * this_ptr) {
  return this_ptr->canUndo();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoGroup_canRedo(QUndoGroup const * this_ptr) {
  return this_ptr->canRedo();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoGroup_undoText(QUndoGroup const * this_ptr) {
  return new QString(this_ptr->undoText());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoGroup_redoText(QUndoGroup const * this_ptr) {
  return new QString(this_ptr->redoText());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoGroup_isClean(QUndoGroup const * this_ptr) {
  return this_ptr->isClean();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoGroup_undo(QUndoGroup * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoGroup_redo(QUndoGroup * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoGroup_setActiveStack(QUndoGroup * this_ptr, QUndoStack * stack) {
  this_ptr->setActiveStack(stack);
}


RITUAL_EXPORT QUndoCommand * ctr_qt_gui_ffi_QUndoCommand_QUndoCommand(QUndoCommand * parent) {
  return new QUndoCommand(parent);
}


RITUAL_EXPORT QUndoCommand * ctr_qt_gui_ffi_QUndoCommand_QUndoCommand1(QString const * text, QUndoCommand * parent) {
  return new QUndoCommand(*text, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoCommand_dQUndoCommand(QUndoCommand * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoCommand_undo(QUndoCommand * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoCommand_redo(QUndoCommand * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoCommand_text(QUndoCommand const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoCommand_actionText(QUndoCommand const * this_ptr) {
  return new QString(this_ptr->actionText());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoCommand_setText(QUndoCommand * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoCommand_isObsolete(QUndoCommand const * this_ptr) {
  return this_ptr->isObsolete();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoCommand_setObsolete(QUndoCommand * this_ptr, bool obsolete) {
  this_ptr->setObsolete(obsolete);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoCommand_id(QUndoCommand const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoCommand_mergeWith(QUndoCommand * this_ptr, QUndoCommand const * other) {
  return this_ptr->mergeWith(other);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoCommand_childCount(QUndoCommand const * this_ptr) {
  return this_ptr->childCount();
}


RITUAL_EXPORT QUndoCommand const * ctr_qt_gui_ffi_QUndoCommand_child(QUndoCommand const * this_ptr, int index) {
  return this_ptr->child(index);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QUndoStack_metaObject(QUndoStack const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QUndoStack_qt_metacast(QUndoStack * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoStack_qt_metacall(QUndoStack * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoStack_tr(char const * s, char const * c, int n) {
  return new QString(QUndoStack::tr(s, c, n));
}


RITUAL_EXPORT QUndoStack * ctr_qt_gui_ffi_QUndoStack_QUndoStack(QObject * parent) {
  return new QUndoStack(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_dQUndoStack(QUndoStack * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_clear(QUndoStack * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_push(QUndoStack * this_ptr, QUndoCommand * cmd) {
  this_ptr->push(cmd);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoStack_canUndo(QUndoStack const * this_ptr) {
  return this_ptr->canUndo();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoStack_canRedo(QUndoStack const * this_ptr) {
  return this_ptr->canRedo();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoStack_undoText(QUndoStack const * this_ptr) {
  return new QString(this_ptr->undoText());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoStack_redoText(QUndoStack const * this_ptr) {
  return new QString(this_ptr->redoText());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoStack_count(QUndoStack const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoStack_index(QUndoStack const * this_ptr) {
  return this_ptr->index();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QUndoStack_text(QUndoStack const * this_ptr, int idx) {
  return new QString(this_ptr->text(idx));
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoStack_createUndoAction(QUndoStack const * this_ptr, QObject * parent, QString const * prefix) {
  return this_ptr->createUndoAction(parent, *prefix);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QUndoStack_createRedoAction(QUndoStack const * this_ptr, QObject * parent, QString const * prefix) {
  return this_ptr->createRedoAction(parent, *prefix);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoStack_isActive(QUndoStack const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QUndoStack_isClean(QUndoStack const * this_ptr) {
  return this_ptr->isClean();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoStack_cleanIndex(QUndoStack const * this_ptr) {
  return this_ptr->cleanIndex();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_beginMacro(QUndoStack * this_ptr, QString const * text) {
  this_ptr->beginMacro(*text);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_endMacro(QUndoStack * this_ptr) {
  this_ptr->endMacro();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_setUndoLimit(QUndoStack * this_ptr, int limit) {
  this_ptr->setUndoLimit(limit);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QUndoStack_undoLimit(QUndoStack const * this_ptr) {
  return this_ptr->undoLimit();
}


RITUAL_EXPORT QUndoCommand const * ctr_qt_gui_ffi_QUndoStack_command(QUndoStack const * this_ptr, int index) {
  return this_ptr->command(index);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_setClean(QUndoStack * this_ptr) {
  this_ptr->setClean();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_resetClean(QUndoStack * this_ptr) {
  this_ptr->resetClean();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_setIndex(QUndoStack * this_ptr, int idx) {
  this_ptr->setIndex(idx);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_undo(QUndoStack * this_ptr) {
  this_ptr->undo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_redo(QUndoStack * this_ptr) {
  this_ptr->redo();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QUndoStack_setActive(QUndoStack * this_ptr, bool active) {
  this_ptr->setActive(active);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QValidator_metaObject(QValidator const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QValidator_qt_metacast(QValidator * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QValidator_qt_metacall(QValidator * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QValidator_tr(char const * s, char const * c, int n) {
  return new QString(QValidator::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QValidator_dQValidator(QValidator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QValidator_setLocale(QValidator * this_ptr, QLocale const * locale) {
  this_ptr->setLocale(*locale);
}


RITUAL_EXPORT QLocale * ctr_qt_gui_ffi_QValidator_locale(QValidator const * this_ptr) {
  return new QLocale(this_ptr->locale());
}


RITUAL_EXPORT QValidator::State ctr_qt_gui_ffi_QValidator_validate(QValidator const * this_ptr, QString * arg1, int * arg2) {
  return this_ptr->validate(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QValidator_fixup(QValidator const * this_ptr, QString * arg1) {
  this_ptr->fixup(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QIntValidator_metaObject(QIntValidator const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QIntValidator_qt_metacast(QIntValidator * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QIntValidator_qt_metacall(QIntValidator * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QIntValidator_tr(char const * s, char const * c, int n) {
  return new QString(QIntValidator::tr(s, c, n));
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_QIntValidator_QIntValidator(QObject * parent) {
  return new QIntValidator(parent);
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_QIntValidator_QIntValidator1(int bottom, int top, QObject * parent) {
  return new QIntValidator(bottom, top, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIntValidator_dQIntValidator(QIntValidator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QValidator::State ctr_qt_gui_ffi_QIntValidator_validate(QIntValidator const * this_ptr, QString * arg1, int * arg2) {
  return this_ptr->validate(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIntValidator_fixup(QIntValidator const * this_ptr, QString * input) {
  this_ptr->fixup(*input);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIntValidator_setBottom(QIntValidator * this_ptr, int arg1) {
  this_ptr->setBottom(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIntValidator_setTop(QIntValidator * this_ptr, int arg1) {
  this_ptr->setTop(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIntValidator_setRange(QIntValidator * this_ptr, int bottom, int top) {
  this_ptr->setRange(bottom, top);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QIntValidator_bottom(QIntValidator const * this_ptr) {
  return this_ptr->bottom();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QIntValidator_top(QIntValidator const * this_ptr) {
  return this_ptr->top();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QDoubleValidator_metaObject(QDoubleValidator const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QDoubleValidator_qt_metacast(QDoubleValidator * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDoubleValidator_qt_metacall(QDoubleValidator * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QDoubleValidator_tr(char const * s, char const * c, int n) {
  return new QString(QDoubleValidator::tr(s, c, n));
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_QDoubleValidator_QDoubleValidator(QObject * parent) {
  return new QDoubleValidator(parent);
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_QDoubleValidator_QDoubleValidator1(double bottom, double top, int decimals, QObject * parent) {
  return new QDoubleValidator(bottom, top, decimals, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_dQDoubleValidator(QDoubleValidator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QValidator::State ctr_qt_gui_ffi_QDoubleValidator_validate(QDoubleValidator const * this_ptr, QString * arg1, int * arg2) {
  return this_ptr->validate(*arg1, *arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_fixup(QDoubleValidator const * this_ptr, QString * input) {
  this_ptr->fixup(*input);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_setRange(QDoubleValidator * this_ptr, double bottom, double top, int decimals) {
  this_ptr->setRange(bottom, top, decimals);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_setRange1(QDoubleValidator * this_ptr, double bottom, double top) {
  this_ptr->setRange(bottom, top);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_setBottom(QDoubleValidator * this_ptr, double arg1) {
  this_ptr->setBottom(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_setTop(QDoubleValidator * this_ptr, double arg1) {
  this_ptr->setTop(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_setDecimals(QDoubleValidator * this_ptr, int arg1) {
  this_ptr->setDecimals(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDoubleValidator_setNotation(QDoubleValidator * this_ptr, QDoubleValidator::Notation arg1) {
  this_ptr->setNotation(arg1);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QDoubleValidator_bottom(QDoubleValidator const * this_ptr) {
  return this_ptr->bottom();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QDoubleValidator_top(QDoubleValidator const * this_ptr) {
  return this_ptr->top();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDoubleValidator_decimals(QDoubleValidator const * this_ptr) {
  return this_ptr->decimals();
}


RITUAL_EXPORT QDoubleValidator::Notation ctr_qt_gui_ffi_QDoubleValidator_notation(QDoubleValidator const * this_ptr) {
  return this_ptr->notation();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QRegularExpressionValidator_metaObject(QRegularExpressionValidator const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QRegularExpressionValidator_qt_metacast(QRegularExpressionValidator * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QRegularExpressionValidator_qt_metacall(QRegularExpressionValidator * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QRegularExpressionValidator_tr(char const * s, char const * c, int n) {
  return new QString(QRegularExpressionValidator::tr(s, c, n));
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_QRegularExpressionValidator_QRegularExpressionValidator(QObject * parent) {
  return new QRegularExpressionValidator(parent);
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_QRegularExpressionValidator_QRegularExpressionValidator1(QRegularExpression const * re, QObject * parent) {
  return new QRegularExpressionValidator(*re, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRegularExpressionValidator_dQRegularExpressionValidator(QRegularExpressionValidator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QValidator::State ctr_qt_gui_ffi_QRegularExpressionValidator_validate(QRegularExpressionValidator const * this_ptr, QString * input, int * pos) {
  return this_ptr->validate(*input, *pos);
}


RITUAL_EXPORT QRegularExpression * ctr_qt_gui_ffi_QRegularExpressionValidator_regularExpression(QRegularExpressionValidator const * this_ptr) {
  return new QRegularExpression(this_ptr->regularExpression());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRegularExpressionValidator_setRegularExpression(QRegularExpressionValidator * this_ptr, QRegularExpression const * re) {
  this_ptr->setRegularExpression(*re);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgba64_dQRgba64(QRgba64 * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_QRgba641(QRgba64 const * other) {
  return new QRgba64(*other);
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_operator_1(QRgba64 * this_ptr, QRgba64 const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_dQColor(QColor * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor11(QColor const * other) {
  return new QColor(*other);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_operator_1(QColor * this_ptr, QColor const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixelFormat_dQPixelFormat(QPixelFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_QPixelFormat_QPixelFormat2(QPixelFormat const * other) {
  return new QPixelFormat(*other);
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_QPixelFormat_operator_(QPixelFormat * this_ptr, QPixelFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_dQPolygon(QPolygon * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_QPolygon5(QPolygon const * other) {
  return new QPolygon(*other);
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_operator_(QPolygon * this_ptr, QPolygon const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygonF_dQPolygonF(QPolygonF * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_QPolygonF5(QPolygonF const * other) {
  return new QPolygonF(*other);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_operator_(QPolygonF * this_ptr, QPolygonF const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTransform_dQTransform(QTransform * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector2D_dQVector2D(QVector2D * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_QVector2D7(QVector2D const * other) {
  return new QVector2D(*other);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_operator_(QVector2D * this_ptr, QVector2D const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector3D_dQVector3D(QVector3D * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D8(QVector3D const * other) {
  return new QVector3D(*other);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_operator_(QVector3D * this_ptr, QVector3D const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector4D_dQVector4D(QVector4D * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D9(QVector4D const * other) {
  return new QVector4D(*other);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_operator_(QVector4D * this_ptr, QVector4D const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QInputDevice * ctr_qt_gui_ffi_QInputDevice_QInputDevice2() {
  return new QInputDevice();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointingDeviceUniqueId_dQPointingDeviceUniqueId(QPointingDeviceUniqueId * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointingDeviceUniqueId * ctr_qt_gui_ffi_QPointingDeviceUniqueId_QPointingDeviceUniqueId1(QPointingDeviceUniqueId const * other) {
  return new QPointingDeviceUniqueId(*other);
}


RITUAL_EXPORT QPointingDeviceUniqueId * ctr_qt_gui_ffi_QPointingDeviceUniqueId_operator_(QPointingDeviceUniqueId * this_ptr, QPointingDeviceUniqueId const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QPointingDevice * ctr_qt_gui_ffi_QPointingDevice_QPointingDevice2() {
  return new QPointingDevice();
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QEventPoint_QEventPoint4() {
  return new QEventPoint();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethodEvent_Attribute_dAttribute(QInputMethodEvent::Attribute * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QInputMethodEvent::Attribute * ctr_qt_gui_ffi_QInputMethodEvent_Attribute_Attribute3(QInputMethodEvent::Attribute const * other) {
  return new QInputMethodEvent::Attribute(*other);
}


RITUAL_EXPORT QInputMethodEvent::Attribute * ctr_qt_gui_ffi_QInputMethodEvent_Attribute_operator_(QInputMethodEvent::Attribute * this_ptr, QInputMethodEvent::Attribute const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_Tag_dTag(QFont::Tag * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFont::Tag * ctr_qt_gui_ffi_QFont_Tag_Tag1(QFont::Tag const * other) {
  return new QFont::Tag(*other);
}


RITUAL_EXPORT QFont::Tag * ctr_qt_gui_ffi_QFont_Tag_operator_(QFont::Tag * this_ptr, QFont::Tag const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFontDatabase_dQFontDatabase(QFontDatabase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFontDatabase * ctr_qt_gui_ffi_QFontDatabase_QFontDatabase1(QFontDatabase const * other) {
  return new QFontDatabase(*other);
}


RITUAL_EXPORT QFontDatabase * ctr_qt_gui_ffi_QFontDatabase_operator_(QFontDatabase * this_ptr, QFontDatabase const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAbstractUndoItem * ctr_qt_gui_ffi_QAbstractUndoItem_operator_(QAbstractUndoItem * this_ptr, QAbstractUndoItem const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QTextDocument * ctr_qt_gui_ffi_QTextDocument_QTextDocument2() {
  return new QTextDocument();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QBrushDataPointerDeleter_dQBrushDataPointerDeleter(QBrushDataPointerDeleter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QBrushDataPointerDeleter * ctr_qt_gui_ffi_QBrushDataPointerDeleter_QBrushDataPointerDeleter() {
  return new QBrushDataPointerDeleter();
}


RITUAL_EXPORT QBrushDataPointerDeleter * ctr_qt_gui_ffi_QBrushDataPointerDeleter_QBrushDataPointerDeleter1(QBrushDataPointerDeleter const * other) {
  return new QBrushDataPointerDeleter(*other);
}


RITUAL_EXPORT QBrushDataPointerDeleter * ctr_qt_gui_ffi_QBrushDataPointerDeleter_operator_(QBrushDataPointerDeleter * this_ptr, QBrushDataPointerDeleter const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QGradient * ctr_qt_gui_ffi_QGradient_QGradient2(QGradient const * other) {
  return new QGradient(*other);
}


RITUAL_EXPORT QGradient * ctr_qt_gui_ffi_QGradient_operator_(QGradient * this_ptr, QGradient const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QLinearGradient * ctr_qt_gui_ffi_QLinearGradient_QLinearGradient3(QLinearGradient const * other) {
  return new QLinearGradient(*other);
}


RITUAL_EXPORT QLinearGradient * ctr_qt_gui_ffi_QLinearGradient_operator_(QLinearGradient * this_ptr, QLinearGradient const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_QRadialGradient7(QRadialGradient const * other) {
  return new QRadialGradient(*other);
}


RITUAL_EXPORT QRadialGradient * ctr_qt_gui_ffi_QRadialGradient_operator_(QRadialGradient * this_ptr, QRadialGradient const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QConicalGradient * ctr_qt_gui_ffi_QConicalGradient_QConicalGradient3(QConicalGradient const * other) {
  return new QConicalGradient(*other);
}


RITUAL_EXPORT QConicalGradient * ctr_qt_gui_ffi_QConicalGradient_operator_(QConicalGradient * this_ptr, QConicalGradient const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextOption_Tab_dTab(QTextOption::Tab * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextOption::Tab * ctr_qt_gui_ffi_QTextOption_Tab_Tab2(QTextOption::Tab const * other) {
  return new QTextOption::Tab(*other);
}


RITUAL_EXPORT QTextOption::Tab * ctr_qt_gui_ffi_QTextOption_Tab_operator_(QTextOption::Tab * this_ptr, QTextOption::Tab const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLength_dQTextLength(QTextLength * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextLength_QTextLength2(QTextLength const * other) {
  return new QTextLength(*other);
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QTextLength_operator_(QTextLength * this_ptr, QTextLength const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextCharFormat_dQTextCharFormat(QTextCharFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextCharFormat_QTextCharFormat1(QTextCharFormat const * other) {
  return new QTextCharFormat(*other);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextCharFormat_operator_(QTextCharFormat * this_ptr, QTextCharFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlockFormat_dQTextBlockFormat(QTextBlockFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextBlockFormat * ctr_qt_gui_ffi_QTextBlockFormat_QTextBlockFormat1(QTextBlockFormat const * other) {
  return new QTextBlockFormat(*other);
}


RITUAL_EXPORT QTextBlockFormat * ctr_qt_gui_ffi_QTextBlockFormat_operator_(QTextBlockFormat * this_ptr, QTextBlockFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextListFormat_dQTextListFormat(QTextListFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextListFormat * ctr_qt_gui_ffi_QTextListFormat_QTextListFormat1(QTextListFormat const * other) {
  return new QTextListFormat(*other);
}


RITUAL_EXPORT QTextListFormat * ctr_qt_gui_ffi_QTextListFormat_operator_(QTextListFormat * this_ptr, QTextListFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextImageFormat_dQTextImageFormat(QTextImageFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextImageFormat * ctr_qt_gui_ffi_QTextImageFormat_QTextImageFormat1(QTextImageFormat const * other) {
  return new QTextImageFormat(*other);
}


RITUAL_EXPORT QTextImageFormat * ctr_qt_gui_ffi_QTextImageFormat_operator_(QTextImageFormat * this_ptr, QTextImageFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrameFormat_dQTextFrameFormat(QTextFrameFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextFrameFormat * ctr_qt_gui_ffi_QTextFrameFormat_QTextFrameFormat1(QTextFrameFormat const * other) {
  return new QTextFrameFormat(*other);
}


RITUAL_EXPORT QTextFrameFormat * ctr_qt_gui_ffi_QTextFrameFormat_operator_(QTextFrameFormat * this_ptr, QTextFrameFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableFormat_dQTextTableFormat(QTextTableFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextTableFormat * ctr_qt_gui_ffi_QTextTableFormat_QTextTableFormat1(QTextTableFormat const * other) {
  return new QTextTableFormat(*other);
}


RITUAL_EXPORT QTextTableFormat * ctr_qt_gui_ffi_QTextTableFormat_operator_(QTextTableFormat * this_ptr, QTextTableFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextTableCellFormat_dQTextTableCellFormat(QTextTableCellFormat * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextTableCellFormat * ctr_qt_gui_ffi_QTextTableCellFormat_QTextTableCellFormat1(QTextTableCellFormat const * other) {
  return new QTextTableCellFormat(*other);
}


RITUAL_EXPORT QTextTableCellFormat * ctr_qt_gui_ffi_QTextTableCellFormat_operator_(QTextTableCellFormat * this_ptr, QTextTableCellFormat const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextInlineObject_dQTextInlineObject(QTextInlineObject * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextInlineObject * ctr_qt_gui_ffi_QTextInlineObject_QTextInlineObject2(QTextInlineObject const * other) {
  return new QTextInlineObject(*other);
}


RITUAL_EXPORT QTextInlineObject * ctr_qt_gui_ffi_QTextInlineObject_operator_(QTextInlineObject * this_ptr, QTextInlineObject const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLayout_FormatRange_dFormatRange(QTextLayout::FormatRange * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextLayout::FormatRange * ctr_qt_gui_ffi_QTextLayout_FormatRange_FormatRange() {
  return new QTextLayout::FormatRange();
}


RITUAL_EXPORT QTextLayout::FormatRange * ctr_qt_gui_ffi_QTextLayout_FormatRange_FormatRange1(QTextLayout::FormatRange const * other) {
  return new QTextLayout::FormatRange(*other);
}


RITUAL_EXPORT QTextLayout::FormatRange * ctr_qt_gui_ffi_QTextLayout_FormatRange_operator_(QTextLayout::FormatRange * this_ptr, QTextLayout::FormatRange const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextLine_dQTextLine(QTextLine * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextLine * ctr_qt_gui_ffi_QTextLine_QTextLine1(QTextLine const * other) {
  return new QTextLine(*other);
}


RITUAL_EXPORT QTextLine * ctr_qt_gui_ffi_QTextLine_operator_(QTextLine * this_ptr, QTextLine const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_dSelection(QAbstractTextDocumentLayout::Selection * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractTextDocumentLayout::Selection * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_Selection() {
  return new QAbstractTextDocumentLayout::Selection();
}


RITUAL_EXPORT QAbstractTextDocumentLayout::Selection * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_Selection1(QAbstractTextDocumentLayout::Selection const * other) {
  return new QAbstractTextDocumentLayout::Selection(*other);
}


RITUAL_EXPORT QAbstractTextDocumentLayout::Selection * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_operator_(QAbstractTextDocumentLayout::Selection * this_ptr, QAbstractTextDocumentLayout::Selection const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_dPaintContext(QAbstractTextDocumentLayout::PaintContext * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractTextDocumentLayout::PaintContext * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_PaintContext1(QAbstractTextDocumentLayout::PaintContext const * other) {
  return new QAbstractTextDocumentLayout::PaintContext(*other);
}


RITUAL_EXPORT QAbstractTextDocumentLayout::PaintContext * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_operator_(QAbstractTextDocumentLayout::PaintContext * this_ptr, QAbstractTextDocumentLayout::PaintContext const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QTextObjectInterface * ctr_qt_gui_ffi_QTextObjectInterface_operator_(QTextObjectInterface * this_ptr, QTextObjectInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibilityHints * ctr_qt_gui_ffi_QAccessibilityHints_QAccessibilityHints1() {
  return new QAccessibilityHints();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessible_dQAccessible(QAccessible * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAccessible * ctr_qt_gui_ffi_QAccessible_QAccessible(QAccessible const * other) {
  return new QAccessible(*other);
}


RITUAL_EXPORT QAccessible * ctr_qt_gui_ffi_QAccessible_operator_(QAccessible * this_ptr, QAccessible const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAccessible_State_dState(QAccessible::State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAccessible::State * ctr_qt_gui_ffi_QAccessible_State_State1(QAccessible::State const * other) {
  return new QAccessible::State(*other);
}


RITUAL_EXPORT QAccessible::State * ctr_qt_gui_ffi_QAccessible_State_operator_(QAccessible::State * this_ptr, QAccessible::State const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_gui_ffi_QAccessibleInterface_operator_(QAccessibleInterface * this_ptr, QAccessibleInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleTextInterface * ctr_qt_gui_ffi_QAccessibleTextInterface_operator_(QAccessibleTextInterface * this_ptr, QAccessibleTextInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleEditableTextInterface * ctr_qt_gui_ffi_QAccessibleEditableTextInterface_operator_(QAccessibleEditableTextInterface * this_ptr, QAccessibleEditableTextInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleValueInterface * ctr_qt_gui_ffi_QAccessibleValueInterface_operator_(QAccessibleValueInterface * this_ptr, QAccessibleValueInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleTableCellInterface * ctr_qt_gui_ffi_QAccessibleTableCellInterface_operator_(QAccessibleTableCellInterface * this_ptr, QAccessibleTableCellInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleTableInterface * ctr_qt_gui_ffi_QAccessibleTableInterface_operator_(QAccessibleTableInterface * this_ptr, QAccessibleTableInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleActionInterface * ctr_qt_gui_ffi_QAccessibleActionInterface_operator_(QAccessibleActionInterface * this_ptr, QAccessibleActionInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleHyperlinkInterface * ctr_qt_gui_ffi_QAccessibleHyperlinkInterface_operator_(QAccessibleHyperlinkInterface * this_ptr, QAccessibleHyperlinkInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleSelectionInterface * ctr_qt_gui_ffi_QAccessibleSelectionInterface_operator_(QAccessibleSelectionInterface * this_ptr, QAccessibleSelectionInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAccessibleAttributesInterface * ctr_qt_gui_ffi_QAccessibleAttributesInterface_operator_(QAccessibleAttributesInterface * this_ptr, QAccessibleAttributesInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QAction_QAction3() {
  return new QAction();
}


RITUAL_EXPORT QSurface * ctr_qt_gui_ffi_QSurface_operator_(QSurface * this_ptr, QSurface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_QBitmap5(QBitmap const * other) {
  return new QBitmap(*other);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QBitmap_operator_1(QBitmap * this_ptr, QBitmap const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QWindow_QWindow2() {
  return new QWindow();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_dPrimaryPoints(QColorSpace::PrimaryPoints * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QColorSpace::PrimaryPoints * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_PrimaryPoints() {
  return new QColorSpace::PrimaryPoints();
}


RITUAL_EXPORT QColorSpace::PrimaryPoints * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_PrimaryPoints1(QColorSpace::PrimaryPoints const * other) {
  return new QColorSpace::PrimaryPoints(*other);
}


RITUAL_EXPORT QColorSpace::PrimaryPoints * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_operator_(QColorSpace::PrimaryPoints * this_ptr, QColorSpace::PrimaryPoints const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDesktopServices_dQDesktopServices(QDesktopServices * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDesktopServices * ctr_qt_gui_ffi_QDesktopServices_QDesktopServices() {
  return new QDesktopServices();
}


RITUAL_EXPORT QDesktopServices * ctr_qt_gui_ffi_QDesktopServices_QDesktopServices1(QDesktopServices const * other) {
  return new QDesktopServices(*other);
}


RITUAL_EXPORT QDesktopServices * ctr_qt_gui_ffi_QDesktopServices_operator_(QDesktopServices * this_ptr, QDesktopServices const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QFileSystemModel * ctr_qt_gui_ffi_QFileSystemModel_QFileSystemModel1() {
  return new QFileSystemModel();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGenericPluginFactory_dQGenericPluginFactory(QGenericPluginFactory * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGenericPluginFactory * ctr_qt_gui_ffi_QGenericPluginFactory_QGenericPluginFactory() {
  return new QGenericPluginFactory();
}


RITUAL_EXPORT QGenericPluginFactory * ctr_qt_gui_ffi_QGenericPluginFactory_QGenericPluginFactory1(QGenericPluginFactory const * other) {
  return new QGenericPluginFactory(*other);
}


RITUAL_EXPORT QGenericPluginFactory * ctr_qt_gui_ffi_QGenericPluginFactory_operator_(QGenericPluginFactory * this_ptr, QGenericPluginFactory const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_dScaledPixmapArgument(QIconEngine::ScaledPixmapArgument * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIconEngine::ScaledPixmapArgument * ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_ScaledPixmapArgument() {
  return new QIconEngine::ScaledPixmapArgument();
}


RITUAL_EXPORT QIconEngine::ScaledPixmapArgument * ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_ScaledPixmapArgument1(QIconEngine::ScaledPixmapArgument const * other) {
  return new QIconEngine::ScaledPixmapArgument(*other);
}


RITUAL_EXPORT QIconEngine::ScaledPixmapArgument * ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_operator_(QIconEngine::ScaledPixmapArgument * this_ptr, QIconEngine::ScaledPixmapArgument const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMatrix4x4_dQMatrix4x4(QMatrix4x4 * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_QMatrix4x46(QMatrix4x4 const * other) {
  return new QMatrix4x4(*other);
}


RITUAL_EXPORT QMatrix4x4 * ctr_qt_gui_ffi_QMatrix4x4_operator_(QMatrix4x4 * this_ptr, QMatrix4x4 const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QMovie * ctr_qt_gui_ffi_QMovie_QMovie3() {
  return new QMovie();
}


RITUAL_EXPORT QOffscreenSurface * ctr_qt_gui_ffi_QOffscreenSurface_QOffscreenSurface1() {
  return new QOffscreenSurface();
}


RITUAL_EXPORT QOpenGLContext * ctr_qt_gui_ffi_QOpenGLContext_QOpenGLContext1() {
  return new QOpenGLContext();
}


RITUAL_EXPORT QOpenGLFunctions * ctr_qt_gui_ffi_QOpenGLFunctions_QOpenGLFunctions2(QOpenGLFunctions const * other) {
  return new QOpenGLFunctions(*other);
}


RITUAL_EXPORT QOpenGLFunctions * ctr_qt_gui_ffi_QOpenGLFunctions_operator_(QOpenGLFunctions * this_ptr, QOpenGLFunctions const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QOpenGLExtraFunctions * ctr_qt_gui_ffi_QOpenGLExtraFunctions_QOpenGLExtraFunctions2(QOpenGLExtraFunctions const * other) {
  return new QOpenGLExtraFunctions(*other);
}


RITUAL_EXPORT QOpenGLExtraFunctions * ctr_qt_gui_ffi_QOpenGLExtraFunctions_operator_(QOpenGLExtraFunctions * this_ptr, QOpenGLExtraFunctions const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPageRanges_Range_dRange(QPageRanges::Range * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPageRanges::Range * ctr_qt_gui_ffi_QPageRanges_Range_Range() {
  return new QPageRanges::Range();
}


RITUAL_EXPORT QPageRanges::Range * ctr_qt_gui_ffi_QPageRanges_Range_Range1(QPageRanges::Range const * other) {
  return new QPageRanges::Range(*other);
}


RITUAL_EXPORT QPageRanges::Range * ctr_qt_gui_ffi_QPageRanges_Range_operator_(QPageRanges::Range * this_ptr, QPageRanges::Range const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintDeviceWindow_dQPaintDeviceWindow(QPaintDeviceWindow * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainter_PixmapFragment_dPixmapFragment(QPainter::PixmapFragment * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_PixmapFragment() {
  return new QPainter::PixmapFragment();
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_PixmapFragment1(QPainter::PixmapFragment const * other) {
  return new QPainter::PixmapFragment(*other);
}


RITUAL_EXPORT QPainter::PixmapFragment * ctr_qt_gui_ffi_QPainter_PixmapFragment_operator_(QPainter::PixmapFragment * this_ptr, QPainter::PixmapFragment const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextItem_dQTextItem(QTextItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextItem * ctr_qt_gui_ffi_QTextItem_QTextItem() {
  return new QTextItem();
}


RITUAL_EXPORT QTextItem * ctr_qt_gui_ffi_QTextItem_QTextItem1(QTextItem const * other) {
  return new QTextItem(*other);
}


RITUAL_EXPORT QTextItem * ctr_qt_gui_ffi_QTextItem_operator_(QTextItem * this_ptr, QTextItem const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEngineState_dQPaintEngineState(QPaintEngineState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPaintEngineState * ctr_qt_gui_ffi_QPaintEngineState_QPaintEngineState() {
  return new QPaintEngineState();
}


RITUAL_EXPORT QPaintEngineState * ctr_qt_gui_ffi_QPaintEngineState_QPaintEngineState1(QPaintEngineState const * other) {
  return new QPaintEngineState(*other);
}


RITUAL_EXPORT QPaintEngineState * ctr_qt_gui_ffi_QPaintEngineState_operator_(QPaintEngineState * this_ptr, QPaintEngineState const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPainterPath_Element_dElement(QPainterPath::Element * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPainterPath::Element * ctr_qt_gui_ffi_QPainterPath_Element_Element() {
  return new QPainterPath::Element();
}


RITUAL_EXPORT QPainterPath::Element * ctr_qt_gui_ffi_QPainterPath_Element_Element1(QPainterPath::Element const * other) {
  return new QPainterPath::Element(*other);
}


RITUAL_EXPORT QPainterPath::Element * ctr_qt_gui_ffi_QPainterPath_Element_operator_(QPainterPath::Element * this_ptr, QPainterPath::Element const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QPicture * ctr_qt_gui_ffi_QPicture_QPicture2() {
  return new QPicture();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmapCache_dQPixmapCache(QPixmapCache * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPixmapCache * ctr_qt_gui_ffi_QPixmapCache_QPixmapCache() {
  return new QPixmapCache();
}


RITUAL_EXPORT QPixmapCache * ctr_qt_gui_ffi_QPixmapCache_QPixmapCache1(QPixmapCache const * other) {
  return new QPixmapCache(*other);
}


RITUAL_EXPORT QPixmapCache * ctr_qt_gui_ffi_QPixmapCache_operator_(QPixmapCache * this_ptr, QPixmapCache const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QQuaternion_dQQuaternion(QQuaternion * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_QQuaternion5(QQuaternion const * other) {
  return new QQuaternion(*other);
}


RITUAL_EXPORT QQuaternion * ctr_qt_gui_ffi_QQuaternion_operator_(QQuaternion * this_ptr, QQuaternion const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QRasterWindow * ctr_qt_gui_ffi_QRasterWindow_QRasterWindow1() {
  return new QRasterWindow();
}


RITUAL_EXPORT QStandardItemModel * ctr_qt_gui_ffi_QStandardItemModel_QStandardItemModel2() {
  return new QStandardItemModel();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStyleHints_dQStyleHints(QStyleHints * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFrame_iterator_diterator(QTextFrame::iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_iterator_iterator1(QTextFrame::iterator const * other) {
  return new QTextFrame::iterator(*other);
}


RITUAL_EXPORT QTextFrame::iterator * ctr_qt_gui_ffi_QTextFrame_iterator_operator_(QTextFrame::iterator * this_ptr, QTextFrame::iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QTextBlockUserData * ctr_qt_gui_ffi_QTextBlockUserData_QTextBlockUserData() {
  return new QTextBlockUserData();
}


RITUAL_EXPORT QTextBlockUserData * ctr_qt_gui_ffi_QTextBlockUserData_QTextBlockUserData1(QTextBlockUserData const * other) {
  return new QTextBlockUserData(*other);
}


RITUAL_EXPORT QTextBlockUserData * ctr_qt_gui_ffi_QTextBlockUserData_operator_(QTextBlockUserData * this_ptr, QTextBlockUserData const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_dQTextBlock(QTextBlock * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextBlock_iterator_diterator(QTextBlock::iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_iterator_iterator1(QTextBlock::iterator const * other) {
  return new QTextBlock::iterator(*other);
}


RITUAL_EXPORT QTextBlock::iterator * ctr_qt_gui_ffi_QTextBlock_iterator_operator_(QTextBlock::iterator * this_ptr, QTextBlock::iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTextFragment_dQTextFragment(QTextFragment * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QUndoGroup * ctr_qt_gui_ffi_QUndoGroup_QUndoGroup1() {
  return new QUndoGroup();
}


RITUAL_EXPORT QUndoCommand * ctr_qt_gui_ffi_QUndoCommand_QUndoCommand2() {
  return new QUndoCommand();
}


RITUAL_EXPORT QUndoStack * ctr_qt_gui_ffi_QUndoStack_QUndoStack1() {
  return new QUndoStack();
}


RITUAL_EXPORT QIntValidator * ctr_qt_gui_ffi_QIntValidator_QIntValidator2() {
  return new QIntValidator();
}


RITUAL_EXPORT QDoubleValidator * ctr_qt_gui_ffi_QDoubleValidator_QDoubleValidator2() {
  return new QDoubleValidator();
}


RITUAL_EXPORT QRegularExpressionValidator * ctr_qt_gui_ffi_QRegularExpressionValidator_QRegularExpressionValidator2() {
  return new QRegularExpressionValidator();
}


RITUAL_EXPORT QList< QScreen * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QScreen_ptr(QAction const * this_ptr) {
  return new QList< QScreen * >(this_ptr->associatedWidgets< QScreen * >());
}


RITUAL_EXPORT QList< QWindow * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QWindow_ptr(QAction const * this_ptr) {
  return new QList< QWindow * >(this_ptr->associatedWidgets< QWindow * >());
}


RITUAL_EXPORT QList< QInputDevice const * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QInputDevice_const_ptr(QAction const * this_ptr) {
  return new QList< QInputDevice const * >(this_ptr->associatedWidgets< QInputDevice const * >());
}


RITUAL_EXPORT QList< QAccessibleInterface * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QAccessibleInterface_ptr(QAction const * this_ptr) {
  return new QList< QAccessibleInterface * >(this_ptr->associatedWidgets< QAccessibleInterface * >());
}


RITUAL_EXPORT QList< QAction * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QAction_ptr(QAction const * this_ptr) {
  return new QList< QAction * >(this_ptr->associatedWidgets< QAction * >());
}


RITUAL_EXPORT QList< QOpenGLContext * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QOpenGLContext_ptr(QAction const * this_ptr) {
  return new QList< QOpenGLContext * >(this_ptr->associatedWidgets< QOpenGLContext * >());
}


RITUAL_EXPORT QList< QTextFrame * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QTextFrame_ptr(QAction const * this_ptr) {
  return new QList< QTextFrame * >(this_ptr->associatedWidgets< QTextFrame * >());
}


RITUAL_EXPORT QList< QUndoStack * > * ctr_qt_gui_ffi_QAction_associatedWidgets_QUndoStack_ptr(QAction const * this_ptr) {
  return new QList< QUndoStack * >(this_ptr->associatedWidgets< QUndoStack * >());
}


RITUAL_EXPORT QList< QScreen * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QScreen_ptr(QAction const * this_ptr) {
  return new QList< QScreen * >(this_ptr->associatedGraphicsWidgets< QScreen * >());
}


RITUAL_EXPORT QList< QWindow * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QWindow_ptr(QAction const * this_ptr) {
  return new QList< QWindow * >(this_ptr->associatedGraphicsWidgets< QWindow * >());
}


RITUAL_EXPORT QList< QInputDevice const * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QInputDevice_const_ptr(QAction const * this_ptr) {
  return new QList< QInputDevice const * >(this_ptr->associatedGraphicsWidgets< QInputDevice const * >());
}


RITUAL_EXPORT QList< QAccessibleInterface * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QAccessibleInterface_ptr(QAction const * this_ptr) {
  return new QList< QAccessibleInterface * >(this_ptr->associatedGraphicsWidgets< QAccessibleInterface * >());
}


RITUAL_EXPORT QList< QAction * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QAction_ptr(QAction const * this_ptr) {
  return new QList< QAction * >(this_ptr->associatedGraphicsWidgets< QAction * >());
}


RITUAL_EXPORT QList< QOpenGLContext * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QOpenGLContext_ptr(QAction const * this_ptr) {
  return new QList< QOpenGLContext * >(this_ptr->associatedGraphicsWidgets< QOpenGLContext * >());
}


RITUAL_EXPORT QList< QTextFrame * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QTextFrame_ptr(QAction const * this_ptr) {
  return new QList< QTextFrame * >(this_ptr->associatedGraphicsWidgets< QTextFrame * >());
}


RITUAL_EXPORT QList< QUndoStack * > * ctr_qt_gui_ffi_QAction_associatedGraphicsWidgets_QUndoStack_ptr(QAction const * this_ptr) {
  return new QList< QUndoStack * >(this_ptr->associatedGraphicsWidgets< QUndoStack * >());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRgbaFloat_qfloat16_isOpaque(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->isOpaque();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRgbaFloat_float_isOpaque(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->isOpaque();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRgbaFloat_qfloat16_isTransparent(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->isTransparent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRgbaFloat_float_isTransparent(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->isTransparent();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_red(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->red();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_red(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->red();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_green(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->green();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_green(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->green();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_blue(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->blue();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_blue(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->blue();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_alpha(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->alpha();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_alpha(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->alpha();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_qfloat16_setRed(QRgbaFloat< qfloat16 > * this_ptr, float _red) {
  this_ptr->setRed(_red);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_float_setRed(QRgbaFloat< float > * this_ptr, float _red) {
  this_ptr->setRed(_red);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_qfloat16_setGreen(QRgbaFloat< qfloat16 > * this_ptr, float _green) {
  this_ptr->setGreen(_green);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_float_setGreen(QRgbaFloat< float > * this_ptr, float _green) {
  this_ptr->setGreen(_green);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_qfloat16_setBlue(QRgbaFloat< qfloat16 > * this_ptr, float _blue) {
  this_ptr->setBlue(_blue);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_float_setBlue(QRgbaFloat< float > * this_ptr, float _blue) {
  this_ptr->setBlue(_blue);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_qfloat16_setAlpha(QRgbaFloat< qfloat16 > * this_ptr, float _alpha) {
  this_ptr->setAlpha(_alpha);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_float_setAlpha(QRgbaFloat< float > * this_ptr, float _alpha) {
  this_ptr->setAlpha(_alpha);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_redNormalized(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->redNormalized();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_redNormalized(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->redNormalized();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_greenNormalized(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->greenNormalized();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_greenNormalized(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->greenNormalized();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_blueNormalized(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->blueNormalized();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_blueNormalized(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->blueNormalized();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_qfloat16_alphaNormalized(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->alphaNormalized();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QRgbaFloat_float_alphaNormalized(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->alphaNormalized();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_qfloat16_red8(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->red8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_float_red8(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->red8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_qfloat16_green8(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->green8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_float_green8(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->green8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_qfloat16_blue8(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->blue8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_float_blue8(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->blue8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_qfloat16_alpha8(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->alpha8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgbaFloat_float_alpha8(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->alpha8();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QRgbaFloat_qfloat16_toArgb32(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->toArgb32();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QRgbaFloat_float_toArgb32(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->toArgb32();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_qfloat16_red16(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->red16();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_float_red16(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->red16();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_qfloat16_green16(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->green16();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_float_green16(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->green16();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_qfloat16_blue16(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->blue16();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_float_blue16(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->blue16();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_qfloat16_alpha16(QRgbaFloat< qfloat16 > const * this_ptr) {
  return this_ptr->alpha16();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgbaFloat_float_alpha16(QRgbaFloat< float > const * this_ptr) {
  return this_ptr->alpha16();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_qfloat16_dQRgbaFloat(QRgbaFloat< qfloat16 > * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgbaFloat_float_dQRgbaFloat(QRgbaFloat< float > * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRgbaFloat< qfloat16 > * ctr_qt_gui_ffi_QRgbaFloat_qfloat16_QRgbaFloat() {
  return new QRgbaFloat< qfloat16 >();
}


RITUAL_EXPORT QRgbaFloat< float > * ctr_qt_gui_ffi_QRgbaFloat_float_QRgbaFloat() {
  return new QRgbaFloat< float >();
}


RITUAL_EXPORT QRgbaFloat< qfloat16 > * ctr_qt_gui_ffi_QRgbaFloat_qfloat16_QRgbaFloat1(QRgbaFloat< qfloat16 > const * other) {
  return new QRgbaFloat< qfloat16 >(*other);
}


RITUAL_EXPORT QRgbaFloat< float > * ctr_qt_gui_ffi_QRgbaFloat_float_QRgbaFloat1(QRgbaFloat< float > const * other) {
  return new QRgbaFloat< float >(*other);
}


RITUAL_EXPORT QRgbaFloat< qfloat16 > * ctr_qt_gui_ffi_QRgbaFloat_qfloat16_operator_(QRgbaFloat< qfloat16 > * this_ptr, QRgbaFloat< qfloat16 > const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QRgbaFloat< float > * ctr_qt_gui_ffi_QRgbaFloat_float_operator_(QRgbaFloat< float > * this_ptr, QRgbaFloat< float > const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash5(int flags, unsigned long seed) {
  return qHash(QFlags< QEventPoint::State >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash6(int flags, unsigned long seed) {
  return qHash(QFlags< QMatrix4x4::Flag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash7(int flags, unsigned long seed) {
  return qHash(QFlags< QPaintEngine::PaintEngineFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash8(int flags, unsigned long seed) {
  return qHash(QFlags< QPaintEngine::DirtyFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash9(int flags, unsigned long seed) {
  return qHash(QFlags< QAbstractFileIconProvider::Option >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash10(int flags, unsigned long seed) {
  return qHash(QFlags< QInputDevice::Capability >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash11(int flags, unsigned long seed) {
  return qHash(QFlags< QInputDevice::DeviceType >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash12(int flags, unsigned long seed) {
  return qHash(QFlags< QPointingDevice::PointerType >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash13(int flags, unsigned long seed) {
  return qHash(QFlags< QRawFont::LayoutFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash14(int flags, unsigned long seed) {
  return qHash(QFlags< QGlyphRun::GlyphRunFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash15(int flags, unsigned long seed) {
  return qHash(QFlags< QTextDocument::MarkdownFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash16(int flags, unsigned long seed) {
  return qHash(QFlags< QTextDocument::FindFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash17(int flags, unsigned long seed) {
  return qHash(QFlags< QTextOption::Flag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash18(int flags, unsigned long seed) {
  return qHash(QFlags< QTextFormat::PageBreakFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash19(int flags, unsigned long seed) {
  return qHash(QFlags< QTextLayout::GlyphRunRetrievalFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash20(int flags, unsigned long seed) {
  return qHash(QFlags< QAccessible::RelationFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash21(int flags, unsigned long seed) {
  return qHash(QFlags< QSurfaceFormat::FormatOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash22(int flags, unsigned long seed) {
  return qHash(QFlags< QFileSystemModel::Option >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash23(int flags, unsigned long seed) {
  return qHash(QFlags< QImageIOPlugin::Capability >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash24(int flags, unsigned long seed) {
  return qHash(QFlags< QImageIOHandler::Transformation >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash25(int flags, unsigned long seed) {
  return qHash(QFlags< QOpenGLFunctions::OpenGLFeature >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash26(int flags, unsigned long seed) {
  return qHash(QFlags< QPainter::PixmapFragmentHint >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash27(int flags, unsigned long seed) {
  return qHash(QFlags< QPainter::RenderHint >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash28(int flags, unsigned long seed) {
  return qHash(QFlags< QTextItem::RenderFlag >(flags), seed);
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_iterator() {
  return new QList< QPoint >::iterator();
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_iterator() {
  return new QList< QEventPoint >::iterator();
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_iterator() {
  return new QList< QInputMethodEvent::Attribute >::iterator();
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_iterator() {
  return new QList< QAbstractTextDocumentLayout::Selection >::iterator();
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_iterator() {
  return new QList< QSize >::iterator();
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_iterator() {
  return new QList< QScreen * >::iterator();
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_iterator() {
  return new QList< QWindow * >::iterator();
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_iterator() {
  return new QList< QInputDevice const * >::iterator();
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_iterator() {
  return new QList< QKeySequence >::iterator();
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_iterator() {
  return new QList< QPointer< QObject > >::iterator();
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_iterator() {
  return new QList< QFont::Tag >::iterator();
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_iterator() {
  return new QList< QFontDatabase::WritingSystem >::iterator();
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_iterator() {
  return new QList< long long >::iterator();
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_iterator() {
  return new QList< QTextFormat >::iterator();
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_iterator() {
  return new QList< double >::iterator();
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_iterator() {
  return new QList< QTextOption::Tab >::iterator();
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_iterator() {
  return new QList< QTextLength >::iterator();
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_iterator() {
  return new QList< QTextLayout::FormatRange >::iterator();
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_iterator() {
  return new QList< QGlyphRun >::iterator();
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_iterator() {
  return new QList< QAccessibleInterface * >::iterator();
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_iterator() {
  return new QList< QAccessible::Attribute >::iterator();
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_iterator() {
  return new QList< QAction * >::iterator();
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_iterator() {
  return new QList< unsigned short >::iterator();
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_iterator() {
  return new QList< QFontVariableAxis >::iterator();
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_iterator() {
  return new QList< QOpenGLContext * >::iterator();
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_iterator() {
  return new QList< QPageRanges::Range >::iterator();
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_iterator() {
  return new QList< QLineF >::iterator();
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_iterator() {
  return new QList< QLine >::iterator();
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_iterator() {
  return new QList< QRectF >::iterator();
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_iterator() {
  return new QList< QRect >::iterator();
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_iterator() {
  return new QList< QPolygonF >::iterator();
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_iterator() {
  return new QList< QStandardItem * >::iterator();
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_iterator() {
  return new QList< QTextBlock >::iterator();
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_iterator() {
  return new QList< QTextFrame * >::iterator();
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_iterator() {
  return new QList< QUndoStack * >::iterator();
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QList_QPoint_iterator_operator_(QList< QPoint >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_(QList< QEventPoint >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QInputMethodEvent::Attribute * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAbstractTextDocumentLayout::Selection * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QList_QSize_iterator_operator_(QList< QSize >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QScreen * * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_(QList< QScreen * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QWindow * * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_(QList< QWindow * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QInputDevice const * * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_(QList< QInputDevice const * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_(QList< QKeySequence >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QPointer< QObject > * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_(QList< QPointer< QObject > >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QFont::Tag * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_(QList< QFont::Tag >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QFontDatabase::WritingSystem * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT long long * ctr_qt_gui_ffi_QList_long_long_iterator_operator_(QList< long long >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_(QList< QTextFormat >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT double * ctr_qt_gui_ffi_QList_double_iterator_operator_(QList< double >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextOption::Tab * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_(QList< QTextOption::Tab >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_(QList< QTextLength >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextLayout::FormatRange * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_(QList< QTextLayout::FormatRange >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QGlyphRun * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_(QList< QGlyphRun >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAccessibleInterface * * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_(QList< QAccessibleInterface * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAccessible::Attribute * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_(QList< QAccessible::Attribute >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAction * * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_(QList< QAction * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT unsigned short * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_(QList< unsigned short >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QFontVariableAxis * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_(QList< QFontVariableAxis >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QOpenGLContext * * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_(QList< QOpenGLContext * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QPageRanges::Range * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_(QList< QPageRanges::Range >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QLineF * ctr_qt_gui_ffi_QList_QLineF_iterator_operator_(QList< QLineF >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QLine * ctr_qt_gui_ffi_QList_QLine_iterator_operator_(QList< QLine >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QList_QRectF_iterator_operator_(QList< QRectF >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QList_QRect_iterator_operator_(QList< QRect >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_(QList< QPolygonF >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QStandardItem * * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_(QList< QStandardItem * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_(QList< QTextBlock >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextFrame * * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_(QList< QTextFrame * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QUndoStack * * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_(QList< QUndoStack * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__(QList< QPoint >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__(QList< QEventPoint >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QInputMethodEvent::Attribute * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAbstractTextDocumentLayout::Selection * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QList_QSize_iterator_operator__(QList< QSize >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QScreen * * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__(QList< QScreen * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QWindow * * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__(QList< QWindow * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QInputDevice const * * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__(QList< QInputDevice const * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__(QList< QKeySequence >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QPointer< QObject > * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__(QList< QPointer< QObject > >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QFont::Tag * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__(QList< QFont::Tag >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QFontDatabase::WritingSystem * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT long long * ctr_qt_gui_ffi_QList_long_long_iterator_operator__(QList< long long >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__(QList< QTextFormat >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT double * ctr_qt_gui_ffi_QList_double_iterator_operator__(QList< double >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTextOption::Tab * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__(QList< QTextOption::Tab >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__(QList< QTextLength >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTextLayout::FormatRange * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__(QList< QTextLayout::FormatRange >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QGlyphRun * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__(QList< QGlyphRun >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAccessibleInterface * * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__(QList< QAccessibleInterface * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAccessible::Attribute * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__(QList< QAccessible::Attribute >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAction * * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__(QList< QAction * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT unsigned short * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__(QList< unsigned short >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QFontVariableAxis * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__(QList< QFontVariableAxis >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QOpenGLContext * * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__(QList< QOpenGLContext * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QPageRanges::Range * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__(QList< QPageRanges::Range >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QLineF * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__(QList< QLineF >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QLine * ctr_qt_gui_ffi_QList_QLine_iterator_operator__(QList< QLine >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__(QList< QRectF >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QList_QRect_iterator_operator__(QList< QRect >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__(QList< QPolygonF >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QStandardItem * * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__(QList< QStandardItem * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__(QList< QTextBlock >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTextFrame * * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__(QList< QTextFrame * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QUndoStack * * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__(QList< QUndoStack * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__1(QList< QPoint >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__1(QList< QEventPoint >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QInputMethodEvent::Attribute * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__1(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAbstractTextDocumentLayout::Selection * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__1(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QList_QSize_iterator_operator__1(QList< QSize >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QScreen * * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__1(QList< QScreen * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QWindow * * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__1(QList< QWindow * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QInputDevice const * * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__1(QList< QInputDevice const * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__1(QList< QKeySequence >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QPointer< QObject > * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__1(QList< QPointer< QObject > >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QFont::Tag * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__1(QList< QFont::Tag >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QFontDatabase::WritingSystem * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__1(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT long long * ctr_qt_gui_ffi_QList_long_long_iterator_operator__1(QList< long long >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTextFormat * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__1(QList< QTextFormat >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT double * ctr_qt_gui_ffi_QList_double_iterator_operator__1(QList< double >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTextOption::Tab * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__1(QList< QTextOption::Tab >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTextLength * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__1(QList< QTextLength >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTextLayout::FormatRange * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__1(QList< QTextLayout::FormatRange >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QGlyphRun * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__1(QList< QGlyphRun >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAccessibleInterface * * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__1(QList< QAccessibleInterface * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAccessible::Attribute * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__1(QList< QAccessible::Attribute >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAction * * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__1(QList< QAction * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT unsigned short * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__1(QList< unsigned short >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QFontVariableAxis * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__1(QList< QFontVariableAxis >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QOpenGLContext * * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__1(QList< QOpenGLContext * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QPageRanges::Range * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__1(QList< QPageRanges::Range >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QLineF * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__1(QList< QLineF >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QLine * ctr_qt_gui_ffi_QList_QLine_iterator_operator__1(QList< QLine >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__1(QList< QRectF >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QList_QRect_iterator_operator__1(QList< QRect >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__1(QList< QPolygonF >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QStandardItem * * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__1(QList< QStandardItem * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTextBlock * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__1(QList< QTextBlock >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTextFrame * * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__1(QList< QTextFrame * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QUndoStack * * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__1(QList< QUndoStack * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator__2(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__2(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__2(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__2(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator__2(QList< QSize >::iterator const * this_ptr, QList< QSize >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__2(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__2(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__2(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__2(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__2(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__2(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__2(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator__2(QList< long long >::iterator const * this_ptr, QList< long long >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__2(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator__2(QList< double >::iterator const * this_ptr, QList< double >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__2(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__2(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__2(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__2(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__2(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__2(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__2(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__2(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__2(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__2(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__2(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator__2(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator__2(QList< QLine >::iterator const * this_ptr, QList< QLine >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator__2(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator__2(QList< QRect >::iterator const * this_ptr, QList< QRect >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__2(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__2(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__2(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__2(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__2(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator_1(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_1(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_1(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_1(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator_1(QList< QSize >::iterator const * this_ptr, QList< QSize >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_1(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_1(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_1(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_1(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_1(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_1(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_1(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator_1(QList< long long >::iterator const * this_ptr, QList< long long >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_1(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator_1(QList< double >::iterator const * this_ptr, QList< double >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_1(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_1(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_1(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_1(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_1(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_1(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_1(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_1(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_1(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_1(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_1(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator_1(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator_1(QList< QLine >::iterator const * this_ptr, QList< QLine >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator_1(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator_1(QList< QRect >::iterator const * this_ptr, QList< QRect >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_1(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_1(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_1(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_1(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_1(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator__4(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__4(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__4(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__4(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator__4(QList< QSize >::iterator const * this_ptr, QList< QSize >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__4(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__4(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__4(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__4(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__4(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__4(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__4(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator__4(QList< long long >::iterator const * this_ptr, QList< long long >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__4(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator__4(QList< double >::iterator const * this_ptr, QList< double >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__4(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__4(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__4(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__4(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__4(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__4(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__4(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__4(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__4(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__4(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__4(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator__4(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator__4(QList< QLine >::iterator const * this_ptr, QList< QLine >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator__4(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator__4(QList< QRect >::iterator const * this_ptr, QList< QRect >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__4(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__4(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__4(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__4(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__4(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator_2(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_2(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_2(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_2(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator_2(QList< QSize >::iterator const * this_ptr, QList< QSize >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_2(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_2(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_2(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_2(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_2(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_2(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_2(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator_2(QList< long long >::iterator const * this_ptr, QList< long long >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_2(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator_2(QList< double >::iterator const * this_ptr, QList< double >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_2(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_2(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_2(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_2(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_2(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_2(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_2(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_2(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_2(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_2(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_2(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator_2(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator_2(QList< QLine >::iterator const * this_ptr, QList< QLine >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator_2(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator_2(QList< QRect >::iterator const * this_ptr, QList< QRect >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_2(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_2(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_2(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_2(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_2(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator__5(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__5(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__5(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__5(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator__5(QList< QSize >::iterator const * this_ptr, QList< QSize >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__5(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__5(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__5(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__5(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__5(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__5(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__5(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator__5(QList< long long >::iterator const * this_ptr, QList< long long >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__5(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator__5(QList< double >::iterator const * this_ptr, QList< double >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__5(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__5(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__5(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__5(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__5(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__5(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__5(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__5(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__5(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__5(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__5(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator__5(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator__5(QList< QLine >::iterator const * this_ptr, QList< QLine >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator__5(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator__5(QList< QRect >::iterator const * this_ptr, QList< QRect >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__5(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__5(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__5(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__5(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__5(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator__6(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__6(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__6(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__6(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator__6(QList< QSize >::iterator const * this_ptr, QList< QSize >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__6(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__6(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__6(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__6(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__6(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__6(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__6(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator__6(QList< long long >::iterator const * this_ptr, QList< long long >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__6(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator__6(QList< double >::iterator const * this_ptr, QList< double >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__6(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__6(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__6(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__6(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__6(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__6(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__6(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__6(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__6(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__6(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__6(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator__6(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator__6(QList< QLine >::iterator const * this_ptr, QList< QLine >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator__6(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator__6(QList< QRect >::iterator const * this_ptr, QList< QRect >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__6(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__6(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__6(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__6(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__6(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator_3(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_3(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_3(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_3(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator_3(QList< QSize >::iterator const * this_ptr, QList< QSize >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_3(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_3(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_3(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_3(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_3(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_3(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_3(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator_3(QList< long long >::iterator const * this_ptr, QList< long long >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_3(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator_3(QList< double >::iterator const * this_ptr, QList< double >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_3(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_3(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_3(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_3(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_3(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_3(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_3(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_3(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_3(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_3(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_3(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator_3(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator_3(QList< QLine >::iterator const * this_ptr, QList< QLine >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator_3(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator_3(QList< QRect >::iterator const * this_ptr, QList< QRect >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_3(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_3(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_3(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_3(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_3(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator__8(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__8(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__8(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__8(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator__8(QList< QSize >::iterator const * this_ptr, QList< QSize >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__8(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__8(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__8(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__8(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__8(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__8(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__8(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator__8(QList< long long >::iterator const * this_ptr, QList< long long >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__8(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator__8(QList< double >::iterator const * this_ptr, QList< double >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__8(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__8(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__8(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__8(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__8(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__8(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__8(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__8(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__8(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__8(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__8(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator__8(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator__8(QList< QLine >::iterator const * this_ptr, QList< QLine >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator__8(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator__8(QList< QRect >::iterator const * this_ptr, QList< QRect >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__8(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__8(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__8(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__8(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__8(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator_4(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_4(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_4(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_4(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator_4(QList< QSize >::iterator const * this_ptr, QList< QSize >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_4(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_4(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_4(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_4(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_4(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_4(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_4(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator_4(QList< long long >::iterator const * this_ptr, QList< long long >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_4(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator_4(QList< double >::iterator const * this_ptr, QList< double >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_4(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_4(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_4(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_4(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_4(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_4(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_4(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_4(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_4(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_4(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_4(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator_4(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator_4(QList< QLine >::iterator const * this_ptr, QList< QLine >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator_4(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator_4(QList< QRect >::iterator const * this_ptr, QList< QRect >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_4(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_4(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_4(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_4(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_4(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator__9(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__9(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__9(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__9(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator__9(QList< QSize >::iterator const * this_ptr, QList< QSize >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__9(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__9(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__9(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__9(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__9(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__9(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__9(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator__9(QList< long long >::iterator const * this_ptr, QList< long long >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__9(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator__9(QList< double >::iterator const * this_ptr, QList< double >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__9(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__9(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__9(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__9(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__9(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__9(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__9(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__9(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__9(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__9(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__9(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator__9(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator__9(QList< QLine >::iterator const * this_ptr, QList< QLine >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator__9(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator__9(QList< QRect >::iterator const * this_ptr, QList< QRect >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__9(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__9(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__9(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__9(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__9(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::const_iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPoint_iterator_operator__10(QList< QPoint >::iterator const * this_ptr, QPoint * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__10(QList< QEventPoint >::iterator const * this_ptr, QEventPoint * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__10(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QInputMethodEvent::Attribute * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__10(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QAbstractTextDocumentLayout::Selection * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QSize_iterator_operator__10(QList< QSize >::iterator const * this_ptr, QSize * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__10(QList< QScreen * >::iterator const * this_ptr, QScreen * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__10(QList< QWindow * >::iterator const * this_ptr, QWindow * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__10(QList< QInputDevice const * >::iterator const * this_ptr, QInputDevice const * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__10(QList< QKeySequence >::iterator const * this_ptr, QKeySequence * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__10(QList< QPointer< QObject > >::iterator const * this_ptr, QPointer< QObject > * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__10(QList< QFont::Tag >::iterator const * this_ptr, QFont::Tag * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__10(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QFontDatabase::WritingSystem * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_long_long_iterator_operator__10(QList< long long >::iterator const * this_ptr, long long * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__10(QList< QTextFormat >::iterator const * this_ptr, QTextFormat * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_double_iterator_operator__10(QList< double >::iterator const * this_ptr, double * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__10(QList< QTextOption::Tab >::iterator const * this_ptr, QTextOption::Tab * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__10(QList< QTextLength >::iterator const * this_ptr, QTextLength * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__10(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QTextLayout::FormatRange * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__10(QList< QGlyphRun >::iterator const * this_ptr, QGlyphRun * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__10(QList< QAccessibleInterface * >::iterator const * this_ptr, QAccessibleInterface * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__10(QList< QAccessible::Attribute >::iterator const * this_ptr, QAccessible::Attribute * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__10(QList< QAction * >::iterator const * this_ptr, QAction * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__10(QList< unsigned short >::iterator const * this_ptr, unsigned short * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__10(QList< QFontVariableAxis >::iterator const * this_ptr, QFontVariableAxis * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__10(QList< QOpenGLContext * >::iterator const * this_ptr, QOpenGLContext * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__10(QList< QPageRanges::Range >::iterator const * this_ptr, QPageRanges::Range * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLineF_iterator_operator__10(QList< QLineF >::iterator const * this_ptr, QLineF * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QLine_iterator_operator__10(QList< QLine >::iterator const * this_ptr, QLine * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRectF_iterator_operator__10(QList< QRectF >::iterator const * this_ptr, QRectF * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QRect_iterator_operator__10(QList< QRect >::iterator const * this_ptr, QRect * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__10(QList< QPolygonF >::iterator const * this_ptr, QPolygonF * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__10(QList< QStandardItem * >::iterator const * this_ptr, QStandardItem * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__10(QList< QTextBlock >::iterator const * this_ptr, QTextBlock * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__10(QList< QTextFrame * >::iterator const * this_ptr, QTextFrame * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__10(QList< QUndoStack * >::iterator const * this_ptr, QUndoStack * * p) {
  return this_ptr->operator==(p);
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__12(QList< QPoint >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__12(QList< QEventPoint >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__12(QList< QInputMethodEvent::Attribute >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__12(QList< QAbstractTextDocumentLayout::Selection >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator__12(QList< QSize >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__12(QList< QScreen * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__12(QList< QWindow * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__12(QList< QInputDevice const * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__12(QList< QKeySequence >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__12(QList< QPointer< QObject > >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__12(QList< QFont::Tag >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__12(QList< QFontDatabase::WritingSystem >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator__12(QList< long long >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__12(QList< QTextFormat >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator__12(QList< double >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__12(QList< QTextOption::Tab >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__12(QList< QTextLength >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__12(QList< QTextLayout::FormatRange >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__12(QList< QGlyphRun >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__12(QList< QAccessibleInterface * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__12(QList< QAccessible::Attribute >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__12(QList< QAction * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__12(QList< unsigned short >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__12(QList< QFontVariableAxis >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__12(QList< QOpenGLContext * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__12(QList< QPageRanges::Range >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__12(QList< QLineF >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator__12(QList< QLine >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__12(QList< QRectF >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator__12(QList< QRect >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__12(QList< QPolygonF >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__12(QList< QStandardItem * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__12(QList< QTextBlock >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__12(QList< QTextFrame * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__12(QList< QUndoStack * >::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__13(QList< QPoint >::iterator * this_ptr, int arg1) {
  return new QList< QPoint >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__13(QList< QEventPoint >::iterator * this_ptr, int arg1) {
  return new QList< QEventPoint >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__13(QList< QInputMethodEvent::Attribute >::iterator * this_ptr, int arg1) {
  return new QList< QInputMethodEvent::Attribute >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__13(QList< QAbstractTextDocumentLayout::Selection >::iterator * this_ptr, int arg1) {
  return new QList< QAbstractTextDocumentLayout::Selection >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator__13(QList< QSize >::iterator * this_ptr, int arg1) {
  return new QList< QSize >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__13(QList< QScreen * >::iterator * this_ptr, int arg1) {
  return new QList< QScreen * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__13(QList< QWindow * >::iterator * this_ptr, int arg1) {
  return new QList< QWindow * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__13(QList< QInputDevice const * >::iterator * this_ptr, int arg1) {
  return new QList< QInputDevice const * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__13(QList< QKeySequence >::iterator * this_ptr, int arg1) {
  return new QList< QKeySequence >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__13(QList< QPointer< QObject > >::iterator * this_ptr, int arg1) {
  return new QList< QPointer< QObject > >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__13(QList< QFont::Tag >::iterator * this_ptr, int arg1) {
  return new QList< QFont::Tag >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__13(QList< QFontDatabase::WritingSystem >::iterator * this_ptr, int arg1) {
  return new QList< QFontDatabase::WritingSystem >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator__13(QList< long long >::iterator * this_ptr, int arg1) {
  return new QList< long long >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__13(QList< QTextFormat >::iterator * this_ptr, int arg1) {
  return new QList< QTextFormat >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator__13(QList< double >::iterator * this_ptr, int arg1) {
  return new QList< double >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__13(QList< QTextOption::Tab >::iterator * this_ptr, int arg1) {
  return new QList< QTextOption::Tab >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__13(QList< QTextLength >::iterator * this_ptr, int arg1) {
  return new QList< QTextLength >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__13(QList< QTextLayout::FormatRange >::iterator * this_ptr, int arg1) {
  return new QList< QTextLayout::FormatRange >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__13(QList< QGlyphRun >::iterator * this_ptr, int arg1) {
  return new QList< QGlyphRun >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__13(QList< QAccessibleInterface * >::iterator * this_ptr, int arg1) {
  return new QList< QAccessibleInterface * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__13(QList< QAccessible::Attribute >::iterator * this_ptr, int arg1) {
  return new QList< QAccessible::Attribute >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__13(QList< QAction * >::iterator * this_ptr, int arg1) {
  return new QList< QAction * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__13(QList< unsigned short >::iterator * this_ptr, int arg1) {
  return new QList< unsigned short >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__13(QList< QFontVariableAxis >::iterator * this_ptr, int arg1) {
  return new QList< QFontVariableAxis >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__13(QList< QOpenGLContext * >::iterator * this_ptr, int arg1) {
  return new QList< QOpenGLContext * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__13(QList< QPageRanges::Range >::iterator * this_ptr, int arg1) {
  return new QList< QPageRanges::Range >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__13(QList< QLineF >::iterator * this_ptr, int arg1) {
  return new QList< QLineF >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator__13(QList< QLine >::iterator * this_ptr, int arg1) {
  return new QList< QLine >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__13(QList< QRectF >::iterator * this_ptr, int arg1) {
  return new QList< QRectF >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator__13(QList< QRect >::iterator * this_ptr, int arg1) {
  return new QList< QRect >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__13(QList< QPolygonF >::iterator * this_ptr, int arg1) {
  return new QList< QPolygonF >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__13(QList< QStandardItem * >::iterator * this_ptr, int arg1) {
  return new QList< QStandardItem * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__13(QList< QTextBlock >::iterator * this_ptr, int arg1) {
  return new QList< QTextBlock >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__13(QList< QTextFrame * >::iterator * this_ptr, int arg1) {
  return new QList< QTextFrame * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__13(QList< QUndoStack * >::iterator * this_ptr, int arg1) {
  return new QList< QUndoStack * >::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__14(QList< QPoint >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__14(QList< QEventPoint >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__14(QList< QInputMethodEvent::Attribute >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__14(QList< QAbstractTextDocumentLayout::Selection >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator__14(QList< QSize >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__14(QList< QScreen * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__14(QList< QWindow * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__14(QList< QInputDevice const * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__14(QList< QKeySequence >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__14(QList< QPointer< QObject > >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__14(QList< QFont::Tag >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__14(QList< QFontDatabase::WritingSystem >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator__14(QList< long long >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__14(QList< QTextFormat >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator__14(QList< double >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__14(QList< QTextOption::Tab >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__14(QList< QTextLength >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__14(QList< QTextLayout::FormatRange >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__14(QList< QGlyphRun >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__14(QList< QAccessibleInterface * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__14(QList< QAccessible::Attribute >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__14(QList< QAction * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__14(QList< unsigned short >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__14(QList< QFontVariableAxis >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__14(QList< QOpenGLContext * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__14(QList< QPageRanges::Range >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__14(QList< QLineF >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator__14(QList< QLine >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__14(QList< QRectF >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator__14(QList< QRect >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__14(QList< QPolygonF >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__14(QList< QStandardItem * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__14(QList< QTextBlock >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__14(QList< QTextFrame * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__14(QList< QUndoStack * >::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__15(QList< QPoint >::iterator * this_ptr, int arg1) {
  return new QList< QPoint >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__15(QList< QEventPoint >::iterator * this_ptr, int arg1) {
  return new QList< QEventPoint >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__15(QList< QInputMethodEvent::Attribute >::iterator * this_ptr, int arg1) {
  return new QList< QInputMethodEvent::Attribute >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__15(QList< QAbstractTextDocumentLayout::Selection >::iterator * this_ptr, int arg1) {
  return new QList< QAbstractTextDocumentLayout::Selection >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator__15(QList< QSize >::iterator * this_ptr, int arg1) {
  return new QList< QSize >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__15(QList< QScreen * >::iterator * this_ptr, int arg1) {
  return new QList< QScreen * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__15(QList< QWindow * >::iterator * this_ptr, int arg1) {
  return new QList< QWindow * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__15(QList< QInputDevice const * >::iterator * this_ptr, int arg1) {
  return new QList< QInputDevice const * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__15(QList< QKeySequence >::iterator * this_ptr, int arg1) {
  return new QList< QKeySequence >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__15(QList< QPointer< QObject > >::iterator * this_ptr, int arg1) {
  return new QList< QPointer< QObject > >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__15(QList< QFont::Tag >::iterator * this_ptr, int arg1) {
  return new QList< QFont::Tag >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__15(QList< QFontDatabase::WritingSystem >::iterator * this_ptr, int arg1) {
  return new QList< QFontDatabase::WritingSystem >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator__15(QList< long long >::iterator * this_ptr, int arg1) {
  return new QList< long long >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__15(QList< QTextFormat >::iterator * this_ptr, int arg1) {
  return new QList< QTextFormat >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator__15(QList< double >::iterator * this_ptr, int arg1) {
  return new QList< double >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__15(QList< QTextOption::Tab >::iterator * this_ptr, int arg1) {
  return new QList< QTextOption::Tab >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__15(QList< QTextLength >::iterator * this_ptr, int arg1) {
  return new QList< QTextLength >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__15(QList< QTextLayout::FormatRange >::iterator * this_ptr, int arg1) {
  return new QList< QTextLayout::FormatRange >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__15(QList< QGlyphRun >::iterator * this_ptr, int arg1) {
  return new QList< QGlyphRun >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__15(QList< QAccessibleInterface * >::iterator * this_ptr, int arg1) {
  return new QList< QAccessibleInterface * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__15(QList< QAccessible::Attribute >::iterator * this_ptr, int arg1) {
  return new QList< QAccessible::Attribute >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__15(QList< QAction * >::iterator * this_ptr, int arg1) {
  return new QList< QAction * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__15(QList< unsigned short >::iterator * this_ptr, int arg1) {
  return new QList< unsigned short >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__15(QList< QFontVariableAxis >::iterator * this_ptr, int arg1) {
  return new QList< QFontVariableAxis >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__15(QList< QOpenGLContext * >::iterator * this_ptr, int arg1) {
  return new QList< QOpenGLContext * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__15(QList< QPageRanges::Range >::iterator * this_ptr, int arg1) {
  return new QList< QPageRanges::Range >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__15(QList< QLineF >::iterator * this_ptr, int arg1) {
  return new QList< QLineF >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator__15(QList< QLine >::iterator * this_ptr, int arg1) {
  return new QList< QLine >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__15(QList< QRectF >::iterator * this_ptr, int arg1) {
  return new QList< QRectF >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator__15(QList< QRect >::iterator * this_ptr, int arg1) {
  return new QList< QRect >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__15(QList< QPolygonF >::iterator * this_ptr, int arg1) {
  return new QList< QPolygonF >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__15(QList< QStandardItem * >::iterator * this_ptr, int arg1) {
  return new QList< QStandardItem * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__15(QList< QTextBlock >::iterator * this_ptr, int arg1) {
  return new QList< QTextBlock >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__15(QList< QTextFrame * >::iterator * this_ptr, int arg1) {
  return new QList< QTextFrame * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__15(QList< QUndoStack * >::iterator * this_ptr, int arg1) {
  return new QList< QUndoStack * >::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QPoint_iterator_operator_5(QList< QPoint >::iterator const * this_ptr, QList< QPoint >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_5(QList< QEventPoint >::iterator const * this_ptr, QList< QEventPoint >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_5(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, QList< QInputMethodEvent::Attribute >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_5(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, QList< QAbstractTextDocumentLayout::Selection >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QSize_iterator_operator_5(QList< QSize >::iterator const * this_ptr, QList< QSize >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_5(QList< QScreen * >::iterator const * this_ptr, QList< QScreen * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_5(QList< QWindow * >::iterator const * this_ptr, QList< QWindow * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_5(QList< QInputDevice const * >::iterator const * this_ptr, QList< QInputDevice const * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_5(QList< QKeySequence >::iterator const * this_ptr, QList< QKeySequence >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_5(QList< QPointer< QObject > >::iterator const * this_ptr, QList< QPointer< QObject > >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_5(QList< QFont::Tag >::iterator const * this_ptr, QList< QFont::Tag >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_5(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, QList< QFontDatabase::WritingSystem >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_long_long_iterator_operator_5(QList< long long >::iterator const * this_ptr, QList< long long >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_5(QList< QTextFormat >::iterator const * this_ptr, QList< QTextFormat >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_double_iterator_operator_5(QList< double >::iterator const * this_ptr, QList< double >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_5(QList< QTextOption::Tab >::iterator const * this_ptr, QList< QTextOption::Tab >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_5(QList< QTextLength >::iterator const * this_ptr, QList< QTextLength >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_5(QList< QTextLayout::FormatRange >::iterator const * this_ptr, QList< QTextLayout::FormatRange >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_5(QList< QGlyphRun >::iterator const * this_ptr, QList< QGlyphRun >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_5(QList< QAccessibleInterface * >::iterator const * this_ptr, QList< QAccessibleInterface * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_5(QList< QAccessible::Attribute >::iterator const * this_ptr, QList< QAccessible::Attribute >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_5(QList< QAction * >::iterator const * this_ptr, QList< QAction * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_5(QList< unsigned short >::iterator const * this_ptr, QList< unsigned short >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_5(QList< QFontVariableAxis >::iterator const * this_ptr, QList< QFontVariableAxis >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_5(QList< QOpenGLContext * >::iterator const * this_ptr, QList< QOpenGLContext * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_5(QList< QPageRanges::Range >::iterator const * this_ptr, QList< QPageRanges::Range >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QLineF_iterator_operator_5(QList< QLineF >::iterator const * this_ptr, QList< QLineF >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QLine_iterator_operator_5(QList< QLine >::iterator const * this_ptr, QList< QLine >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QRectF_iterator_operator_5(QList< QRectF >::iterator const * this_ptr, QList< QRectF >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QRect_iterator_operator_5(QList< QRect >::iterator const * this_ptr, QList< QRect >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_5(QList< QPolygonF >::iterator const * this_ptr, QList< QPolygonF >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_5(QList< QStandardItem * >::iterator const * this_ptr, QList< QStandardItem * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_5(QList< QTextBlock >::iterator const * this_ptr, QList< QTextBlock >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_5(QList< QTextFrame * >::iterator const * this_ptr, QList< QTextFrame * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_5(QList< QUndoStack * >::iterator const * this_ptr, QList< QUndoStack * >::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__16(QList< QPoint >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__16(QList< QEventPoint >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__16(QList< QInputMethodEvent::Attribute >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__16(QList< QAbstractTextDocumentLayout::Selection >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator__16(QList< QSize >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__16(QList< QScreen * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__16(QList< QWindow * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__16(QList< QInputDevice const * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__16(QList< QKeySequence >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__16(QList< QPointer< QObject > >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__16(QList< QFont::Tag >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__16(QList< QFontDatabase::WritingSystem >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator__16(QList< long long >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__16(QList< QTextFormat >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator__16(QList< double >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__16(QList< QTextOption::Tab >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__16(QList< QTextLength >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__16(QList< QTextLayout::FormatRange >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__16(QList< QGlyphRun >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__16(QList< QAccessibleInterface * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__16(QList< QAccessible::Attribute >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__16(QList< QAction * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__16(QList< unsigned short >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__16(QList< QFontVariableAxis >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__16(QList< QOpenGLContext * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__16(QList< QPageRanges::Range >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__16(QList< QLineF >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator__16(QList< QLine >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__16(QList< QRectF >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator__16(QList< QRect >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__16(QList< QPolygonF >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__16(QList< QStandardItem * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__16(QList< QTextBlock >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__16(QList< QTextFrame * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__16(QList< QUndoStack * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator__17(QList< QPoint >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator__17(QList< QEventPoint >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator__17(QList< QInputMethodEvent::Attribute >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator__17(QList< QAbstractTextDocumentLayout::Selection >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator__17(QList< QSize >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator__17(QList< QScreen * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator__17(QList< QWindow * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator__17(QList< QInputDevice const * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator__17(QList< QKeySequence >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator__17(QList< QPointer< QObject > >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator__17(QList< QFont::Tag >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator__17(QList< QFontDatabase::WritingSystem >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator__17(QList< long long >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator__17(QList< QTextFormat >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator__17(QList< double >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator__17(QList< QTextOption::Tab >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator__17(QList< QTextLength >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator__17(QList< QTextLayout::FormatRange >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator__17(QList< QGlyphRun >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator__17(QList< QAccessibleInterface * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator__17(QList< QAccessible::Attribute >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator__17(QList< QAction * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator__17(QList< unsigned short >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator__17(QList< QFontVariableAxis >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator__17(QList< QOpenGLContext * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator__17(QList< QPageRanges::Range >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator__17(QList< QLineF >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator__17(QList< QLine >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator__17(QList< QRectF >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator__17(QList< QRect >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator__17(QList< QPolygonF >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator__17(QList< QStandardItem * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator__17(QList< QTextBlock >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator__17(QList< QTextFrame * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator__17(QList< QUndoStack * >::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator_6(QList< QPoint >::iterator const * this_ptr, long long j) {
  return new QList< QPoint >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_6(QList< QEventPoint >::iterator const * this_ptr, long long j) {
  return new QList< QEventPoint >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_6(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, long long j) {
  return new QList< QInputMethodEvent::Attribute >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_6(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, long long j) {
  return new QList< QAbstractTextDocumentLayout::Selection >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator_6(QList< QSize >::iterator const * this_ptr, long long j) {
  return new QList< QSize >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_6(QList< QScreen * >::iterator const * this_ptr, long long j) {
  return new QList< QScreen * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_6(QList< QWindow * >::iterator const * this_ptr, long long j) {
  return new QList< QWindow * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_6(QList< QInputDevice const * >::iterator const * this_ptr, long long j) {
  return new QList< QInputDevice const * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_6(QList< QKeySequence >::iterator const * this_ptr, long long j) {
  return new QList< QKeySequence >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_6(QList< QPointer< QObject > >::iterator const * this_ptr, long long j) {
  return new QList< QPointer< QObject > >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_6(QList< QFont::Tag >::iterator const * this_ptr, long long j) {
  return new QList< QFont::Tag >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_6(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, long long j) {
  return new QList< QFontDatabase::WritingSystem >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator_6(QList< long long >::iterator const * this_ptr, long long j) {
  return new QList< long long >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_6(QList< QTextFormat >::iterator const * this_ptr, long long j) {
  return new QList< QTextFormat >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator_6(QList< double >::iterator const * this_ptr, long long j) {
  return new QList< double >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_6(QList< QTextOption::Tab >::iterator const * this_ptr, long long j) {
  return new QList< QTextOption::Tab >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_6(QList< QTextLength >::iterator const * this_ptr, long long j) {
  return new QList< QTextLength >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_6(QList< QTextLayout::FormatRange >::iterator const * this_ptr, long long j) {
  return new QList< QTextLayout::FormatRange >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_6(QList< QGlyphRun >::iterator const * this_ptr, long long j) {
  return new QList< QGlyphRun >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_6(QList< QAccessibleInterface * >::iterator const * this_ptr, long long j) {
  return new QList< QAccessibleInterface * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_6(QList< QAccessible::Attribute >::iterator const * this_ptr, long long j) {
  return new QList< QAccessible::Attribute >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_6(QList< QAction * >::iterator const * this_ptr, long long j) {
  return new QList< QAction * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_6(QList< unsigned short >::iterator const * this_ptr, long long j) {
  return new QList< unsigned short >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_6(QList< QFontVariableAxis >::iterator const * this_ptr, long long j) {
  return new QList< QFontVariableAxis >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_6(QList< QOpenGLContext * >::iterator const * this_ptr, long long j) {
  return new QList< QOpenGLContext * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_6(QList< QPageRanges::Range >::iterator const * this_ptr, long long j) {
  return new QList< QPageRanges::Range >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator_6(QList< QLineF >::iterator const * this_ptr, long long j) {
  return new QList< QLineF >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator_6(QList< QLine >::iterator const * this_ptr, long long j) {
  return new QList< QLine >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator_6(QList< QRectF >::iterator const * this_ptr, long long j) {
  return new QList< QRectF >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator_6(QList< QRect >::iterator const * this_ptr, long long j) {
  return new QList< QRect >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_6(QList< QPolygonF >::iterator const * this_ptr, long long j) {
  return new QList< QPolygonF >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_6(QList< QStandardItem * >::iterator const * this_ptr, long long j) {
  return new QList< QStandardItem * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_6(QList< QTextBlock >::iterator const * this_ptr, long long j) {
  return new QList< QTextBlock >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_6(QList< QTextFrame * >::iterator const * this_ptr, long long j) {
  return new QList< QTextFrame * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_6(QList< QUndoStack * >::iterator const * this_ptr, long long j) {
  return new QList< QUndoStack * >::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QList< QPoint >::iterator * ctr_qt_gui_ffi_QList_QPoint_iterator_operator_7(QList< QPoint >::iterator const * this_ptr, long long j) {
  return new QList< QPoint >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QEventPoint >::iterator * ctr_qt_gui_ffi_QList_QEventPoint_iterator_operator_7(QList< QEventPoint >::iterator const * this_ptr, long long j) {
  return new QList< QEventPoint >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_iterator_operator_7(QList< QInputMethodEvent::Attribute >::iterator const * this_ptr, long long j) {
  return new QList< QInputMethodEvent::Attribute >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_iterator_operator_7(QList< QAbstractTextDocumentLayout::Selection >::iterator const * this_ptr, long long j) {
  return new QList< QAbstractTextDocumentLayout::Selection >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QSize >::iterator * ctr_qt_gui_ffi_QList_QSize_iterator_operator_7(QList< QSize >::iterator const * this_ptr, long long j) {
  return new QList< QSize >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QScreen * >::iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_iterator_operator_7(QList< QScreen * >::iterator const * this_ptr, long long j) {
  return new QList< QScreen * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QWindow * >::iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_iterator_operator_7(QList< QWindow * >::iterator const * this_ptr, long long j) {
  return new QList< QWindow * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QInputDevice const * >::iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_iterator_operator_7(QList< QInputDevice const * >::iterator const * this_ptr, long long j) {
  return new QList< QInputDevice const * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QKeySequence >::iterator * ctr_qt_gui_ffi_QList_QKeySequence_iterator_operator_7(QList< QKeySequence >::iterator const * this_ptr, long long j) {
  return new QList< QKeySequence >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QPointer< QObject > >::iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_iterator_operator_7(QList< QPointer< QObject > >::iterator const * this_ptr, long long j) {
  return new QList< QPointer< QObject > >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QFont::Tag >::iterator * ctr_qt_gui_ffi_QList_QFont_Tag_iterator_operator_7(QList< QFont::Tag >::iterator const * this_ptr, long long j) {
  return new QList< QFont::Tag >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_iterator_operator_7(QList< QFontDatabase::WritingSystem >::iterator const * this_ptr, long long j) {
  return new QList< QFontDatabase::WritingSystem >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< long long >::iterator * ctr_qt_gui_ffi_QList_long_long_iterator_operator_7(QList< long long >::iterator const * this_ptr, long long j) {
  return new QList< long long >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QTextFormat >::iterator * ctr_qt_gui_ffi_QList_QTextFormat_iterator_operator_7(QList< QTextFormat >::iterator const * this_ptr, long long j) {
  return new QList< QTextFormat >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< double >::iterator * ctr_qt_gui_ffi_QList_double_iterator_operator_7(QList< double >::iterator const * this_ptr, long long j) {
  return new QList< double >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QTextOption::Tab >::iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_iterator_operator_7(QList< QTextOption::Tab >::iterator const * this_ptr, long long j) {
  return new QList< QTextOption::Tab >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QTextLength >::iterator * ctr_qt_gui_ffi_QList_QTextLength_iterator_operator_7(QList< QTextLength >::iterator const * this_ptr, long long j) {
  return new QList< QTextLength >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_iterator_operator_7(QList< QTextLayout::FormatRange >::iterator const * this_ptr, long long j) {
  return new QList< QTextLayout::FormatRange >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QGlyphRun >::iterator * ctr_qt_gui_ffi_QList_QGlyphRun_iterator_operator_7(QList< QGlyphRun >::iterator const * this_ptr, long long j) {
  return new QList< QGlyphRun >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QAccessibleInterface * >::iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_iterator_operator_7(QList< QAccessibleInterface * >::iterator const * this_ptr, long long j) {
  return new QList< QAccessibleInterface * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QAccessible::Attribute >::iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_iterator_operator_7(QList< QAccessible::Attribute >::iterator const * this_ptr, long long j) {
  return new QList< QAccessible::Attribute >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QAction * >::iterator * ctr_qt_gui_ffi_QList_QAction_ptr_iterator_operator_7(QList< QAction * >::iterator const * this_ptr, long long j) {
  return new QList< QAction * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< unsigned short >::iterator * ctr_qt_gui_ffi_QList_unsigned_short_iterator_operator_7(QList< unsigned short >::iterator const * this_ptr, long long j) {
  return new QList< unsigned short >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QFontVariableAxis >::iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_iterator_operator_7(QList< QFontVariableAxis >::iterator const * this_ptr, long long j) {
  return new QList< QFontVariableAxis >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QOpenGLContext * >::iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_iterator_operator_7(QList< QOpenGLContext * >::iterator const * this_ptr, long long j) {
  return new QList< QOpenGLContext * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QPageRanges::Range >::iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_iterator_operator_7(QList< QPageRanges::Range >::iterator const * this_ptr, long long j) {
  return new QList< QPageRanges::Range >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QLineF >::iterator * ctr_qt_gui_ffi_QList_QLineF_iterator_operator_7(QList< QLineF >::iterator const * this_ptr, long long j) {
  return new QList< QLineF >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QLine >::iterator * ctr_qt_gui_ffi_QList_QLine_iterator_operator_7(QList< QLine >::iterator const * this_ptr, long long j) {
  return new QList< QLine >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QRectF >::iterator * ctr_qt_gui_ffi_QList_QRectF_iterator_operator_7(QList< QRectF >::iterator const * this_ptr, long long j) {
  return new QList< QRectF >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QRect >::iterator * ctr_qt_gui_ffi_QList_QRect_iterator_operator_7(QList< QRect >::iterator const * this_ptr, long long j) {
  return new QList< QRect >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QPolygonF >::iterator * ctr_qt_gui_ffi_QList_QPolygonF_iterator_operator_7(QList< QPolygonF >::iterator const * this_ptr, long long j) {
  return new QList< QPolygonF >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QStandardItem * >::iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_iterator_operator_7(QList< QStandardItem * >::iterator const * this_ptr, long long j) {
  return new QList< QStandardItem * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QTextBlock >::iterator * ctr_qt_gui_ffi_QList_QTextBlock_iterator_operator_7(QList< QTextBlock >::iterator const * this_ptr, long long j) {
  return new QList< QTextBlock >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QTextFrame * >::iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_iterator_operator_7(QList< QTextFrame * >::iterator const * this_ptr, long long j) {
  return new QList< QTextFrame * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QUndoStack * >::iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_iterator_operator_7(QList< QUndoStack * >::iterator const * this_ptr, long long j) {
  return new QList< QUndoStack * >::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QList< QPoint >::const_iterator * ctr_qt_gui_ffi_QList_QPoint_const_iterator_const_iterator() {
  return new QList< QPoint >::const_iterator();
}


RITUAL_EXPORT QList< QEventPoint >::const_iterator * ctr_qt_gui_ffi_QList_QEventPoint_const_iterator_const_iterator() {
  return new QList< QEventPoint >::const_iterator();
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::const_iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_const_iterator_const_iterator() {
  return new QList< QInputMethodEvent::Attribute >::const_iterator();
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::const_iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_const_iterator_const_iterator() {
  return new QList< QAbstractTextDocumentLayout::Selection >::const_iterator();
}


RITUAL_EXPORT QList< QSize >::const_iterator * ctr_qt_gui_ffi_QList_QSize_const_iterator_const_iterator() {
  return new QList< QSize >::const_iterator();
}


RITUAL_EXPORT QList< QScreen * >::const_iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_const_iterator_const_iterator() {
  return new QList< QScreen * >::const_iterator();
}


RITUAL_EXPORT QList< QWindow * >::const_iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_const_iterator_const_iterator() {
  return new QList< QWindow * >::const_iterator();
}


RITUAL_EXPORT QList< QInputDevice const * >::const_iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_const_iterator_const_iterator() {
  return new QList< QInputDevice const * >::const_iterator();
}


RITUAL_EXPORT QList< QKeySequence >::const_iterator * ctr_qt_gui_ffi_QList_QKeySequence_const_iterator_const_iterator() {
  return new QList< QKeySequence >::const_iterator();
}


RITUAL_EXPORT QList< QPointer< QObject > >::const_iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_const_iterator_const_iterator() {
  return new QList< QPointer< QObject > >::const_iterator();
}


RITUAL_EXPORT QList< QFont::Tag >::const_iterator * ctr_qt_gui_ffi_QList_QFont_Tag_const_iterator_const_iterator() {
  return new QList< QFont::Tag >::const_iterator();
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::const_iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_const_iterator_const_iterator() {
  return new QList< QFontDatabase::WritingSystem >::const_iterator();
}


RITUAL_EXPORT QList< long long >::const_iterator * ctr_qt_gui_ffi_QList_long_long_const_iterator_const_iterator() {
  return new QList< long long >::const_iterator();
}


RITUAL_EXPORT QList< QTextFormat >::const_iterator * ctr_qt_gui_ffi_QList_QTextFormat_const_iterator_const_iterator() {
  return new QList< QTextFormat >::const_iterator();
}


RITUAL_EXPORT QList< double >::const_iterator * ctr_qt_gui_ffi_QList_double_const_iterator_const_iterator() {
  return new QList< double >::const_iterator();
}


RITUAL_EXPORT QList< QTextOption::Tab >::const_iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_const_iterator_const_iterator() {
  return new QList< QTextOption::Tab >::const_iterator();
}


RITUAL_EXPORT QList< QTextLength >::const_iterator * ctr_qt_gui_ffi_QList_QTextLength_const_iterator_const_iterator() {
  return new QList< QTextLength >::const_iterator();
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::const_iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_const_iterator_const_iterator() {
  return new QList< QTextLayout::FormatRange >::const_iterator();
}


RITUAL_EXPORT QList< QGlyphRun >::const_iterator * ctr_qt_gui_ffi_QList_QGlyphRun_const_iterator_const_iterator() {
  return new QList< QGlyphRun >::const_iterator();
}


RITUAL_EXPORT QList< QAccessibleInterface * >::const_iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_const_iterator_const_iterator() {
  return new QList< QAccessibleInterface * >::const_iterator();
}


RITUAL_EXPORT QList< QAccessible::Attribute >::const_iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_const_iterator_const_iterator() {
  return new QList< QAccessible::Attribute >::const_iterator();
}


RITUAL_EXPORT QList< QAction * >::const_iterator * ctr_qt_gui_ffi_QList_QAction_ptr_const_iterator_const_iterator() {
  return new QList< QAction * >::const_iterator();
}


RITUAL_EXPORT QList< unsigned short >::const_iterator * ctr_qt_gui_ffi_QList_unsigned_short_const_iterator_const_iterator() {
  return new QList< unsigned short >::const_iterator();
}


RITUAL_EXPORT QList< QFontVariableAxis >::const_iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_const_iterator_const_iterator() {
  return new QList< QFontVariableAxis >::const_iterator();
}


RITUAL_EXPORT QList< QOpenGLContext * >::const_iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_const_iterator_const_iterator() {
  return new QList< QOpenGLContext * >::const_iterator();
}


RITUAL_EXPORT QList< QPageRanges::Range >::const_iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_const_iterator_const_iterator() {
  return new QList< QPageRanges::Range >::const_iterator();
}


RITUAL_EXPORT QList< QLineF >::const_iterator * ctr_qt_gui_ffi_QList_QLineF_const_iterator_const_iterator() {
  return new QList< QLineF >::const_iterator();
}


RITUAL_EXPORT QList< QLine >::const_iterator * ctr_qt_gui_ffi_QList_QLine_const_iterator_const_iterator() {
  return new QList< QLine >::const_iterator();
}


RITUAL_EXPORT QList< QRectF >::const_iterator * ctr_qt_gui_ffi_QList_QRectF_const_iterator_const_iterator() {
  return new QList< QRectF >::const_iterator();
}


RITUAL_EXPORT QList< QRect >::const_iterator * ctr_qt_gui_ffi_QList_QRect_const_iterator_const_iterator() {
  return new QList< QRect >::const_iterator();
}


RITUAL_EXPORT QList< QPolygonF >::const_iterator * ctr_qt_gui_ffi_QList_QPolygonF_const_iterator_const_iterator() {
  return new QList< QPolygonF >::const_iterator();
}


RITUAL_EXPORT QList< QStandardItem * >::const_iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_const_iterator_const_iterator() {
  return new QList< QStandardItem * >::const_iterator();
}


RITUAL_EXPORT QList< QTextBlock >::const_iterator * ctr_qt_gui_ffi_QList_QTextBlock_const_iterator_const_iterator() {
  return new QList< QTextBlock >::const_iterator();
}


RITUAL_EXPORT QList< QTextFrame * >::const_iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_const_iterator_const_iterator() {
  return new QList< QTextFrame * >::const_iterator();
}


RITUAL_EXPORT QList< QUndoStack * >::const_iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_const_iterator_const_iterator() {
  return new QList< QUndoStack * >::const_iterator();
}


RITUAL_EXPORT QList< QPoint >::const_iterator * ctr_qt_gui_ffi_QList_QPoint_const_iterator_const_iterator1(QList< QPoint >::iterator const * o) {
  return new QList< QPoint >::const_iterator(*o);
}


RITUAL_EXPORT QList< QEventPoint >::const_iterator * ctr_qt_gui_ffi_QList_QEventPoint_const_iterator_const_iterator1(QList< QEventPoint >::iterator const * o) {
  return new QList< QEventPoint >::const_iterator(*o);
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute >::const_iterator * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_const_iterator_const_iterator1(QList< QInputMethodEvent::Attribute >::iterator const * o) {
  return new QList< QInputMethodEvent::Attribute >::const_iterator(*o);
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection >::const_iterator * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_const_iterator_const_iterator1(QList< QAbstractTextDocumentLayout::Selection >::iterator const * o) {
  return new QList< QAbstractTextDocumentLayout::Selection >::const_iterator(*o);
}


RITUAL_EXPORT QList< QSize >::const_iterator * ctr_qt_gui_ffi_QList_QSize_const_iterator_const_iterator1(QList< QSize >::iterator const * o) {
  return new QList< QSize >::const_iterator(*o);
}


RITUAL_EXPORT QList< QScreen * >::const_iterator * ctr_qt_gui_ffi_QList_QScreen_ptr_const_iterator_const_iterator1(QList< QScreen * >::iterator const * o) {
  return new QList< QScreen * >::const_iterator(*o);
}


RITUAL_EXPORT QList< QWindow * >::const_iterator * ctr_qt_gui_ffi_QList_QWindow_ptr_const_iterator_const_iterator1(QList< QWindow * >::iterator const * o) {
  return new QList< QWindow * >::const_iterator(*o);
}


RITUAL_EXPORT QList< QInputDevice const * >::const_iterator * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_const_iterator_const_iterator1(QList< QInputDevice const * >::iterator const * o) {
  return new QList< QInputDevice const * >::const_iterator(*o);
}


RITUAL_EXPORT QList< QKeySequence >::const_iterator * ctr_qt_gui_ffi_QList_QKeySequence_const_iterator_const_iterator1(QList< QKeySequence >::iterator const * o) {
  return new QList< QKeySequence >::const_iterator(*o);
}


RITUAL_EXPORT QList< QPointer< QObject > >::const_iterator * ctr_qt_gui_ffi_QList_QPointer_QObject_const_iterator_const_iterator1(QList< QPointer< QObject > >::iterator const * o) {
  return new QList< QPointer< QObject > >::const_iterator(*o);
}


RITUAL_EXPORT QList< QFont::Tag >::const_iterator * ctr_qt_gui_ffi_QList_QFont_Tag_const_iterator_const_iterator1(QList< QFont::Tag >::iterator const * o) {
  return new QList< QFont::Tag >::const_iterator(*o);
}


RITUAL_EXPORT QList< QFontDatabase::WritingSystem >::const_iterator * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_const_iterator_const_iterator1(QList< QFontDatabase::WritingSystem >::iterator const * o) {
  return new QList< QFontDatabase::WritingSystem >::const_iterator(*o);
}


RITUAL_EXPORT QList< long long >::const_iterator * ctr_qt_gui_ffi_QList_long_long_const_iterator_const_iterator1(QList< long long >::iterator const * o) {
  return new QList< long long >::const_iterator(*o);
}


RITUAL_EXPORT QList< QTextFormat >::const_iterator * ctr_qt_gui_ffi_QList_QTextFormat_const_iterator_const_iterator1(QList< QTextFormat >::iterator const * o) {
  return new QList< QTextFormat >::const_iterator(*o);
}


RITUAL_EXPORT QList< double >::const_iterator * ctr_qt_gui_ffi_QList_double_const_iterator_const_iterator1(QList< double >::iterator const * o) {
  return new QList< double >::const_iterator(*o);
}


RITUAL_EXPORT QList< QTextOption::Tab >::const_iterator * ctr_qt_gui_ffi_QList_QTextOption_Tab_const_iterator_const_iterator1(QList< QTextOption::Tab >::iterator const * o) {
  return new QList< QTextOption::Tab >::const_iterator(*o);
}


RITUAL_EXPORT QList< QTextLength >::const_iterator * ctr_qt_gui_ffi_QList_QTextLength_const_iterator_const_iterator1(QList< QTextLength >::iterator const * o) {
  return new QList< QTextLength >::const_iterator(*o);
}


RITUAL_EXPORT QList< QTextLayout::FormatRange >::const_iterator * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_const_iterator_const_iterator1(QList< QTextLayout::FormatRange >::iterator const * o) {
  return new QList< QTextLayout::FormatRange >::const_iterator(*o);
}


RITUAL_EXPORT QList< QGlyphRun >::const_iterator * ctr_qt_gui_ffi_QList_QGlyphRun_const_iterator_const_iterator1(QList< QGlyphRun >::iterator const * o) {
  return new QList< QGlyphRun >::const_iterator(*o);
}


RITUAL_EXPORT QList< QAccessibleInterface * >::const_iterator * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_const_iterator_const_iterator1(QList< QAccessibleInterface * >::iterator const * o) {
  return new QList< QAccessibleInterface * >::const_iterator(*o);
}


RITUAL_EXPORT QList< QAccessible::Attribute >::const_iterator * ctr_qt_gui_ffi_QList_QAccessible_Attribute_const_iterator_const_iterator1(QList< QAccessible::Attribute >::iterator const * o) {
  return new QList< QAccessible::Attribute >::const_iterator(*o);
}


RITUAL_EXPORT QList< QAction * >::const_iterator * ctr_qt_gui_ffi_QList_QAction_ptr_const_iterator_const_iterator1(QList< QAction * >::iterator const * o) {
  return new QList< QAction * >::const_iterator(*o);
}


RITUAL_EXPORT QList< unsigned short >::const_iterator * ctr_qt_gui_ffi_QList_unsigned_short_const_iterator_const_iterator1(QList< unsigned short >::iterator const * o) {
  return new QList< unsigned short >::const_iterator(*o);
}


RITUAL_EXPORT QList< QFontVariableAxis >::const_iterator * ctr_qt_gui_ffi_QList_QFontVariableAxis_const_iterator_const_iterator1(QList< QFontVariableAxis >::iterator const * o) {
  return new QList< QFontVariableAxis >::const_iterator(*o);
}


RITUAL_EXPORT QList< QOpenGLContext * >::const_iterator * ctr_qt_gui_ffi_QList_QOpenGLContext_ptr_const_iterator_const_iterator1(QList< QOpenGLContext * >::iterator const * o) {
  return new QList< QOpenGLContext * >::const_iterator(*o);
}


RITUAL_EXPORT QList< QPageRanges::Range >::const_iterator * ctr_qt_gui_ffi_QList_QPageRanges_Range_const_iterator_const_iterator1(QList< QPageRanges::Range >::iterator const * o) {
  return new QList< QPageRanges::Range >::const_iterator(*o);
}


RITUAL_EXPORT QList< QLineF >::const_iterator * ctr_qt_gui_ffi_QList_QLineF_const_iterator_const_iterator1(QList< QLineF >::iterator const * o) {
  return new QList< QLineF >::const_iterator(*o);
}


RITUAL_EXPORT QList< QLine >::const_iterator * ctr_qt_gui_ffi_QList_QLine_const_iterator_const_iterator1(QList< QLine >::iterator const * o) {
  return new QList< QLine >::const_iterator(*o);
}


RITUAL_EXPORT QList< QRectF >::const_iterator * ctr_qt_gui_ffi_QList_QRectF_const_iterator_const_iterator1(QList< QRectF >::iterator const * o) {
  return new QList< QRectF >::const_iterator(*o);
}


RITUAL_EXPORT QList< QRect >::const_iterator * ctr_qt_gui_ffi_QList_QRect_const_iterator_const_iterator1(QList< QRect >::iterator const * o) {
  return new QList< QRect >::const_iterator(*o);
}


RITUAL_EXPORT QList< QPolygonF >::const_iterator * ctr_qt_gui_ffi_QList_QPolygonF_const_iterator_const_iterator1(QList< QPolygonF >::iterator const * o) {
  return new QList< QPolygonF >::const_iterator(*o);
}


RITUAL_EXPORT QList< QStandardItem * >::const_iterator * ctr_qt_gui_ffi_QList_QStandardItem_ptr_const_iterator_const_iterator1(QList< QStandardItem * >::iterator const * o) {
  return new QList< QStandardItem * >::const_iterator(*o);
}


RITUAL_EXPORT QList< QTextBlock >::const_iterator * ctr_qt_gui_ffi_QList_QTextBlock_const_iterator_const_iterator1(QList< QTextBlock >::iterator const * o) {
  return new QList< QTextBlock >::const_iterator(*o);
}


RITUAL_EXPORT QList< QTextFrame * >::const_iterator * ctr_qt_gui_ffi_QList_QTextFrame_ptr_const_iterator_const_iterator1(QList< QTextFrame * >::iterator const * o) {
  return new QList< QTextFrame * >::const_iterator(*o);
}


RITUAL_EXPORT QList< QUndoStack * >::const_iterator * ctr_qt_gui_ffi_QList_QUndoStack_ptr_const_iterator_const_iterator1(QList< QUndoStack * >::iterator const * o) {
  return new QList< QUndoStack * >::const_iterator(*o);
}


RITUAL_EXPORT QPoint const * ctr_qt_gui_ffi_QList_QPoint_const_iterator_operator_(QList< QPoint >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QEventPoint const * ctr_qt_gui_ffi_QList_QEventPoint_const_iterator_operator_(QList< QEventPoint >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QInputMethodEvent::Attribute const * ctr_qt_gui_ffi_QList_QInputMethodEvent_Attribute_const_iterator_operator_(QList< QInputMethodEvent::Attribute >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAbstractTextDocumentLayout::Selection const * ctr_qt_gui_ffi_QList_QAbstractTextDocumentLayout_Selection_const_iterator_operator_(QList< QAbstractTextDocumentLayout::Selection >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QSize const * ctr_qt_gui_ffi_QList_QSize_const_iterator_operator_(QList< QSize >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QScreen * const * ctr_qt_gui_ffi_QList_QScreen_ptr_const_iterator_operator_(QList< QScreen * >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QWindow * const * ctr_qt_gui_ffi_QList_QWindow_ptr_const_iterator_operator_(QList< QWindow * >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QInputDevice const * const * ctr_qt_gui_ffi_QList_QInputDevice_const_ptr_const_iterator_operator_(QList< QInputDevice const * >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QKeySequence const * ctr_qt_gui_ffi_QList_QKeySequence_const_iterator_operator_(QList< QKeySequence >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QPointer< QObject > const * ctr_qt_gui_ffi_QList_QPointer_QObject_const_iterator_operator_(QList< QPointer< QObject > >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QFont::Tag const * ctr_qt_gui_ffi_QList_QFont_Tag_const_iterator_operator_(QList< QFont::Tag >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QFontDatabase::WritingSystem const * ctr_qt_gui_ffi_QList_QFontDatabase_WritingSystem_const_iterator_operator_(QList< QFontDatabase::WritingSystem >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT long long const * ctr_qt_gui_ffi_QList_long_long_const_iterator_operator_(QList< long long >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextFormat const * ctr_qt_gui_ffi_QList_QTextFormat_const_iterator_operator_(QList< QTextFormat >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT double const * ctr_qt_gui_ffi_QList_double_const_iterator_operator_(QList< double >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextOption::Tab const * ctr_qt_gui_ffi_QList_QTextOption_Tab_const_iterator_operator_(QList< QTextOption::Tab >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextLength const * ctr_qt_gui_ffi_QList_QTextLength_const_iterator_operator_(QList< QTextLength >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTextLayout::FormatRange const * ctr_qt_gui_ffi_QList_QTextLayout_FormatRange_const_iterator_operator_(QList< QTextLayout::FormatRange >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QGlyphRun const * ctr_qt_gui_ffi_QList_QGlyphRun_const_iterator_operator_(QList< QGlyphRun >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAccessibleInterface * const * ctr_qt_gui_ffi_QList_QAccessibleInterface_ptr_const_iterator_operator_(QList< QAccessibleInterface * >::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


} // extern "C"
