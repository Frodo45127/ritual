#include "qt_gui_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QImage_staticMetaObject() {
  return &QImage::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QScreen_staticMetaObject() {
  return &QScreen::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QInputMethod_staticMetaObject() {
  return &QInputMethod::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QGuiApplication_staticMetaObject() {
  return &QGuiApplication::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QInputDevice_staticMetaObject() {
  return &QInputDevice::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPointingDeviceUniqueId_staticMetaObject() {
  return &QPointingDeviceUniqueId::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPointingDevice_staticMetaObject() {
  return &QPointingDevice::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QEventPoint_staticMetaObject() {
  return &QEventPoint::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QKeySequence_staticMetaObject() {
  return &QKeySequence::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPointerEvent_staticMetaObject() {
  return &QPointerEvent::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QSinglePointEvent_staticMetaObject() {
  return &QSinglePointEvent::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QWheelEvent_staticMetaObject() {
  return &QWheelEvent::staticMetaObject;
}


RITUAL_EXPORT QInputMethodEvent::AttributeType ctr_qt_gui_ffi_QInputMethodEvent_Attribute_type(QInputMethodEvent::Attribute const * this_ptr) {
  return this_ptr->type;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QInputMethodEvent_Attribute_type(QInputMethodEvent::Attribute * this_ptr, QInputMethodEvent::AttributeType value) {
  this_ptr->type = value;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputMethodEvent_Attribute_start(QInputMethodEvent::Attribute const * this_ptr) {
  return this_ptr->start;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QInputMethodEvent_Attribute_start(QInputMethodEvent::Attribute * this_ptr, int value) {
  this_ptr->start = value;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputMethodEvent_Attribute_length(QInputMethodEvent::Attribute const * this_ptr) {
  return this_ptr->length;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QInputMethodEvent_Attribute_length(QInputMethodEvent::Attribute * this_ptr, int value) {
  this_ptr->length = value;
}


RITUAL_EXPORT QVariant const * ctr_qt_gui_ffi_QInputMethodEvent_Attribute_value(QInputMethodEvent::Attribute const * this_ptr) {
  return &this_ptr->value;
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QInputMethodEvent_Attribute_value_mut(QInputMethodEvent::Attribute * this_ptr) {
  return &this_ptr->value;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QInputMethodEvent_Attribute_value(QInputMethodEvent::Attribute * this_ptr, QVariant const * value) {
  this_ptr->value = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QFont_staticMetaObject() {
  return &QFont::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QFontDatabase_staticMetaObject() {
  return &QFontDatabase::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextDocument_staticMetaObject() {
  return &QTextDocument::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QGradient_staticMetaObject() {
  return &QGradient::staticMetaObject;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTextOption_Tab_position(QTextOption::Tab const * this_ptr) {
  return this_ptr->position;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QTextOption_Tab_position(QTextOption::Tab * this_ptr, double value) {
  this_ptr->position = value;
}


RITUAL_EXPORT QTextOption::TabType ctr_qt_gui_ffi_QTextOption_Tab_type(QTextOption::Tab const * this_ptr) {
  return this_ptr->type;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QTextOption_Tab_type(QTextOption::Tab * this_ptr, QTextOption::TabType value) {
  this_ptr->type = value;
}


RITUAL_EXPORT QChar const * ctr_qt_gui_ffi_QTextOption_Tab_delimiter(QTextOption::Tab const * this_ptr) {
  return &this_ptr->delimiter;
}


RITUAL_EXPORT QChar * ctr_qt_gui_ffi_QTextOption_Tab_delimiter_mut(QTextOption::Tab * this_ptr) {
  return &this_ptr->delimiter;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QTextOption_Tab_delimiter(QTextOption::Tab * this_ptr, QChar const * value) {
  this_ptr->delimiter = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextFormat_staticMetaObject() {
  return &QTextFormat::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_FormatRange_start(QTextLayout::FormatRange const * this_ptr) {
  return this_ptr->start;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QTextLayout_FormatRange_start(QTextLayout::FormatRange * this_ptr, int value) {
  this_ptr->start = value;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTextLayout_FormatRange_length(QTextLayout::FormatRange const * this_ptr) {
  return this_ptr->length;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QTextLayout_FormatRange_length(QTextLayout::FormatRange * this_ptr, int value) {
  this_ptr->length = value;
}


RITUAL_EXPORT QTextCharFormat const * ctr_qt_gui_ffi_QTextLayout_FormatRange_format(QTextLayout::FormatRange const * this_ptr) {
  return &this_ptr->format;
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QTextLayout_FormatRange_format_mut(QTextLayout::FormatRange * this_ptr) {
  return &this_ptr->format;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QTextLayout_FormatRange_format(QTextLayout::FormatRange * this_ptr, QTextCharFormat const * value) {
  this_ptr->format = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPalette_staticMetaObject() {
  return &QPalette::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_staticMetaObject() {
  return &QAbstractTextDocumentLayout::staticMetaObject;
}


RITUAL_EXPORT QTextCursor const * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_cursor(QAbstractTextDocumentLayout::Selection const * this_ptr) {
  return &this_ptr->cursor;
}


RITUAL_EXPORT QTextCursor * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_cursor_mut(QAbstractTextDocumentLayout::Selection * this_ptr) {
  return &this_ptr->cursor;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAbstractTextDocumentLayout_Selection_cursor(QAbstractTextDocumentLayout::Selection * this_ptr, QTextCursor const * value) {
  this_ptr->cursor = *value;
}


RITUAL_EXPORT QTextCharFormat const * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_format(QAbstractTextDocumentLayout::Selection const * this_ptr) {
  return &this_ptr->format;
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_Selection_format_mut(QAbstractTextDocumentLayout::Selection * this_ptr) {
  return &this_ptr->format;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAbstractTextDocumentLayout_Selection_format(QAbstractTextDocumentLayout::Selection * this_ptr, QTextCharFormat const * value) {
  this_ptr->format = *value;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_cursorPosition(QAbstractTextDocumentLayout::PaintContext const * this_ptr) {
  return this_ptr->cursorPosition;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAbstractTextDocumentLayout_PaintContext_cursorPosition(QAbstractTextDocumentLayout::PaintContext * this_ptr, int value) {
  this_ptr->cursorPosition = value;
}


RITUAL_EXPORT QPalette const * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_palette(QAbstractTextDocumentLayout::PaintContext const * this_ptr) {
  return &this_ptr->palette;
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_palette_mut(QAbstractTextDocumentLayout::PaintContext * this_ptr) {
  return &this_ptr->palette;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAbstractTextDocumentLayout_PaintContext_palette(QAbstractTextDocumentLayout::PaintContext * this_ptr, QPalette const * value) {
  this_ptr->palette = *value;
}


RITUAL_EXPORT QRectF const * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_clip(QAbstractTextDocumentLayout::PaintContext const * this_ptr) {
  return &this_ptr->clip;
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_clip_mut(QAbstractTextDocumentLayout::PaintContext * this_ptr) {
  return &this_ptr->clip;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAbstractTextDocumentLayout_PaintContext_clip(QAbstractTextDocumentLayout::PaintContext * this_ptr, QRectF const * value) {
  this_ptr->clip = *value;
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection > const * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_selections(QAbstractTextDocumentLayout::PaintContext const * this_ptr) {
  return &this_ptr->selections;
}


RITUAL_EXPORT QList< QAbstractTextDocumentLayout::Selection > * ctr_qt_gui_ffi_QAbstractTextDocumentLayout_PaintContext_selections_mut(QAbstractTextDocumentLayout::PaintContext * this_ptr) {
  return &this_ptr->selections;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAbstractTextDocumentLayout_PaintContext_selections(QAbstractTextDocumentLayout::PaintContext * this_ptr, QList< QAbstractTextDocumentLayout::Selection > const * value) {
  this_ptr->selections = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAccessibilityHints_staticMetaObject() {
  return &QAccessibilityHints::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAccessible_staticMetaObject() {
  return &QAccessible::staticMetaObject;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_disabled(QAccessible::State const * this_ptr) {
  return this_ptr->disabled;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_disabled(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->disabled = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_selected(QAccessible::State const * this_ptr) {
  return this_ptr->selected;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_selected(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->selected = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_focusable(QAccessible::State const * this_ptr) {
  return this_ptr->focusable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_focusable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->focusable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_focused(QAccessible::State const * this_ptr) {
  return this_ptr->focused;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_focused(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->focused = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_pressed(QAccessible::State const * this_ptr) {
  return this_ptr->pressed;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_pressed(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->pressed = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_checkable(QAccessible::State const * this_ptr) {
  return this_ptr->checkable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_checkable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->checkable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_checked(QAccessible::State const * this_ptr) {
  return this_ptr->checked;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_checked(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->checked = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_checkStateMixed(QAccessible::State const * this_ptr) {
  return this_ptr->checkStateMixed;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_checkStateMixed(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->checkStateMixed = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_readOnly(QAccessible::State const * this_ptr) {
  return this_ptr->readOnly;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_readOnly(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->readOnly = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_hotTracked(QAccessible::State const * this_ptr) {
  return this_ptr->hotTracked;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_hotTracked(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->hotTracked = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_defaultButton(QAccessible::State const * this_ptr) {
  return this_ptr->defaultButton;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_defaultButton(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->defaultButton = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_expanded(QAccessible::State const * this_ptr) {
  return this_ptr->expanded;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_expanded(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->expanded = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_collapsed(QAccessible::State const * this_ptr) {
  return this_ptr->collapsed;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_collapsed(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->collapsed = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_busy(QAccessible::State const * this_ptr) {
  return this_ptr->busy;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_busy(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->busy = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_expandable(QAccessible::State const * this_ptr) {
  return this_ptr->expandable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_expandable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->expandable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_marqueed(QAccessible::State const * this_ptr) {
  return this_ptr->marqueed;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_marqueed(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->marqueed = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_animated(QAccessible::State const * this_ptr) {
  return this_ptr->animated;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_animated(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->animated = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_invisible(QAccessible::State const * this_ptr) {
  return this_ptr->invisible;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_invisible(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->invisible = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_offscreen(QAccessible::State const * this_ptr) {
  return this_ptr->offscreen;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_offscreen(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->offscreen = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_sizeable(QAccessible::State const * this_ptr) {
  return this_ptr->sizeable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_sizeable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->sizeable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_movable(QAccessible::State const * this_ptr) {
  return this_ptr->movable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_movable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->movable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_selfVoicing(QAccessible::State const * this_ptr) {
  return this_ptr->selfVoicing;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_selfVoicing(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->selfVoicing = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_selectable(QAccessible::State const * this_ptr) {
  return this_ptr->selectable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_selectable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->selectable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_linked(QAccessible::State const * this_ptr) {
  return this_ptr->linked;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_linked(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->linked = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_traversed(QAccessible::State const * this_ptr) {
  return this_ptr->traversed;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_traversed(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->traversed = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_multiSelectable(QAccessible::State const * this_ptr) {
  return this_ptr->multiSelectable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_multiSelectable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->multiSelectable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_extSelectable(QAccessible::State const * this_ptr) {
  return this_ptr->extSelectable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_extSelectable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->extSelectable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_passwordEdit(QAccessible::State const * this_ptr) {
  return this_ptr->passwordEdit;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_passwordEdit(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->passwordEdit = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_hasPopup(QAccessible::State const * this_ptr) {
  return this_ptr->hasPopup;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_hasPopup(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->hasPopup = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_modal(QAccessible::State const * this_ptr) {
  return this_ptr->modal;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_modal(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->modal = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_active(QAccessible::State const * this_ptr) {
  return this_ptr->active;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_active(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->active = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_invalid(QAccessible::State const * this_ptr) {
  return this_ptr->invalid;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_invalid(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->invalid = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_editable(QAccessible::State const * this_ptr) {
  return this_ptr->editable;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_editable(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->editable = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_multiLine(QAccessible::State const * this_ptr) {
  return this_ptr->multiLine;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_multiLine(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->multiLine = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_selectableText(QAccessible::State const * this_ptr) {
  return this_ptr->selectableText;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_selectableText(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->selectableText = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_supportsAutoCompletion(QAccessible::State const * this_ptr) {
  return this_ptr->supportsAutoCompletion;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_supportsAutoCompletion(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->supportsAutoCompletion = value;
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QAccessible_State_searchEdit(QAccessible::State const * this_ptr) {
  return this_ptr->searchEdit;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QAccessible_State_searchEdit(QAccessible::State * this_ptr, unsigned long long value) {
  this_ptr->searchEdit = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAccessiblePlugin_staticMetaObject() {
  return &QAccessiblePlugin::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QAction_staticMetaObject() {
  return &QAction::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QActionGroup_staticMetaObject() {
  return &QActionGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QSurfaceFormat_staticMetaObject() {
  return &QSurfaceFormat::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QSurface_staticMetaObject() {
  return &QSurface::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QWindow_staticMetaObject() {
  return &QWindow::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QClipboard_staticMetaObject() {
  return &QClipboard::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QColorSpace_staticMetaObject() {
  return &QColorSpace::staticMetaObject;
}


RITUAL_EXPORT QPointF const * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_whitePoint(QColorSpace::PrimaryPoints const * this_ptr) {
  return &this_ptr->whitePoint;
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_whitePoint_mut(QColorSpace::PrimaryPoints * this_ptr) {
  return &this_ptr->whitePoint;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QColorSpace_PrimaryPoints_whitePoint(QColorSpace::PrimaryPoints * this_ptr, QPointF const * value) {
  this_ptr->whitePoint = *value;
}


RITUAL_EXPORT QPointF const * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_redPoint(QColorSpace::PrimaryPoints const * this_ptr) {
  return &this_ptr->redPoint;
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_redPoint_mut(QColorSpace::PrimaryPoints * this_ptr) {
  return &this_ptr->redPoint;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QColorSpace_PrimaryPoints_redPoint(QColorSpace::PrimaryPoints * this_ptr, QPointF const * value) {
  this_ptr->redPoint = *value;
}


RITUAL_EXPORT QPointF const * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_greenPoint(QColorSpace::PrimaryPoints const * this_ptr) {
  return &this_ptr->greenPoint;
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_greenPoint_mut(QColorSpace::PrimaryPoints * this_ptr) {
  return &this_ptr->greenPoint;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QColorSpace_PrimaryPoints_greenPoint(QColorSpace::PrimaryPoints * this_ptr, QPointF const * value) {
  this_ptr->greenPoint = *value;
}


RITUAL_EXPORT QPointF const * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_bluePoint(QColorSpace::PrimaryPoints const * this_ptr) {
  return &this_ptr->bluePoint;
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QColorSpace_PrimaryPoints_bluePoint_mut(QColorSpace::PrimaryPoints * this_ptr) {
  return &this_ptr->bluePoint;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QColorSpace_PrimaryPoints_bluePoint(QColorSpace::PrimaryPoints * this_ptr, QPointF const * value) {
  this_ptr->bluePoint = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QDrag_staticMetaObject() {
  return &QDrag::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QFileSystemModel_staticMetaObject() {
  return &QFileSystemModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QFontVariableAxis_staticMetaObject() {
  return &QFontVariableAxis::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QGenericPlugin_staticMetaObject() {
  return &QGenericPlugin::staticMetaObject;
}


RITUAL_EXPORT QSize const * ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_size(QIconEngine::ScaledPixmapArgument const * this_ptr) {
  return &this_ptr->size;
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_size_mut(QIconEngine::ScaledPixmapArgument * this_ptr) {
  return &this_ptr->size;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QIconEngine_ScaledPixmapArgument_size(QIconEngine::ScaledPixmapArgument * this_ptr, QSize const * value) {
  this_ptr->size = *value;
}


RITUAL_EXPORT QIcon::Mode ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_mode(QIconEngine::ScaledPixmapArgument const * this_ptr) {
  return this_ptr->mode;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QIconEngine_ScaledPixmapArgument_mode(QIconEngine::ScaledPixmapArgument * this_ptr, QIcon::Mode value) {
  this_ptr->mode = value;
}


RITUAL_EXPORT QIcon::State ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_state(QIconEngine::ScaledPixmapArgument const * this_ptr) {
  return this_ptr->state;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QIconEngine_ScaledPixmapArgument_state(QIconEngine::ScaledPixmapArgument * this_ptr, QIcon::State value) {
  this_ptr->state = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_scale(QIconEngine::ScaledPixmapArgument const * this_ptr) {
  return this_ptr->scale;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QIconEngine_ScaledPixmapArgument_scale(QIconEngine::ScaledPixmapArgument * this_ptr, double value) {
  this_ptr->scale = value;
}


RITUAL_EXPORT QPixmap const * ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_pixmap(QIconEngine::ScaledPixmapArgument const * this_ptr) {
  return &this_ptr->pixmap;
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIconEngine_ScaledPixmapArgument_pixmap_mut(QIconEngine::ScaledPixmapArgument * this_ptr) {
  return &this_ptr->pixmap;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QIconEngine_ScaledPixmapArgument_pixmap(QIconEngine::ScaledPixmapArgument * this_ptr, QPixmap const * value) {
  this_ptr->pixmap = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QIconEnginePlugin_staticMetaObject() {
  return &QIconEnginePlugin::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QImageIOPlugin_staticMetaObject() {
  return &QImageIOPlugin::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QMovie_staticMetaObject() {
  return &QMovie::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QOffscreenSurface_staticMetaObject() {
  return &QOffscreenSurface::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QOpenGLContextGroup_staticMetaObject() {
  return &QOpenGLContextGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QOpenGLContext_staticMetaObject() {
  return &QOpenGLContext::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPageRanges_Range_from(QPageRanges::Range const * this_ptr) {
  return this_ptr->from;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPageRanges_Range_from(QPageRanges::Range * this_ptr, int value) {
  this_ptr->from = value;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPageRanges_Range_to(QPageRanges::Range const * this_ptr) {
  return this_ptr->to;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPageRanges_Range_to(QPageRanges::Range * this_ptr, int value) {
  this_ptr->to = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPaintDeviceWindow_staticMetaObject() {
  return &QPaintDeviceWindow::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPainter_staticMetaObject() {
  return &QPainter::staticMetaObject;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_x(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->x;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_x(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->x = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_y(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->y;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_y(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->y = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_sourceLeft(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->sourceLeft;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_sourceLeft(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->sourceLeft = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_sourceTop(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->sourceTop;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_sourceTop(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->sourceTop = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_width(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->width;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_width(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->width = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_height(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->height;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_height(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->height = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_scaleX(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->scaleX;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_scaleX(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->scaleX = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_scaleY(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->scaleY;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_scaleY(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->scaleY = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_rotation(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->rotation;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_rotation(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->rotation = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainter_PixmapFragment_opacity(QPainter::PixmapFragment const * this_ptr) {
  return this_ptr->opacity;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainter_PixmapFragment_opacity(QPainter::PixmapFragment * this_ptr, double value) {
  this_ptr->opacity = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPath_Element_x(QPainterPath::Element const * this_ptr) {
  return this_ptr->x;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainterPath_Element_x(QPainterPath::Element * this_ptr, double value) {
  this_ptr->x = value;
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPainterPath_Element_y(QPainterPath::Element const * this_ptr) {
  return this_ptr->y;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainterPath_Element_y(QPainterPath::Element * this_ptr, double value) {
  this_ptr->y = value;
}


RITUAL_EXPORT QPainterPath::ElementType ctr_qt_gui_ffi_QPainterPath_Element_type(QPainterPath::Element const * this_ptr) {
  return this_ptr->type;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_set_QPainterPath_Element_type(QPainterPath::Element * this_ptr, QPainterPath::ElementType value) {
  this_ptr->type = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPdfWriter_staticMetaObject() {
  return &QPdfWriter::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QRasterWindow_staticMetaObject() {
  return &QRasterWindow::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QSessionManager_staticMetaObject() {
  return &QSessionManager::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QShortcut_staticMetaObject() {
  return &QShortcut::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QStandardItemModel_staticMetaObject() {
  return &QStandardItemModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QStyleHints_staticMetaObject() {
  return &QStyleHints::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextObject_staticMetaObject() {
  return &QTextObject::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextBlockGroup_staticMetaObject() {
  return &QTextBlockGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextFrame_staticMetaObject() {
  return &QTextFrame::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QSyntaxHighlighter_staticMetaObject() {
  return &QSyntaxHighlighter::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextList_staticMetaObject() {
  return &QTextList::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QTextTable_staticMetaObject() {
  return &QTextTable::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QUndoGroup_staticMetaObject() {
  return &QUndoGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QUndoStack_staticMetaObject() {
  return &QUndoStack::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QValidator_staticMetaObject() {
  return &QValidator::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QIntValidator_staticMetaObject() {
  return &QIntValidator::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QDoubleValidator_staticMetaObject() {
  return &QDoubleValidator::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QRegularExpressionValidator_staticMetaObject() {
  return &QRegularExpressionValidator::staticMetaObject;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintDevice_dQPaintDevice(QPaintDevice * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_devType(QPaintDevice const * this_ptr) {
  return this_ptr->devType();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPaintDevice_paintingActive(QPaintDevice const * this_ptr) {
  return this_ptr->paintingActive();
}


RITUAL_EXPORT QPaintEngine * ctr_qt_gui_ffi_QPaintDevice_paintEngine(QPaintDevice const * this_ptr) {
  return this_ptr->paintEngine();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_width(QPaintDevice const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_height(QPaintDevice const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_widthMM(QPaintDevice const * this_ptr) {
  return this_ptr->widthMM();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_heightMM(QPaintDevice const * this_ptr) {
  return this_ptr->heightMM();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_logicalDpiX(QPaintDevice const * this_ptr) {
  return this_ptr->logicalDpiX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_logicalDpiY(QPaintDevice const * this_ptr) {
  return this_ptr->logicalDpiY();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_physicalDpiX(QPaintDevice const * this_ptr) {
  return this_ptr->physicalDpiX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_physicalDpiY(QPaintDevice const * this_ptr) {
  return this_ptr->physicalDpiY();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPaintDevice_devicePixelRatio(QPaintDevice const * this_ptr) {
  return this_ptr->devicePixelRatio();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPaintDevice_devicePixelRatioF(QPaintDevice const * this_ptr) {
  return this_ptr->devicePixelRatioF();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_colorCount(QPaintDevice const * this_ptr) {
  return this_ptr->colorCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_depth(QPaintDevice const * this_ptr) {
  return this_ptr->depth();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPaintDevice_devicePixelRatioFScale() {
  return QPaintDevice::devicePixelRatioFScale();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPaintDevice_encodeMetricF(QPaintDevice::PaintDeviceMetric metric, double value) {
  return QPaintDevice::encodeMetricF(metric, value);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qRed(unsigned int rgb) {
  return qRed(rgb);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qGreen(unsigned int rgb) {
  return qGreen(rgb);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qBlue(unsigned int rgb) {
  return qBlue(rgb);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qAlpha(unsigned int rgb) {
  return qAlpha(rgb);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qRgb(int r, int g, int b) {
  return qRgb(r, g, b);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qRgba(int r, int g, int b, int a) {
  return qRgba(r, g, b, a);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qGray(int r, int g, int b) {
  return qGray(r, g, b);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_qGray1(unsigned int rgb) {
  return qGray(rgb);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_qIsGray(unsigned int rgb) {
  return qIsGray(rgb);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qPremultiply(unsigned int x) {
  return qPremultiply(x);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qUnpremultiply(unsigned int p) {
  return qUnpremultiply(p);
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_QRgba64() {
  return new QRgba64();
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_fromRgba64(unsigned long long c) {
  return new QRgba64(QRgba64::fromRgba64(c));
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_fromRgba641(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha) {
  return new QRgba64(QRgba64::fromRgba64(red, green, blue, alpha));
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_fromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
  return new QRgba64(QRgba64::fromRgba(red, green, blue, alpha));
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_fromArgb32(unsigned int rgb) {
  return new QRgba64(QRgba64::fromArgb32(rgb));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRgba64_isOpaque(QRgba64 const * this_ptr) {
  return this_ptr->isOpaque();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRgba64_isTransparent(QRgba64 const * this_ptr) {
  return this_ptr->isTransparent();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgba64_red(QRgba64 const * this_ptr) {
  return this_ptr->red();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgba64_green(QRgba64 const * this_ptr) {
  return this_ptr->green();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgba64_blue(QRgba64 const * this_ptr) {
  return this_ptr->blue();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgba64_alpha(QRgba64 const * this_ptr) {
  return this_ptr->alpha();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgba64_setRed(QRgba64 * this_ptr, unsigned short _red) {
  this_ptr->setRed(_red);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgba64_setGreen(QRgba64 * this_ptr, unsigned short _green) {
  this_ptr->setGreen(_green);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgba64_setBlue(QRgba64 * this_ptr, unsigned short _blue) {
  this_ptr->setBlue(_blue);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRgba64_setAlpha(QRgba64 * this_ptr, unsigned short _alpha) {
  this_ptr->setAlpha(_alpha);
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgba64_red8(QRgba64 const * this_ptr) {
  return this_ptr->red8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgba64_green8(QRgba64 const * this_ptr) {
  return this_ptr->green8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgba64_blue8(QRgba64 const * this_ptr) {
  return this_ptr->blue8();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QRgba64_alpha8(QRgba64 const * this_ptr) {
  return this_ptr->alpha8();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QRgba64_toArgb32(QRgba64 const * this_ptr) {
  return this_ptr->toArgb32();
}


RITUAL_EXPORT unsigned short ctr_qt_gui_ffi_QRgba64_toRgb16(QRgba64 const * this_ptr) {
  return this_ptr->toRgb16();
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_premultiplied(QRgba64 const * this_ptr) {
  return new QRgba64(this_ptr->premultiplied());
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_unpremultiplied(QRgba64 const * this_ptr) {
  return new QRgba64(this_ptr->unpremultiplied());
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QRgba64_operator_unsigned_long_long(QRgba64 const * this_ptr) {
  return this_ptr->operator unsigned long long();
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QRgba64_operator_(QRgba64 * this_ptr, unsigned long long _rgba) {
  return &this_ptr->operator=(_rgba);
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_qRgba64(unsigned short r, unsigned short g, unsigned short b, unsigned short a) {
  return new QRgba64(qRgba64(r, g, b, a));
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_qRgba641(unsigned long long c) {
  return new QRgba64(qRgba64(c));
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_qPremultiply1(QRgba64 const * c) {
  return new QRgba64(qPremultiply(*c));
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_qUnpremultiply1(QRgba64 const * c) {
  return new QRgba64(qUnpremultiply(*c));
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qRed1(QRgba64 const * rgb) {
  return qRed(*rgb);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qGreen1(QRgba64 const * rgb) {
  return qGreen(*rgb);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qBlue1(QRgba64 const * rgb) {
  return qBlue(*rgb);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_qAlpha1(QRgba64 const * rgb) {
  return qAlpha(*rgb);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__(QDebug const * arg1, QColor const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__1(QDataStream * arg1, QColor const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__2(QDataStream * arg1, QColor * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor() {
  return new QColor();
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor1(Qt::GlobalColor color) {
  return new QColor(color);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor2(int r, int g, int b, int a) {
  return new QColor(r, g, b, a);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor3(unsigned int rgb) {
  return new QColor(rgb);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor4(QRgba64 const * rgba64) {
  return new QColor(*rgba64);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor5(QString const * name) {
  return new QColor(*name);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor6(QStringView const * name) {
  return new QColor(*name);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor7(char const * aname) {
  return new QColor(aname);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor8(QLatin1String const * name) {
  return new QColor(*name);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor9(QColor::Spec spec) {
  return new QColor(spec);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromString(QAnyStringView const * name) {
  return new QColor(QColor::fromString(*name));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_operator_(QColor * this_ptr, Qt::GlobalColor color) {
  return &this_ptr->operator=(color);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColor_isValid(QColor const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QColor_name(QColor const * this_ptr, QColor::NameFormat format) {
  return new QString(this_ptr->name(format));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setNamedColor(QColor * this_ptr, QString const * name) {
  this_ptr->setNamedColor(*name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setNamedColor1(QColor * this_ptr, QStringView const * name) {
  this_ptr->setNamedColor(*name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setNamedColor2(QColor * this_ptr, QLatin1String const * name) {
  this_ptr->setNamedColor(*name);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QColor_colorNames() {
  return new QList< QString >(QColor::colorNames());
}


RITUAL_EXPORT QColor::Spec ctr_qt_gui_ffi_QColor_spec(QColor const * this_ptr) {
  return this_ptr->spec();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_alpha(QColor const * this_ptr) {
  return this_ptr->alpha();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setAlpha(QColor * this_ptr, int alpha) {
  this_ptr->setAlpha(alpha);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_alphaF(QColor const * this_ptr) {
  return this_ptr->alphaF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setAlphaF(QColor * this_ptr, float alpha) {
  this_ptr->setAlphaF(alpha);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_red(QColor const * this_ptr) {
  return this_ptr->red();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_green(QColor const * this_ptr) {
  return this_ptr->green();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_blue(QColor const * this_ptr) {
  return this_ptr->blue();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setRed(QColor * this_ptr, int red) {
  this_ptr->setRed(red);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setGreen(QColor * this_ptr, int green) {
  this_ptr->setGreen(green);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setBlue(QColor * this_ptr, int blue) {
  this_ptr->setBlue(blue);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_redF(QColor const * this_ptr) {
  return this_ptr->redF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_greenF(QColor const * this_ptr) {
  return this_ptr->greenF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_blueF(QColor const * this_ptr) {
  return this_ptr->blueF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setRedF(QColor * this_ptr, float red) {
  this_ptr->setRedF(red);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setGreenF(QColor * this_ptr, float green) {
  this_ptr->setGreenF(green);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setBlueF(QColor * this_ptr, float blue) {
  this_ptr->setBlueF(blue);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getRgb(QColor const * this_ptr, int * r, int * g, int * b, int * a) {
  this_ptr->getRgb(r, g, b, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setRgb(QColor * this_ptr, int r, int g, int b, int a) {
  this_ptr->setRgb(r, g, b, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getRgbF(QColor const * this_ptr, float * r, float * g, float * b, float * a) {
  this_ptr->getRgbF(r, g, b, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setRgbF(QColor * this_ptr, float r, float g, float b, float a) {
  this_ptr->setRgbF(r, g, b, a);
}


RITUAL_EXPORT QRgba64 * ctr_qt_gui_ffi_QColor_rgba64(QColor const * this_ptr) {
  return new QRgba64(this_ptr->rgba64());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setRgba64(QColor * this_ptr, QRgba64 const * rgba) {
  this_ptr->setRgba64(*rgba);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QColor_rgba(QColor const * this_ptr) {
  return this_ptr->rgba();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setRgba(QColor * this_ptr, unsigned int rgba) {
  this_ptr->setRgba(rgba);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QColor_rgb(QColor const * this_ptr) {
  return this_ptr->rgb();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setRgb1(QColor * this_ptr, unsigned int rgb) {
  this_ptr->setRgb(rgb);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_hue(QColor const * this_ptr) {
  return this_ptr->hue();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_saturation(QColor const * this_ptr) {
  return this_ptr->saturation();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_hsvHue(QColor const * this_ptr) {
  return this_ptr->hsvHue();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_hsvSaturation(QColor const * this_ptr) {
  return this_ptr->hsvSaturation();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_value(QColor const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_hueF(QColor const * this_ptr) {
  return this_ptr->hueF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_saturationF(QColor const * this_ptr) {
  return this_ptr->saturationF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_hsvHueF(QColor const * this_ptr) {
  return this_ptr->hsvHueF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_hsvSaturationF(QColor const * this_ptr) {
  return this_ptr->hsvSaturationF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_valueF(QColor const * this_ptr) {
  return this_ptr->valueF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getHsv(QColor const * this_ptr, int * h, int * s, int * v, int * a) {
  this_ptr->getHsv(h, s, v, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setHsv(QColor * this_ptr, int h, int s, int v, int a) {
  this_ptr->setHsv(h, s, v, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getHsvF(QColor const * this_ptr, float * h, float * s, float * v, float * a) {
  this_ptr->getHsvF(h, s, v, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setHsvF(QColor * this_ptr, float h, float s, float v, float a) {
  this_ptr->setHsvF(h, s, v, a);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_cyan(QColor const * this_ptr) {
  return this_ptr->cyan();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_magenta(QColor const * this_ptr) {
  return this_ptr->magenta();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_yellow(QColor const * this_ptr) {
  return this_ptr->yellow();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_black(QColor const * this_ptr) {
  return this_ptr->black();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_cyanF(QColor const * this_ptr) {
  return this_ptr->cyanF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_magentaF(QColor const * this_ptr) {
  return this_ptr->magentaF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_yellowF(QColor const * this_ptr) {
  return this_ptr->yellowF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_blackF(QColor const * this_ptr) {
  return this_ptr->blackF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getCmyk(QColor const * this_ptr, int * c, int * m, int * y, int * k, int * a) {
  this_ptr->getCmyk(c, m, y, k, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setCmyk(QColor * this_ptr, int c, int m, int y, int k, int a) {
  this_ptr->setCmyk(c, m, y, k, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getCmykF(QColor const * this_ptr, float * c, float * m, float * y, float * k, float * a) {
  this_ptr->getCmykF(c, m, y, k, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setCmykF(QColor * this_ptr, float c, float m, float y, float k, float a) {
  this_ptr->setCmykF(c, m, y, k, a);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_hslHue(QColor const * this_ptr) {
  return this_ptr->hslHue();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_hslSaturation(QColor const * this_ptr) {
  return this_ptr->hslSaturation();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QColor_lightness(QColor const * this_ptr) {
  return this_ptr->lightness();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_hslHueF(QColor const * this_ptr) {
  return this_ptr->hslHueF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_hslSaturationF(QColor const * this_ptr) {
  return this_ptr->hslSaturationF();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QColor_lightnessF(QColor const * this_ptr) {
  return this_ptr->lightnessF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getHsl(QColor const * this_ptr, int * h, int * s, int * l, int * a) {
  this_ptr->getHsl(h, s, l, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setHsl(QColor * this_ptr, int h, int s, int l, int a) {
  this_ptr->setHsl(h, s, l, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_getHslF(QColor const * this_ptr, float * h, float * s, float * l, float * a) {
  this_ptr->getHslF(h, s, l, a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QColor_setHslF(QColor * this_ptr, float h, float s, float l, float a) {
  this_ptr->setHslF(h, s, l, a);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_toRgb(QColor const * this_ptr) {
  return new QColor(this_ptr->toRgb());
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_toHsv(QColor const * this_ptr) {
  return new QColor(this_ptr->toHsv());
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_toCmyk(QColor const * this_ptr) {
  return new QColor(this_ptr->toCmyk());
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_toHsl(QColor const * this_ptr) {
  return new QColor(this_ptr->toHsl());
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_toExtendedRgb(QColor const * this_ptr) {
  return new QColor(this_ptr->toExtendedRgb());
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_convertTo(QColor const * this_ptr, QColor::Spec colorSpec) {
  return new QColor(this_ptr->convertTo(colorSpec));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromRgb(unsigned int rgb) {
  return new QColor(QColor::fromRgb(rgb));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromRgba(unsigned int rgba) {
  return new QColor(QColor::fromRgba(rgba));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromRgb1(int r, int g, int b, int a) {
  return new QColor(QColor::fromRgb(r, g, b, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromRgbF(float r, float g, float b, float a) {
  return new QColor(QColor::fromRgbF(r, g, b, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromRgba64(unsigned short r, unsigned short g, unsigned short b, unsigned short a) {
  return new QColor(QColor::fromRgba64(r, g, b, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromRgba641(QRgba64 const * rgba) {
  return new QColor(QColor::fromRgba64(*rgba));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromHsv(int h, int s, int v, int a) {
  return new QColor(QColor::fromHsv(h, s, v, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromHsvF(float h, float s, float v, float a) {
  return new QColor(QColor::fromHsvF(h, s, v, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromCmyk(int c, int m, int y, int k, int a) {
  return new QColor(QColor::fromCmyk(c, m, y, k, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromCmykF(float c, float m, float y, float k, float a) {
  return new QColor(QColor::fromCmykF(c, m, y, k, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromHsl(int h, int s, int l, int a) {
  return new QColor(QColor::fromHsl(h, s, l, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_fromHslF(float h, float s, float l, float a) {
  return new QColor(QColor::fromHslF(h, s, l, a));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_lighter(QColor const * this_ptr, int f) {
  return new QColor(this_ptr->lighter(f));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_darker(QColor const * this_ptr, int f) {
  return new QColor(this_ptr->darker(f));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColor_operator__(QColor const * this_ptr, QColor const * c) {
  return this_ptr->operator==(*c);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QColor_operator_QVariant(QColor const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColor_isValidColor(QString const * name) {
  return QColor::isValidColor(*name);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColor_isValidColor1(QStringView const * arg1) {
  return QColor::isValidColor(*arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColor_isValidColor2(QLatin1String const * arg1) {
  return QColor::isValidColor(*arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QColor_isValidColorName(QAnyStringView const * arg1) {
  return QColor::isValidColorName(*arg1);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QColor_QColor10(QColor::Spec spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5) {
  return new QColor(spec, a1, a2, a3, a4, a5);
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_QPixelFormat_QPixelFormat() {
  return new QPixelFormat();
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_QPixelFormat_QPixelFormat1(QPixelFormat::ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, QPixelFormat::AlphaUsage alphaUsage, QPixelFormat::AlphaPosition alphaPosition, QPixelFormat::AlphaPremultiplied premultiplied, QPixelFormat::TypeInterpretation typeInterpretation, QPixelFormat::ByteOrder byteOrder, unsigned char subEnum) {
  return new QPixelFormat(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder, subEnum);
}


RITUAL_EXPORT QPixelFormat::ColorModel ctr_qt_gui_ffi_QPixelFormat_colorModel(QPixelFormat const * this_ptr) {
  return this_ptr->colorModel();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_channelCount(QPixelFormat const * this_ptr) {
  return this_ptr->channelCount();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_redSize(QPixelFormat const * this_ptr) {
  return this_ptr->redSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_greenSize(QPixelFormat const * this_ptr) {
  return this_ptr->greenSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_blueSize(QPixelFormat const * this_ptr) {
  return this_ptr->blueSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_cyanSize(QPixelFormat const * this_ptr) {
  return this_ptr->cyanSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_magentaSize(QPixelFormat const * this_ptr) {
  return this_ptr->magentaSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_yellowSize(QPixelFormat const * this_ptr) {
  return this_ptr->yellowSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_blackSize(QPixelFormat const * this_ptr) {
  return this_ptr->blackSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_hueSize(QPixelFormat const * this_ptr) {
  return this_ptr->hueSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_saturationSize(QPixelFormat const * this_ptr) {
  return this_ptr->saturationSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_lightnessSize(QPixelFormat const * this_ptr) {
  return this_ptr->lightnessSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_brightnessSize(QPixelFormat const * this_ptr) {
  return this_ptr->brightnessSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_alphaSize(QPixelFormat const * this_ptr) {
  return this_ptr->alphaSize();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_bitsPerPixel(QPixelFormat const * this_ptr) {
  return this_ptr->bitsPerPixel();
}


RITUAL_EXPORT QPixelFormat::AlphaUsage ctr_qt_gui_ffi_QPixelFormat_alphaUsage(QPixelFormat const * this_ptr) {
  return this_ptr->alphaUsage();
}


RITUAL_EXPORT QPixelFormat::AlphaPosition ctr_qt_gui_ffi_QPixelFormat_alphaPosition(QPixelFormat const * this_ptr) {
  return this_ptr->alphaPosition();
}


RITUAL_EXPORT QPixelFormat::AlphaPremultiplied ctr_qt_gui_ffi_QPixelFormat_premultiplied(QPixelFormat const * this_ptr) {
  return this_ptr->premultiplied();
}


RITUAL_EXPORT QPixelFormat::TypeInterpretation ctr_qt_gui_ffi_QPixelFormat_typeInterpretation(QPixelFormat const * this_ptr) {
  return this_ptr->typeInterpretation();
}


RITUAL_EXPORT QPixelFormat::ByteOrder ctr_qt_gui_ffi_QPixelFormat_byteOrder(QPixelFormat const * this_ptr) {
  return this_ptr->byteOrder();
}


RITUAL_EXPORT QPixelFormat::YUVLayout ctr_qt_gui_ffi_QPixelFormat_yuvLayout(QPixelFormat const * this_ptr) {
  return this_ptr->yuvLayout();
}


RITUAL_EXPORT unsigned char ctr_qt_gui_ffi_QPixelFormat_subEnum(QPixelFormat const * this_ptr) {
  return this_ptr->subEnum();
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_QtPrivate_QPixelFormat_createYUV(QPixelFormat::YUVLayout yuvLayout, unsigned char alphaSize, QPixelFormat::AlphaUsage alphaUsage, QPixelFormat::AlphaPosition alphaPosition, QPixelFormat::AlphaPremultiplied premultiplied, QPixelFormat::TypeInterpretation typeInterpretation, QPixelFormat::ByteOrder byteOrder) {
  return new QPixelFormat(QtPrivate::QPixelFormat_createYUV(yuvLayout, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder));
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_qPixelFormatRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::AlphaPremultiplied pmul, QPixelFormat::TypeInterpretation typeInt) {
  return new QPixelFormat(qPixelFormatRgba(red, green, blue, alfa, usage, position, pmul, typeInt));
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_qPixelFormatGrayscale(unsigned char channelSize, QPixelFormat::TypeInterpretation typeInt) {
  return new QPixelFormat(qPixelFormatGrayscale(channelSize, typeInt));
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_qPixelFormatAlpha(unsigned char channelSize, QPixelFormat::TypeInterpretation typeInt) {
  return new QPixelFormat(qPixelFormatAlpha(channelSize, typeInt));
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_qPixelFormatCmyk(unsigned char channelSize, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::TypeInterpretation typeInt) {
  return new QPixelFormat(qPixelFormatCmyk(channelSize, alfa, usage, position, typeInt));
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_qPixelFormatHsl(unsigned char channelSize, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::TypeInterpretation typeInt) {
  return new QPixelFormat(qPixelFormatHsl(channelSize, alfa, usage, position, typeInt));
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_qPixelFormatHsv(unsigned char channelSize, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::TypeInterpretation typeInt) {
  return new QPixelFormat(qPixelFormatHsv(channelSize, alfa, usage, position, typeInt));
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_qPixelFormatYuv(QPixelFormat::YUVLayout layout, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::AlphaPremultiplied p_mul, QPixelFormat::TypeInterpretation typeInt, QPixelFormat::ByteOrder b_order) {
  return new QPixelFormat(qPixelFormatYuv(layout, alfa, usage, position, p_mul, typeInt, b_order));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_QPolygon() {
  return new QPolygon();
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_QPolygon1(QList< QPoint > const * v) {
  return new QPolygon(*v);
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_QPolygon3(QRect const * r, bool closed) {
  return new QPolygon(*r, closed);
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_QPolygon4(int nPoints, int const * points) {
  return new QPolygon(nPoints, points);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_swap(QPolygon * this_ptr, QPolygon * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QPolygon_operator_QVariant(QPolygon const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_translate(QPolygon * this_ptr, int dx, int dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_translate1(QPolygon * this_ptr, QPoint const * offset) {
  this_ptr->translate(*offset);
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_translated(QPolygon const * this_ptr, int dx, int dy) {
  return new QPolygon(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_translated1(QPolygon const * this_ptr, QPoint const * offset) {
  return new QPolygon(this_ptr->translated(*offset));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPolygon_boundingRect(QPolygon const * this_ptr) {
  return new QRect(this_ptr->boundingRect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_point(QPolygon const * this_ptr, int i, int * x, int * y) {
  this_ptr->point(i, x, y);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QPolygon_point1(QPolygon const * this_ptr, int i) {
  return new QPoint(this_ptr->point(i));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_setPoint(QPolygon * this_ptr, int index, int x, int y) {
  this_ptr->setPoint(index, x, y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_setPoint1(QPolygon * this_ptr, int index, QPoint const * p) {
  this_ptr->setPoint(index, *p);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_setPoints(QPolygon * this_ptr, int nPoints, int const * points) {
  this_ptr->setPoints(nPoints, points);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_putPoints(QPolygon * this_ptr, int index, int nPoints, int const * points) {
  this_ptr->putPoints(index, nPoints, points);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygon_putPoints2(QPolygon * this_ptr, int index, int nPoints, QPolygon const * from, int fromIndex) {
  this_ptr->putPoints(index, nPoints, *from, fromIndex);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPolygon_containsPoint(QPolygon const * this_ptr, QPoint const * pt, Qt::FillRule fillRule) {
  return this_ptr->containsPoint(*pt, fillRule);
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_united(QPolygon const * this_ptr, QPolygon const * r) {
  return new QPolygon(this_ptr->united(*r));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_intersected(QPolygon const * this_ptr, QPolygon const * r) {
  return new QPolygon(this_ptr->intersected(*r));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygon_subtracted(QPolygon const * this_ptr, QPolygon const * r) {
  return new QPolygon(this_ptr->subtracted(*r));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPolygon_intersects(QPolygon const * this_ptr, QPolygon const * r) {
  return this_ptr->intersects(*r);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygon_toPolygonF(QPolygon const * this_ptr) {
  return new QPolygonF(this_ptr->toPolygonF());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap(QPolygon * value1, QPolygon * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__3(QDebug const * arg1, QPolygon const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__4(QDataStream * stream, QPolygon const * polygon) {
  return &operator<<(*stream, *polygon);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__5(QDataStream * stream, QPolygon * polygon) {
  return &operator>>(*stream, *polygon);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_QPolygonF() {
  return new QPolygonF();
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_QPolygonF1(QList< QPointF > const * v) {
  return new QPolygonF(*v);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_QPolygonF3(QRectF const * r) {
  return new QPolygonF(*r);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_QPolygonF4(QPolygon const * a) {
  return new QPolygonF(*a);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygonF_swap(QPolygonF * this_ptr, QPolygonF * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QPolygonF_operator_QVariant(QPolygonF const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygonF_translate(QPolygonF * this_ptr, double dx, double dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPolygonF_translate1(QPolygonF * this_ptr, QPointF const * offset) {
  this_ptr->translate(*offset);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_translated(QPolygonF const * this_ptr, double dx, double dy) {
  return new QPolygonF(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_translated1(QPolygonF const * this_ptr, QPointF const * offset) {
  return new QPolygonF(this_ptr->translated(*offset));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QPolygonF_toPolygon(QPolygonF const * this_ptr) {
  return new QPolygon(this_ptr->toPolygon());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPolygonF_isClosed(QPolygonF const * this_ptr) {
  return this_ptr->isClosed();
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QPolygonF_boundingRect(QPolygonF const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPolygonF_containsPoint(QPolygonF const * this_ptr, QPointF const * pt, Qt::FillRule fillRule) {
  return this_ptr->containsPoint(*pt, fillRule);
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_united(QPolygonF const * this_ptr, QPolygonF const * r) {
  return new QPolygonF(this_ptr->united(*r));
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_intersected(QPolygonF const * this_ptr, QPolygonF const * r) {
  return new QPolygonF(this_ptr->intersected(*r));
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QPolygonF_subtracted(QPolygonF const * this_ptr, QPolygonF const * r) {
  return new QPolygonF(this_ptr->subtracted(*r));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPolygonF_intersects(QPolygonF const * this_ptr, QPolygonF const * r) {
  return this_ptr->intersects(*r);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap1(QPolygonF * value1, QPolygonF * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__6(QDebug const * arg1, QPolygonF const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__7(QDataStream * stream, QPolygonF const * array) {
  return &operator<<(*stream, *array);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__8(QDataStream * stream, QPolygonF * array) {
  return &operator>>(*stream, *array);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_QRegion() {
  return new QRegion();
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_QRegion1(int x, int y, int w, int h, QRegion::RegionType t) {
  return new QRegion(x, y, w, h, t);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_QRegion2(QRect const * r, QRegion::RegionType t) {
  return new QRegion(*r, t);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_QRegion3(QPolygon const * pa, Qt::FillRule fillRule) {
  return new QRegion(*pa, fillRule);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_QRegion4(QRegion const * region) {
  return new QRegion(*region);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_QRegion6(QBitmap const * bitmap) {
  return new QRegion(*bitmap);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRegion_dQRegion(QRegion * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_(QRegion * this_ptr, QRegion const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRegion_swap(QRegion * this_ptr, QRegion * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRegion_isEmpty(QRegion const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRegion_isNull(QRegion const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QRect const * ctr_qt_gui_ffi_QRegion_begin(QRegion const * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT QRect const * ctr_qt_gui_ffi_QRegion_cbegin(QRegion const * this_ptr) {
  return this_ptr->cbegin();
}


RITUAL_EXPORT QRect const * ctr_qt_gui_ffi_QRegion_end(QRegion const * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT QRect const * ctr_qt_gui_ffi_QRegion_cend(QRegion const * this_ptr) {
  return this_ptr->cend();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRegion_contains(QRegion const * this_ptr, QPoint const * p) {
  return this_ptr->contains(*p);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRegion_contains1(QRegion const * this_ptr, QRect const * r) {
  return this_ptr->contains(*r);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRegion_translate(QRegion * this_ptr, int dx, int dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRegion_translate1(QRegion * this_ptr, QPoint const * p) {
  this_ptr->translate(*p);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_translated(QRegion const * this_ptr, int dx, int dy) {
  return new QRegion(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_translated1(QRegion const * this_ptr, QPoint const * p) {
  return new QRegion(this_ptr->translated(*p));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_united(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->united(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_united1(QRegion const * this_ptr, QRect const * r) {
  return new QRegion(this_ptr->united(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_intersected(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->intersected(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_intersected1(QRegion const * this_ptr, QRect const * r) {
  return new QRegion(this_ptr->intersected(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_subtracted(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->subtracted(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_xored(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->xored(*r));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRegion_intersects(QRegion const * this_ptr, QRegion const * r) {
  return this_ptr->intersects(*r);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRegion_intersects1(QRegion const * this_ptr, QRect const * r) {
  return this_ptr->intersects(*r);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QRegion_boundingRect(QRegion const * this_ptr) {
  return new QRect(this_ptr->boundingRect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QRegion_setRects(QRegion * this_ptr, QRect const * rect, int num) {
  this_ptr->setRects(rect, num);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QRegion_rectCount(QRegion const * this_ptr) {
  return this_ptr->rectCount();
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_2(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->operator|(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_3(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->operator+(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_4(QRegion const * this_ptr, QRect const * r) {
  return new QRegion(this_ptr->operator+(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_5(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->operator&(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_6(QRegion const * this_ptr, QRect const * r) {
  return new QRegion(this_ptr->operator&(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_7(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->operator-(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator_8(QRegion const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->operator^(*r));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator__(QRegion * this_ptr, QRegion const * r) {
  return &this_ptr->operator|=(*r);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator__1(QRegion * this_ptr, QRegion const * r) {
  return &this_ptr->operator+=(*r);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator__2(QRegion * this_ptr, QRect const * r) {
  return &this_ptr->operator+=(*r);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator__3(QRegion * this_ptr, QRegion const * r) {
  return &this_ptr->operator&=(*r);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator__4(QRegion * this_ptr, QRect const * r) {
  return &this_ptr->operator&=(*r);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator__5(QRegion * this_ptr, QRegion const * r) {
  return &this_ptr->operator-=(*r);
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QRegion_operator__6(QRegion * this_ptr, QRegion const * r) {
  return &this_ptr->operator^=(*r);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QRegion_operator__7(QRegion const * this_ptr, QRegion const * r) {
  return this_ptr->operator==(*r);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QRegion_operator_QVariant(QRegion const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap2(QRegion * value1, QRegion * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__9(QDataStream * arg1, QRegion const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__10(QDataStream * arg1, QRegion * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__11(QDebug const * arg1, QRegion const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_QTransform1() {
  return new QTransform();
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_QTransform2(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33) {
  return new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_QTransform3(double h11, double h12, double h21, double h22, double dx, double dy) {
  return new QTransform(h11, h12, h21, h22, dx, dy);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_operator_1(QTransform * this_ptr, QTransform const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_QTransform5(QTransform const * other) {
  return new QTransform(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_isAffine(QTransform const * this_ptr) {
  return this_ptr->isAffine();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_isIdentity(QTransform const * this_ptr) {
  return this_ptr->isIdentity();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_isInvertible(QTransform const * this_ptr) {
  return this_ptr->isInvertible();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_isScaling(QTransform const * this_ptr) {
  return this_ptr->isScaling();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_isRotating(QTransform const * this_ptr) {
  return this_ptr->isRotating();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_isTranslating(QTransform const * this_ptr) {
  return this_ptr->isTranslating();
}


RITUAL_EXPORT QTransform::TransformationType ctr_qt_gui_ffi_QTransform_type(QTransform const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_determinant(QTransform const * this_ptr) {
  return this_ptr->determinant();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m11(QTransform const * this_ptr) {
  return this_ptr->m11();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m12(QTransform const * this_ptr) {
  return this_ptr->m12();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m13(QTransform const * this_ptr) {
  return this_ptr->m13();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m21(QTransform const * this_ptr) {
  return this_ptr->m21();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m22(QTransform const * this_ptr) {
  return this_ptr->m22();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m23(QTransform const * this_ptr) {
  return this_ptr->m23();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m31(QTransform const * this_ptr) {
  return this_ptr->m31();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m32(QTransform const * this_ptr) {
  return this_ptr->m32();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_m33(QTransform const * this_ptr) {
  return this_ptr->m33();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_dx(QTransform const * this_ptr) {
  return this_ptr->dx();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTransform_dy(QTransform const * this_ptr) {
  return this_ptr->dy();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTransform_setMatrix(QTransform * this_ptr, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
  this_ptr->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_inverted(QTransform const * this_ptr, bool * invertible) {
  return new QTransform(this_ptr->inverted(invertible));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_adjoint(QTransform const * this_ptr) {
  return new QTransform(this_ptr->adjoint());
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_transposed(QTransform const * this_ptr) {
  return new QTransform(this_ptr->transposed());
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_translate(QTransform * this_ptr, double dx, double dy) {
  return &this_ptr->translate(dx, dy);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_scale(QTransform * this_ptr, double sx, double sy) {
  return &this_ptr->scale(sx, sy);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_shear(QTransform * this_ptr, double sh, double sv) {
  return &this_ptr->shear(sh, sv);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_rotate(QTransform * this_ptr, double a, Qt::Axis axis, double distanceToPlane) {
  return &this_ptr->rotate(a, axis, distanceToPlane);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_rotate1(QTransform * this_ptr, double a, Qt::Axis axis) {
  return &this_ptr->rotate(a, axis);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_rotateRadians(QTransform * this_ptr, double a, Qt::Axis axis, double distanceToPlane) {
  return &this_ptr->rotateRadians(a, axis, distanceToPlane);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_rotateRadians1(QTransform * this_ptr, double a, Qt::Axis axis) {
  return &this_ptr->rotateRadians(a, axis);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_squareToQuad(QPolygonF const * square, QTransform * result) {
  return QTransform::squareToQuad(*square, *result);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_quadToSquare(QPolygonF const * quad, QTransform * result) {
  return QTransform::quadToSquare(*quad, *result);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_quadToQuad(QPolygonF const * one, QPolygonF const * two, QTransform * result) {
  return QTransform::quadToQuad(*one, *two, *result);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTransform_operator__(QTransform const * this_ptr, QTransform const * arg1) {
  return this_ptr->operator==(*arg1);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_operator__2(QTransform * this_ptr, QTransform const * arg1) {
  return &this_ptr->operator*=(*arg1);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_operator_2(QTransform const * this_ptr, QTransform const * o) {
  return new QTransform(this_ptr->operator*(*o));
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QTransform_operator_QVariant(QTransform const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTransform_reset(QTransform * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QTransform_map(QTransform const * this_ptr, QPoint const * p) {
  return new QPoint(this_ptr->map(*p));
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QTransform_map1(QTransform const * this_ptr, QPointF const * p) {
  return new QPointF(this_ptr->map(*p));
}


RITUAL_EXPORT QLine * ctr_qt_gui_ffi_QTransform_map2(QTransform const * this_ptr, QLine const * l) {
  return new QLine(this_ptr->map(*l));
}


RITUAL_EXPORT QLineF * ctr_qt_gui_ffi_QTransform_map3(QTransform const * this_ptr, QLineF const * l) {
  return new QLineF(this_ptr->map(*l));
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_QTransform_map4(QTransform const * this_ptr, QPolygonF const * a) {
  return new QPolygonF(this_ptr->map(*a));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QTransform_map5(QTransform const * this_ptr, QPolygon const * a) {
  return new QPolygon(this_ptr->map(*a));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_QTransform_map6(QTransform const * this_ptr, QRegion const * r) {
  return new QRegion(this_ptr->map(*r));
}


RITUAL_EXPORT QPainterPath * ctr_qt_gui_ffi_QTransform_map7(QTransform const * this_ptr, QPainterPath const * p) {
  return new QPainterPath(this_ptr->map(*p));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_QTransform_mapToPolygon(QTransform const * this_ptr, QRect const * r) {
  return new QPolygon(this_ptr->mapToPolygon(*r));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QTransform_mapRect(QTransform const * this_ptr, QRect const * arg1) {
  return new QRect(this_ptr->mapRect(*arg1));
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QTransform_mapRect1(QTransform const * this_ptr, QRectF const * arg1) {
  return new QRectF(this_ptr->mapRect(*arg1));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTransform_map8(QTransform const * this_ptr, int x, int y, int * tx, int * ty) {
  this_ptr->map(x, y, tx, ty);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTransform_map9(QTransform const * this_ptr, double x, double y, double * tx, double * ty) {
  this_ptr->map(x, y, tx, ty);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_operator__3(QTransform * this_ptr, double div) {
  return &this_ptr->operator*=(div);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_operator__4(QTransform * this_ptr, double div) {
  return &this_ptr->operator/=(div);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_operator__5(QTransform * this_ptr, double div) {
  return &this_ptr->operator+=(div);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_operator__6(QTransform * this_ptr, double div) {
  return &this_ptr->operator-=(div);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_fromTranslate(double dx, double dy) {
  return new QTransform(QTransform::fromTranslate(dx, dy));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QTransform_fromScale(double dx, double dy) {
  return new QTransform(QTransform::fromScale(dx, dy));
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash(QTransform const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_qFuzzyCompare(QTransform const * t1, QTransform const * t2) {
  return qFuzzyCompare(*t1, *t2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__12(QDataStream * arg1, QTransform const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__13(QDataStream * arg1, QTransform * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__14(QDebug const * arg1, QTransform const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_operator_(QPoint const * p, QTransform const * m) {
  return new QPoint(operator*(*p, *m));
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_operator_1(QPointF const * p, QTransform const * m) {
  return new QPointF(operator*(*p, *m));
}


RITUAL_EXPORT QLineF * ctr_qt_gui_ffi_operator_2(QLineF const * l, QTransform const * m) {
  return new QLineF(operator*(*l, *m));
}


RITUAL_EXPORT QLine * ctr_qt_gui_ffi_operator_3(QLine const * l, QTransform const * m) {
  return new QLine(operator*(*l, *m));
}


RITUAL_EXPORT QPolygon * ctr_qt_gui_ffi_operator_4(QPolygon const * a, QTransform const * m) {
  return new QPolygon(operator*(*a, *m));
}


RITUAL_EXPORT QPolygonF * ctr_qt_gui_ffi_operator_5(QPolygonF const * a, QTransform const * m) {
  return new QPolygonF(operator*(*a, *m));
}


RITUAL_EXPORT QRegion * ctr_qt_gui_ffi_operator_6(QRegion const * r, QTransform const * m) {
  return new QRegion(operator*(*r, *m));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_operator_7(QTransform const * a, double n) {
  return new QTransform(operator*(*a, n));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_operator_8(QTransform const * a, double n) {
  return new QTransform(operator/(*a, n));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_operator_9(QTransform const * a, double n) {
  return new QTransform(operator+(*a, n));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_operator_10(QTransform const * a, double n) {
  return new QTransform(operator-(*a, n));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage() {
  return new QImage();
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage1(QSize const * size, QImage::Format format) {
  return new QImage(*size, format);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage2(int width, int height, QImage::Format format) {
  return new QImage(width, height, format);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage3(unsigned char * data, int width, int height, QImage::Format format, void (*cleanupFunction)(void *), void * cleanupInfo) {
  return new QImage(data, width, height, format, cleanupFunction, cleanupInfo);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage4(unsigned char const * data, int width, int height, QImage::Format format, void (*cleanupFunction)(void *), void * cleanupInfo) {
  return new QImage(data, width, height, format, cleanupFunction, cleanupInfo);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage5(unsigned char * data, int width, int height, long long bytesPerLine, QImage::Format format, void (*cleanupFunction)(void *), void * cleanupInfo) {
  return new QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage6(unsigned char const * data, int width, int height, long long bytesPerLine, QImage::Format format, void (*cleanupFunction)(void *), void * cleanupInfo) {
  return new QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage7(QString const * fileName, char const * format) {
  return new QImage(*fileName, format);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_QImage8(QImage const * arg1) {
  return new QImage(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_dQImage(QImage * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_operator_(QImage * this_ptr, QImage const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_swap(QImage * this_ptr, QImage * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_isNull(QImage const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_devType(QImage const * this_ptr) {
  return this_ptr->devType();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_operator__(QImage const * this_ptr, QImage const * arg1) {
  return this_ptr->operator==(*arg1);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QImage_operator_QVariant(QImage const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_detach(QImage * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_isDetached(QImage const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_copy(QImage const * this_ptr, QRect const * rect) {
  return new QImage(this_ptr->copy(*rect));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_copy1(QImage const * this_ptr, int x, int y, int w, int h) {
  return new QImage(this_ptr->copy(x, y, w, h));
}


RITUAL_EXPORT QImage::Format ctr_qt_gui_ffi_QImage_format(QImage const * this_ptr) {
  return this_ptr->format();
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertToFormat(QImage const * this_ptr, QImage::Format f, int flags) {
  return new QImage(this_ptr->convertToFormat(f, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertToFormat1(QImage * this_ptr, QImage::Format f, int flags) {
  return new QImage(this_ptr->convertToFormat(f, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertToFormat2(QImage const * this_ptr, QImage::Format f, QList< unsigned int > const * colorTable, int flags) {
  return new QImage(this_ptr->convertToFormat(f, *colorTable, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_reinterpretAsFormat(QImage * this_ptr, QImage::Format f) {
  return this_ptr->reinterpretAsFormat(f);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertedTo(QImage const * this_ptr, QImage::Format f, int flags) {
  return new QImage(this_ptr->convertedTo(f, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertedTo1(QImage * this_ptr, QImage::Format f, int flags) {
  return new QImage(this_ptr->convertedTo(f, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_convertTo(QImage * this_ptr, QImage::Format f, int flags) {
  this_ptr->convertTo(f, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_width(QImage const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_height(QImage const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QImage_size(QImage const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QImage_rect(QImage const * this_ptr) {
  return new QRect(this_ptr->rect());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_depth(QImage const * this_ptr) {
  return this_ptr->depth();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_colorCount(QImage const * this_ptr) {
  return this_ptr->colorCount();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_bitPlaneCount(QImage const * this_ptr) {
  return this_ptr->bitPlaneCount();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QImage_color(QImage const * this_ptr, int i) {
  return this_ptr->color(i);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setColor(QImage * this_ptr, int i, unsigned int c) {
  this_ptr->setColor(i, c);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setColorCount(QImage * this_ptr, int arg1) {
  this_ptr->setColorCount(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_allGray(QImage const * this_ptr) {
  return this_ptr->allGray();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_isGrayscale(QImage const * this_ptr) {
  return this_ptr->isGrayscale();
}


RITUAL_EXPORT unsigned char * ctr_qt_gui_ffi_QImage_bits(QImage * this_ptr) {
  return this_ptr->bits();
}


RITUAL_EXPORT unsigned char const * ctr_qt_gui_ffi_QImage_bits1(QImage const * this_ptr) {
  return this_ptr->bits();
}


RITUAL_EXPORT unsigned char const * ctr_qt_gui_ffi_QImage_constBits(QImage const * this_ptr) {
  return this_ptr->constBits();
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QImage_sizeInBytes(QImage const * this_ptr) {
  return this_ptr->sizeInBytes();
}


RITUAL_EXPORT unsigned char * ctr_qt_gui_ffi_QImage_scanLine(QImage * this_ptr, int arg1) {
  return this_ptr->scanLine(arg1);
}


RITUAL_EXPORT unsigned char const * ctr_qt_gui_ffi_QImage_scanLine1(QImage const * this_ptr, int arg1) {
  return this_ptr->scanLine(arg1);
}


RITUAL_EXPORT unsigned char const * ctr_qt_gui_ffi_QImage_constScanLine(QImage const * this_ptr, int arg1) {
  return this_ptr->constScanLine(arg1);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QImage_bytesPerLine(QImage const * this_ptr) {
  return this_ptr->bytesPerLine();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_valid(QImage const * this_ptr, int x, int y) {
  return this_ptr->valid(x, y);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_valid1(QImage const * this_ptr, QPoint const * pt) {
  return this_ptr->valid(*pt);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_pixelIndex(QImage const * this_ptr, int x, int y) {
  return this_ptr->pixelIndex(x, y);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_pixelIndex1(QImage const * this_ptr, QPoint const * pt) {
  return this_ptr->pixelIndex(*pt);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QImage_pixel(QImage const * this_ptr, int x, int y) {
  return this_ptr->pixel(x, y);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QImage_pixel1(QImage const * this_ptr, QPoint const * pt) {
  return this_ptr->pixel(*pt);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setPixel(QImage * this_ptr, int x, int y, unsigned int index_or_rgb) {
  this_ptr->setPixel(x, y, index_or_rgb);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setPixel1(QImage * this_ptr, QPoint const * pt, unsigned int index_or_rgb) {
  this_ptr->setPixel(*pt, index_or_rgb);
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QImage_pixelColor(QImage const * this_ptr, int x, int y) {
  return new QColor(this_ptr->pixelColor(x, y));
}


RITUAL_EXPORT QColor * ctr_qt_gui_ffi_QImage_pixelColor1(QImage const * this_ptr, QPoint const * pt) {
  return new QColor(this_ptr->pixelColor(*pt));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setPixelColor(QImage * this_ptr, int x, int y, QColor const * c) {
  this_ptr->setPixelColor(x, y, *c);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setPixelColor1(QImage * this_ptr, QPoint const * pt, QColor const * c) {
  this_ptr->setPixelColor(*pt, *c);
}


RITUAL_EXPORT QList< unsigned int > * ctr_qt_gui_ffi_QImage_colorTable(QImage const * this_ptr) {
  return new QList< unsigned int >(this_ptr->colorTable());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setColorTable(QImage * this_ptr, QList< unsigned int > const * colors) {
  this_ptr->setColorTable(*colors);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QImage_devicePixelRatio(QImage const * this_ptr) {
  return this_ptr->devicePixelRatio();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setDevicePixelRatio(QImage * this_ptr, double scaleFactor) {
  this_ptr->setDevicePixelRatio(scaleFactor);
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QImage_deviceIndependentSize(QImage const * this_ptr) {
  return new QSizeF(this_ptr->deviceIndependentSize());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_fill(QImage * this_ptr, unsigned int pixel) {
  this_ptr->fill(pixel);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_fill1(QImage * this_ptr, QColor const * color) {
  this_ptr->fill(*color);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_fill2(QImage * this_ptr, Qt::GlobalColor color) {
  this_ptr->fill(color);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_hasAlphaChannel(QImage const * this_ptr) {
  return this_ptr->hasAlphaChannel();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setAlphaChannel(QImage * this_ptr, QImage const * alphaChannel) {
  this_ptr->setAlphaChannel(*alphaChannel);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_createAlphaMask(QImage const * this_ptr, int flags) {
  return new QImage(this_ptr->createAlphaMask(QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_createHeuristicMask(QImage const * this_ptr, bool clipTight) {
  return new QImage(this_ptr->createHeuristicMask(clipTight));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_createMaskFromColor(QImage const * this_ptr, unsigned int color, Qt::MaskMode mode) {
  return new QImage(this_ptr->createMaskFromColor(color, mode));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_scaled(QImage const * this_ptr, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  return new QImage(this_ptr->scaled(w, h, aspectMode, mode));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_scaled1(QImage const * this_ptr, QSize const * s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  return new QImage(this_ptr->scaled(*s, aspectMode, mode));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_scaledToWidth(QImage const * this_ptr, int w, Qt::TransformationMode mode) {
  return new QImage(this_ptr->scaledToWidth(w, mode));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_scaledToHeight(QImage const * this_ptr, int h, Qt::TransformationMode mode) {
  return new QImage(this_ptr->scaledToHeight(h, mode));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_transformed(QImage const * this_ptr, QTransform const * matrix, Qt::TransformationMode mode) {
  return new QImage(this_ptr->transformed(*matrix, mode));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QImage_trueMatrix(QTransform const * arg1, int w, int h) {
  return new QTransform(QImage::trueMatrix(*arg1, w, h));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_mirrored(QImage const * this_ptr, bool horizontally, bool vertically) {
  return new QImage(this_ptr->mirrored(horizontally, vertically));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_mirrored1(QImage * this_ptr, bool horizontally, bool vertically) {
  return new QImage(this_ptr->mirrored(horizontally, vertically));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_mirror(QImage * this_ptr, bool horizontally, bool vertically) {
  this_ptr->mirror(horizontally, vertically);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_rgbSwapped(QImage const * this_ptr) {
  return new QImage(this_ptr->rgbSwapped());
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_rgbSwapped1(QImage * this_ptr) {
  return new QImage(this_ptr->rgbSwapped());
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_flipped(QImage const * this_ptr, int orient) {
  return new QImage(this_ptr->flipped(QFlags< Qt::Orientation >(orient)));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_flipped1(QImage * this_ptr, int orient) {
  return new QImage(this_ptr->flipped(QFlags< Qt::Orientation >(orient)));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_flip(QImage * this_ptr, int orient) {
  this_ptr->flip(QFlags< Qt::Orientation >(orient));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_rgbSwap(QImage * this_ptr) {
  this_ptr->rgbSwap();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_invertPixels(QImage * this_ptr, QImage::InvertMode arg1) {
  this_ptr->invertPixels(arg1);
}


RITUAL_EXPORT QColorSpace * ctr_qt_gui_ffi_QImage_colorSpace(QImage const * this_ptr) {
  return new QColorSpace(this_ptr->colorSpace());
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertedToColorSpace(QImage const * this_ptr, QColorSpace const * colorSpace) {
  return new QImage(this_ptr->convertedToColorSpace(*colorSpace));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertedToColorSpace1(QImage const * this_ptr, QColorSpace const * colorSpace, QImage::Format format, int flags) {
  return new QImage(this_ptr->convertedToColorSpace(*colorSpace, format, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_convertedToColorSpace2(QImage * this_ptr, QColorSpace const * colorSpace, QImage::Format format, int flags) {
  return new QImage(this_ptr->convertedToColorSpace(*colorSpace, format, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_convertToColorSpace(QImage * this_ptr, QColorSpace const * colorSpace) {
  this_ptr->convertToColorSpace(*colorSpace);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_convertToColorSpace1(QImage * this_ptr, QColorSpace const * colorSpace, QImage::Format format, int flags) {
  this_ptr->convertToColorSpace(*colorSpace, format, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setColorSpace(QImage * this_ptr, QColorSpace const * colorSpace) {
  this_ptr->setColorSpace(*colorSpace);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_colorTransformed(QImage const * this_ptr, QColorTransform const * transform) {
  return new QImage(this_ptr->colorTransformed(*transform));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_colorTransformed1(QImage const * this_ptr, QColorTransform const * transform, QImage::Format format, int flags) {
  return new QImage(this_ptr->colorTransformed(*transform, format, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_colorTransformed2(QImage * this_ptr, QColorTransform const * transform) {
  return new QImage(this_ptr->colorTransformed(*transform));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_colorTransformed3(QImage * this_ptr, QColorTransform const * transform, QImage::Format format, int flags) {
  return new QImage(this_ptr->colorTransformed(*transform, format, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_applyColorTransform(QImage * this_ptr, QColorTransform const * transform) {
  this_ptr->applyColorTransform(*transform);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_applyColorTransform1(QImage * this_ptr, QColorTransform const * transform, QImage::Format format, int flags) {
  this_ptr->applyColorTransform(*transform, format, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_load(QImage * this_ptr, QIODevice * device, char const * format) {
  return this_ptr->load(device, format);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_load1(QImage * this_ptr, QString const * fileName, char const * format) {
  return this_ptr->load(*fileName, format);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_loadFromData(QImage * this_ptr, QByteArrayView const * data, char const * format) {
  return this_ptr->loadFromData(*data, format);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_loadFromData1(QImage * this_ptr, unsigned char const * buf, int len, char const * format) {
  return this_ptr->loadFromData(buf, len, format);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_loadFromData2(QImage * this_ptr, QByteArray const * data, char const * format) {
  return this_ptr->loadFromData(*data, format);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_save(QImage const * this_ptr, QString const * fileName, char const * format, int quality) {
  return this_ptr->save(*fileName, format, quality);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QImage_save1(QImage const * this_ptr, QIODevice * device, char const * format, int quality) {
  return this_ptr->save(device, format, quality);
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_fromData(QByteArrayView const * data, char const * format) {
  return new QImage(QImage::fromData(*data, format));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_fromData1(unsigned char const * data, int size, char const * format) {
  return new QImage(QImage::fromData(data, size, format));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QImage_fromData2(QByteArray const * data, char const * format) {
  return new QImage(QImage::fromData(*data, format));
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QImage_cacheKey(QImage const * this_ptr) {
  return this_ptr->cacheKey();
}


RITUAL_EXPORT QPaintEngine * ctr_qt_gui_ffi_QImage_paintEngine(QImage const * this_ptr) {
  return this_ptr->paintEngine();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_dotsPerMeterX(QImage const * this_ptr) {
  return this_ptr->dotsPerMeterX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QImage_dotsPerMeterY(QImage const * this_ptr) {
  return this_ptr->dotsPerMeterY();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setDotsPerMeterX(QImage * this_ptr, int arg1) {
  this_ptr->setDotsPerMeterX(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setDotsPerMeterY(QImage * this_ptr, int arg1) {
  this_ptr->setDotsPerMeterY(arg1);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QImage_offset(QImage const * this_ptr) {
  return new QPoint(this_ptr->offset());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setOffset(QImage * this_ptr, QPoint const * arg1) {
  this_ptr->setOffset(*arg1);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QImage_textKeys(QImage const * this_ptr) {
  return new QList< QString >(this_ptr->textKeys());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QImage_text(QImage const * this_ptr, QString const * key) {
  return new QString(this_ptr->text(*key));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QImage_setText(QImage * this_ptr, QString const * key, QString const * value) {
  this_ptr->setText(*key, *value);
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_QImage_pixelFormat(QImage const * this_ptr) {
  return new QPixelFormat(this_ptr->pixelFormat());
}


RITUAL_EXPORT QPixelFormat * ctr_qt_gui_ffi_QImage_toPixelFormat(QImage::Format format) {
  return new QPixelFormat(QImage::toPixelFormat(format));
}


RITUAL_EXPORT QImage::Format ctr_qt_gui_ffi_QImage_toImageFormat(QPixelFormat const * format) {
  return QImage::toImageFormat(*format);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap3(QImage * value1, QImage * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__15(QDataStream * arg1, QImage const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__16(QDataStream * arg1, QImage * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__17(QDebug const * arg1, QImage const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_QPixmap() {
  return new QPixmap();
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_QPixmap2(int w, int h) {
  return new QPixmap(w, h);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_QPixmap3(QSize const * arg1) {
  return new QPixmap(*arg1);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_QPixmap4(QString const * fileName, char const * format, int flags) {
  return new QPixmap(*fileName, format, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_QPixmap5(QPixmap const * arg1) {
  return new QPixmap(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_dQPixmap(QPixmap * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_operator_(QPixmap * this_ptr, QPixmap const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_swap(QPixmap * this_ptr, QPixmap * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QPixmap_operator_QVariant(QPixmap const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_isNull(QPixmap const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPixmap_devType(QPixmap const * this_ptr) {
  return this_ptr->devType();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPixmap_width(QPixmap const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPixmap_height(QPixmap const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QPixmap_size(QPixmap const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QPixmap_rect(QPixmap const * this_ptr) {
  return new QRect(this_ptr->rect());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPixmap_depth(QPixmap const * this_ptr) {
  return this_ptr->depth();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPixmap_defaultDepth() {
  return QPixmap::defaultDepth();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_fill(QPixmap * this_ptr, QColor const * fillColor) {
  this_ptr->fill(*fillColor);
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QPixmap_mask(QPixmap const * this_ptr) {
  return new QBitmap(this_ptr->mask());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_setMask(QPixmap * this_ptr, QBitmap const * arg1) {
  this_ptr->setMask(*arg1);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QPixmap_devicePixelRatio(QPixmap const * this_ptr) {
  return this_ptr->devicePixelRatio();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_setDevicePixelRatio(QPixmap * this_ptr, double scaleFactor) {
  this_ptr->setDevicePixelRatio(scaleFactor);
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QPixmap_deviceIndependentSize(QPixmap const * this_ptr) {
  return new QSizeF(this_ptr->deviceIndependentSize());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_hasAlpha(QPixmap const * this_ptr) {
  return this_ptr->hasAlpha();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_hasAlphaChannel(QPixmap const * this_ptr) {
  return this_ptr->hasAlphaChannel();
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QPixmap_createHeuristicMask(QPixmap const * this_ptr, bool clipTight) {
  return new QBitmap(this_ptr->createHeuristicMask(clipTight));
}


RITUAL_EXPORT QBitmap * ctr_qt_gui_ffi_QPixmap_createMaskFromColor(QPixmap const * this_ptr, QColor const * maskColor, Qt::MaskMode mode) {
  return new QBitmap(this_ptr->createMaskFromColor(*maskColor, mode));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_scaled(QPixmap const * this_ptr, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  return new QPixmap(this_ptr->scaled(w, h, aspectMode, mode));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_scaled1(QPixmap const * this_ptr, QSize const * s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  return new QPixmap(this_ptr->scaled(*s, aspectMode, mode));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_scaledToWidth(QPixmap const * this_ptr, int w, Qt::TransformationMode mode) {
  return new QPixmap(this_ptr->scaledToWidth(w, mode));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_scaledToHeight(QPixmap const * this_ptr, int h, Qt::TransformationMode mode) {
  return new QPixmap(this_ptr->scaledToHeight(h, mode));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_transformed(QPixmap const * this_ptr, QTransform const * arg1, Qt::TransformationMode mode) {
  return new QPixmap(this_ptr->transformed(*arg1, mode));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QPixmap_trueMatrix(QTransform const * m, int w, int h) {
  return new QTransform(QPixmap::trueMatrix(*m, w, h));
}


RITUAL_EXPORT QImage * ctr_qt_gui_ffi_QPixmap_toImage(QPixmap const * this_ptr) {
  return new QImage(this_ptr->toImage());
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_fromImage(QImage const * image, int flags) {
  return new QPixmap(QPixmap::fromImage(*image, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_fromImageReader(QImageReader * imageReader, int flags) {
  return new QPixmap(QPixmap::fromImageReader(imageReader, QFlags< Qt::ImageConversionFlag >(flags)));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_load(QPixmap * this_ptr, QString const * fileName, char const * format, int flags) {
  return this_ptr->load(*fileName, format, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_loadFromData(QPixmap * this_ptr, unsigned char const * buf, unsigned int len, char const * format, int flags) {
  return this_ptr->loadFromData(buf, len, format, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_loadFromData1(QPixmap * this_ptr, QByteArray const * data, char const * format, int flags) {
  return this_ptr->loadFromData(*data, format, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_save(QPixmap const * this_ptr, QString const * fileName, char const * format, int quality) {
  return this_ptr->save(*fileName, format, quality);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_save1(QPixmap const * this_ptr, QIODevice * device, char const * format, int quality) {
  return this_ptr->save(device, format, quality);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_convertFromImage(QPixmap * this_ptr, QImage const * img, int flags) {
  return this_ptr->convertFromImage(*img, QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_copy(QPixmap const * this_ptr, int x, int y, int width, int height) {
  return new QPixmap(this_ptr->copy(x, y, width, height));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QPixmap_copy1(QPixmap const * this_ptr, QRect const * rect) {
  return new QPixmap(this_ptr->copy(*rect));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_scroll(QPixmap * this_ptr, int dx, int dy, int x, int y, int width, int height, QRegion * exposed) {
  this_ptr->scroll(dx, dy, x, y, width, height, exposed);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_scroll1(QPixmap * this_ptr, int dx, int dy, QRect const * rect, QRegion * exposed) {
  this_ptr->scroll(dx, dy, *rect, exposed);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QPixmap_cacheKey(QPixmap const * this_ptr) {
  return this_ptr->cacheKey();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_isDetached(QPixmap const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPixmap_detach(QPixmap * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_isQBitmap(QPixmap const * this_ptr) {
  return this_ptr->isQBitmap();
}


RITUAL_EXPORT QPaintEngine * ctr_qt_gui_ffi_QPixmap_paintEngine(QPixmap const * this_ptr) {
  return this_ptr->paintEngine();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPixmap_operator_2(QPixmap const * this_ptr) {
  return this_ptr->operator!();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap4(QPixmap * value1, QPixmap * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__18(QDataStream * arg1, QPixmap const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__19(QDataStream * arg1, QPixmap * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__20(QDebug const * arg1, QPixmap const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_QIcon() {
  return new QIcon();
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_QIcon1(QPixmap const * pixmap) {
  return new QIcon(*pixmap);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_QIcon2(QIcon const * other) {
  return new QIcon(*other);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_QIcon4(QString const * fileName) {
  return new QIcon(*fileName);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_QIcon5(QIconEngine * engine) {
  return new QIcon(engine);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_dQIcon(QIcon * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_operator_(QIcon * this_ptr, QIcon const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_swap(QIcon * this_ptr, QIcon * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QIcon_operator_QVariant(QIcon const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIcon_pixmap(QIcon const * this_ptr, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  return new QPixmap(this_ptr->pixmap(*size, mode, state));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIcon_pixmap1(QIcon const * this_ptr, int w, int h, QIcon::Mode mode, QIcon::State state) {
  return new QPixmap(this_ptr->pixmap(w, h, mode, state));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIcon_pixmap2(QIcon const * this_ptr, int extent, QIcon::Mode mode, QIcon::State state) {
  return new QPixmap(this_ptr->pixmap(extent, mode, state));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIcon_pixmap3(QIcon const * this_ptr, QSize const * size, double devicePixelRatio, QIcon::Mode mode, QIcon::State state) {
  return new QPixmap(this_ptr->pixmap(*size, devicePixelRatio, mode, state));
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QIcon_pixmap4(QIcon const * this_ptr, QWindow * window, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  return new QPixmap(this_ptr->pixmap(window, *size, mode, state));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QIcon_actualSize(QIcon const * this_ptr, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  return new QSize(this_ptr->actualSize(*size, mode, state));
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QIcon_actualSize1(QIcon const * this_ptr, QWindow * window, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  return new QSize(this_ptr->actualSize(window, *size, mode, state));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QIcon_name(QIcon const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_paint(QIcon const * this_ptr, QPainter * painter, QRect const * rect, int alignment, QIcon::Mode mode, QIcon::State state) {
  this_ptr->paint(painter, *rect, QFlags< Qt::AlignmentFlag >(alignment), mode, state);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_paint1(QIcon const * this_ptr, QPainter * painter, int x, int y, int w, int h, int alignment, QIcon::Mode mode, QIcon::State state) {
  this_ptr->paint(painter, x, y, w, h, QFlags< Qt::AlignmentFlag >(alignment), mode, state);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIcon_isNull(QIcon const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIcon_isDetached(QIcon const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_detach(QIcon * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QIcon_cacheKey(QIcon const * this_ptr) {
  return this_ptr->cacheKey();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_addPixmap(QIcon * this_ptr, QPixmap const * pixmap, QIcon::Mode mode, QIcon::State state) {
  this_ptr->addPixmap(*pixmap, mode, state);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_addFile(QIcon * this_ptr, QString const * fileName, QSize const * size, QIcon::Mode mode, QIcon::State state) {
  this_ptr->addFile(*fileName, *size, mode, state);
}


RITUAL_EXPORT QList< QSize > * ctr_qt_gui_ffi_QIcon_availableSizes(QIcon const * this_ptr, QIcon::Mode mode, QIcon::State state) {
  return new QList< QSize >(this_ptr->availableSizes(mode, state));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_setIsMask(QIcon * this_ptr, bool isMask) {
  this_ptr->setIsMask(isMask);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIcon_isMask(QIcon const * this_ptr) {
  return this_ptr->isMask();
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_fromTheme(QString const * name) {
  return new QIcon(QIcon::fromTheme(*name));
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_fromTheme1(QString const * name, QIcon const * fallback) {
  return new QIcon(QIcon::fromTheme(*name, *fallback));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIcon_hasThemeIcon(QString const * name) {
  return QIcon::hasThemeIcon(*name);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_fromTheme2(QIcon::ThemeIcon icon) {
  return new QIcon(QIcon::fromTheme(icon));
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QIcon_fromTheme3(QIcon::ThemeIcon icon, QIcon const * fallback) {
  return new QIcon(QIcon::fromTheme(icon, *fallback));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QIcon_hasThemeIcon1(QIcon::ThemeIcon icon) {
  return QIcon::hasThemeIcon(icon);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QIcon_themeSearchPaths() {
  return new QList< QString >(QIcon::themeSearchPaths());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_setThemeSearchPaths(QList< QString > const * searchpath) {
  QIcon::setThemeSearchPaths(*searchpath);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QIcon_fallbackSearchPaths() {
  return new QList< QString >(QIcon::fallbackSearchPaths());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_setFallbackSearchPaths(QList< QString > const * paths) {
  QIcon::setFallbackSearchPaths(*paths);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QIcon_themeName() {
  return new QString(QIcon::themeName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_setThemeName(QString const * path) {
  QIcon::setThemeName(*path);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QIcon_fallbackThemeName() {
  return new QString(QIcon::fallbackThemeName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIcon_setFallbackThemeName(QString const * name) {
  QIcon::setFallbackThemeName(*name);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap5(QIcon * value1, QIcon * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__21(QDataStream * arg1, QIcon const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__22(QDataStream * arg1, QIcon * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__23(QDebug const * dbg, QIcon const * arg2) {
  return new QDebug(operator<<(*dbg, *arg2));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_qt_findAtNxFile(QString const * baseFileName, double targetDevicePixelRatio, double * sourceDevicePixelRatio) {
  return new QString(qt_findAtNxFile(*baseFileName, targetDevicePixelRatio, sourceDevicePixelRatio));
}


RITUAL_EXPORT QAbstractFileIconProvider * ctr_qt_gui_ffi_QAbstractFileIconProvider_QAbstractFileIconProvider() {
  return new QAbstractFileIconProvider();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractFileIconProvider_dQAbstractFileIconProvider(QAbstractFileIconProvider * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QAbstractFileIconProvider_icon(QAbstractFileIconProvider const * this_ptr, QAbstractFileIconProvider::IconType arg1) {
  return new QIcon(this_ptr->icon(arg1));
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QAbstractFileIconProvider_icon1(QAbstractFileIconProvider const * this_ptr, QFileInfo const * arg1) {
  return new QIcon(this_ptr->icon(*arg1));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QAbstractFileIconProvider_type(QAbstractFileIconProvider const * this_ptr, QFileInfo const * arg1) {
  return new QString(this_ptr->type(*arg1));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider * this_ptr, int arg1) {
  this_ptr->setOptions(QFlags< QAbstractFileIconProvider::Option >(arg1));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QAbstractFileIconProvider_options(QAbstractFileIconProvider const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_QVector2D() {
  return new QVector2D();
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_QVector2D2(float xpos, float ypos) {
  return new QVector2D(xpos, ypos);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_QVector2D3(QPoint const * point) {
  return new QVector2D(*point);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_QVector2D4(QPointF const * point) {
  return new QVector2D(*point);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_QVector2D5(QVector3D const * vector) {
  return new QVector2D(*vector);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_QVector2D6(QVector4D const * vector) {
  return new QVector2D(*vector);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QVector2D_isNull(QVector2D const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_x(QVector2D const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_y(QVector2D const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector2D_setX(QVector2D * this_ptr, float x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector2D_setY(QVector2D * this_ptr, float y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT float * ctr_qt_gui_ffi_QVector2D_operator__(QVector2D * this_ptr, int i) {
  return &this_ptr->operator[](i);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_operator__1(QVector2D const * this_ptr, int i) {
  return this_ptr->operator[](i);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_length(QVector2D const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_lengthSquared(QVector2D const * this_ptr) {
  return this_ptr->lengthSquared();
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_normalized(QVector2D const * this_ptr) {
  return new QVector2D(this_ptr->normalized());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector2D_normalize(QVector2D * this_ptr) {
  this_ptr->normalize();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_distanceToPoint(QVector2D const * this_ptr, QVector2D const * point) {
  return this_ptr->distanceToPoint(*point);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_distanceToLine(QVector2D const * this_ptr, QVector2D const * point, QVector2D const * direction) {
  return this_ptr->distanceToLine(*point, *direction);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_operator__2(QVector2D * this_ptr, QVector2D const * vector) {
  return &this_ptr->operator+=(*vector);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_operator__3(QVector2D * this_ptr, QVector2D const * vector) {
  return &this_ptr->operator-=(*vector);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_operator__4(QVector2D * this_ptr, float factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_operator__5(QVector2D * this_ptr, QVector2D const * vector) {
  return &this_ptr->operator*=(*vector);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_operator__6(QVector2D * this_ptr, float divisor) {
  return &this_ptr->operator/=(divisor);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector2D_operator__7(QVector2D * this_ptr, QVector2D const * vector) {
  return &this_ptr->operator/=(*vector);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector2D_dotProduct(QVector2D const * v1, QVector2D const * v2) {
  return QVector2D::dotProduct(*v1, *v2);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector2D_toVector3D(QVector2D const * this_ptr) {
  return new QVector3D(this_ptr->toVector3D());
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector2D_toVector4D(QVector2D const * this_ptr) {
  return new QVector4D(this_ptr->toVector4D());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QVector2D_toPoint(QVector2D const * this_ptr) {
  return new QPoint(this_ptr->toPoint());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QVector2D_toPointF(QVector2D const * this_ptr) {
  return new QPointF(this_ptr->toPointF());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QVector2D_operator_QVariant(QVector2D const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D() {
  return new QVector3D();
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D2(float xpos, float ypos, float zpos) {
  return new QVector3D(xpos, ypos, zpos);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D3(QPoint const * point) {
  return new QVector3D(*point);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D4(QPointF const * point) {
  return new QVector3D(*point);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D5(QVector2D const * vector) {
  return new QVector3D(*vector);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D6(QVector2D const * vector, float zpos) {
  return new QVector3D(*vector, zpos);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_QVector3D7(QVector4D const * vector) {
  return new QVector3D(*vector);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QVector3D_isNull(QVector3D const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_x(QVector3D const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_y(QVector3D const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_z(QVector3D const * this_ptr) {
  return this_ptr->z();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector3D_setX(QVector3D * this_ptr, float x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector3D_setY(QVector3D * this_ptr, float y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector3D_setZ(QVector3D * this_ptr, float z) {
  this_ptr->setZ(z);
}


RITUAL_EXPORT float * ctr_qt_gui_ffi_QVector3D_operator__(QVector3D * this_ptr, int i) {
  return &this_ptr->operator[](i);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_operator__1(QVector3D const * this_ptr, int i) {
  return this_ptr->operator[](i);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_length(QVector3D const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_lengthSquared(QVector3D const * this_ptr) {
  return this_ptr->lengthSquared();
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_normalized(QVector3D const * this_ptr) {
  return new QVector3D(this_ptr->normalized());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector3D_normalize(QVector3D * this_ptr) {
  this_ptr->normalize();
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_operator__2(QVector3D * this_ptr, QVector3D const * vector) {
  return &this_ptr->operator+=(*vector);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_operator__3(QVector3D * this_ptr, QVector3D const * vector) {
  return &this_ptr->operator-=(*vector);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_operator__4(QVector3D * this_ptr, float factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_operator__5(QVector3D * this_ptr, QVector3D const * vector) {
  return &this_ptr->operator*=(*vector);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_operator__6(QVector3D * this_ptr, float divisor) {
  return &this_ptr->operator/=(divisor);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_operator__7(QVector3D * this_ptr, QVector3D const * vector) {
  return &this_ptr->operator/=(*vector);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_dotProduct(QVector3D const * v1, QVector3D const * v2) {
  return QVector3D::dotProduct(*v1, *v2);
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_crossProduct(QVector3D const * v1, QVector3D const * v2) {
  return new QVector3D(QVector3D::crossProduct(*v1, *v2));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_normal(QVector3D const * v1, QVector3D const * v2) {
  return new QVector3D(QVector3D::normal(*v1, *v2));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_normal1(QVector3D const * v1, QVector3D const * v2, QVector3D const * v3) {
  return new QVector3D(QVector3D::normal(*v1, *v2, *v3));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_project(QVector3D const * this_ptr, QMatrix4x4 const * modelView, QMatrix4x4 const * projection, QRect const * viewport) {
  return new QVector3D(this_ptr->project(*modelView, *projection, *viewport));
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector3D_unproject(QVector3D const * this_ptr, QMatrix4x4 const * modelView, QMatrix4x4 const * projection, QRect const * viewport) {
  return new QVector3D(this_ptr->unproject(*modelView, *projection, *viewport));
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_distanceToPoint(QVector3D const * this_ptr, QVector3D const * point) {
  return this_ptr->distanceToPoint(*point);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_distanceToPlane(QVector3D const * this_ptr, QVector3D const * plane, QVector3D const * normal) {
  return this_ptr->distanceToPlane(*plane, *normal);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_distanceToPlane1(QVector3D const * this_ptr, QVector3D const * plane1, QVector3D const * plane2, QVector3D const * plane3) {
  return this_ptr->distanceToPlane(*plane1, *plane2, *plane3);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector3D_distanceToLine(QVector3D const * this_ptr, QVector3D const * point, QVector3D const * direction) {
  return this_ptr->distanceToLine(*point, *direction);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector3D_toVector2D(QVector3D const * this_ptr) {
  return new QVector2D(this_ptr->toVector2D());
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector3D_toVector4D(QVector3D const * this_ptr) {
  return new QVector4D(this_ptr->toVector4D());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QVector3D_toPoint(QVector3D const * this_ptr) {
  return new QPoint(this_ptr->toPoint());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QVector3D_toPointF(QVector3D const * this_ptr) {
  return new QPointF(this_ptr->toPointF());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QVector3D_operator_QVariant(QVector3D const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D() {
  return new QVector4D();
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D2(float xpos, float ypos, float zpos, float wpos) {
  return new QVector4D(xpos, ypos, zpos, wpos);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D3(QPoint const * point) {
  return new QVector4D(*point);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D4(QPointF const * point) {
  return new QVector4D(*point);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D5(QVector2D const * vector) {
  return new QVector4D(*vector);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D6(QVector2D const * vector, float zpos, float wpos) {
  return new QVector4D(*vector, zpos, wpos);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D7(QVector3D const * vector) {
  return new QVector4D(*vector);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_QVector4D8(QVector3D const * vector, float wpos) {
  return new QVector4D(*vector, wpos);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QVector4D_isNull(QVector4D const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_x(QVector4D const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_y(QVector4D const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_z(QVector4D const * this_ptr) {
  return this_ptr->z();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_w(QVector4D const * this_ptr) {
  return this_ptr->w();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector4D_setX(QVector4D * this_ptr, float x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector4D_setY(QVector4D * this_ptr, float y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector4D_setZ(QVector4D * this_ptr, float z) {
  this_ptr->setZ(z);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector4D_setW(QVector4D * this_ptr, float w) {
  this_ptr->setW(w);
}


RITUAL_EXPORT float * ctr_qt_gui_ffi_QVector4D_operator__(QVector4D * this_ptr, int i) {
  return &this_ptr->operator[](i);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_operator__1(QVector4D const * this_ptr, int i) {
  return this_ptr->operator[](i);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_length(QVector4D const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_lengthSquared(QVector4D const * this_ptr) {
  return this_ptr->lengthSquared();
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_normalized(QVector4D const * this_ptr) {
  return new QVector4D(this_ptr->normalized());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QVector4D_normalize(QVector4D * this_ptr) {
  this_ptr->normalize();
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_operator__2(QVector4D * this_ptr, QVector4D const * vector) {
  return &this_ptr->operator+=(*vector);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_operator__3(QVector4D * this_ptr, QVector4D const * vector) {
  return &this_ptr->operator-=(*vector);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_operator__4(QVector4D * this_ptr, float factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_operator__5(QVector4D * this_ptr, QVector4D const * vector) {
  return &this_ptr->operator*=(*vector);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_operator__6(QVector4D * this_ptr, float divisor) {
  return &this_ptr->operator/=(divisor);
}


RITUAL_EXPORT QVector4D * ctr_qt_gui_ffi_QVector4D_operator__7(QVector4D * this_ptr, QVector4D const * vector) {
  return &this_ptr->operator/=(*vector);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QVector4D_dotProduct(QVector4D const * v1, QVector4D const * v2) {
  return QVector4D::dotProduct(*v1, *v2);
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector4D_toVector2D(QVector4D const * this_ptr) {
  return new QVector2D(this_ptr->toVector2D());
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QVector4D_toVector2DAffine(QVector4D const * this_ptr) {
  return new QVector2D(this_ptr->toVector2DAffine());
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector4D_toVector3D(QVector4D const * this_ptr) {
  return new QVector3D(this_ptr->toVector3D());
}


RITUAL_EXPORT QVector3D * ctr_qt_gui_ffi_QVector4D_toVector3DAffine(QVector4D const * this_ptr) {
  return new QVector3D(this_ptr->toVector3DAffine());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QVector4D_toPoint(QVector4D const * this_ptr) {
  return new QPoint(this_ptr->toPoint());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QVector4D_toPointF(QVector4D const * this_ptr) {
  return new QPointF(this_ptr->toPointF());
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QVector4D_operator_QVariant(QVector4D const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__24(QDebug const * dbg, QVector2D const * vector) {
  return new QDebug(operator<<(*dbg, *vector));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__25(QDataStream * arg1, QVector2D const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__26(QDataStream * arg1, QVector2D * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__27(QDebug const * dbg, QVector3D const * vector) {
  return new QDebug(operator<<(*dbg, *vector));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__28(QDataStream * arg1, QVector3D const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__29(QDataStream * arg1, QVector3D * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__30(QDebug const * dbg, QVector4D const * vector) {
  return new QDebug(operator<<(*dbg, *vector));
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__31(QDataStream * arg1, QVector4D const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__32(QDataStream * arg1, QVector4D * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QScreen_metaObject(QScreen const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QScreen_qt_metacast(QScreen * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QScreen_qt_metacall(QScreen * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QScreen_tr(char const * s, char const * c, int n) {
  return new QString(QScreen::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QScreen_dQScreen(QScreen * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QScreen_name(QScreen const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QScreen_manufacturer(QScreen const * this_ptr) {
  return new QString(this_ptr->manufacturer());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QScreen_model(QScreen const * this_ptr) {
  return new QString(this_ptr->model());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QScreen_serialNumber(QScreen const * this_ptr) {
  return new QString(this_ptr->serialNumber());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QScreen_depth(QScreen const * this_ptr) {
  return this_ptr->depth();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QScreen_size(QScreen const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QScreen_geometry(QScreen const * this_ptr) {
  return new QRect(this_ptr->geometry());
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QScreen_physicalSize(QScreen const * this_ptr) {
  return new QSizeF(this_ptr->physicalSize());
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_physicalDotsPerInchX(QScreen const * this_ptr) {
  return this_ptr->physicalDotsPerInchX();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_physicalDotsPerInchY(QScreen const * this_ptr) {
  return this_ptr->physicalDotsPerInchY();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_physicalDotsPerInch(QScreen const * this_ptr) {
  return this_ptr->physicalDotsPerInch();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_logicalDotsPerInchX(QScreen const * this_ptr) {
  return this_ptr->logicalDotsPerInchX();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_logicalDotsPerInchY(QScreen const * this_ptr) {
  return this_ptr->logicalDotsPerInchY();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_logicalDotsPerInch(QScreen const * this_ptr) {
  return this_ptr->logicalDotsPerInch();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_devicePixelRatio(QScreen const * this_ptr) {
  return this_ptr->devicePixelRatio();
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QScreen_availableSize(QScreen const * this_ptr) {
  return new QSize(this_ptr->availableSize());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QScreen_availableGeometry(QScreen const * this_ptr) {
  return new QRect(this_ptr->availableGeometry());
}


RITUAL_EXPORT QList< QScreen * > * ctr_qt_gui_ffi_QScreen_virtualSiblings(QScreen const * this_ptr) {
  return new QList< QScreen * >(this_ptr->virtualSiblings());
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_QScreen_virtualSiblingAt(QScreen * this_ptr, QPoint const * point) {
  return this_ptr->virtualSiblingAt(*point);
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QScreen_virtualSize(QScreen const * this_ptr) {
  return new QSize(this_ptr->virtualSize());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QScreen_virtualGeometry(QScreen const * this_ptr) {
  return new QRect(this_ptr->virtualGeometry());
}


RITUAL_EXPORT QSize * ctr_qt_gui_ffi_QScreen_availableVirtualSize(QScreen const * this_ptr) {
  return new QSize(this_ptr->availableVirtualSize());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QScreen_availableVirtualGeometry(QScreen const * this_ptr) {
  return new QRect(this_ptr->availableVirtualGeometry());
}


RITUAL_EXPORT Qt::ScreenOrientation ctr_qt_gui_ffi_QScreen_primaryOrientation(QScreen const * this_ptr) {
  return this_ptr->primaryOrientation();
}


RITUAL_EXPORT Qt::ScreenOrientation ctr_qt_gui_ffi_QScreen_orientation(QScreen const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT Qt::ScreenOrientation ctr_qt_gui_ffi_QScreen_nativeOrientation(QScreen const * this_ptr) {
  return this_ptr->nativeOrientation();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QScreen_angleBetween(QScreen const * this_ptr, Qt::ScreenOrientation a, Qt::ScreenOrientation b) {
  return this_ptr->angleBetween(a, b);
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QScreen_transformBetween(QScreen const * this_ptr, Qt::ScreenOrientation a, Qt::ScreenOrientation b, QRect const * target) {
  return new QTransform(this_ptr->transformBetween(a, b, *target));
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QScreen_mapBetween(QScreen const * this_ptr, Qt::ScreenOrientation a, Qt::ScreenOrientation b, QRect const * rect) {
  return new QRect(this_ptr->mapBetween(a, b, *rect));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QScreen_isPortrait(QScreen const * this_ptr, Qt::ScreenOrientation orientation) {
  return this_ptr->isPortrait(orientation);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QScreen_isLandscape(QScreen const * this_ptr, Qt::ScreenOrientation orientation) {
  return this_ptr->isLandscape(orientation);
}


RITUAL_EXPORT QPixmap * ctr_qt_gui_ffi_QScreen_grabWindow(QScreen * this_ptr, unsigned long long window, int x, int y, int w, int h) {
  return new QPixmap(this_ptr->grabWindow(window, x, y, w, h));
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QScreen_refreshRate(QScreen const * this_ptr) {
  return this_ptr->refreshRate();
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__33(QDebug const * arg1, QScreen const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QInputMethod_metaObject(QInputMethod const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QInputMethod_qt_metacast(QInputMethod * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputMethod_qt_metacall(QInputMethod * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QInputMethod_tr(char const * s, char const * c, int n) {
  return new QString(QInputMethod::tr(s, c, n));
}


RITUAL_EXPORT QTransform * ctr_qt_gui_ffi_QInputMethod_inputItemTransform(QInputMethod const * this_ptr) {
  return new QTransform(this_ptr->inputItemTransform());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_setInputItemTransform(QInputMethod * this_ptr, QTransform const * transform) {
  this_ptr->setInputItemTransform(*transform);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QInputMethod_inputItemRectangle(QInputMethod const * this_ptr) {
  return new QRectF(this_ptr->inputItemRectangle());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_setInputItemRectangle(QInputMethod * this_ptr, QRectF const * rect) {
  this_ptr->setInputItemRectangle(*rect);
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QInputMethod_cursorRectangle(QInputMethod const * this_ptr) {
  return new QRectF(this_ptr->cursorRectangle());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QInputMethod_anchorRectangle(QInputMethod const * this_ptr) {
  return new QRectF(this_ptr->anchorRectangle());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QInputMethod_keyboardRectangle(QInputMethod const * this_ptr) {
  return new QRectF(this_ptr->keyboardRectangle());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QInputMethod_inputItemClipRectangle(QInputMethod const * this_ptr) {
  return new QRectF(this_ptr->inputItemClipRectangle());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QInputMethod_isVisible(QInputMethod const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_setVisible(QInputMethod * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QInputMethod_isAnimating(QInputMethod const * this_ptr) {
  return this_ptr->isAnimating();
}


RITUAL_EXPORT QLocale * ctr_qt_gui_ffi_QInputMethod_locale(QInputMethod const * this_ptr) {
  return new QLocale(this_ptr->locale());
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_gui_ffi_QInputMethod_inputDirection(QInputMethod const * this_ptr) {
  return this_ptr->inputDirection();
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QInputMethod_queryFocusObject(Qt::InputMethodQuery query, QVariant const * argument) {
  return new QVariant(QInputMethod::queryFocusObject(query, *argument));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_show(QInputMethod * this_ptr) {
  this_ptr->show();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_hide(QInputMethod * this_ptr) {
  this_ptr->hide();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_update(QInputMethod * this_ptr, int queries) {
  this_ptr->update(QFlags< Qt::InputMethodQuery >(queries));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_reset(QInputMethod * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_commit(QInputMethod * this_ptr) {
  this_ptr->commit();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethod_invokeAction(QInputMethod * this_ptr, QInputMethod::Action a, int cursorPosition) {
  this_ptr->invokeAction(a, cursorPosition);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QGuiApplication_metaObject(QGuiApplication const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QGuiApplication_qt_metacast(QGuiApplication * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QGuiApplication_qt_metacall(QGuiApplication * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGuiApplication_tr(char const * s, char const * c, int n) {
  return new QString(QGuiApplication::tr(s, c, n));
}


RITUAL_EXPORT QGuiApplication * ctr_qt_gui_ffi_QGuiApplication_QGuiApplication(int * argc, char * * argv, int arg3) {
  return new QGuiApplication(*argc, argv, arg3);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_dQGuiApplication(QGuiApplication * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setApplicationDisplayName(QString const * name) {
  QGuiApplication::setApplicationDisplayName(*name);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGuiApplication_applicationDisplayName() {
  return new QString(QGuiApplication::applicationDisplayName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setBadgeNumber(QGuiApplication * this_ptr, long long number) {
  this_ptr->setBadgeNumber(number);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setDesktopFileName(QString const * name) {
  QGuiApplication::setDesktopFileName(*name);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGuiApplication_desktopFileName() {
  return new QString(QGuiApplication::desktopFileName());
}


RITUAL_EXPORT QList< QWindow * > * ctr_qt_gui_ffi_QGuiApplication_allWindows() {
  return new QList< QWindow * >(QGuiApplication::allWindows());
}


RITUAL_EXPORT QList< QWindow * > * ctr_qt_gui_ffi_QGuiApplication_topLevelWindows() {
  return new QList< QWindow * >(QGuiApplication::topLevelWindows());
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QGuiApplication_topLevelAt(QPoint const * pos) {
  return QGuiApplication::topLevelAt(*pos);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setWindowIcon(QIcon const * icon) {
  QGuiApplication::setWindowIcon(*icon);
}


RITUAL_EXPORT QIcon * ctr_qt_gui_ffi_QGuiApplication_windowIcon() {
  return new QIcon(QGuiApplication::windowIcon());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGuiApplication_platformName() {
  return new QString(QGuiApplication::platformName());
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QGuiApplication_modalWindow() {
  return QGuiApplication::modalWindow();
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QGuiApplication_focusWindow() {
  return QGuiApplication::focusWindow();
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QGuiApplication_focusObject() {
  return QGuiApplication::focusObject();
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_QGuiApplication_primaryScreen() {
  return QGuiApplication::primaryScreen();
}


RITUAL_EXPORT QList< QScreen * > * ctr_qt_gui_ffi_QGuiApplication_screens() {
  return new QList< QScreen * >(QGuiApplication::screens());
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_QGuiApplication_screenAt(QPoint const * point) {
  return QGuiApplication::screenAt(*point);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QGuiApplication_devicePixelRatio(QGuiApplication const * this_ptr) {
  return this_ptr->devicePixelRatio();
}


RITUAL_EXPORT QCursor * ctr_qt_gui_ffi_QGuiApplication_overrideCursor() {
  return QGuiApplication::overrideCursor();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setOverrideCursor(QCursor const * arg1) {
  QGuiApplication::setOverrideCursor(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_changeOverrideCursor(QCursor const * arg1) {
  QGuiApplication::changeOverrideCursor(*arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_restoreOverrideCursor() {
  QGuiApplication::restoreOverrideCursor();
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QGuiApplication_font() {
  return new QFont(QGuiApplication::font());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setFont(QFont const * arg1) {
  QGuiApplication::setFont(*arg1);
}


RITUAL_EXPORT QClipboard * ctr_qt_gui_ffi_QGuiApplication_clipboard() {
  return QGuiApplication::clipboard();
}


RITUAL_EXPORT QPalette * ctr_qt_gui_ffi_QGuiApplication_palette() {
  return new QPalette(QGuiApplication::palette());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setPalette(QPalette const * pal) {
  QGuiApplication::setPalette(*pal);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QGuiApplication_keyboardModifiers() {
  return int(QGuiApplication::keyboardModifiers());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QGuiApplication_queryKeyboardModifiers() {
  return int(QGuiApplication::queryKeyboardModifiers());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QGuiApplication_mouseButtons() {
  return int(QGuiApplication::mouseButtons());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setLayoutDirection(Qt::LayoutDirection direction) {
  QGuiApplication::setLayoutDirection(direction);
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_gui_ffi_QGuiApplication_layoutDirection() {
  return QGuiApplication::layoutDirection();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGuiApplication_isRightToLeft() {
  return QGuiApplication::isRightToLeft();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGuiApplication_isLeftToRight() {
  return QGuiApplication::isLeftToRight();
}


RITUAL_EXPORT QStyleHints * ctr_qt_gui_ffi_QGuiApplication_styleHints() {
  return QGuiApplication::styleHints();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setDesktopSettingsAware(bool on) {
  QGuiApplication::setDesktopSettingsAware(on);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGuiApplication_desktopSettingsAware() {
  return QGuiApplication::desktopSettingsAware();
}


RITUAL_EXPORT QInputMethod * ctr_qt_gui_ffi_QGuiApplication_inputMethod() {
  return QGuiApplication::inputMethod();
}


RITUAL_EXPORT void (*ctr_qt_gui_ffi_QGuiApplication_platformFunction(QByteArray const * function))() {
  return QGuiApplication::platformFunction(*function);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setQuitOnLastWindowClosed(bool quit) {
  QGuiApplication::setQuitOnLastWindowClosed(quit);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGuiApplication_quitOnLastWindowClosed() {
  return QGuiApplication::quitOnLastWindowClosed();
}


RITUAL_EXPORT Qt::ApplicationState ctr_qt_gui_ffi_QGuiApplication_applicationState() {
  return QGuiApplication::applicationState();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy policy) {
  QGuiApplication::setHighDpiScaleFactorRoundingPolicy(policy);
}


RITUAL_EXPORT Qt::HighDpiScaleFactorRoundingPolicy ctr_qt_gui_ffi_QGuiApplication_highDpiScaleFactorRoundingPolicy() {
  return QGuiApplication::highDpiScaleFactorRoundingPolicy();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QGuiApplication_exec() {
  return QGuiApplication::exec();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGuiApplication_notify(QGuiApplication * this_ptr, QObject * arg1, QEvent * arg2) {
  return this_ptr->notify(arg1, arg2);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGuiApplication_isSessionRestored(QGuiApplication const * this_ptr) {
  return this_ptr->isSessionRestored();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGuiApplication_sessionId(QGuiApplication const * this_ptr) {
  return new QString(this_ptr->sessionId());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QGuiApplication_sessionKey(QGuiApplication const * this_ptr) {
  return new QString(this_ptr->sessionKey());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QGuiApplication_isSavingSession(QGuiApplication const * this_ptr) {
  return this_ptr->isSavingSession();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QGuiApplication_sync() {
  QGuiApplication::sync();
}


#ifndef _WIN32
RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QNativeInterface_QWaylandApplication_lastInputSerial(QNativeInterface::QWaylandApplication const * this_ptr) {
  return this_ptr->lastInputSerial();
}
#endif


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QInputDevice_metaObject(QInputDevice const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QInputDevice_qt_metacast(QInputDevice * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputDevice_qt_metacall(QInputDevice * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QInputDevice_tr(char const * s, char const * c, int n) {
  return new QString(QInputDevice::tr(s, c, n));
}


RITUAL_EXPORT QInputDevice * ctr_qt_gui_ffi_QInputDevice_QInputDevice(QObject * parent) {
  return new QInputDevice(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputDevice_dQInputDevice(QInputDevice * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QInputDevice * ctr_qt_gui_ffi_QInputDevice_QInputDevice1(QString const * name, long long systemId, QInputDevice::DeviceType type, QString const * seatName, QObject * parent) {
  return new QInputDevice(*name, systemId, type, *seatName, parent);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QInputDevice_name(QInputDevice const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT QInputDevice::DeviceType ctr_qt_gui_ffi_QInputDevice_type(QInputDevice const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputDevice_capabilities(QInputDevice const * this_ptr) {
  return int(this_ptr->capabilities());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QInputDevice_hasCapability(QInputDevice const * this_ptr, QInputDevice::Capability cap) {
  return this_ptr->hasCapability(cap);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QInputDevice_systemId(QInputDevice const * this_ptr) {
  return this_ptr->systemId();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QInputDevice_seatName(QInputDevice const * this_ptr) {
  return new QString(this_ptr->seatName());
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QInputDevice_availableVirtualGeometry(QInputDevice const * this_ptr) {
  return new QRect(this_ptr->availableVirtualGeometry());
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QInputDevice_seatNames() {
  return new QList< QString >(QInputDevice::seatNames());
}


RITUAL_EXPORT QList< QInputDevice const * > * ctr_qt_gui_ffi_QInputDevice_devices() {
  return new QList< QInputDevice const * >(QInputDevice::devices());
}


RITUAL_EXPORT QInputDevice const * ctr_qt_gui_ffi_QInputDevice_primaryKeyboard(QString const * seatName) {
  return QInputDevice::primaryKeyboard(*seatName);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QInputDevice_operator__(QInputDevice const * this_ptr, QInputDevice const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__34(QDebug const * arg1, QInputDevice const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QPointingDeviceUniqueId * ctr_qt_gui_ffi_QPointingDeviceUniqueId_QPointingDeviceUniqueId() {
  return new QPointingDeviceUniqueId();
}


RITUAL_EXPORT QPointingDeviceUniqueId * ctr_qt_gui_ffi_QPointingDeviceUniqueId_fromNumericId(long long id) {
  return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(id));
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointingDeviceUniqueId_isValid(QPointingDeviceUniqueId const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QPointingDeviceUniqueId_numericId(QPointingDeviceUniqueId const * this_ptr) {
  return this_ptr->numericId();
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash1(QPointingDeviceUniqueId const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_gui_ffi_QPointingDevice_metaObject(QPointingDevice const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_gui_ffi_QPointingDevice_qt_metacast(QPointingDevice * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPointingDevice_qt_metacall(QPointingDevice * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QPointingDevice_tr(char const * s, char const * c, int n) {
  return new QString(QPointingDevice::tr(s, c, n));
}


RITUAL_EXPORT QPointingDevice * ctr_qt_gui_ffi_QPointingDevice_QPointingDevice(QObject * parent) {
  return new QPointingDevice(parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointingDevice_dQPointingDevice(QPointingDevice * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointingDevice * ctr_qt_gui_ffi_QPointingDevice_QPointingDevice1(QString const * name, long long systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, int caps, int maxPoints, int buttonCount, QString const * seatName, QPointingDeviceUniqueId const * uniqueId, QObject * parent) {
  return new QPointingDevice(*name, systemId, devType, pType, QFlags< QInputDevice::Capability >(caps), maxPoints, buttonCount, *seatName, *uniqueId, parent);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointingDevice_setType(QPointingDevice * this_ptr, QInputDevice::DeviceType devType) {
  this_ptr->setType(devType);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointingDevice_setCapabilities(QPointingDevice * this_ptr, int caps) {
  this_ptr->setCapabilities(QFlags< QInputDevice::Capability >(caps));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointingDevice_setMaximumTouchPoints(QPointingDevice * this_ptr, int c) {
  this_ptr->setMaximumTouchPoints(c);
}


RITUAL_EXPORT QPointingDevice::PointerType ctr_qt_gui_ffi_QPointingDevice_pointerType(QPointingDevice const * this_ptr) {
  return this_ptr->pointerType();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPointingDevice_maximumPoints(QPointingDevice const * this_ptr) {
  return this_ptr->maximumPoints();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QPointingDevice_buttonCount(QPointingDevice const * this_ptr) {
  return this_ptr->buttonCount();
}


RITUAL_EXPORT QPointingDeviceUniqueId * ctr_qt_gui_ffi_QPointingDevice_uniqueId(QPointingDevice const * this_ptr) {
  return new QPointingDeviceUniqueId(this_ptr->uniqueId());
}


RITUAL_EXPORT QPointingDevice const * ctr_qt_gui_ffi_QPointingDevice_primaryPointingDevice(QString const * seatName) {
  return QPointingDevice::primaryPointingDevice(*seatName);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointingDevice_operator__(QPointingDevice const * this_ptr, QPointingDevice const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__35(QDebug const * arg1, QPointingDevice const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QEventPoint_QEventPoint(int id, QPointingDevice const * device) {
  return new QEventPoint(id, device);
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QEventPoint_QEventPoint1(int pointId, QEventPoint::State state, QPointF const * scenePosition, QPointF const * globalPosition) {
  return new QEventPoint(pointId, state, *scenePosition, *globalPosition);
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QEventPoint_QEventPoint2(QEventPoint const * other) {
  return new QEventPoint(*other);
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QEventPoint_operator_(QEventPoint * this_ptr, QEventPoint const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QEventPoint_operator__(QEventPoint const * this_ptr, QEventPoint const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QEventPoint_dQEventPoint(QEventPoint * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QEventPoint_swap(QEventPoint * this_ptr, QEventPoint * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_position(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->position());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_pressPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->pressPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_grabPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->grabPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_lastPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->lastPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_scenePosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->scenePosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_scenePressPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->scenePressPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_sceneGrabPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->sceneGrabPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_sceneLastPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->sceneLastPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_globalPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->globalPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_globalPressPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->globalPressPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_globalGrabPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->globalGrabPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_globalLastPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->globalLastPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_normalizedPosition(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->normalizedPosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_pos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->pos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_startPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->startPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_scenePos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_startScenePos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->startScenePos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_screenPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->screenPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_startScreenPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->startScreenPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_startNormalizedPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->startNormalizedPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_normalizedPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->normalizedPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_lastPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->lastPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_lastScenePos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->lastScenePos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_lastScreenPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->lastScreenPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEventPoint_lastNormalizedPos(QEventPoint const * this_ptr) {
  return new QPointF(this_ptr->lastNormalizedPos());
}


RITUAL_EXPORT QVector2D * ctr_qt_gui_ffi_QEventPoint_velocity(QEventPoint const * this_ptr) {
  return new QVector2D(this_ptr->velocity());
}


RITUAL_EXPORT QEventPoint::State ctr_qt_gui_ffi_QEventPoint_state(QEventPoint const * this_ptr) {
  return this_ptr->state();
}


RITUAL_EXPORT QPointingDevice const * ctr_qt_gui_ffi_QEventPoint_device(QEventPoint const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QEventPoint_id(QEventPoint const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT QPointingDeviceUniqueId * ctr_qt_gui_ffi_QEventPoint_uniqueId(QEventPoint const * this_ptr) {
  return new QPointingDeviceUniqueId(this_ptr->uniqueId());
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_QEventPoint_timestamp(QEventPoint const * this_ptr) {
  return this_ptr->timestamp();
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_QEventPoint_lastTimestamp(QEventPoint const * this_ptr) {
  return this_ptr->lastTimestamp();
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_QEventPoint_pressTimestamp(QEventPoint const * this_ptr) {
  return this_ptr->pressTimestamp();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QEventPoint_timeHeld(QEventPoint const * this_ptr) {
  return this_ptr->timeHeld();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QEventPoint_pressure(QEventPoint const * this_ptr) {
  return this_ptr->pressure();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QEventPoint_rotation(QEventPoint const * this_ptr) {
  return this_ptr->rotation();
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QEventPoint_ellipseDiameters(QEventPoint const * this_ptr) {
  return new QSizeF(this_ptr->ellipseDiameters());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QEventPoint_isAccepted(QEventPoint const * this_ptr) {
  return this_ptr->isAccepted();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QEventPoint_setAccepted(QEventPoint * this_ptr, bool accepted) {
  this_ptr->setAccepted(accepted);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__36(QDebug const * arg1, QEventPoint const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__37(QDebug const * arg1, QEventPoint const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap6(QEventPoint * value1, QEventPoint * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__38(QDataStream * in, QKeySequence const * ks) {
  return &operator<<(*in, *ks);
}


RITUAL_EXPORT QDataStream * ctr_qt_gui_ffi_operator__39(QDataStream * out, QKeySequence * ks) {
  return &operator>>(*out, *ks);
}


RITUAL_EXPORT unsigned long ctr_qt_gui_ffi_qHash2(QKeySequence const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_QKeySequence() {
  return new QKeySequence();
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_QKeySequence1(QString const * key, QKeySequence::SequenceFormat format) {
  return new QKeySequence(*key, format);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_QKeySequence2(int k1, int k2, int k3, int k4) {
  return new QKeySequence(k1, k2, k3, k4);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_QKeySequence3(QKeyCombination const * k1, QKeyCombination const * k2, QKeyCombination const * k3, QKeyCombination const * k4) {
  return new QKeySequence(*k1, *k2, *k3, *k4);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_QKeySequence4(QKeySequence const * ks) {
  return new QKeySequence(*ks);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_QKeySequence5(QKeySequence::StandardKey key) {
  return new QKeySequence(key);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QKeySequence_dQKeySequence(QKeySequence * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QKeySequence_count(QKeySequence const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeySequence_isEmpty(QKeySequence const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QKeySequence_toString(QKeySequence const * this_ptr, QKeySequence::SequenceFormat format) {
  return new QString(this_ptr->toString(format));
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_fromString(QString const * str, QKeySequence::SequenceFormat format) {
  return new QKeySequence(QKeySequence::fromString(*str, format));
}


RITUAL_EXPORT QList< QKeySequence > * ctr_qt_gui_ffi_QKeySequence_listFromString(QString const * str, QKeySequence::SequenceFormat format) {
  return new QList< QKeySequence >(QKeySequence::listFromString(*str, format));
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QKeySequence_listToString(QList< QKeySequence > const * list, QKeySequence::SequenceFormat format) {
  return new QString(QKeySequence::listToString(*list, format));
}


RITUAL_EXPORT QKeySequence::SequenceMatch ctr_qt_gui_ffi_QKeySequence_matches(QKeySequence const * this_ptr, QKeySequence const * seq) {
  return this_ptr->matches(*seq);
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_mnemonic(QString const * text) {
  return new QKeySequence(QKeySequence::mnemonic(*text));
}


RITUAL_EXPORT QList< QKeySequence > * ctr_qt_gui_ffi_QKeySequence_keyBindings(QKeySequence::StandardKey key) {
  return new QList< QKeySequence >(QKeySequence::keyBindings(key));
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QKeySequence_operator_QVariant(QKeySequence const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT QKeyCombination * ctr_qt_gui_ffi_QKeySequence_operator__(QKeySequence const * this_ptr, unsigned int i) {
  return new QKeyCombination(this_ptr->operator[](i));
}


RITUAL_EXPORT QKeySequence * ctr_qt_gui_ffi_QKeySequence_operator_(QKeySequence * this_ptr, QKeySequence const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QKeySequence_swap(QKeySequence * this_ptr, QKeySequence * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeySequence_operator__1(QKeySequence const * this_ptr, QKeySequence const * other) {
  return this_ptr->operator==(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeySequence_operator_2(QKeySequence const * this_ptr, QKeySequence const * ks) {
  return this_ptr->operator<(*ks);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeySequence_operator_3(QKeySequence const * this_ptr, QKeySequence const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeySequence_operator__3(QKeySequence const * this_ptr, QKeySequence const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeySequence_operator__4(QKeySequence const * this_ptr, QKeySequence const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeySequence_isDetached(QKeySequence const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_swap7(QKeySequence * value1, QKeySequence * value2) {
  swap(*value1, *value2);
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__40(QDebug const * arg1, QKeySequence const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_QInputEvent_clone(QInputEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputEvent_dQInputEvent(QInputEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QInputEvent * ctr_qt_gui_ffi_QInputEvent_QInputEvent(QEvent::Type type, QInputDevice const * m_dev, int modifiers) {
  return new QInputEvent(type, m_dev, QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT QInputDevice const * ctr_qt_gui_ffi_QInputEvent_device(QInputEvent const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT QInputDevice::DeviceType ctr_qt_gui_ffi_QInputEvent_deviceType(QInputEvent const * this_ptr) {
  return this_ptr->deviceType();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputEvent_modifiers(QInputEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputEvent_setModifiers(QInputEvent * this_ptr, int modifiers) {
  this_ptr->setModifiers(QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT unsigned long long ctr_qt_gui_ffi_QInputEvent_timestamp(QInputEvent const * this_ptr) {
  return this_ptr->timestamp();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputEvent_setTimestamp(QInputEvent * this_ptr, unsigned long long timestamp) {
  this_ptr->setTimestamp(timestamp);
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_QPointerEvent_clone(QPointerEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointerEvent_dQPointerEvent(QPointerEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointerEvent * ctr_qt_gui_ffi_QPointerEvent_QPointerEvent(QEvent::Type type, QPointingDevice const * dev, int modifiers, QList< QEventPoint > const * points) {
  return new QPointerEvent(type, dev, QFlags< Qt::KeyboardModifier >(modifiers), *points);
}


RITUAL_EXPORT QPointingDevice const * ctr_qt_gui_ffi_QPointerEvent_pointingDevice(QPointerEvent const * this_ptr) {
  return this_ptr->pointingDevice();
}


RITUAL_EXPORT QPointingDevice::PointerType ctr_qt_gui_ffi_QPointerEvent_pointerType(QPointerEvent const * this_ptr) {
  return this_ptr->pointerType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointerEvent_setTimestamp(QPointerEvent * this_ptr, unsigned long long timestamp) {
  this_ptr->setTimestamp(timestamp);
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QPointerEvent_pointCount(QPointerEvent const * this_ptr) {
  return this_ptr->pointCount();
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QPointerEvent_point(QPointerEvent * this_ptr, long long i) {
  return &this_ptr->point(i);
}


RITUAL_EXPORT QList< QEventPoint > const * ctr_qt_gui_ffi_QPointerEvent_points(QPointerEvent const * this_ptr) {
  return &this_ptr->points();
}


RITUAL_EXPORT QEventPoint * ctr_qt_gui_ffi_QPointerEvent_pointById(QPointerEvent * this_ptr, int id) {
  return this_ptr->pointById(id);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointerEvent_allPointsGrabbed(QPointerEvent const * this_ptr) {
  return this_ptr->allPointsGrabbed();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointerEvent_isBeginEvent(QPointerEvent const * this_ptr) {
  return this_ptr->isBeginEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointerEvent_isUpdateEvent(QPointerEvent const * this_ptr) {
  return this_ptr->isUpdateEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointerEvent_isEndEvent(QPointerEvent const * this_ptr) {
  return this_ptr->isEndEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointerEvent_allPointsAccepted(QPointerEvent const * this_ptr) {
  return this_ptr->allPointsAccepted();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointerEvent_setAccepted(QPointerEvent * this_ptr, bool accepted) {
  this_ptr->setAccepted(accepted);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QPointerEvent_exclusiveGrabber(QPointerEvent const * this_ptr, QEventPoint const * point) {
  return this_ptr->exclusiveGrabber(*point);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointerEvent_setExclusiveGrabber(QPointerEvent * this_ptr, QEventPoint const * point, QObject * exclusiveGrabber) {
  this_ptr->setExclusiveGrabber(*point, exclusiveGrabber);
}


RITUAL_EXPORT QList< QPointer< QObject > > * ctr_qt_gui_ffi_QPointerEvent_passiveGrabbers(QPointerEvent const * this_ptr, QEventPoint const * point) {
  return new QList< QPointer< QObject > >(this_ptr->passiveGrabbers(*point));
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPointerEvent_clearPassiveGrabbers(QPointerEvent * this_ptr, QEventPoint const * point) {
  this_ptr->clearPassiveGrabbers(*point);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointerEvent_addPassiveGrabber(QPointerEvent * this_ptr, QEventPoint const * point, QObject * grabber) {
  return this_ptr->addPassiveGrabber(*point, grabber);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QPointerEvent_removePassiveGrabber(QPointerEvent * this_ptr, QEventPoint const * point, QObject * grabber) {
  return this_ptr->removePassiveGrabber(*point, grabber);
}


RITUAL_EXPORT QSinglePointEvent * ctr_qt_gui_ffi_QSinglePointEvent_clone(QSinglePointEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSinglePointEvent_dQSinglePointEvent(QSinglePointEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::MouseButton ctr_qt_gui_ffi_QSinglePointEvent_button(QSinglePointEvent const * this_ptr) {
  return this_ptr->button();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QSinglePointEvent_buttons(QSinglePointEvent const * this_ptr) {
  return int(this_ptr->buttons());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QSinglePointEvent_position(QSinglePointEvent const * this_ptr) {
  return new QPointF(this_ptr->position());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QSinglePointEvent_scenePosition(QSinglePointEvent const * this_ptr) {
  return new QPointF(this_ptr->scenePosition());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QSinglePointEvent_globalPosition(QSinglePointEvent const * this_ptr) {
  return new QPointF(this_ptr->globalPosition());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSinglePointEvent_isBeginEvent(QSinglePointEvent const * this_ptr) {
  return this_ptr->isBeginEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSinglePointEvent_isUpdateEvent(QSinglePointEvent const * this_ptr) {
  return this_ptr->isUpdateEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QSinglePointEvent_isEndEvent(QSinglePointEvent const * this_ptr) {
  return this_ptr->isEndEvent();
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QSinglePointEvent_exclusivePointGrabber(QSinglePointEvent const * this_ptr) {
  return this_ptr->exclusivePointGrabber();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QSinglePointEvent_setExclusivePointGrabber(QSinglePointEvent * this_ptr, QObject * exclusiveGrabber) {
  this_ptr->setExclusivePointGrabber(exclusiveGrabber);
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_QEnterEvent_clone(QEnterEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QEnterEvent_dQEnterEvent(QEnterEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QEnterEvent * ctr_qt_gui_ffi_QEnterEvent_QEnterEvent(QPointF const * localPos, QPointF const * scenePos, QPointF const * globalPos, QPointingDevice const * device) {
  return new QEnterEvent(*localPos, *scenePos, *globalPos, device);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QEnterEvent_pos(QEnterEvent const * this_ptr) {
  return new QPoint(this_ptr->pos());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QEnterEvent_globalPos(QEnterEvent const * this_ptr) {
  return new QPoint(this_ptr->globalPos());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QEnterEvent_x(QEnterEvent const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QEnterEvent_y(QEnterEvent const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QEnterEvent_globalX(QEnterEvent const * this_ptr) {
  return this_ptr->globalX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QEnterEvent_globalY(QEnterEvent const * this_ptr) {
  return this_ptr->globalY();
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEnterEvent_localPos(QEnterEvent const * this_ptr) {
  return new QPointF(this_ptr->localPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEnterEvent_windowPos(QEnterEvent const * this_ptr) {
  return new QPointF(this_ptr->windowPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QEnterEvent_screenPos(QEnterEvent const * this_ptr) {
  return new QPointF(this_ptr->screenPos());
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_QMouseEvent_clone(QMouseEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMouseEvent_dQMouseEvent(QMouseEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_QMouseEvent_QMouseEvent(QEvent::Type type, QPointF const * localPos, Qt::MouseButton button, int buttons, int modifiers, QPointingDevice const * device) {
  return new QMouseEvent(type, *localPos, button, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers), device);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_QMouseEvent_QMouseEvent1(QEvent::Type type, QPointF const * localPos, QPointF const * globalPos, Qt::MouseButton button, int buttons, int modifiers, QPointingDevice const * device) {
  return new QMouseEvent(type, *localPos, *globalPos, button, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers), device);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_QMouseEvent_QMouseEvent2(QEvent::Type type, QPointF const * localPos, QPointF const * scenePos, QPointF const * globalPos, Qt::MouseButton button, int buttons, int modifiers, QPointingDevice const * device) {
  return new QMouseEvent(type, *localPos, *scenePos, *globalPos, button, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers), device);
}


RITUAL_EXPORT QMouseEvent * ctr_qt_gui_ffi_QMouseEvent_QMouseEvent3(QEvent::Type type, QPointF const * localPos, QPointF const * scenePos, QPointF const * globalPos, Qt::MouseButton button, int buttons, int modifiers, Qt::MouseEventSource source, QPointingDevice const * device) {
  return new QMouseEvent(type, *localPos, *scenePos, *globalPos, button, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers), source, device);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QMouseEvent_pos(QMouseEvent const * this_ptr) {
  return new QPoint(this_ptr->pos());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QMouseEvent_globalPos(QMouseEvent const * this_ptr) {
  return new QPoint(this_ptr->globalPos());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMouseEvent_x(QMouseEvent const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMouseEvent_y(QMouseEvent const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMouseEvent_globalX(QMouseEvent const * this_ptr) {
  return this_ptr->globalX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMouseEvent_globalY(QMouseEvent const * this_ptr) {
  return this_ptr->globalY();
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QMouseEvent_localPos(QMouseEvent const * this_ptr) {
  return new QPointF(this_ptr->localPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QMouseEvent_windowPos(QMouseEvent const * this_ptr) {
  return new QPointF(this_ptr->windowPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QMouseEvent_screenPos(QMouseEvent const * this_ptr) {
  return new QPointF(this_ptr->screenPos());
}


RITUAL_EXPORT Qt::MouseEventSource ctr_qt_gui_ffi_QMouseEvent_source(QMouseEvent const * this_ptr) {
  return this_ptr->source();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QMouseEvent_flags(QMouseEvent const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_QHoverEvent_clone(QHoverEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QHoverEvent_dQHoverEvent(QHoverEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_QHoverEvent_QHoverEvent(QEvent::Type type, QPointF const * scenePos, QPointF const * globalPos, QPointF const * oldPos, int modifiers, QPointingDevice const * device) {
  return new QHoverEvent(type, *scenePos, *globalPos, *oldPos, QFlags< Qt::KeyboardModifier >(modifiers), device);
}


RITUAL_EXPORT QHoverEvent * ctr_qt_gui_ffi_QHoverEvent_QHoverEvent1(QEvent::Type type, QPointF const * pos, QPointF const * oldPos, int modifiers, QPointingDevice const * device) {
  return new QHoverEvent(type, *pos, *oldPos, QFlags< Qt::KeyboardModifier >(modifiers), device);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QHoverEvent_pos(QHoverEvent const * this_ptr) {
  return new QPoint(this_ptr->pos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QHoverEvent_posF(QHoverEvent const * this_ptr) {
  return new QPointF(this_ptr->posF());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QHoverEvent_isUpdateEvent(QHoverEvent const * this_ptr) {
  return this_ptr->isUpdateEvent();
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QHoverEvent_oldPos(QHoverEvent const * this_ptr) {
  return new QPoint(this_ptr->oldPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QHoverEvent_oldPosF(QHoverEvent const * this_ptr) {
  return new QPointF(this_ptr->oldPosF());
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_QWheelEvent_clone(QWheelEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWheelEvent_dQWheelEvent(QWheelEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWheelEvent * ctr_qt_gui_ffi_QWheelEvent_QWheelEvent(QPointF const * pos, QPointF const * globalPos, QPoint const * pixelDelta, QPoint const * angleDelta, int buttons, int modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, QPointingDevice const * device) {
  return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers), phase, inverted, source, device);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QWheelEvent_pixelDelta(QWheelEvent const * this_ptr) {
  return new QPoint(this_ptr->pixelDelta());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QWheelEvent_angleDelta(QWheelEvent const * this_ptr) {
  return new QPoint(this_ptr->angleDelta());
}


RITUAL_EXPORT Qt::ScrollPhase ctr_qt_gui_ffi_QWheelEvent_phase(QWheelEvent const * this_ptr) {
  return this_ptr->phase();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWheelEvent_inverted(QWheelEvent const * this_ptr) {
  return this_ptr->inverted();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWheelEvent_isInverted(QWheelEvent const * this_ptr) {
  return this_ptr->isInverted();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWheelEvent_hasPixelDelta(QWheelEvent const * this_ptr) {
  return this_ptr->hasPixelDelta();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWheelEvent_isBeginEvent(QWheelEvent const * this_ptr) {
  return this_ptr->isBeginEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWheelEvent_isUpdateEvent(QWheelEvent const * this_ptr) {
  return this_ptr->isUpdateEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWheelEvent_isEndEvent(QWheelEvent const * this_ptr) {
  return this_ptr->isEndEvent();
}


RITUAL_EXPORT Qt::MouseEventSource ctr_qt_gui_ffi_QWheelEvent_source(QWheelEvent const * this_ptr) {
  return this_ptr->source();
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_QTabletEvent_clone(QTabletEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTabletEvent_dQTabletEvent(QTabletEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTabletEvent * ctr_qt_gui_ffi_QTabletEvent_QTabletEvent(QEvent::Type t, QPointingDevice const * device, QPointF const * pos, QPointF const * globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, Qt::MouseButton button, int buttons) {
  return new QTabletEvent(t, device, *pos, *globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, QFlags< Qt::KeyboardModifier >(keyState), button, QFlags< Qt::MouseButton >(buttons));
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QTabletEvent_pos(QTabletEvent const * this_ptr) {
  return new QPoint(this_ptr->pos());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QTabletEvent_globalPos(QTabletEvent const * this_ptr) {
  return new QPoint(this_ptr->globalPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QTabletEvent_posF(QTabletEvent const * this_ptr) {
  return new QPointF(this_ptr->posF());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QTabletEvent_globalPosF(QTabletEvent const * this_ptr) {
  return new QPointF(this_ptr->globalPosF());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTabletEvent_x(QTabletEvent const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTabletEvent_y(QTabletEvent const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTabletEvent_globalX(QTabletEvent const * this_ptr) {
  return this_ptr->globalX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTabletEvent_globalY(QTabletEvent const * this_ptr) {
  return this_ptr->globalY();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_hiResGlobalX(QTabletEvent const * this_ptr) {
  return this_ptr->hiResGlobalX();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_hiResGlobalY(QTabletEvent const * this_ptr) {
  return this_ptr->hiResGlobalY();
}


RITUAL_EXPORT long long ctr_qt_gui_ffi_QTabletEvent_uniqueId(QTabletEvent const * this_ptr) {
  return this_ptr->uniqueId();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_pressure(QTabletEvent const * this_ptr) {
  return this_ptr->pressure();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_rotation(QTabletEvent const * this_ptr) {
  return this_ptr->rotation();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_z(QTabletEvent const * this_ptr) {
  return this_ptr->z();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_tangentialPressure(QTabletEvent const * this_ptr) {
  return this_ptr->tangentialPressure();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_xTilt(QTabletEvent const * this_ptr) {
  return this_ptr->xTilt();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QTabletEvent_yTilt(QTabletEvent const * this_ptr) {
  return this_ptr->yTilt();
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_QNativeGestureEvent_clone(QNativeGestureEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QNativeGestureEvent_dQNativeGestureEvent(QNativeGestureEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_QNativeGestureEvent_QNativeGestureEvent(Qt::NativeGestureType type, QPointingDevice const * dev, QPointF const * localPos, QPointF const * scenePos, QPointF const * globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument) {
  return new QNativeGestureEvent(type, dev, *localPos, *scenePos, *globalPos, value, sequenceId, intArgument);
}


RITUAL_EXPORT QNativeGestureEvent * ctr_qt_gui_ffi_QNativeGestureEvent_QNativeGestureEvent1(Qt::NativeGestureType type, QPointingDevice const * dev, int fingerCount, QPointF const * localPos, QPointF const * scenePos, QPointF const * globalPos, double value, QPointF const * delta, unsigned long long sequenceId) {
  return new QNativeGestureEvent(type, dev, fingerCount, *localPos, *scenePos, *globalPos, value, *delta, sequenceId);
}


RITUAL_EXPORT Qt::NativeGestureType ctr_qt_gui_ffi_QNativeGestureEvent_gestureType(QNativeGestureEvent const * this_ptr) {
  return this_ptr->gestureType();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QNativeGestureEvent_fingerCount(QNativeGestureEvent const * this_ptr) {
  return this_ptr->fingerCount();
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QNativeGestureEvent_value(QNativeGestureEvent const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QNativeGestureEvent_delta(QNativeGestureEvent const * this_ptr) {
  return new QPointF(this_ptr->delta());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QNativeGestureEvent_pos(QNativeGestureEvent const * this_ptr) {
  return new QPoint(this_ptr->pos());
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QNativeGestureEvent_globalPos(QNativeGestureEvent const * this_ptr) {
  return new QPoint(this_ptr->globalPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QNativeGestureEvent_localPos(QNativeGestureEvent const * this_ptr) {
  return new QPointF(this_ptr->localPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QNativeGestureEvent_windowPos(QNativeGestureEvent const * this_ptr) {
  return new QPointF(this_ptr->windowPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QNativeGestureEvent_screenPos(QNativeGestureEvent const * this_ptr) {
  return new QPointF(this_ptr->screenPos());
}


RITUAL_EXPORT QKeyEvent * ctr_qt_gui_ffi_QKeyEvent_clone(QKeyEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QKeyEvent_dQKeyEvent(QKeyEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QKeyEvent * ctr_qt_gui_ffi_QKeyEvent_QKeyEvent(QEvent::Type type, int key, int modifiers, QString const * text, bool autorep, unsigned short count) {
  return new QKeyEvent(type, key, QFlags< Qt::KeyboardModifier >(modifiers), *text, autorep, count);
}


RITUAL_EXPORT QKeyEvent * ctr_qt_gui_ffi_QKeyEvent_QKeyEvent1(QEvent::Type type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, QString const * text, bool autorep, unsigned short count, QInputDevice const * device) {
  return new QKeyEvent(type, key, QFlags< Qt::KeyboardModifier >(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, *text, autorep, count, device);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QKeyEvent_key(QKeyEvent const * this_ptr) {
  return this_ptr->key();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeyEvent_matches(QKeyEvent const * this_ptr, QKeySequence::StandardKey key) {
  return this_ptr->matches(key);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QKeyEvent_modifiers(QKeyEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT QKeyCombination * ctr_qt_gui_ffi_QKeyEvent_keyCombination(QKeyEvent const * this_ptr) {
  return new QKeyCombination(this_ptr->keyCombination());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QKeyEvent_text(QKeyEvent const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QKeyEvent_isAutoRepeat(QKeyEvent const * this_ptr) {
  return this_ptr->isAutoRepeat();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QKeyEvent_count(QKeyEvent const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QKeyEvent_nativeScanCode(QKeyEvent const * this_ptr) {
  return this_ptr->nativeScanCode();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QKeyEvent_nativeVirtualKey(QKeyEvent const * this_ptr) {
  return this_ptr->nativeVirtualKey();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QKeyEvent_nativeModifiers(QKeyEvent const * this_ptr) {
  return this_ptr->nativeModifiers();
}


RITUAL_EXPORT QFocusEvent * ctr_qt_gui_ffi_QFocusEvent_clone(QFocusEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFocusEvent_dQFocusEvent(QFocusEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFocusEvent * ctr_qt_gui_ffi_QFocusEvent_QFocusEvent(QEvent::Type type, Qt::FocusReason reason) {
  return new QFocusEvent(type, reason);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFocusEvent_gotFocus(QFocusEvent const * this_ptr) {
  return this_ptr->gotFocus();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFocusEvent_lostFocus(QFocusEvent const * this_ptr) {
  return this_ptr->lostFocus();
}


RITUAL_EXPORT Qt::FocusReason ctr_qt_gui_ffi_QFocusEvent_reason(QFocusEvent const * this_ptr) {
  return this_ptr->reason();
}


RITUAL_EXPORT QPaintEvent * ctr_qt_gui_ffi_QPaintEvent_clone(QPaintEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPaintEvent_dQPaintEvent(QPaintEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPaintEvent * ctr_qt_gui_ffi_QPaintEvent_QPaintEvent(QRegion const * paintRegion) {
  return new QPaintEvent(*paintRegion);
}


RITUAL_EXPORT QPaintEvent * ctr_qt_gui_ffi_QPaintEvent_QPaintEvent1(QRect const * paintRect) {
  return new QPaintEvent(*paintRect);
}


RITUAL_EXPORT QRect const * ctr_qt_gui_ffi_QPaintEvent_rect(QPaintEvent const * this_ptr) {
  return &this_ptr->rect();
}


RITUAL_EXPORT QRegion const * ctr_qt_gui_ffi_QPaintEvent_region(QPaintEvent const * this_ptr) {
  return &this_ptr->region();
}


RITUAL_EXPORT QMoveEvent * ctr_qt_gui_ffi_QMoveEvent_clone(QMoveEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QMoveEvent_dQMoveEvent(QMoveEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMoveEvent * ctr_qt_gui_ffi_QMoveEvent_QMoveEvent(QPoint const * pos, QPoint const * oldPos) {
  return new QMoveEvent(*pos, *oldPos);
}


RITUAL_EXPORT QPoint const * ctr_qt_gui_ffi_QMoveEvent_pos(QMoveEvent const * this_ptr) {
  return &this_ptr->pos();
}


RITUAL_EXPORT QPoint const * ctr_qt_gui_ffi_QMoveEvent_oldPos(QMoveEvent const * this_ptr) {
  return &this_ptr->oldPos();
}


RITUAL_EXPORT QExposeEvent * ctr_qt_gui_ffi_QExposeEvent_clone(QExposeEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QExposeEvent_dQExposeEvent(QExposeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QExposeEvent * ctr_qt_gui_ffi_QExposeEvent_QExposeEvent(QRegion const * m_region) {
  return new QExposeEvent(*m_region);
}


RITUAL_EXPORT QRegion const * ctr_qt_gui_ffi_QExposeEvent_region(QExposeEvent const * this_ptr) {
  return &this_ptr->region();
}


RITUAL_EXPORT QPlatformSurfaceEvent * ctr_qt_gui_ffi_QPlatformSurfaceEvent_clone(QPlatformSurfaceEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QPlatformSurfaceEvent_dQPlatformSurfaceEvent(QPlatformSurfaceEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPlatformSurfaceEvent * ctr_qt_gui_ffi_QPlatformSurfaceEvent_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) {
  return new QPlatformSurfaceEvent(surfaceEventType);
}


RITUAL_EXPORT QPlatformSurfaceEvent::SurfaceEventType ctr_qt_gui_ffi_QPlatformSurfaceEvent_surfaceEventType(QPlatformSurfaceEvent const * this_ptr) {
  return this_ptr->surfaceEventType();
}


RITUAL_EXPORT QResizeEvent * ctr_qt_gui_ffi_QResizeEvent_clone(QResizeEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QResizeEvent_dQResizeEvent(QResizeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QResizeEvent * ctr_qt_gui_ffi_QResizeEvent_QResizeEvent(QSize const * size, QSize const * oldSize) {
  return new QResizeEvent(*size, *oldSize);
}


RITUAL_EXPORT QSize const * ctr_qt_gui_ffi_QResizeEvent_size(QResizeEvent const * this_ptr) {
  return &this_ptr->size();
}


RITUAL_EXPORT QSize const * ctr_qt_gui_ffi_QResizeEvent_oldSize(QResizeEvent const * this_ptr) {
  return &this_ptr->oldSize();
}


RITUAL_EXPORT QCloseEvent * ctr_qt_gui_ffi_QCloseEvent_clone(QCloseEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QCloseEvent_dQCloseEvent(QCloseEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCloseEvent * ctr_qt_gui_ffi_QCloseEvent_QCloseEvent() {
  return new QCloseEvent();
}


RITUAL_EXPORT QIconDragEvent * ctr_qt_gui_ffi_QIconDragEvent_clone(QIconDragEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QIconDragEvent_dQIconDragEvent(QIconDragEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIconDragEvent * ctr_qt_gui_ffi_QIconDragEvent_QIconDragEvent() {
  return new QIconDragEvent();
}


RITUAL_EXPORT QShowEvent * ctr_qt_gui_ffi_QShowEvent_clone(QShowEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShowEvent_dQShowEvent(QShowEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QShowEvent * ctr_qt_gui_ffi_QShowEvent_QShowEvent() {
  return new QShowEvent();
}


RITUAL_EXPORT QHideEvent * ctr_qt_gui_ffi_QHideEvent_clone(QHideEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QHideEvent_dQHideEvent(QHideEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QHideEvent * ctr_qt_gui_ffi_QHideEvent_QHideEvent() {
  return new QHideEvent();
}


RITUAL_EXPORT QContextMenuEvent * ctr_qt_gui_ffi_QContextMenuEvent_clone(QContextMenuEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QContextMenuEvent_dQContextMenuEvent(QContextMenuEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QContextMenuEvent * ctr_qt_gui_ffi_QContextMenuEvent_QContextMenuEvent(QContextMenuEvent::Reason reason, QPoint const * pos, QPoint const * globalPos, int modifiers) {
  return new QContextMenuEvent(reason, *pos, *globalPos, QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT QContextMenuEvent * ctr_qt_gui_ffi_QContextMenuEvent_QContextMenuEvent1(QContextMenuEvent::Reason reason, QPoint const * pos) {
  return new QContextMenuEvent(reason, *pos);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QContextMenuEvent_x(QContextMenuEvent const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QContextMenuEvent_y(QContextMenuEvent const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QContextMenuEvent_globalX(QContextMenuEvent const * this_ptr) {
  return this_ptr->globalX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QContextMenuEvent_globalY(QContextMenuEvent const * this_ptr) {
  return this_ptr->globalY();
}


RITUAL_EXPORT QPoint const * ctr_qt_gui_ffi_QContextMenuEvent_pos(QContextMenuEvent const * this_ptr) {
  return &this_ptr->pos();
}


RITUAL_EXPORT QPoint const * ctr_qt_gui_ffi_QContextMenuEvent_globalPos(QContextMenuEvent const * this_ptr) {
  return &this_ptr->globalPos();
}


RITUAL_EXPORT QContextMenuEvent::Reason ctr_qt_gui_ffi_QContextMenuEvent_reason(QContextMenuEvent const * this_ptr) {
  return this_ptr->reason();
}


RITUAL_EXPORT QInputMethodEvent * ctr_qt_gui_ffi_QInputMethodEvent_clone(QInputMethodEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethodEvent_dQInputMethodEvent(QInputMethodEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QInputMethodEvent::Attribute * ctr_qt_gui_ffi_QInputMethodEvent_Attribute_Attribute(QInputMethodEvent::AttributeType typ, int s, int l, QVariant const * val) {
  return new QInputMethodEvent::Attribute(typ, s, l, *val);
}


RITUAL_EXPORT QInputMethodEvent::Attribute * ctr_qt_gui_ffi_QInputMethodEvent_Attribute_Attribute1(QInputMethodEvent::AttributeType typ, int s, int l) {
  return new QInputMethodEvent::Attribute(typ, s, l);
}


RITUAL_EXPORT QInputMethodEvent * ctr_qt_gui_ffi_QInputMethodEvent_QInputMethodEvent() {
  return new QInputMethodEvent();
}


RITUAL_EXPORT QInputMethodEvent * ctr_qt_gui_ffi_QInputMethodEvent_QInputMethodEvent1(QString const * preeditText, QList< QInputMethodEvent::Attribute > const * attributes) {
  return new QInputMethodEvent(*preeditText, *attributes);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethodEvent_setCommitString(QInputMethodEvent * this_ptr, QString const * commitString, int replaceFrom, int replaceLength) {
  this_ptr->setCommitString(*commitString, replaceFrom, replaceLength);
}


RITUAL_EXPORT QList< QInputMethodEvent::Attribute > const * ctr_qt_gui_ffi_QInputMethodEvent_attributes(QInputMethodEvent const * this_ptr) {
  return &this_ptr->attributes();
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QInputMethodEvent_preeditString(QInputMethodEvent const * this_ptr) {
  return &this_ptr->preeditString();
}


RITUAL_EXPORT QString const * ctr_qt_gui_ffi_QInputMethodEvent_commitString(QInputMethodEvent const * this_ptr) {
  return &this_ptr->commitString();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputMethodEvent_replacementStart(QInputMethodEvent const * this_ptr) {
  return this_ptr->replacementStart();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputMethodEvent_replacementLength(QInputMethodEvent const * this_ptr) {
  return this_ptr->replacementLength();
}


RITUAL_EXPORT QInputMethodQueryEvent * ctr_qt_gui_ffi_QInputMethodQueryEvent_clone(QInputMethodQueryEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethodQueryEvent_dQInputMethodQueryEvent(QInputMethodQueryEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QInputMethodQueryEvent * ctr_qt_gui_ffi_QInputMethodQueryEvent_QInputMethodQueryEvent(int queries) {
  return new QInputMethodQueryEvent(QFlags< Qt::InputMethodQuery >(queries));
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QInputMethodQueryEvent_queries(QInputMethodQueryEvent const * this_ptr) {
  return int(this_ptr->queries());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QInputMethodQueryEvent_setValue(QInputMethodQueryEvent * this_ptr, Qt::InputMethodQuery query, QVariant const * value) {
  this_ptr->setValue(query, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QInputMethodQueryEvent_value(QInputMethodQueryEvent const * this_ptr, Qt::InputMethodQuery query) {
  return new QVariant(this_ptr->value(query));
}


RITUAL_EXPORT QDropEvent * ctr_qt_gui_ffi_QDropEvent_clone(QDropEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDropEvent_dQDropEvent(QDropEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDropEvent * ctr_qt_gui_ffi_QDropEvent_QDropEvent(QPointF const * pos, int actions, QMimeData const * data, int buttons, int modifiers, QEvent::Type type) {
  return new QDropEvent(*pos, QFlags< Qt::DropAction >(actions), data, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers), type);
}


RITUAL_EXPORT QPoint * ctr_qt_gui_ffi_QDropEvent_pos(QDropEvent const * this_ptr) {
  return new QPoint(this_ptr->pos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QDropEvent_posF(QDropEvent const * this_ptr) {
  return new QPointF(this_ptr->posF());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDropEvent_mouseButtons(QDropEvent const * this_ptr) {
  return int(this_ptr->mouseButtons());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDropEvent_keyboardModifiers(QDropEvent const * this_ptr) {
  return int(this_ptr->keyboardModifiers());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QDropEvent_position(QDropEvent const * this_ptr) {
  return new QPointF(this_ptr->position());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDropEvent_buttons(QDropEvent const * this_ptr) {
  return int(this_ptr->buttons());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDropEvent_modifiers(QDropEvent const * this_ptr) {
  return int(this_ptr->modifiers());
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QDropEvent_possibleActions(QDropEvent const * this_ptr) {
  return int(this_ptr->possibleActions());
}


RITUAL_EXPORT Qt::DropAction ctr_qt_gui_ffi_QDropEvent_proposedAction(QDropEvent const * this_ptr) {
  return this_ptr->proposedAction();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDropEvent_acceptProposedAction(QDropEvent * this_ptr) {
  this_ptr->acceptProposedAction();
}


RITUAL_EXPORT Qt::DropAction ctr_qt_gui_ffi_QDropEvent_dropAction(QDropEvent const * this_ptr) {
  return this_ptr->dropAction();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDropEvent_setDropAction(QDropEvent * this_ptr, Qt::DropAction action) {
  this_ptr->setDropAction(action);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QDropEvent_source(QDropEvent const * this_ptr) {
  return this_ptr->source();
}


RITUAL_EXPORT QMimeData const * ctr_qt_gui_ffi_QDropEvent_mimeData(QDropEvent const * this_ptr) {
  return this_ptr->mimeData();
}


RITUAL_EXPORT QDragMoveEvent * ctr_qt_gui_ffi_QDragMoveEvent_clone(QDragMoveEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDragMoveEvent_dQDragMoveEvent(QDragMoveEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDragMoveEvent * ctr_qt_gui_ffi_QDragMoveEvent_QDragMoveEvent(QPoint const * pos, int actions, QMimeData const * data, int buttons, int modifiers, QEvent::Type type) {
  return new QDragMoveEvent(*pos, QFlags< Qt::DropAction >(actions), data, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers), type);
}


RITUAL_EXPORT QRect * ctr_qt_gui_ffi_QDragMoveEvent_answerRect(QDragMoveEvent const * this_ptr) {
  return new QRect(this_ptr->answerRect());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDragMoveEvent_accept(QDragMoveEvent * this_ptr) {
  this_ptr->accept();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDragMoveEvent_ignore(QDragMoveEvent * this_ptr) {
  this_ptr->ignore();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDragMoveEvent_accept1(QDragMoveEvent * this_ptr, QRect const * r) {
  this_ptr->accept(*r);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDragMoveEvent_ignore1(QDragMoveEvent * this_ptr, QRect const * r) {
  this_ptr->ignore(*r);
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_QDragEnterEvent_clone(QDragEnterEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDragEnterEvent_dQDragEnterEvent(QDragEnterEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDragEnterEvent * ctr_qt_gui_ffi_QDragEnterEvent_QDragEnterEvent(QPoint const * pos, int actions, QMimeData const * data, int buttons, int modifiers) {
  return new QDragEnterEvent(*pos, QFlags< Qt::DropAction >(actions), data, QFlags< Qt::MouseButton >(buttons), QFlags< Qt::KeyboardModifier >(modifiers));
}


RITUAL_EXPORT QDragLeaveEvent * ctr_qt_gui_ffi_QDragLeaveEvent_clone(QDragLeaveEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QDragLeaveEvent_dQDragLeaveEvent(QDragLeaveEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDragLeaveEvent * ctr_qt_gui_ffi_QDragLeaveEvent_QDragLeaveEvent() {
  return new QDragLeaveEvent();
}


RITUAL_EXPORT QHelpEvent * ctr_qt_gui_ffi_QHelpEvent_clone(QHelpEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QHelpEvent_dQHelpEvent(QHelpEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QHelpEvent * ctr_qt_gui_ffi_QHelpEvent_QHelpEvent(QEvent::Type type, QPoint const * pos, QPoint const * globalPos) {
  return new QHelpEvent(type, *pos, *globalPos);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QHelpEvent_x(QHelpEvent const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QHelpEvent_y(QHelpEvent const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QHelpEvent_globalX(QHelpEvent const * this_ptr) {
  return this_ptr->globalX();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QHelpEvent_globalY(QHelpEvent const * this_ptr) {
  return this_ptr->globalY();
}


RITUAL_EXPORT QPoint const * ctr_qt_gui_ffi_QHelpEvent_pos(QHelpEvent const * this_ptr) {
  return &this_ptr->pos();
}


RITUAL_EXPORT QPoint const * ctr_qt_gui_ffi_QHelpEvent_globalPos(QHelpEvent const * this_ptr) {
  return &this_ptr->globalPos();
}


RITUAL_EXPORT QStatusTipEvent * ctr_qt_gui_ffi_QStatusTipEvent_clone(QStatusTipEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QStatusTipEvent_dQStatusTipEvent(QStatusTipEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStatusTipEvent * ctr_qt_gui_ffi_QStatusTipEvent_QStatusTipEvent(QString const * tip) {
  return new QStatusTipEvent(*tip);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QStatusTipEvent_tip(QStatusTipEvent const * this_ptr) {
  return new QString(this_ptr->tip());
}


RITUAL_EXPORT QWhatsThisClickedEvent * ctr_qt_gui_ffi_QWhatsThisClickedEvent_clone(QWhatsThisClickedEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWhatsThisClickedEvent_dQWhatsThisClickedEvent(QWhatsThisClickedEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWhatsThisClickedEvent * ctr_qt_gui_ffi_QWhatsThisClickedEvent_QWhatsThisClickedEvent(QString const * href) {
  return new QWhatsThisClickedEvent(*href);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QWhatsThisClickedEvent_href(QWhatsThisClickedEvent const * this_ptr) {
  return new QString(this_ptr->href());
}


RITUAL_EXPORT QActionEvent * ctr_qt_gui_ffi_QActionEvent_clone(QActionEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QActionEvent_dQActionEvent(QActionEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QActionEvent * ctr_qt_gui_ffi_QActionEvent_QActionEvent(int type, QAction * action, QAction * before) {
  return new QActionEvent(type, action, before);
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QActionEvent_action(QActionEvent const * this_ptr) {
  return this_ptr->action();
}


RITUAL_EXPORT QAction * ctr_qt_gui_ffi_QActionEvent_before(QActionEvent const * this_ptr) {
  return this_ptr->before();
}


RITUAL_EXPORT QFileOpenEvent * ctr_qt_gui_ffi_QFileOpenEvent_clone(QFileOpenEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFileOpenEvent_dQFileOpenEvent(QFileOpenEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFileOpenEvent * ctr_qt_gui_ffi_QFileOpenEvent_QFileOpenEvent(QString const * file) {
  return new QFileOpenEvent(*file);
}


RITUAL_EXPORT QFileOpenEvent * ctr_qt_gui_ffi_QFileOpenEvent_QFileOpenEvent1(QUrl const * url) {
  return new QFileOpenEvent(*url);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFileOpenEvent_file(QFileOpenEvent const * this_ptr) {
  return new QString(this_ptr->file());
}


RITUAL_EXPORT QUrl * ctr_qt_gui_ffi_QFileOpenEvent_url(QFileOpenEvent const * this_ptr) {
  return new QUrl(this_ptr->url());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFileOpenEvent_openFile(QFileOpenEvent const * this_ptr, QFile * file, int flags) {
  return this_ptr->openFile(*file, QFlags< QIODeviceBase::OpenModeFlag >(flags));
}


RITUAL_EXPORT QToolBarChangeEvent * ctr_qt_gui_ffi_QToolBarChangeEvent_clone(QToolBarChangeEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QToolBarChangeEvent_dQToolBarChangeEvent(QToolBarChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QToolBarChangeEvent * ctr_qt_gui_ffi_QToolBarChangeEvent_QToolBarChangeEvent(bool t) {
  return new QToolBarChangeEvent(t);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QToolBarChangeEvent_toggle(QToolBarChangeEvent const * this_ptr) {
  return this_ptr->toggle();
}


RITUAL_EXPORT QShortcutEvent * ctr_qt_gui_ffi_QShortcutEvent_clone(QShortcutEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QShortcutEvent_dQShortcutEvent(QShortcutEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QShortcutEvent * ctr_qt_gui_ffi_QShortcutEvent_QShortcutEvent(QKeySequence const * key, int id, bool ambiguous) {
  return new QShortcutEvent(*key, id, ambiguous);
}


RITUAL_EXPORT QShortcutEvent * ctr_qt_gui_ffi_QShortcutEvent_QShortcutEvent1(QKeySequence const * key, QShortcut const * shortcut, bool ambiguous) {
  return new QShortcutEvent(*key, shortcut, ambiguous);
}


RITUAL_EXPORT QKeySequence const * ctr_qt_gui_ffi_QShortcutEvent_key(QShortcutEvent const * this_ptr) {
  return &this_ptr->key();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QShortcutEvent_shortcutId(QShortcutEvent const * this_ptr) {
  return this_ptr->shortcutId();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QShortcutEvent_isAmbiguous(QShortcutEvent const * this_ptr) {
  return this_ptr->isAmbiguous();
}


RITUAL_EXPORT QWindowStateChangeEvent * ctr_qt_gui_ffi_QWindowStateChangeEvent_clone(QWindowStateChangeEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QWindowStateChangeEvent_dQWindowStateChangeEvent(QWindowStateChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWindowStateChangeEvent * ctr_qt_gui_ffi_QWindowStateChangeEvent_QWindowStateChangeEvent(int oldState, bool isOverride) {
  return new QWindowStateChangeEvent(QFlags< Qt::WindowState >(oldState), isOverride);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QWindowStateChangeEvent_oldState(QWindowStateChangeEvent const * this_ptr) {
  return int(this_ptr->oldState());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QWindowStateChangeEvent_isOverride(QWindowStateChangeEvent const * this_ptr) {
  return this_ptr->isOverride();
}


RITUAL_EXPORT QDebug * ctr_qt_gui_ffi_operator__41(QDebug const * arg1, QEvent const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_QTouchEvent_clone(QTouchEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QTouchEvent_dQTouchEvent(QTouchEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_QTouchEvent_QTouchEvent(QEvent::Type eventType, QPointingDevice const * device, int modifiers, QList< QEventPoint > const * touchPoints) {
  return new QTouchEvent(eventType, device, QFlags< Qt::KeyboardModifier >(modifiers), *touchPoints);
}


RITUAL_EXPORT QTouchEvent * ctr_qt_gui_ffi_QTouchEvent_QTouchEvent1(QEvent::Type eventType, QPointingDevice const * device, int modifiers, int touchPointStates, QList< QEventPoint > const * touchPoints) {
  return new QTouchEvent(eventType, device, QFlags< Qt::KeyboardModifier >(modifiers), QFlags< QEventPoint::State >(touchPointStates), *touchPoints);
}


RITUAL_EXPORT QObject * ctr_qt_gui_ffi_QTouchEvent_target(QTouchEvent const * this_ptr) {
  return this_ptr->target();
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QTouchEvent_touchPointStates(QTouchEvent const * this_ptr) {
  return int(this_ptr->touchPointStates());
}


RITUAL_EXPORT QList< QEventPoint > const * ctr_qt_gui_ffi_QTouchEvent_touchPoints(QTouchEvent const * this_ptr) {
  return &this_ptr->touchPoints();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTouchEvent_isBeginEvent(QTouchEvent const * this_ptr) {
  return this_ptr->isBeginEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTouchEvent_isUpdateEvent(QTouchEvent const * this_ptr) {
  return this_ptr->isUpdateEvent();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QTouchEvent_isEndEvent(QTouchEvent const * this_ptr) {
  return this_ptr->isEndEvent();
}


RITUAL_EXPORT QScrollPrepareEvent * ctr_qt_gui_ffi_QScrollPrepareEvent_clone(QScrollPrepareEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QScrollPrepareEvent_dQScrollPrepareEvent(QScrollPrepareEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QScrollPrepareEvent * ctr_qt_gui_ffi_QScrollPrepareEvent_QScrollPrepareEvent(QPointF const * startPos) {
  return new QScrollPrepareEvent(*startPos);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QScrollPrepareEvent_startPos(QScrollPrepareEvent const * this_ptr) {
  return new QPointF(this_ptr->startPos());
}


RITUAL_EXPORT QSizeF * ctr_qt_gui_ffi_QScrollPrepareEvent_viewportSize(QScrollPrepareEvent const * this_ptr) {
  return new QSizeF(this_ptr->viewportSize());
}


RITUAL_EXPORT QRectF * ctr_qt_gui_ffi_QScrollPrepareEvent_contentPosRange(QScrollPrepareEvent const * this_ptr) {
  return new QRectF(this_ptr->contentPosRange());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QScrollPrepareEvent_contentPos(QScrollPrepareEvent const * this_ptr) {
  return new QPointF(this_ptr->contentPos());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QScrollPrepareEvent_setViewportSize(QScrollPrepareEvent * this_ptr, QSizeF const * size) {
  this_ptr->setViewportSize(*size);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QScrollPrepareEvent_setContentPosRange(QScrollPrepareEvent * this_ptr, QRectF const * rect) {
  this_ptr->setContentPosRange(*rect);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QScrollPrepareEvent_setContentPos(QScrollPrepareEvent * this_ptr, QPointF const * pos) {
  this_ptr->setContentPos(*pos);
}


RITUAL_EXPORT QScrollEvent * ctr_qt_gui_ffi_QScrollEvent_clone(QScrollEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QScrollEvent_dQScrollEvent(QScrollEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QScrollEvent * ctr_qt_gui_ffi_QScrollEvent_QScrollEvent(QPointF const * contentPos, QPointF const * overshoot, QScrollEvent::ScrollState scrollState) {
  return new QScrollEvent(*contentPos, *overshoot, scrollState);
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QScrollEvent_contentPos(QScrollEvent const * this_ptr) {
  return new QPointF(this_ptr->contentPos());
}


RITUAL_EXPORT QPointF * ctr_qt_gui_ffi_QScrollEvent_overshootDistance(QScrollEvent const * this_ptr) {
  return new QPointF(this_ptr->overshootDistance());
}


RITUAL_EXPORT QScrollEvent::ScrollState ctr_qt_gui_ffi_QScrollEvent_scrollState(QScrollEvent const * this_ptr) {
  return this_ptr->scrollState();
}


RITUAL_EXPORT QScreenOrientationChangeEvent * ctr_qt_gui_ffi_QScreenOrientationChangeEvent_clone(QScreenOrientationChangeEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QScreenOrientationChangeEvent_dQScreenOrientationChangeEvent(QScreenOrientationChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QScreenOrientationChangeEvent * ctr_qt_gui_ffi_QScreenOrientationChangeEvent_QScreenOrientationChangeEvent(QScreen * screen, Qt::ScreenOrientation orientation) {
  return new QScreenOrientationChangeEvent(screen, orientation);
}


RITUAL_EXPORT QScreen * ctr_qt_gui_ffi_QScreenOrientationChangeEvent_screen(QScreenOrientationChangeEvent const * this_ptr) {
  return this_ptr->screen();
}


RITUAL_EXPORT Qt::ScreenOrientation ctr_qt_gui_ffi_QScreenOrientationChangeEvent_orientation(QScreenOrientationChangeEvent const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT QApplicationStateChangeEvent * ctr_qt_gui_ffi_QApplicationStateChangeEvent_clone(QApplicationStateChangeEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QApplicationStateChangeEvent_dQApplicationStateChangeEvent(QApplicationStateChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QApplicationStateChangeEvent * ctr_qt_gui_ffi_QApplicationStateChangeEvent_QApplicationStateChangeEvent(Qt::ApplicationState state) {
  return new QApplicationStateChangeEvent(state);
}


RITUAL_EXPORT Qt::ApplicationState ctr_qt_gui_ffi_QApplicationStateChangeEvent_applicationState(QApplicationStateChangeEvent const * this_ptr) {
  return this_ptr->applicationState();
}


RITUAL_EXPORT QChildWindowEvent * ctr_qt_gui_ffi_QChildWindowEvent_clone(QChildWindowEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QChildWindowEvent_dQChildWindowEvent(QChildWindowEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QChildWindowEvent * ctr_qt_gui_ffi_QChildWindowEvent_QChildWindowEvent(QEvent::Type type, QWindow * childWindow) {
  return new QChildWindowEvent(type, childWindow);
}


RITUAL_EXPORT QWindow * ctr_qt_gui_ffi_QChildWindowEvent_child(QChildWindowEvent const * this_ptr) {
  return this_ptr->child();
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFont_QFont() {
  return new QFont();
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFont_QFont1(QString const * family, int pointSize, int weight, bool italic) {
  return new QFont(*family, pointSize, weight, italic);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFont_QFont2(QList< QString > const * families, int pointSize, int weight, bool italic) {
  return new QFont(*families, pointSize, weight, italic);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFont_QFont3(QFont const * font, QPaintDevice const * pd) {
  return new QFont(*font, pd);
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFont_QFont4(QFont const * font) {
  return new QFont(*font);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_dQFont(QFont * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_swap(QFont * this_ptr, QFont * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFont_family(QFont const * this_ptr) {
  return new QString(this_ptr->family());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setFamily(QFont * this_ptr, QString const * arg1) {
  this_ptr->setFamily(*arg1);
}


RITUAL_EXPORT QList< QString > * ctr_qt_gui_ffi_QFont_families(QFont const * this_ptr) {
  return new QList< QString >(this_ptr->families());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setFamilies(QFont * this_ptr, QList< QString > const * arg1) {
  this_ptr->setFamilies(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFont_styleName(QFont const * this_ptr) {
  return new QString(this_ptr->styleName());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setStyleName(QFont * this_ptr, QString const * arg1) {
  this_ptr->setStyleName(*arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFont_pointSize(QFont const * this_ptr) {
  return this_ptr->pointSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setPointSize(QFont * this_ptr, int arg1) {
  this_ptr->setPointSize(arg1);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFont_pointSizeF(QFont const * this_ptr) {
  return this_ptr->pointSizeF();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setPointSizeF(QFont * this_ptr, double arg1) {
  this_ptr->setPointSizeF(arg1);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFont_pixelSize(QFont const * this_ptr) {
  return this_ptr->pixelSize();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setPixelSize(QFont * this_ptr, int arg1) {
  this_ptr->setPixelSize(arg1);
}


RITUAL_EXPORT QFont::Weight ctr_qt_gui_ffi_QFont_weight(QFont const * this_ptr) {
  return this_ptr->weight();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setWeight(QFont * this_ptr, QFont::Weight weight) {
  this_ptr->setWeight(weight);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_bold(QFont const * this_ptr) {
  return this_ptr->bold();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setBold(QFont * this_ptr, bool arg1) {
  this_ptr->setBold(arg1);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setStyle(QFont * this_ptr, QFont::Style style) {
  this_ptr->setStyle(style);
}


RITUAL_EXPORT QFont::Style ctr_qt_gui_ffi_QFont_style(QFont const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_italic(QFont const * this_ptr) {
  return this_ptr->italic();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setItalic(QFont * this_ptr, bool b) {
  this_ptr->setItalic(b);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_underline(QFont const * this_ptr) {
  return this_ptr->underline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setUnderline(QFont * this_ptr, bool arg1) {
  this_ptr->setUnderline(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_overline(QFont const * this_ptr) {
  return this_ptr->overline();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setOverline(QFont * this_ptr, bool arg1) {
  this_ptr->setOverline(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_strikeOut(QFont const * this_ptr) {
  return this_ptr->strikeOut();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setStrikeOut(QFont * this_ptr, bool arg1) {
  this_ptr->setStrikeOut(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_fixedPitch(QFont const * this_ptr) {
  return this_ptr->fixedPitch();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setFixedPitch(QFont * this_ptr, bool arg1) {
  this_ptr->setFixedPitch(arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_kerning(QFont const * this_ptr) {
  return this_ptr->kerning();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setKerning(QFont * this_ptr, bool arg1) {
  this_ptr->setKerning(arg1);
}


RITUAL_EXPORT QFont::StyleHint ctr_qt_gui_ffi_QFont_styleHint(QFont const * this_ptr) {
  return this_ptr->styleHint();
}


RITUAL_EXPORT QFont::StyleStrategy ctr_qt_gui_ffi_QFont_styleStrategy(QFont const * this_ptr) {
  return this_ptr->styleStrategy();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setStyleHint(QFont * this_ptr, QFont::StyleHint arg1, QFont::StyleStrategy arg2) {
  this_ptr->setStyleHint(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setStyleStrategy(QFont * this_ptr, QFont::StyleStrategy s) {
  this_ptr->setStyleStrategy(s);
}


RITUAL_EXPORT int ctr_qt_gui_ffi_QFont_stretch(QFont const * this_ptr) {
  return this_ptr->stretch();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setStretch(QFont * this_ptr, int arg1) {
  this_ptr->setStretch(arg1);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFont_letterSpacing(QFont const * this_ptr) {
  return this_ptr->letterSpacing();
}


RITUAL_EXPORT QFont::SpacingType ctr_qt_gui_ffi_QFont_letterSpacingType(QFont const * this_ptr) {
  return this_ptr->letterSpacingType();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setLetterSpacing(QFont * this_ptr, QFont::SpacingType type, double spacing) {
  this_ptr->setLetterSpacing(type, spacing);
}


RITUAL_EXPORT double ctr_qt_gui_ffi_QFont_wordSpacing(QFont const * this_ptr) {
  return this_ptr->wordSpacing();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setWordSpacing(QFont * this_ptr, double spacing) {
  this_ptr->setWordSpacing(spacing);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setCapitalization(QFont * this_ptr, QFont::Capitalization arg1) {
  this_ptr->setCapitalization(arg1);
}


RITUAL_EXPORT QFont::Capitalization ctr_qt_gui_ffi_QFont_capitalization(QFont const * this_ptr) {
  return this_ptr->capitalization();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setHintingPreference(QFont * this_ptr, QFont::HintingPreference hintingPreference) {
  this_ptr->setHintingPreference(hintingPreference);
}


RITUAL_EXPORT QFont::HintingPreference ctr_qt_gui_ffi_QFont_hintingPreference(QFont const * this_ptr) {
  return this_ptr->hintingPreference();
}


RITUAL_EXPORT QFont::Tag * ctr_qt_gui_ffi_QFont_Tag_Tag() {
  return new QFont::Tag();
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_Tag_isValid(QFont::Tag const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QFont_Tag_value(QFont::Tag const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT QByteArray * ctr_qt_gui_ffi_QFont_Tag_toString(QFont::Tag const * this_ptr) {
  return new QByteArray(this_ptr->toString());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setFeature(QFont * this_ptr, QFont::Tag const * tag, unsigned int value) {
  this_ptr->setFeature(*tag, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_unsetFeature(QFont * this_ptr, QFont::Tag const * tag) {
  this_ptr->unsetFeature(*tag);
}


RITUAL_EXPORT unsigned int ctr_qt_gui_ffi_QFont_featureValue(QFont const * this_ptr, QFont::Tag const * tag) {
  return this_ptr->featureValue(*tag);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_isFeatureSet(QFont const * this_ptr, QFont::Tag const * tag) {
  return this_ptr->isFeatureSet(*tag);
}


RITUAL_EXPORT QList< QFont::Tag > * ctr_qt_gui_ffi_QFont_featureTags(QFont const * this_ptr) {
  return new QList< QFont::Tag >(this_ptr->featureTags());
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_clearFeatures(QFont * this_ptr) {
  this_ptr->clearFeatures();
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_setVariableAxis(QFont * this_ptr, QFont::Tag const * tag, float value) {
  this_ptr->setVariableAxis(*tag, value);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_unsetVariableAxis(QFont * this_ptr, QFont::Tag const * tag) {
  this_ptr->unsetVariableAxis(*tag);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_isVariableAxisSet(QFont const * this_ptr, QFont::Tag const * tag) {
  return this_ptr->isVariableAxisSet(*tag);
}


RITUAL_EXPORT float ctr_qt_gui_ffi_QFont_variableAxisValue(QFont const * this_ptr, QFont::Tag const * tag) {
  return this_ptr->variableAxisValue(*tag);
}


RITUAL_EXPORT void ctr_qt_gui_ffi_QFont_clearVariableAxes(QFont * this_ptr) {
  this_ptr->clearVariableAxes();
}


RITUAL_EXPORT QList< QFont::Tag > * ctr_qt_gui_ffi_QFont_variableAxisTags(QFont const * this_ptr) {
  return new QList< QFont::Tag >(this_ptr->variableAxisTags());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_exactMatch(QFont const * this_ptr) {
  return this_ptr->exactMatch();
}


RITUAL_EXPORT QFont * ctr_qt_gui_ffi_QFont_operator_(QFont * this_ptr, QFont const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_operator__(QFont const * this_ptr, QFont const * arg1) {
  return this_ptr->operator==(*arg1);
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_operator_1(QFont const * this_ptr, QFont const * arg1) {
  return this_ptr->operator<(*arg1);
}


RITUAL_EXPORT QVariant * ctr_qt_gui_ffi_QFont_operator_QVariant(QFont const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_isCopyOf(QFont const * this_ptr, QFont const * arg1) {
  return this_ptr->isCopyOf(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFont_key(QFont const * this_ptr) {
  return new QString(this_ptr->key());
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFont_toString(QFont const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT bool ctr_qt_gui_ffi_QFont_fromString(QFont * this_ptr, QString const * arg1) {
  return this_ptr->fromString(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_gui_ffi_QFont_substitute(QString const * arg1) {
  return new QString(QFont::substitute(*arg1));
}


} // extern "C"
