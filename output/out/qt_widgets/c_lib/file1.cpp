#include "qt_widgets_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSizePolicy_staticMetaObject() {
  return &QSizePolicy::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWidget_staticMetaObject() {
  return &QWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractButton_staticMetaObject() {
  return &QAbstractButton::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractSpinBox_staticMetaObject() {
  return &QAbstractSpinBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractSlider_staticMetaObject() {
  return &QAbstractSlider::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSlider_staticMetaObject() {
  return &QSlider::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStyle_staticMetaObject() {
  return &QStyle::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTabBar_staticMetaObject() {
  return &QTabBar::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTabWidget_staticMetaObject() {
  return &QTabWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QRubberBand_staticMetaObject() {
  return &QRubberBand::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFrame_staticMetaObject() {
  return &QFrame::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOption_version(QStyleOption const * this_ptr) {
  return this_ptr->version;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_version(QStyleOption * this_ptr, int value) {
  this_ptr->version = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOption_type(QStyleOption const * this_ptr) {
  return this_ptr->type;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_type(QStyleOption * this_ptr, int value) {
  this_ptr->type = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOption_state(QStyleOption const * this_ptr) {
  return int(this_ptr->state);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_state(QStyleOption * this_ptr, int value) {
  this_ptr->state = QFlags< QStyle::StateFlag >(value);
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_widgets_ffi_QStyleOption_direction(QStyleOption const * this_ptr) {
  return this_ptr->direction;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_direction(QStyleOption * this_ptr, Qt::LayoutDirection value) {
  this_ptr->direction = value;
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QStyleOption_rect(QStyleOption const * this_ptr) {
  return &this_ptr->rect;
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyleOption_rect_mut(QStyleOption * this_ptr) {
  return &this_ptr->rect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_rect(QStyleOption * this_ptr, QRect const * value) {
  this_ptr->rect = *value;
}


RITUAL_EXPORT QFontMetrics const * ctr_qt_widgets_ffi_QStyleOption_fontMetrics(QStyleOption const * this_ptr) {
  return &this_ptr->fontMetrics;
}


RITUAL_EXPORT QFontMetrics * ctr_qt_widgets_ffi_QStyleOption_fontMetrics_mut(QStyleOption * this_ptr) {
  return &this_ptr->fontMetrics;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_fontMetrics(QStyleOption * this_ptr, QFontMetrics const * value) {
  this_ptr->fontMetrics = *value;
}


RITUAL_EXPORT QPalette const * ctr_qt_widgets_ffi_QStyleOption_palette(QStyleOption const * this_ptr) {
  return &this_ptr->palette;
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QStyleOption_palette_mut(QStyleOption * this_ptr) {
  return &this_ptr->palette;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_palette(QStyleOption * this_ptr, QPalette const * value) {
  this_ptr->palette = *value;
}


RITUAL_EXPORT QObject * ctr_qt_widgets_ffi_QStyleOption_styleObject(QStyleOption const * this_ptr) {
  return this_ptr->styleObject;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOption_styleObject(QStyleOption * this_ptr, QObject * value) {
  this_ptr->styleObject = value;
}


RITUAL_EXPORT QColor const * ctr_qt_widgets_ffi_QStyleOptionFocusRect_backgroundColor(QStyleOptionFocusRect const * this_ptr) {
  return &this_ptr->backgroundColor;
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QStyleOptionFocusRect_backgroundColor_mut(QStyleOptionFocusRect * this_ptr) {
  return &this_ptr->backgroundColor;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionFocusRect_backgroundColor(QStyleOptionFocusRect * this_ptr, QColor const * value) {
  this_ptr->backgroundColor = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionFrame_lineWidth(QStyleOptionFrame const * this_ptr) {
  return this_ptr->lineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionFrame_lineWidth(QStyleOptionFrame * this_ptr, int value) {
  this_ptr->lineWidth = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionFrame_midLineWidth(QStyleOptionFrame const * this_ptr) {
  return this_ptr->midLineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionFrame_midLineWidth(QStyleOptionFrame * this_ptr, int value) {
  this_ptr->midLineWidth = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionFrame_features(QStyleOptionFrame const * this_ptr) {
  return int(this_ptr->features);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionFrame_features(QStyleOptionFrame * this_ptr, int value) {
  this_ptr->features = QFlags< QStyleOptionFrame::FrameFeature >(value);
}


RITUAL_EXPORT QFrame::Shape ctr_qt_widgets_ffi_QStyleOptionFrame_frameShape(QStyleOptionFrame const * this_ptr) {
  return this_ptr->frameShape;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionFrame_frameShape(QStyleOptionFrame * this_ptr, QFrame::Shape value) {
  this_ptr->frameShape = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_lineWidth(QStyleOptionTabWidgetFrame const * this_ptr) {
  return this_ptr->lineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_lineWidth(QStyleOptionTabWidgetFrame * this_ptr, int value) {
  this_ptr->lineWidth = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_midLineWidth(QStyleOptionTabWidgetFrame const * this_ptr) {
  return this_ptr->midLineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_midLineWidth(QStyleOptionTabWidgetFrame * this_ptr, int value) {
  this_ptr->midLineWidth = value;
}


RITUAL_EXPORT QTabBar::Shape ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_shape(QStyleOptionTabWidgetFrame const * this_ptr) {
  return this_ptr->shape;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_shape(QStyleOptionTabWidgetFrame * this_ptr, QTabBar::Shape value) {
  this_ptr->shape = value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_tabBarSize(QStyleOptionTabWidgetFrame const * this_ptr) {
  return &this_ptr->tabBarSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_tabBarSize_mut(QStyleOptionTabWidgetFrame * this_ptr) {
  return &this_ptr->tabBarSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_tabBarSize(QStyleOptionTabWidgetFrame * this_ptr, QSize const * value) {
  this_ptr->tabBarSize = *value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(QStyleOptionTabWidgetFrame const * this_ptr) {
  return &this_ptr->rightCornerWidgetSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_rightCornerWidgetSize_mut(QStyleOptionTabWidgetFrame * this_ptr) {
  return &this_ptr->rightCornerWidgetSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(QStyleOptionTabWidgetFrame * this_ptr, QSize const * value) {
  this_ptr->rightCornerWidgetSize = *value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(QStyleOptionTabWidgetFrame const * this_ptr) {
  return &this_ptr->leftCornerWidgetSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_leftCornerWidgetSize_mut(QStyleOptionTabWidgetFrame * this_ptr) {
  return &this_ptr->leftCornerWidgetSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(QStyleOptionTabWidgetFrame * this_ptr, QSize const * value) {
  this_ptr->leftCornerWidgetSize = *value;
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_tabBarRect(QStyleOptionTabWidgetFrame const * this_ptr) {
  return &this_ptr->tabBarRect;
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_tabBarRect_mut(QStyleOptionTabWidgetFrame * this_ptr) {
  return &this_ptr->tabBarRect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_tabBarRect(QStyleOptionTabWidgetFrame * this_ptr, QRect const * value) {
  this_ptr->tabBarRect = *value;
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_selectedTabRect(QStyleOptionTabWidgetFrame const * this_ptr) {
  return &this_ptr->selectedTabRect;
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_selectedTabRect_mut(QStyleOptionTabWidgetFrame * this_ptr) {
  return &this_ptr->selectedTabRect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabWidgetFrame_selectedTabRect(QStyleOptionTabWidgetFrame * this_ptr, QRect const * value) {
  this_ptr->selectedTabRect = *value;
}


RITUAL_EXPORT QTabBar::Shape ctr_qt_widgets_ffi_QStyleOptionTabBarBase_shape(QStyleOptionTabBarBase const * this_ptr) {
  return this_ptr->shape;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabBarBase_shape(QStyleOptionTabBarBase * this_ptr, QTabBar::Shape value) {
  this_ptr->shape = value;
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QStyleOptionTabBarBase_tabBarRect(QStyleOptionTabBarBase const * this_ptr) {
  return &this_ptr->tabBarRect;
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyleOptionTabBarBase_tabBarRect_mut(QStyleOptionTabBarBase * this_ptr) {
  return &this_ptr->tabBarRect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabBarBase_tabBarRect(QStyleOptionTabBarBase * this_ptr, QRect const * value) {
  this_ptr->tabBarRect = *value;
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QStyleOptionTabBarBase_selectedTabRect(QStyleOptionTabBarBase const * this_ptr) {
  return &this_ptr->selectedTabRect;
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyleOptionTabBarBase_selectedTabRect_mut(QStyleOptionTabBarBase * this_ptr) {
  return &this_ptr->selectedTabRect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabBarBase_selectedTabRect(QStyleOptionTabBarBase * this_ptr, QRect const * value) {
  this_ptr->selectedTabRect = *value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionTabBarBase_documentMode(QStyleOptionTabBarBase const * this_ptr) {
  return this_ptr->documentMode;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTabBarBase_documentMode(QStyleOptionTabBarBase * this_ptr, bool value) {
  this_ptr->documentMode = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionHeader_section(QStyleOptionHeader const * this_ptr) {
  return this_ptr->section;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_section(QStyleOptionHeader * this_ptr, int value) {
  this_ptr->section = value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionHeader_text(QStyleOptionHeader const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionHeader_text_mut(QStyleOptionHeader * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_text(QStyleOptionHeader * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionHeader_textAlignment(QStyleOptionHeader const * this_ptr) {
  return int(this_ptr->textAlignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_textAlignment(QStyleOptionHeader * this_ptr, int value) {
  this_ptr->textAlignment = QFlags< Qt::AlignmentFlag >(value);
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionHeader_icon(QStyleOptionHeader const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionHeader_icon_mut(QStyleOptionHeader * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_icon(QStyleOptionHeader * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionHeader_iconAlignment(QStyleOptionHeader const * this_ptr) {
  return int(this_ptr->iconAlignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_iconAlignment(QStyleOptionHeader * this_ptr, int value) {
  this_ptr->iconAlignment = QFlags< Qt::AlignmentFlag >(value);
}


RITUAL_EXPORT QStyleOptionHeader::SectionPosition ctr_qt_widgets_ffi_QStyleOptionHeader_position(QStyleOptionHeader const * this_ptr) {
  return this_ptr->position;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_position(QStyleOptionHeader * this_ptr, QStyleOptionHeader::SectionPosition value) {
  this_ptr->position = value;
}


RITUAL_EXPORT QStyleOptionHeader::SelectedPosition ctr_qt_widgets_ffi_QStyleOptionHeader_selectedPosition(QStyleOptionHeader const * this_ptr) {
  return this_ptr->selectedPosition;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_selectedPosition(QStyleOptionHeader * this_ptr, QStyleOptionHeader::SelectedPosition value) {
  this_ptr->selectedPosition = value;
}


RITUAL_EXPORT QStyleOptionHeader::SortIndicator ctr_qt_widgets_ffi_QStyleOptionHeader_sortIndicator(QStyleOptionHeader const * this_ptr) {
  return this_ptr->sortIndicator;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_sortIndicator(QStyleOptionHeader * this_ptr, QStyleOptionHeader::SortIndicator value) {
  this_ptr->sortIndicator = value;
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QStyleOptionHeader_orientation(QStyleOptionHeader const * this_ptr) {
  return this_ptr->orientation;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeader_orientation(QStyleOptionHeader * this_ptr, Qt::Orientation value) {
  this_ptr->orientation = value;
}


RITUAL_EXPORT Qt::TextElideMode ctr_qt_widgets_ffi_QStyleOptionHeaderV2_textElideMode(QStyleOptionHeaderV2 const * this_ptr) {
  return this_ptr->textElideMode;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeaderV2_textElideMode(QStyleOptionHeaderV2 * this_ptr, Qt::TextElideMode value) {
  this_ptr->textElideMode = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionHeaderV2_isSectionDragTarget(QStyleOptionHeaderV2 const * this_ptr) {
  return this_ptr->isSectionDragTarget;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeaderV2_isSectionDragTarget(QStyleOptionHeaderV2 * this_ptr, bool value) {
  this_ptr->isSectionDragTarget = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionHeaderV2_unused(QStyleOptionHeaderV2 const * this_ptr) {
  return this_ptr->unused;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionHeaderV2_unused(QStyleOptionHeaderV2 * this_ptr, int value) {
  this_ptr->unused = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionButton_features(QStyleOptionButton const * this_ptr) {
  return int(this_ptr->features);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionButton_features(QStyleOptionButton * this_ptr, int value) {
  this_ptr->features = QFlags< QStyleOptionButton::ButtonFeature >(value);
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionButton_text(QStyleOptionButton const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionButton_text_mut(QStyleOptionButton * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionButton_text(QStyleOptionButton * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionButton_icon(QStyleOptionButton const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionButton_icon_mut(QStyleOptionButton * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionButton_icon(QStyleOptionButton * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionButton_iconSize(QStyleOptionButton const * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionButton_iconSize_mut(QStyleOptionButton * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionButton_iconSize(QStyleOptionButton * this_ptr, QSize const * value) {
  this_ptr->iconSize = *value;
}


RITUAL_EXPORT QTabBar::Shape ctr_qt_widgets_ffi_QStyleOptionTab_shape(QStyleOptionTab const * this_ptr) {
  return this_ptr->shape;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_shape(QStyleOptionTab * this_ptr, QTabBar::Shape value) {
  this_ptr->shape = value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionTab_text(QStyleOptionTab const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionTab_text_mut(QStyleOptionTab * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_text(QStyleOptionTab * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionTab_icon(QStyleOptionTab const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionTab_icon_mut(QStyleOptionTab * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_icon(QStyleOptionTab * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTab_row(QStyleOptionTab const * this_ptr) {
  return this_ptr->row;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_row(QStyleOptionTab * this_ptr, int value) {
  this_ptr->row = value;
}


RITUAL_EXPORT QStyleOptionTab::TabPosition ctr_qt_widgets_ffi_QStyleOptionTab_position(QStyleOptionTab const * this_ptr) {
  return this_ptr->position;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_position(QStyleOptionTab * this_ptr, QStyleOptionTab::TabPosition value) {
  this_ptr->position = value;
}


RITUAL_EXPORT QStyleOptionTab::SelectedPosition ctr_qt_widgets_ffi_QStyleOptionTab_selectedPosition(QStyleOptionTab const * this_ptr) {
  return this_ptr->selectedPosition;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_selectedPosition(QStyleOptionTab * this_ptr, QStyleOptionTab::SelectedPosition value) {
  this_ptr->selectedPosition = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTab_cornerWidgets(QStyleOptionTab const * this_ptr) {
  return int(this_ptr->cornerWidgets);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_cornerWidgets(QStyleOptionTab * this_ptr, int value) {
  this_ptr->cornerWidgets = QFlags< QStyleOptionTab::CornerWidget >(value);
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionTab_iconSize(QStyleOptionTab const * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionTab_iconSize_mut(QStyleOptionTab * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_iconSize(QStyleOptionTab * this_ptr, QSize const * value) {
  this_ptr->iconSize = *value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionTab_documentMode(QStyleOptionTab const * this_ptr) {
  return this_ptr->documentMode;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_documentMode(QStyleOptionTab * this_ptr, bool value) {
  this_ptr->documentMode = value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionTab_leftButtonSize(QStyleOptionTab const * this_ptr) {
  return &this_ptr->leftButtonSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionTab_leftButtonSize_mut(QStyleOptionTab * this_ptr) {
  return &this_ptr->leftButtonSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_leftButtonSize(QStyleOptionTab * this_ptr, QSize const * value) {
  this_ptr->leftButtonSize = *value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionTab_rightButtonSize(QStyleOptionTab const * this_ptr) {
  return &this_ptr->rightButtonSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionTab_rightButtonSize_mut(QStyleOptionTab * this_ptr) {
  return &this_ptr->rightButtonSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_rightButtonSize(QStyleOptionTab * this_ptr, QSize const * value) {
  this_ptr->rightButtonSize = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTab_features(QStyleOptionTab const * this_ptr) {
  return int(this_ptr->features);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_features(QStyleOptionTab * this_ptr, int value) {
  this_ptr->features = QFlags< QStyleOptionTab::TabFeature >(value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTab_tabIndex(QStyleOptionTab const * this_ptr) {
  return this_ptr->tabIndex;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTab_tabIndex(QStyleOptionTab * this_ptr, int value) {
  this_ptr->tabIndex = value;
}


RITUAL_EXPORT QStyleOptionToolBar::ToolBarPosition ctr_qt_widgets_ffi_QStyleOptionToolBar_positionOfLine(QStyleOptionToolBar const * this_ptr) {
  return this_ptr->positionOfLine;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBar_positionOfLine(QStyleOptionToolBar * this_ptr, QStyleOptionToolBar::ToolBarPosition value) {
  this_ptr->positionOfLine = value;
}


RITUAL_EXPORT QStyleOptionToolBar::ToolBarPosition ctr_qt_widgets_ffi_QStyleOptionToolBar_positionWithinLine(QStyleOptionToolBar const * this_ptr) {
  return this_ptr->positionWithinLine;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBar_positionWithinLine(QStyleOptionToolBar * this_ptr, QStyleOptionToolBar::ToolBarPosition value) {
  this_ptr->positionWithinLine = value;
}


RITUAL_EXPORT Qt::ToolBarArea ctr_qt_widgets_ffi_QStyleOptionToolBar_toolBarArea(QStyleOptionToolBar const * this_ptr) {
  return this_ptr->toolBarArea;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBar_toolBarArea(QStyleOptionToolBar * this_ptr, Qt::ToolBarArea value) {
  this_ptr->toolBarArea = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionToolBar_features(QStyleOptionToolBar const * this_ptr) {
  return int(this_ptr->features);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBar_features(QStyleOptionToolBar * this_ptr, int value) {
  this_ptr->features = QFlags< QStyleOptionToolBar::ToolBarFeature >(value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionToolBar_lineWidth(QStyleOptionToolBar const * this_ptr) {
  return this_ptr->lineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBar_lineWidth(QStyleOptionToolBar * this_ptr, int value) {
  this_ptr->lineWidth = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionToolBar_midLineWidth(QStyleOptionToolBar const * this_ptr) {
  return this_ptr->midLineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBar_midLineWidth(QStyleOptionToolBar * this_ptr, int value) {
  this_ptr->midLineWidth = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionProgressBar_minimum(QStyleOptionProgressBar const * this_ptr) {
  return this_ptr->minimum;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_minimum(QStyleOptionProgressBar * this_ptr, int value) {
  this_ptr->minimum = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionProgressBar_maximum(QStyleOptionProgressBar const * this_ptr) {
  return this_ptr->maximum;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_maximum(QStyleOptionProgressBar * this_ptr, int value) {
  this_ptr->maximum = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionProgressBar_progress(QStyleOptionProgressBar const * this_ptr) {
  return this_ptr->progress;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_progress(QStyleOptionProgressBar * this_ptr, int value) {
  this_ptr->progress = value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionProgressBar_text(QStyleOptionProgressBar const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionProgressBar_text_mut(QStyleOptionProgressBar * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_text(QStyleOptionProgressBar * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionProgressBar_textAlignment(QStyleOptionProgressBar const * this_ptr) {
  return int(this_ptr->textAlignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_textAlignment(QStyleOptionProgressBar * this_ptr, int value) {
  this_ptr->textAlignment = QFlags< Qt::AlignmentFlag >(value);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionProgressBar_textVisible(QStyleOptionProgressBar const * this_ptr) {
  return this_ptr->textVisible;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_textVisible(QStyleOptionProgressBar * this_ptr, bool value) {
  this_ptr->textVisible = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionProgressBar_invertedAppearance(QStyleOptionProgressBar const * this_ptr) {
  return this_ptr->invertedAppearance;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_invertedAppearance(QStyleOptionProgressBar * this_ptr, bool value) {
  this_ptr->invertedAppearance = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionProgressBar_bottomToTop(QStyleOptionProgressBar const * this_ptr) {
  return this_ptr->bottomToTop;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionProgressBar_bottomToTop(QStyleOptionProgressBar * this_ptr, bool value) {
  this_ptr->bottomToTop = value;
}


RITUAL_EXPORT QStyleOptionMenuItem::MenuItemType ctr_qt_widgets_ffi_QStyleOptionMenuItem_menuItemType(QStyleOptionMenuItem const * this_ptr) {
  return this_ptr->menuItemType;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_menuItemType(QStyleOptionMenuItem * this_ptr, QStyleOptionMenuItem::MenuItemType value) {
  this_ptr->menuItemType = value;
}


RITUAL_EXPORT QStyleOptionMenuItem::CheckType ctr_qt_widgets_ffi_QStyleOptionMenuItem_checkType(QStyleOptionMenuItem const * this_ptr) {
  return this_ptr->checkType;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_checkType(QStyleOptionMenuItem * this_ptr, QStyleOptionMenuItem::CheckType value) {
  this_ptr->checkType = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionMenuItem_checked(QStyleOptionMenuItem const * this_ptr) {
  return this_ptr->checked;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_checked(QStyleOptionMenuItem * this_ptr, bool value) {
  this_ptr->checked = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionMenuItem_menuHasCheckableItems(QStyleOptionMenuItem const * this_ptr) {
  return this_ptr->menuHasCheckableItems;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_menuHasCheckableItems(QStyleOptionMenuItem * this_ptr, bool value) {
  this_ptr->menuHasCheckableItems = value;
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QStyleOptionMenuItem_menuRect(QStyleOptionMenuItem const * this_ptr) {
  return &this_ptr->menuRect;
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyleOptionMenuItem_menuRect_mut(QStyleOptionMenuItem * this_ptr) {
  return &this_ptr->menuRect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_menuRect(QStyleOptionMenuItem * this_ptr, QRect const * value) {
  this_ptr->menuRect = *value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionMenuItem_text(QStyleOptionMenuItem const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionMenuItem_text_mut(QStyleOptionMenuItem * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_text(QStyleOptionMenuItem * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionMenuItem_icon(QStyleOptionMenuItem const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionMenuItem_icon_mut(QStyleOptionMenuItem * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_icon(QStyleOptionMenuItem * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionMenuItem_maxIconWidth(QStyleOptionMenuItem const * this_ptr) {
  return this_ptr->maxIconWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_maxIconWidth(QStyleOptionMenuItem * this_ptr, int value) {
  this_ptr->maxIconWidth = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionMenuItem_reservedShortcutWidth(QStyleOptionMenuItem const * this_ptr) {
  return this_ptr->reservedShortcutWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_reservedShortcutWidth(QStyleOptionMenuItem * this_ptr, int value) {
  this_ptr->reservedShortcutWidth = value;
}


RITUAL_EXPORT QFont const * ctr_qt_widgets_ffi_QStyleOptionMenuItem_font(QStyleOptionMenuItem const * this_ptr) {
  return &this_ptr->font;
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QStyleOptionMenuItem_font_mut(QStyleOptionMenuItem * this_ptr) {
  return &this_ptr->font;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionMenuItem_font(QStyleOptionMenuItem * this_ptr, QFont const * value) {
  this_ptr->font = *value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionDockWidget_title(QStyleOptionDockWidget const * this_ptr) {
  return &this_ptr->title;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionDockWidget_title_mut(QStyleOptionDockWidget * this_ptr) {
  return &this_ptr->title;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionDockWidget_title(QStyleOptionDockWidget * this_ptr, QString const * value) {
  this_ptr->title = *value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionDockWidget_closable(QStyleOptionDockWidget const * this_ptr) {
  return this_ptr->closable;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionDockWidget_closable(QStyleOptionDockWidget * this_ptr, bool value) {
  this_ptr->closable = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionDockWidget_movable(QStyleOptionDockWidget const * this_ptr) {
  return this_ptr->movable;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionDockWidget_movable(QStyleOptionDockWidget * this_ptr, bool value) {
  this_ptr->movable = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionDockWidget_floatable(QStyleOptionDockWidget const * this_ptr) {
  return this_ptr->floatable;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionDockWidget_floatable(QStyleOptionDockWidget * this_ptr, bool value) {
  this_ptr->floatable = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionDockWidget_verticalTitleBar(QStyleOptionDockWidget const * this_ptr) {
  return this_ptr->verticalTitleBar;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionDockWidget_verticalTitleBar(QStyleOptionDockWidget * this_ptr, bool value) {
  this_ptr->verticalTitleBar = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionViewItem_displayAlignment(QStyleOptionViewItem const * this_ptr) {
  return int(this_ptr->displayAlignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_displayAlignment(QStyleOptionViewItem * this_ptr, int value) {
  this_ptr->displayAlignment = QFlags< Qt::AlignmentFlag >(value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionViewItem_decorationAlignment(QStyleOptionViewItem const * this_ptr) {
  return int(this_ptr->decorationAlignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_decorationAlignment(QStyleOptionViewItem * this_ptr, int value) {
  this_ptr->decorationAlignment = QFlags< Qt::AlignmentFlag >(value);
}


RITUAL_EXPORT Qt::TextElideMode ctr_qt_widgets_ffi_QStyleOptionViewItem_textElideMode(QStyleOptionViewItem const * this_ptr) {
  return this_ptr->textElideMode;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_textElideMode(QStyleOptionViewItem * this_ptr, Qt::TextElideMode value) {
  this_ptr->textElideMode = value;
}


RITUAL_EXPORT QStyleOptionViewItem::Position ctr_qt_widgets_ffi_QStyleOptionViewItem_decorationPosition(QStyleOptionViewItem const * this_ptr) {
  return this_ptr->decorationPosition;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_decorationPosition(QStyleOptionViewItem * this_ptr, QStyleOptionViewItem::Position value) {
  this_ptr->decorationPosition = value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionViewItem_decorationSize(QStyleOptionViewItem const * this_ptr) {
  return &this_ptr->decorationSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionViewItem_decorationSize_mut(QStyleOptionViewItem * this_ptr) {
  return &this_ptr->decorationSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_decorationSize(QStyleOptionViewItem * this_ptr, QSize const * value) {
  this_ptr->decorationSize = *value;
}


RITUAL_EXPORT QFont const * ctr_qt_widgets_ffi_QStyleOptionViewItem_font(QStyleOptionViewItem const * this_ptr) {
  return &this_ptr->font;
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QStyleOptionViewItem_font_mut(QStyleOptionViewItem * this_ptr) {
  return &this_ptr->font;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_font(QStyleOptionViewItem * this_ptr, QFont const * value) {
  this_ptr->font = *value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionViewItem_showDecorationSelected(QStyleOptionViewItem const * this_ptr) {
  return this_ptr->showDecorationSelected;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_showDecorationSelected(QStyleOptionViewItem * this_ptr, bool value) {
  this_ptr->showDecorationSelected = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionViewItem_features(QStyleOptionViewItem const * this_ptr) {
  return int(this_ptr->features);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_features(QStyleOptionViewItem * this_ptr, int value) {
  this_ptr->features = QFlags< QStyleOptionViewItem::ViewItemFeature >(value);
}


RITUAL_EXPORT QLocale const * ctr_qt_widgets_ffi_QStyleOptionViewItem_locale(QStyleOptionViewItem const * this_ptr) {
  return &this_ptr->locale;
}


RITUAL_EXPORT QLocale * ctr_qt_widgets_ffi_QStyleOptionViewItem_locale_mut(QStyleOptionViewItem * this_ptr) {
  return &this_ptr->locale;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_locale(QStyleOptionViewItem * this_ptr, QLocale const * value) {
  this_ptr->locale = *value;
}


RITUAL_EXPORT QWidget const * ctr_qt_widgets_ffi_QStyleOptionViewItem_widget(QStyleOptionViewItem const * this_ptr) {
  return this_ptr->widget;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_widget(QStyleOptionViewItem * this_ptr, QWidget const * value) {
  this_ptr->widget = value;
}


RITUAL_EXPORT QModelIndex const * ctr_qt_widgets_ffi_QStyleOptionViewItem_index(QStyleOptionViewItem const * this_ptr) {
  return &this_ptr->index;
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QStyleOptionViewItem_index_mut(QStyleOptionViewItem * this_ptr) {
  return &this_ptr->index;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_index(QStyleOptionViewItem * this_ptr, QModelIndex const * value) {
  this_ptr->index = *value;
}


RITUAL_EXPORT Qt::CheckState ctr_qt_widgets_ffi_QStyleOptionViewItem_checkState(QStyleOptionViewItem const * this_ptr) {
  return this_ptr->checkState;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_checkState(QStyleOptionViewItem * this_ptr, Qt::CheckState value) {
  this_ptr->checkState = value;
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionViewItem_icon(QStyleOptionViewItem const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionViewItem_icon_mut(QStyleOptionViewItem * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_icon(QStyleOptionViewItem * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionViewItem_text(QStyleOptionViewItem const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionViewItem_text_mut(QStyleOptionViewItem * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_text(QStyleOptionViewItem * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT QStyleOptionViewItem::ViewItemPosition ctr_qt_widgets_ffi_QStyleOptionViewItem_viewItemPosition(QStyleOptionViewItem const * this_ptr) {
  return this_ptr->viewItemPosition;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_viewItemPosition(QStyleOptionViewItem * this_ptr, QStyleOptionViewItem::ViewItemPosition value) {
  this_ptr->viewItemPosition = value;
}


RITUAL_EXPORT QBrush const * ctr_qt_widgets_ffi_QStyleOptionViewItem_backgroundBrush(QStyleOptionViewItem const * this_ptr) {
  return &this_ptr->backgroundBrush;
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QStyleOptionViewItem_backgroundBrush_mut(QStyleOptionViewItem * this_ptr) {
  return &this_ptr->backgroundBrush;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionViewItem_backgroundBrush(QStyleOptionViewItem * this_ptr, QBrush const * value) {
  this_ptr->backgroundBrush = *value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionToolBox_text(QStyleOptionToolBox const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionToolBox_text_mut(QStyleOptionToolBox * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBox_text(QStyleOptionToolBox * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionToolBox_icon(QStyleOptionToolBox const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionToolBox_icon_mut(QStyleOptionToolBox * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBox_icon(QStyleOptionToolBox * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT QStyleOptionToolBox::TabPosition ctr_qt_widgets_ffi_QStyleOptionToolBox_position(QStyleOptionToolBox const * this_ptr) {
  return this_ptr->position;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBox_position(QStyleOptionToolBox * this_ptr, QStyleOptionToolBox::TabPosition value) {
  this_ptr->position = value;
}


RITUAL_EXPORT QStyleOptionToolBox::SelectedPosition ctr_qt_widgets_ffi_QStyleOptionToolBox_selectedPosition(QStyleOptionToolBox const * this_ptr) {
  return this_ptr->selectedPosition;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolBox_selectedPosition(QStyleOptionToolBox * this_ptr, QStyleOptionToolBox::SelectedPosition value) {
  this_ptr->selectedPosition = value;
}


RITUAL_EXPORT QRubberBand::Shape ctr_qt_widgets_ffi_QStyleOptionRubberBand_shape(QStyleOptionRubberBand const * this_ptr) {
  return this_ptr->shape;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionRubberBand_shape(QStyleOptionRubberBand * this_ptr, QRubberBand::Shape value) {
  this_ptr->shape = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionRubberBand_opaque(QStyleOptionRubberBand const * this_ptr) {
  return this_ptr->opaque;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionRubberBand_opaque(QStyleOptionRubberBand * this_ptr, bool value) {
  this_ptr->opaque = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionComplex_subControls(QStyleOptionComplex const * this_ptr) {
  return int(this_ptr->subControls);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComplex_subControls(QStyleOptionComplex * this_ptr, int value) {
  this_ptr->subControls = QFlags< QStyle::SubControl >(value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionComplex_activeSubControls(QStyleOptionComplex const * this_ptr) {
  return int(this_ptr->activeSubControls);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComplex_activeSubControls(QStyleOptionComplex * this_ptr, int value) {
  this_ptr->activeSubControls = QFlags< QStyle::SubControl >(value);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QStyleOptionSlider_orientation(QStyleOptionSlider const * this_ptr) {
  return this_ptr->orientation;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_orientation(QStyleOptionSlider * this_ptr, Qt::Orientation value) {
  this_ptr->orientation = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_minimum(QStyleOptionSlider const * this_ptr) {
  return this_ptr->minimum;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_minimum(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->minimum = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_maximum(QStyleOptionSlider const * this_ptr) {
  return this_ptr->maximum;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_maximum(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->maximum = value;
}


RITUAL_EXPORT QSlider::TickPosition ctr_qt_widgets_ffi_QStyleOptionSlider_tickPosition(QStyleOptionSlider const * this_ptr) {
  return this_ptr->tickPosition;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_tickPosition(QStyleOptionSlider * this_ptr, QSlider::TickPosition value) {
  this_ptr->tickPosition = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_tickInterval(QStyleOptionSlider const * this_ptr) {
  return this_ptr->tickInterval;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_tickInterval(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->tickInterval = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionSlider_upsideDown(QStyleOptionSlider const * this_ptr) {
  return this_ptr->upsideDown;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_upsideDown(QStyleOptionSlider * this_ptr, bool value) {
  this_ptr->upsideDown = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_sliderPosition(QStyleOptionSlider const * this_ptr) {
  return this_ptr->sliderPosition;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_sliderPosition(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->sliderPosition = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_sliderValue(QStyleOptionSlider const * this_ptr) {
  return this_ptr->sliderValue;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_sliderValue(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->sliderValue = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_singleStep(QStyleOptionSlider const * this_ptr) {
  return this_ptr->singleStep;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_singleStep(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->singleStep = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_pageStep(QStyleOptionSlider const * this_ptr) {
  return this_ptr->pageStep;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_pageStep(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->pageStep = value;
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QStyleOptionSlider_notchTarget(QStyleOptionSlider const * this_ptr) {
  return this_ptr->notchTarget;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_notchTarget(QStyleOptionSlider * this_ptr, double value) {
  this_ptr->notchTarget = value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionSlider_dialWrapping(QStyleOptionSlider const * this_ptr) {
  return this_ptr->dialWrapping;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_dialWrapping(QStyleOptionSlider * this_ptr, bool value) {
  this_ptr->dialWrapping = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSlider_keyboardModifiers(QStyleOptionSlider const * this_ptr) {
  return int(this_ptr->keyboardModifiers);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSlider_keyboardModifiers(QStyleOptionSlider * this_ptr, int value) {
  this_ptr->keyboardModifiers = QFlags< Qt::KeyboardModifier >(value);
}


RITUAL_EXPORT QAbstractSpinBox::ButtonSymbols ctr_qt_widgets_ffi_QStyleOptionSpinBox_buttonSymbols(QStyleOptionSpinBox const * this_ptr) {
  return this_ptr->buttonSymbols;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSpinBox_buttonSymbols(QStyleOptionSpinBox * this_ptr, QAbstractSpinBox::ButtonSymbols value) {
  this_ptr->buttonSymbols = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionSpinBox_stepEnabled(QStyleOptionSpinBox const * this_ptr) {
  return int(this_ptr->stepEnabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSpinBox_stepEnabled(QStyleOptionSpinBox * this_ptr, int value) {
  this_ptr->stepEnabled = QFlags< QAbstractSpinBox::StepEnabledFlag >(value);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionSpinBox_frame(QStyleOptionSpinBox const * this_ptr) {
  return this_ptr->frame;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSpinBox_frame(QStyleOptionSpinBox * this_ptr, bool value) {
  this_ptr->frame = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionToolButton_features(QStyleOptionToolButton const * this_ptr) {
  return int(this_ptr->features);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_features(QStyleOptionToolButton * this_ptr, int value) {
  this_ptr->features = QFlags< QStyleOptionToolButton::ToolButtonFeature >(value);
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionToolButton_icon(QStyleOptionToolButton const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionToolButton_icon_mut(QStyleOptionToolButton * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_icon(QStyleOptionToolButton * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionToolButton_iconSize(QStyleOptionToolButton const * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionToolButton_iconSize_mut(QStyleOptionToolButton * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_iconSize(QStyleOptionToolButton * this_ptr, QSize const * value) {
  this_ptr->iconSize = *value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionToolButton_text(QStyleOptionToolButton const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionToolButton_text_mut(QStyleOptionToolButton * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_text(QStyleOptionToolButton * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT Qt::ArrowType ctr_qt_widgets_ffi_QStyleOptionToolButton_arrowType(QStyleOptionToolButton const * this_ptr) {
  return this_ptr->arrowType;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_arrowType(QStyleOptionToolButton * this_ptr, Qt::ArrowType value) {
  this_ptr->arrowType = value;
}


RITUAL_EXPORT Qt::ToolButtonStyle ctr_qt_widgets_ffi_QStyleOptionToolButton_toolButtonStyle(QStyleOptionToolButton const * this_ptr) {
  return this_ptr->toolButtonStyle;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_toolButtonStyle(QStyleOptionToolButton * this_ptr, Qt::ToolButtonStyle value) {
  this_ptr->toolButtonStyle = value;
}


RITUAL_EXPORT QPoint const * ctr_qt_widgets_ffi_QStyleOptionToolButton_pos(QStyleOptionToolButton const * this_ptr) {
  return &this_ptr->pos;
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QStyleOptionToolButton_pos_mut(QStyleOptionToolButton * this_ptr) {
  return &this_ptr->pos;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_pos(QStyleOptionToolButton * this_ptr, QPoint const * value) {
  this_ptr->pos = *value;
}


RITUAL_EXPORT QFont const * ctr_qt_widgets_ffi_QStyleOptionToolButton_font(QStyleOptionToolButton const * this_ptr) {
  return &this_ptr->font;
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QStyleOptionToolButton_font_mut(QStyleOptionToolButton * this_ptr) {
  return &this_ptr->font;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionToolButton_font(QStyleOptionToolButton * this_ptr, QFont const * value) {
  this_ptr->font = *value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionComboBox_editable(QStyleOptionComboBox const * this_ptr) {
  return this_ptr->editable;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComboBox_editable(QStyleOptionComboBox * this_ptr, bool value) {
  this_ptr->editable = value;
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QStyleOptionComboBox_popupRect(QStyleOptionComboBox const * this_ptr) {
  return &this_ptr->popupRect;
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyleOptionComboBox_popupRect_mut(QStyleOptionComboBox * this_ptr) {
  return &this_ptr->popupRect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComboBox_popupRect(QStyleOptionComboBox * this_ptr, QRect const * value) {
  this_ptr->popupRect = *value;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QStyleOptionComboBox_frame(QStyleOptionComboBox const * this_ptr) {
  return this_ptr->frame;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComboBox_frame(QStyleOptionComboBox * this_ptr, bool value) {
  this_ptr->frame = value;
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionComboBox_currentText(QStyleOptionComboBox const * this_ptr) {
  return &this_ptr->currentText;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionComboBox_currentText_mut(QStyleOptionComboBox * this_ptr) {
  return &this_ptr->currentText;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComboBox_currentText(QStyleOptionComboBox * this_ptr, QString const * value) {
  this_ptr->currentText = *value;
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionComboBox_currentIcon(QStyleOptionComboBox const * this_ptr) {
  return &this_ptr->currentIcon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionComboBox_currentIcon_mut(QStyleOptionComboBox * this_ptr) {
  return &this_ptr->currentIcon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComboBox_currentIcon(QStyleOptionComboBox * this_ptr, QIcon const * value) {
  this_ptr->currentIcon = *value;
}


RITUAL_EXPORT QSize const * ctr_qt_widgets_ffi_QStyleOptionComboBox_iconSize(QStyleOptionComboBox const * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyleOptionComboBox_iconSize_mut(QStyleOptionComboBox * this_ptr) {
  return &this_ptr->iconSize;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComboBox_iconSize(QStyleOptionComboBox * this_ptr, QSize const * value) {
  this_ptr->iconSize = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionComboBox_textAlignment(QStyleOptionComboBox const * this_ptr) {
  return int(this_ptr->textAlignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionComboBox_textAlignment(QStyleOptionComboBox * this_ptr, int value) {
  this_ptr->textAlignment = QFlags< Qt::AlignmentFlag >(value);
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionTitleBar_text(QStyleOptionTitleBar const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionTitleBar_text_mut(QStyleOptionTitleBar * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTitleBar_text(QStyleOptionTitleBar * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT QIcon const * ctr_qt_widgets_ffi_QStyleOptionTitleBar_icon(QStyleOptionTitleBar const * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyleOptionTitleBar_icon_mut(QStyleOptionTitleBar * this_ptr) {
  return &this_ptr->icon;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTitleBar_icon(QStyleOptionTitleBar * this_ptr, QIcon const * value) {
  this_ptr->icon = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTitleBar_titleBarState(QStyleOptionTitleBar const * this_ptr) {
  return this_ptr->titleBarState;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTitleBar_titleBarState(QStyleOptionTitleBar * this_ptr, int value) {
  this_ptr->titleBarState = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionTitleBar_titleBarFlags(QStyleOptionTitleBar const * this_ptr) {
  return int(this_ptr->titleBarFlags);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionTitleBar_titleBarFlags(QStyleOptionTitleBar * this_ptr, int value) {
  this_ptr->titleBarFlags = QFlags< Qt::WindowType >(value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionGroupBox_features(QStyleOptionGroupBox const * this_ptr) {
  return int(this_ptr->features);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionGroupBox_features(QStyleOptionGroupBox * this_ptr, int value) {
  this_ptr->features = QFlags< QStyleOptionFrame::FrameFeature >(value);
}


RITUAL_EXPORT QString const * ctr_qt_widgets_ffi_QStyleOptionGroupBox_text(QStyleOptionGroupBox const * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyleOptionGroupBox_text_mut(QStyleOptionGroupBox * this_ptr) {
  return &this_ptr->text;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionGroupBox_text(QStyleOptionGroupBox * this_ptr, QString const * value) {
  this_ptr->text = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionGroupBox_textAlignment(QStyleOptionGroupBox const * this_ptr) {
  return int(this_ptr->textAlignment);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionGroupBox_textAlignment(QStyleOptionGroupBox * this_ptr, int value) {
  this_ptr->textAlignment = QFlags< Qt::AlignmentFlag >(value);
}


RITUAL_EXPORT QColor const * ctr_qt_widgets_ffi_QStyleOptionGroupBox_textColor(QStyleOptionGroupBox const * this_ptr) {
  return &this_ptr->textColor;
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QStyleOptionGroupBox_textColor_mut(QStyleOptionGroupBox * this_ptr) {
  return &this_ptr->textColor;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionGroupBox_textColor(QStyleOptionGroupBox * this_ptr, QColor const * value) {
  this_ptr->textColor = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionGroupBox_lineWidth(QStyleOptionGroupBox const * this_ptr) {
  return this_ptr->lineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionGroupBox_lineWidth(QStyleOptionGroupBox * this_ptr, int value) {
  this_ptr->lineWidth = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleOptionGroupBox_midLineWidth(QStyleOptionGroupBox const * this_ptr) {
  return this_ptr->midLineWidth;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionGroupBox_midLineWidth(QStyleOptionGroupBox * this_ptr, int value) {
  this_ptr->midLineWidth = value;
}


RITUAL_EXPORT Qt::Corner ctr_qt_widgets_ffi_QStyleOptionSizeGrip_corner(QStyleOptionSizeGrip const * this_ptr) {
  return this_ptr->corner;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionSizeGrip_corner(QStyleOptionSizeGrip * this_ptr, Qt::Corner value) {
  this_ptr->corner = value;
}


RITUAL_EXPORT QRectF const * ctr_qt_widgets_ffi_QStyleOptionGraphicsItem_exposedRect(QStyleOptionGraphicsItem const * this_ptr) {
  return &this_ptr->exposedRect;
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QStyleOptionGraphicsItem_exposedRect_mut(QStyleOptionGraphicsItem * this_ptr) {
  return &this_ptr->exposedRect;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleOptionGraphicsItem_exposedRect(QStyleOptionGraphicsItem * this_ptr, QRectF const * value) {
  this_ptr->exposedRect = *value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleHintReturn_version(QStyleHintReturn const * this_ptr) {
  return this_ptr->version;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleHintReturn_version(QStyleHintReturn * this_ptr, int value) {
  this_ptr->version = value;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyleHintReturn_type(QStyleHintReturn const * this_ptr) {
  return this_ptr->type;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleHintReturn_type(QStyleHintReturn * this_ptr, int value) {
  this_ptr->type = value;
}


RITUAL_EXPORT QRegion const * ctr_qt_widgets_ffi_QStyleHintReturnMask_region(QStyleHintReturnMask const * this_ptr) {
  return &this_ptr->region;
}


RITUAL_EXPORT QRegion * ctr_qt_widgets_ffi_QStyleHintReturnMask_region_mut(QStyleHintReturnMask * this_ptr) {
  return &this_ptr->region;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleHintReturnMask_region(QStyleHintReturnMask * this_ptr, QRegion const * value) {
  this_ptr->region = *value;
}


RITUAL_EXPORT QVariant const * ctr_qt_widgets_ffi_QStyleHintReturnVariant_variant(QStyleHintReturnVariant const * this_ptr) {
  return &this_ptr->variant;
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QStyleHintReturnVariant_variant_mut(QStyleHintReturnVariant * this_ptr) {
  return &this_ptr->variant;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QStyleHintReturnVariant_variant(QStyleHintReturnVariant * this_ptr, QVariant const * value) {
  this_ptr->variant = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractItemDelegate_staticMetaObject() {
  return &QAbstractItemDelegate::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractScrollArea_staticMetaObject() {
  return &QAbstractScrollArea::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractItemView_staticMetaObject() {
  return &QAbstractItemView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QApplication_staticMetaObject() {
  return &QApplication::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLayout_staticMetaObject() {
  return &QLayout::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGridLayout_staticMetaObject() {
  return &QGridLayout::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QBoxLayout_staticMetaObject() {
  return &QBoxLayout::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QHBoxLayout_staticMetaObject() {
  return &QHBoxLayout::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QVBoxLayout_staticMetaObject() {
  return &QVBoxLayout::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QButtonGroup_staticMetaObject() {
  return &QButtonGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCalendarWidget_staticMetaObject() {
  return &QCalendarWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCheckBox_staticMetaObject() {
  return &QCheckBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDialog_staticMetaObject() {
  return &QDialog::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QColorDialog_staticMetaObject() {
  return &QColorDialog::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QColumnView_staticMetaObject() {
  return &QColumnView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QComboBox_staticMetaObject() {
  return &QComboBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPushButton_staticMetaObject() {
  return &QPushButton::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCommandLinkButton_staticMetaObject() {
  return &QCommandLinkButton::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCommonStyle_staticMetaObject() {
  return &QCommonStyle::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCompleter_staticMetaObject() {
  return &QCompleter::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDataWidgetMapper_staticMetaObject() {
  return &QDataWidgetMapper::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDateTimeEdit_staticMetaObject() {
  return &QDateTimeEdit::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTimeEdit_staticMetaObject() {
  return &QTimeEdit::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDateEdit_staticMetaObject() {
  return &QDateEdit::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDial_staticMetaObject() {
  return &QDial::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDialogButtonBox_staticMetaObject() {
  return &QDialogButtonBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDockWidget_staticMetaObject() {
  return &QDockWidget::staticMetaObject;
}


RITUAL_EXPORT Qt::TileRule ctr_qt_widgets_ffi_QTileRules_horizontal(QTileRules const * this_ptr) {
  return this_ptr->horizontal;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QTileRules_horizontal(QTileRules * this_ptr, Qt::TileRule value) {
  this_ptr->horizontal = value;
}


RITUAL_EXPORT Qt::TileRule ctr_qt_widgets_ffi_QTileRules_vertical(QTileRules const * this_ptr) {
  return this_ptr->vertical;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QTileRules_vertical(QTileRules * this_ptr, Qt::TileRule value) {
  this_ptr->vertical = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QErrorMessage_staticMetaObject() {
  return &QErrorMessage::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFileDialog_staticMetaObject() {
  return &QFileDialog::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFocusFrame_staticMetaObject() {
  return &QFocusFrame::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFontComboBox_staticMetaObject() {
  return &QFontComboBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFontDialog_staticMetaObject() {
  return &QFontDialog::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFormLayout_staticMetaObject() {
  return &QFormLayout::staticMetaObject;
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QFormLayout_TakeRowResult_labelItem(QFormLayout::TakeRowResult const * this_ptr) {
  return this_ptr->labelItem;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QFormLayout_TakeRowResult_labelItem(QFormLayout::TakeRowResult * this_ptr, QLayoutItem * value) {
  this_ptr->labelItem = value;
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QFormLayout_TakeRowResult_fieldItem(QFormLayout::TakeRowResult const * this_ptr) {
  return this_ptr->fieldItem;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QFormLayout_TakeRowResult_fieldItem(QFormLayout::TakeRowResult * this_ptr, QLayoutItem * value) {
  this_ptr->fieldItem = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGesture_staticMetaObject() {
  return &QGesture::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPanGesture_staticMetaObject() {
  return &QPanGesture::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPinchGesture_staticMetaObject() {
  return &QPinchGesture::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSwipeGesture_staticMetaObject() {
  return &QSwipeGesture::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTapGesture_staticMetaObject() {
  return &QTapGesture::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTapAndHoldGesture_staticMetaObject() {
  return &QTapAndHoldGesture::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsObject_staticMetaObject() {
  return &QGraphicsObject::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsTextItem_staticMetaObject() {
  return &QGraphicsTextItem::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsAnchor_staticMetaObject() {
  return &QGraphicsAnchor::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsEffect_staticMetaObject() {
  return &QGraphicsEffect::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsColorizeEffect_staticMetaObject() {
  return &QGraphicsColorizeEffect::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsBlurEffect_staticMetaObject() {
  return &QGraphicsBlurEffect::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_staticMetaObject() {
  return &QGraphicsDropShadowEffect::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsOpacityEffect_staticMetaObject() {
  return &QGraphicsOpacityEffect::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsItemAnimation_staticMetaObject() {
  return &QGraphicsItemAnimation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsWidget_staticMetaObject() {
  return &QGraphicsWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsProxyWidget_staticMetaObject() {
  return &QGraphicsProxyWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsScene_staticMetaObject() {
  return &QGraphicsScene::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsTransform_staticMetaObject() {
  return &QGraphicsTransform::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsScale_staticMetaObject() {
  return &QGraphicsScale::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsRotation_staticMetaObject() {
  return &QGraphicsRotation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QScrollArea_staticMetaObject() {
  return &QScrollArea::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsView_staticMetaObject() {
  return &QGraphicsView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGroupBox_staticMetaObject() {
  return &QGroupBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QHeaderView_staticMetaObject() {
  return &QHeaderView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLineEdit_staticMetaObject() {
  return &QLineEdit::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QInputDialog_staticMetaObject() {
  return &QInputDialog::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QItemDelegate_staticMetaObject() {
  return &QItemDelegate::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QKeySequenceEdit_staticMetaObject() {
  return &QKeySequenceEdit::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLabel_staticMetaObject() {
  return &QLabel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLCDNumber_staticMetaObject() {
  return &QLCDNumber::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QListView_staticMetaObject() {
  return &QListView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QListWidget_staticMetaObject() {
  return &QListWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMainWindow_staticMetaObject() {
  return &QMainWindow::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMdiArea_staticMetaObject() {
  return &QMdiArea::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMdiSubWindow_staticMetaObject() {
  return &QMdiSubWindow::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMenu_staticMetaObject() {
  return &QMenu::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMenuBar_staticMetaObject() {
  return &QMenuBar::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QMessageBox_staticMetaObject() {
  return &QMessageBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTextEdit_staticMetaObject() {
  return &QTextEdit::staticMetaObject;
}


RITUAL_EXPORT QTextCursor const * ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_cursor(QTextEdit::ExtraSelection const * this_ptr) {
  return &this_ptr->cursor;
}


RITUAL_EXPORT QTextCursor * ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_cursor_mut(QTextEdit::ExtraSelection * this_ptr) {
  return &this_ptr->cursor;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QTextEdit_ExtraSelection_cursor(QTextEdit::ExtraSelection * this_ptr, QTextCursor const * value) {
  this_ptr->cursor = *value;
}


RITUAL_EXPORT QTextCharFormat const * ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_format(QTextEdit::ExtraSelection const * this_ptr) {
  return &this_ptr->format;
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_widgets_ffi_QTextEdit_ExtraSelection_format_mut(QTextEdit::ExtraSelection * this_ptr) {
  return &this_ptr->format;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_set_QTextEdit_ExtraSelection_format(QTextEdit::ExtraSelection * this_ptr, QTextCharFormat const * value) {
  this_ptr->format = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPlainTextEdit_staticMetaObject() {
  return &QPlainTextEdit::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPlainTextDocumentLayout_staticMetaObject() {
  return &QPlainTextDocumentLayout::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QProgressBar_staticMetaObject() {
  return &QProgressBar::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QProgressDialog_staticMetaObject() {
  return &QProgressDialog::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QProxyStyle_staticMetaObject() {
  return &QProxyStyle::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QRadioButton_staticMetaObject() {
  return &QRadioButton::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QRhiWidget_staticMetaObject() {
  return &QRhiWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QScrollBar_staticMetaObject() {
  return &QScrollBar::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QScroller_staticMetaObject() {
  return &QScroller::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSizeGrip_staticMetaObject() {
  return &QSizeGrip::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSpinBox_staticMetaObject() {
  return &QSpinBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDoubleSpinBox_staticMetaObject() {
  return &QDoubleSpinBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSplashScreen_staticMetaObject() {
  return &QSplashScreen::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSplitter_staticMetaObject() {
  return &QSplitter::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSplitterHandle_staticMetaObject() {
  return &QSplitterHandle::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStackedLayout_staticMetaObject() {
  return &QStackedLayout::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStackedWidget_staticMetaObject() {
  return &QStackedWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStatusBar_staticMetaObject() {
  return &QStatusBar::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStyledItemDelegate_staticMetaObject() {
  return &QStyledItemDelegate::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStylePlugin_staticMetaObject() {
  return &QStylePlugin::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSystemTrayIcon_staticMetaObject() {
  return &QSystemTrayIcon::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTableView_staticMetaObject() {
  return &QTableView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTableWidget_staticMetaObject() {
  return &QTableWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTextBrowser_staticMetaObject() {
  return &QTextBrowser::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QToolBar_staticMetaObject() {
  return &QToolBar::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QToolBox_staticMetaObject() {
  return &QToolBox::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QToolButton_staticMetaObject() {
  return &QToolButton::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTreeView_staticMetaObject() {
  return &QTreeView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTreeWidget_staticMetaObject() {
  return &QTreeWidget::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QUndoView_staticMetaObject() {
  return &QUndoView::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWidgetAction_staticMetaObject() {
  return &QWidgetAction::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWizard_staticMetaObject() {
  return &QWizard::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWizardPage_staticMetaObject() {
  return &QWizardPage::staticMetaObject;
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QSizePolicy_QSizePolicy() {
  return new QSizePolicy();
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QSizePolicy_QSizePolicy1(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type) {
  return new QSizePolicy(horizontal, vertical, type);
}


RITUAL_EXPORT QSizePolicy::Policy ctr_qt_widgets_ffi_QSizePolicy_horizontalPolicy(QSizePolicy const * this_ptr) {
  return this_ptr->horizontalPolicy();
}


RITUAL_EXPORT QSizePolicy::Policy ctr_qt_widgets_ffi_QSizePolicy_verticalPolicy(QSizePolicy const * this_ptr) {
  return this_ptr->verticalPolicy();
}


RITUAL_EXPORT QSizePolicy::ControlType ctr_qt_widgets_ffi_QSizePolicy_controlType(QSizePolicy const * this_ptr) {
  return this_ptr->controlType();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setHorizontalPolicy(QSizePolicy * this_ptr, QSizePolicy::Policy d) {
  this_ptr->setHorizontalPolicy(d);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setVerticalPolicy(QSizePolicy * this_ptr, QSizePolicy::Policy d) {
  this_ptr->setVerticalPolicy(d);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setControlType(QSizePolicy * this_ptr, QSizePolicy::ControlType type) {
  this_ptr->setControlType(type);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSizePolicy_expandingDirections(QSizePolicy const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setHeightForWidth(QSizePolicy * this_ptr, bool b) {
  this_ptr->setHeightForWidth(b);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSizePolicy_hasHeightForWidth(QSizePolicy const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setWidthForHeight(QSizePolicy * this_ptr, bool b) {
  this_ptr->setWidthForHeight(b);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSizePolicy_hasWidthForHeight(QSizePolicy const * this_ptr) {
  return this_ptr->hasWidthForHeight();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSizePolicy_operator__(QSizePolicy const * this_ptr, QSizePolicy const * s) {
  return this_ptr->operator==(*s);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QSizePolicy_operator_QVariant(QSizePolicy const * this_ptr) {
  return new QVariant(this_ptr->operator QVariant());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSizePolicy_horizontalStretch(QSizePolicy const * this_ptr) {
  return this_ptr->horizontalStretch();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSizePolicy_verticalStretch(QSizePolicy const * this_ptr) {
  return this_ptr->verticalStretch();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setHorizontalStretch(QSizePolicy * this_ptr, int stretchFactor) {
  this_ptr->setHorizontalStretch(stretchFactor);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setVerticalStretch(QSizePolicy * this_ptr, int stretchFactor) {
  this_ptr->setVerticalStretch(stretchFactor);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSizePolicy_retainSizeWhenHidden(QSizePolicy const * this_ptr) {
  return this_ptr->retainSizeWhenHidden();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_setRetainSizeWhenHidden(QSizePolicy * this_ptr, bool retainSize) {
  this_ptr->setRetainSizeWhenHidden(retainSize);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSizePolicy_transpose(QSizePolicy * this_ptr) {
  this_ptr->transpose();
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QSizePolicy_transposed(QSizePolicy const * this_ptr) {
  return new QSizePolicy(this_ptr->transposed());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_11(QSizePolicy::Policy lhs, QSizePolicy::PolicyFlag rhs) {
  return operator|(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_12(QSizePolicy::Policy lhs, QSizePolicy::PolicyFlag rhs) {
  return operator&(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_13(QSizePolicy::Policy lhs, QSizePolicy::PolicyFlag rhs) {
  return operator^(lhs, rhs);
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__(QDataStream * arg1, QSizePolicy const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_widgets_ffi_operator__1(QDataStream * arg1, QSizePolicy * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__2(QDebug const * dbg, QSizePolicy const * arg2) {
  return new QDebug(operator<<(*dbg, *arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QWidget_metaObject(QWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QWidget_qt_metacast(QWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_qt_metacall(QWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_tr(char const * s, char const * c, int n) {
  return new QString(QWidget::tr(s, c, n));
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_QWidget(QWidget * parent, int f) {
  return new QWidget(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_dQWidget(QWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_devType(QWidget const * this_ptr) {
  return this_ptr->devType();
}


RITUAL_EXPORT unsigned long long ctr_qt_widgets_ffi_QWidget_winId(QWidget const * this_ptr) {
  return this_ptr->winId();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_createWinId(QWidget * this_ptr) {
  this_ptr->createWinId();
}


RITUAL_EXPORT unsigned long long ctr_qt_widgets_ffi_QWidget_internalWinId(QWidget const * this_ptr) {
  return this_ptr->internalWinId();
}


RITUAL_EXPORT unsigned long long ctr_qt_widgets_ffi_QWidget_effectiveWinId(QWidget const * this_ptr) {
  return this_ptr->effectiveWinId();
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QWidget_style(QWidget const * this_ptr) {
  return this_ptr->style();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setStyle(QWidget * this_ptr, QStyle * arg1) {
  this_ptr->setStyle(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isTopLevel(QWidget const * this_ptr) {
  return this_ptr->isTopLevel();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isWindow(QWidget const * this_ptr) {
  return this_ptr->isWindow();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isModal(QWidget const * this_ptr) {
  return this_ptr->isModal();
}


RITUAL_EXPORT Qt::WindowModality ctr_qt_widgets_ffi_QWidget_windowModality(QWidget const * this_ptr) {
  return this_ptr->windowModality();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowModality(QWidget * this_ptr, Qt::WindowModality windowModality) {
  this_ptr->setWindowModality(windowModality);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isEnabled(QWidget const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isEnabledTo(QWidget const * this_ptr, QWidget const * arg1) {
  return this_ptr->isEnabledTo(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setEnabled(QWidget * this_ptr, bool arg1) {
  this_ptr->setEnabled(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setDisabled(QWidget * this_ptr, bool arg1) {
  this_ptr->setDisabled(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowModified(QWidget * this_ptr, bool arg1) {
  this_ptr->setWindowModified(arg1);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QWidget_frameGeometry(QWidget const * this_ptr) {
  return new QRect(this_ptr->frameGeometry());
}


RITUAL_EXPORT QRect const * ctr_qt_widgets_ffi_QWidget_geometry(QWidget const * this_ptr) {
  return &this_ptr->geometry();
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QWidget_normalGeometry(QWidget const * this_ptr) {
  return new QRect(this_ptr->normalGeometry());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_x(QWidget const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_y(QWidget const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QWidget_pos(QWidget const * this_ptr) {
  return new QPoint(this_ptr->pos());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_frameSize(QWidget const * this_ptr) {
  return new QSize(this_ptr->frameSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_size(QWidget const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_width(QWidget const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_height(QWidget const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QWidget_rect(QWidget const * this_ptr) {
  return new QRect(this_ptr->rect());
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QWidget_childrenRect(QWidget const * this_ptr) {
  return new QRect(this_ptr->childrenRect());
}


RITUAL_EXPORT QRegion * ctr_qt_widgets_ffi_QWidget_childrenRegion(QWidget const * this_ptr) {
  return new QRegion(this_ptr->childrenRegion());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_minimumSize(QWidget const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_maximumSize(QWidget const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_minimumWidth(QWidget const * this_ptr) {
  return this_ptr->minimumWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_minimumHeight(QWidget const * this_ptr) {
  return this_ptr->minimumHeight();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_maximumWidth(QWidget const * this_ptr) {
  return this_ptr->maximumWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_maximumHeight(QWidget const * this_ptr) {
  return this_ptr->maximumHeight();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMinimumSize(QWidget * this_ptr, QSize const * arg1) {
  this_ptr->setMinimumSize(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMinimumSize1(QWidget * this_ptr, int minw, int minh) {
  this_ptr->setMinimumSize(minw, minh);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMaximumSize(QWidget * this_ptr, QSize const * arg1) {
  this_ptr->setMaximumSize(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMaximumSize1(QWidget * this_ptr, int maxw, int maxh) {
  this_ptr->setMaximumSize(maxw, maxh);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMinimumWidth(QWidget * this_ptr, int minw) {
  this_ptr->setMinimumWidth(minw);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMinimumHeight(QWidget * this_ptr, int minh) {
  this_ptr->setMinimumHeight(minh);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMaximumWidth(QWidget * this_ptr, int maxw) {
  this_ptr->setMaximumWidth(maxw);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMaximumHeight(QWidget * this_ptr, int maxh) {
  this_ptr->setMaximumHeight(maxh);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_sizeIncrement(QWidget const * this_ptr) {
  return new QSize(this_ptr->sizeIncrement());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setSizeIncrement(QWidget * this_ptr, QSize const * arg1) {
  this_ptr->setSizeIncrement(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setSizeIncrement1(QWidget * this_ptr, int w, int h) {
  this_ptr->setSizeIncrement(w, h);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_baseSize(QWidget const * this_ptr) {
  return new QSize(this_ptr->baseSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setBaseSize(QWidget * this_ptr, QSize const * arg1) {
  this_ptr->setBaseSize(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setBaseSize1(QWidget * this_ptr, int basew, int baseh) {
  this_ptr->setBaseSize(basew, baseh);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFixedSize(QWidget * this_ptr, QSize const * arg1) {
  this_ptr->setFixedSize(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFixedSize1(QWidget * this_ptr, int w, int h) {
  this_ptr->setFixedSize(w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFixedWidth(QWidget * this_ptr, int w) {
  this_ptr->setFixedWidth(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFixedHeight(QWidget * this_ptr, int h) {
  this_ptr->setFixedHeight(h);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QWidget_mapToGlobal(QWidget const * this_ptr, QPointF const * arg1) {
  return new QPointF(this_ptr->mapToGlobal(*arg1));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QWidget_mapToGlobal1(QWidget const * this_ptr, QPoint const * arg1) {
  return new QPoint(this_ptr->mapToGlobal(*arg1));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QWidget_mapFromGlobal(QWidget const * this_ptr, QPointF const * arg1) {
  return new QPointF(this_ptr->mapFromGlobal(*arg1));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QWidget_mapFromGlobal1(QWidget const * this_ptr, QPoint const * arg1) {
  return new QPoint(this_ptr->mapFromGlobal(*arg1));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QWidget_mapToParent(QWidget const * this_ptr, QPointF const * arg1) {
  return new QPointF(this_ptr->mapToParent(*arg1));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QWidget_mapToParent1(QWidget const * this_ptr, QPoint const * arg1) {
  return new QPoint(this_ptr->mapToParent(*arg1));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QWidget_mapFromParent(QWidget const * this_ptr, QPointF const * arg1) {
  return new QPointF(this_ptr->mapFromParent(*arg1));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QWidget_mapFromParent1(QWidget const * this_ptr, QPoint const * arg1) {
  return new QPoint(this_ptr->mapFromParent(*arg1));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QWidget_mapTo(QWidget const * this_ptr, QWidget const * arg1, QPointF const * arg2) {
  return new QPointF(this_ptr->mapTo(arg1, *arg2));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QWidget_mapTo1(QWidget const * this_ptr, QWidget const * arg1, QPoint const * arg2) {
  return new QPoint(this_ptr->mapTo(arg1, *arg2));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QWidget_mapFrom(QWidget const * this_ptr, QWidget const * arg1, QPointF const * arg2) {
  return new QPointF(this_ptr->mapFrom(arg1, *arg2));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QWidget_mapFrom1(QWidget const * this_ptr, QWidget const * arg1, QPoint const * arg2) {
  return new QPoint(this_ptr->mapFrom(arg1, *arg2));
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_window(QWidget const * this_ptr) {
  return this_ptr->window();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_nativeParentWidget(QWidget const * this_ptr) {
  return this_ptr->nativeParentWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_topLevelWidget(QWidget const * this_ptr) {
  return this_ptr->topLevelWidget();
}


RITUAL_EXPORT QPalette const * ctr_qt_widgets_ffi_QWidget_palette(QWidget const * this_ptr) {
  return &this_ptr->palette();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setPalette(QWidget * this_ptr, QPalette const * arg1) {
  this_ptr->setPalette(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setBackgroundRole(QWidget * this_ptr, QPalette::ColorRole arg1) {
  this_ptr->setBackgroundRole(arg1);
}


RITUAL_EXPORT QPalette::ColorRole ctr_qt_widgets_ffi_QWidget_backgroundRole(QWidget const * this_ptr) {
  return this_ptr->backgroundRole();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setForegroundRole(QWidget * this_ptr, QPalette::ColorRole arg1) {
  this_ptr->setForegroundRole(arg1);
}


RITUAL_EXPORT QPalette::ColorRole ctr_qt_widgets_ffi_QWidget_foregroundRole(QWidget const * this_ptr) {
  return this_ptr->foregroundRole();
}


RITUAL_EXPORT QFont const * ctr_qt_widgets_ffi_QWidget_font(QWidget const * this_ptr) {
  return &this_ptr->font();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFont(QWidget * this_ptr, QFont const * arg1) {
  this_ptr->setFont(*arg1);
}


RITUAL_EXPORT QFontMetrics * ctr_qt_widgets_ffi_QWidget_fontMetrics(QWidget const * this_ptr) {
  return new QFontMetrics(this_ptr->fontMetrics());
}


RITUAL_EXPORT QFontInfo * ctr_qt_widgets_ffi_QWidget_fontInfo(QWidget const * this_ptr) {
  return new QFontInfo(this_ptr->fontInfo());
}


RITUAL_EXPORT QCursor * ctr_qt_widgets_ffi_QWidget_cursor(QWidget const * this_ptr) {
  return new QCursor(this_ptr->cursor());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setCursor(QWidget * this_ptr, QCursor const * arg1) {
  this_ptr->setCursor(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_unsetCursor(QWidget * this_ptr) {
  this_ptr->unsetCursor();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMouseTracking(QWidget * this_ptr, bool enable) {
  this_ptr->setMouseTracking(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_hasMouseTracking(QWidget const * this_ptr) {
  return this_ptr->hasMouseTracking();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_underMouse(QWidget const * this_ptr) {
  return this_ptr->underMouse();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setTabletTracking(QWidget * this_ptr, bool enable) {
  this_ptr->setTabletTracking(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_hasTabletTracking(QWidget const * this_ptr) {
  return this_ptr->hasTabletTracking();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMask(QWidget * this_ptr, QBitmap const * arg1) {
  this_ptr->setMask(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setMask1(QWidget * this_ptr, QRegion const * arg1) {
  this_ptr->setMask(*arg1);
}


RITUAL_EXPORT QRegion * ctr_qt_widgets_ffi_QWidget_mask(QWidget const * this_ptr) {
  return new QRegion(this_ptr->mask());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_clearMask(QWidget * this_ptr) {
  this_ptr->clearMask();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_render(QWidget * this_ptr, QPaintDevice * target, QPoint const * targetOffset, QRegion const * sourceRegion, int renderFlags) {
  this_ptr->render(target, *targetOffset, *sourceRegion, QFlags< QWidget::RenderFlag >(renderFlags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_render1(QWidget * this_ptr, QPainter * painter, QPoint const * targetOffset, QRegion const * sourceRegion, int renderFlags) {
  this_ptr->render(painter, *targetOffset, *sourceRegion, QFlags< QWidget::RenderFlag >(renderFlags));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QWidget_grab(QWidget * this_ptr, QRect const * rectangle) {
  return new QPixmap(this_ptr->grab(*rectangle));
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_QWidget_graphicsEffect(QWidget const * this_ptr) {
  return this_ptr->graphicsEffect();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setGraphicsEffect(QWidget * this_ptr, QGraphicsEffect * effect) {
  this_ptr->setGraphicsEffect(effect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_grabGesture(QWidget * this_ptr, Qt::GestureType type, int flags) {
  this_ptr->grabGesture(type, QFlags< Qt::GestureFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_ungrabGesture(QWidget * this_ptr, Qt::GestureType type) {
  this_ptr->ungrabGesture(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowTitle(QWidget * this_ptr, QString const * arg1) {
  this_ptr->setWindowTitle(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setStyleSheet(QWidget * this_ptr, QString const * styleSheet) {
  this_ptr->setStyleSheet(*styleSheet);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_styleSheet(QWidget const * this_ptr) {
  return new QString(this_ptr->styleSheet());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_windowTitle(QWidget const * this_ptr) {
  return new QString(this_ptr->windowTitle());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowIcon(QWidget * this_ptr, QIcon const * icon) {
  this_ptr->setWindowIcon(*icon);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QWidget_windowIcon(QWidget const * this_ptr) {
  return new QIcon(this_ptr->windowIcon());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowIconText(QWidget * this_ptr, QString const * arg1) {
  this_ptr->setWindowIconText(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_windowIconText(QWidget const * this_ptr) {
  return new QString(this_ptr->windowIconText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowRole(QWidget * this_ptr, QString const * arg1) {
  this_ptr->setWindowRole(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_windowRole(QWidget const * this_ptr) {
  return new QString(this_ptr->windowRole());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowFilePath(QWidget * this_ptr, QString const * filePath) {
  this_ptr->setWindowFilePath(*filePath);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_windowFilePath(QWidget const * this_ptr) {
  return new QString(this_ptr->windowFilePath());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowOpacity(QWidget * this_ptr, double level) {
  this_ptr->setWindowOpacity(level);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QWidget_windowOpacity(QWidget const * this_ptr) {
  return this_ptr->windowOpacity();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isWindowModified(QWidget const * this_ptr) {
  return this_ptr->isWindowModified();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setToolTip(QWidget * this_ptr, QString const * arg1) {
  this_ptr->setToolTip(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_toolTip(QWidget const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setToolTipDuration(QWidget * this_ptr, int msec) {
  this_ptr->setToolTipDuration(msec);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_toolTipDuration(QWidget const * this_ptr) {
  return this_ptr->toolTipDuration();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setStatusTip(QWidget * this_ptr, QString const * arg1) {
  this_ptr->setStatusTip(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_statusTip(QWidget const * this_ptr) {
  return new QString(this_ptr->statusTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWhatsThis(QWidget * this_ptr, QString const * arg1) {
  this_ptr->setWhatsThis(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_whatsThis(QWidget const * this_ptr) {
  return new QString(this_ptr->whatsThis());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_accessibleName(QWidget const * this_ptr) {
  return new QString(this_ptr->accessibleName());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setAccessibleName(QWidget * this_ptr, QString const * name) {
  this_ptr->setAccessibleName(*name);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_accessibleDescription(QWidget const * this_ptr) {
  return new QString(this_ptr->accessibleDescription());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setAccessibleDescription(QWidget * this_ptr, QString const * description) {
  this_ptr->setAccessibleDescription(*description);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QWidget_accessibleIdentifier(QWidget const * this_ptr) {
  return new QString(this_ptr->accessibleIdentifier());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setAccessibleIdentifier(QWidget * this_ptr, QString const * identifier) {
  this_ptr->setAccessibleIdentifier(*identifier);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setLayoutDirection(QWidget * this_ptr, Qt::LayoutDirection direction) {
  this_ptr->setLayoutDirection(direction);
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_widgets_ffi_QWidget_layoutDirection(QWidget const * this_ptr) {
  return this_ptr->layoutDirection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_unsetLayoutDirection(QWidget * this_ptr) {
  this_ptr->unsetLayoutDirection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setLocale(QWidget * this_ptr, QLocale const * locale) {
  this_ptr->setLocale(*locale);
}


RITUAL_EXPORT QLocale * ctr_qt_widgets_ffi_QWidget_locale(QWidget const * this_ptr) {
  return new QLocale(this_ptr->locale());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_unsetLocale(QWidget * this_ptr) {
  this_ptr->unsetLocale();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isRightToLeft(QWidget const * this_ptr) {
  return this_ptr->isRightToLeft();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isLeftToRight(QWidget const * this_ptr) {
  return this_ptr->isLeftToRight();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFocus(QWidget * this_ptr) {
  this_ptr->setFocus();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isActiveWindow(QWidget const * this_ptr) {
  return this_ptr->isActiveWindow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_activateWindow(QWidget * this_ptr) {
  this_ptr->activateWindow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_clearFocus(QWidget * this_ptr) {
  this_ptr->clearFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFocus1(QWidget * this_ptr, Qt::FocusReason reason) {
  this_ptr->setFocus(reason);
}


RITUAL_EXPORT Qt::FocusPolicy ctr_qt_widgets_ffi_QWidget_focusPolicy(QWidget const * this_ptr) {
  return this_ptr->focusPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFocusPolicy(QWidget * this_ptr, Qt::FocusPolicy policy) {
  this_ptr->setFocusPolicy(policy);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_hasFocus(QWidget const * this_ptr) {
  return this_ptr->hasFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setTabOrder(QWidget * arg1, QWidget * arg2) {
  QWidget::setTabOrder(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setFocusProxy(QWidget * this_ptr, QWidget * arg1) {
  this_ptr->setFocusProxy(arg1);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_focusProxy(QWidget const * this_ptr) {
  return this_ptr->focusProxy();
}


RITUAL_EXPORT Qt::ContextMenuPolicy ctr_qt_widgets_ffi_QWidget_contextMenuPolicy(QWidget const * this_ptr) {
  return this_ptr->contextMenuPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setContextMenuPolicy(QWidget * this_ptr, Qt::ContextMenuPolicy policy) {
  this_ptr->setContextMenuPolicy(policy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_grabMouse(QWidget * this_ptr) {
  this_ptr->grabMouse();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_grabMouse1(QWidget * this_ptr, QCursor const * arg1) {
  this_ptr->grabMouse(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_releaseMouse(QWidget * this_ptr) {
  this_ptr->releaseMouse();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_grabKeyboard(QWidget * this_ptr) {
  this_ptr->grabKeyboard();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_releaseKeyboard(QWidget * this_ptr) {
  this_ptr->releaseKeyboard();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_grabShortcut(QWidget * this_ptr, QKeySequence const * key, Qt::ShortcutContext context) {
  return this_ptr->grabShortcut(*key, context);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_releaseShortcut(QWidget * this_ptr, int id) {
  this_ptr->releaseShortcut(id);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setShortcutEnabled(QWidget * this_ptr, int id, bool enable) {
  this_ptr->setShortcutEnabled(id, enable);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setShortcutAutoRepeat(QWidget * this_ptr, int id, bool enable) {
  this_ptr->setShortcutAutoRepeat(id, enable);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_mouseGrabber() {
  return QWidget::mouseGrabber();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_keyboardGrabber() {
  return QWidget::keyboardGrabber();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_updatesEnabled(QWidget const * this_ptr) {
  return this_ptr->updatesEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setUpdatesEnabled(QWidget * this_ptr, bool enable) {
  this_ptr->setUpdatesEnabled(enable);
}


RITUAL_EXPORT QGraphicsProxyWidget * ctr_qt_widgets_ffi_QWidget_graphicsProxyWidget(QWidget const * this_ptr) {
  return this_ptr->graphicsProxyWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_update(QWidget * this_ptr) {
  this_ptr->update();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_repaint(QWidget * this_ptr) {
  this_ptr->repaint();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_update1(QWidget * this_ptr, int x, int y, int w, int h) {
  this_ptr->update(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_update2(QWidget * this_ptr, QRect const * arg1) {
  this_ptr->update(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_update3(QWidget * this_ptr, QRegion const * arg1) {
  this_ptr->update(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_repaint1(QWidget * this_ptr, int x, int y, int w, int h) {
  this_ptr->repaint(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_repaint2(QWidget * this_ptr, QRect const * arg1) {
  this_ptr->repaint(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_repaint3(QWidget * this_ptr, QRegion const * arg1) {
  this_ptr->repaint(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setVisible(QWidget * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setHidden(QWidget * this_ptr, bool hidden) {
  this_ptr->setHidden(hidden);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_show(QWidget * this_ptr) {
  this_ptr->show();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_hide(QWidget * this_ptr) {
  this_ptr->hide();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_showMinimized(QWidget * this_ptr) {
  this_ptr->showMinimized();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_showMaximized(QWidget * this_ptr) {
  this_ptr->showMaximized();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_showFullScreen(QWidget * this_ptr) {
  this_ptr->showFullScreen();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_showNormal(QWidget * this_ptr) {
  this_ptr->showNormal();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_close(QWidget * this_ptr) {
  return this_ptr->close();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_raise(QWidget * this_ptr) {
  this_ptr->raise();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_lower(QWidget * this_ptr) {
  this_ptr->lower();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_stackUnder(QWidget * this_ptr, QWidget * arg1) {
  this_ptr->stackUnder(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_move(QWidget * this_ptr, int x, int y) {
  this_ptr->move(x, y);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_move1(QWidget * this_ptr, QPoint const * arg1) {
  this_ptr->move(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_resize(QWidget * this_ptr, int w, int h) {
  this_ptr->resize(w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_resize1(QWidget * this_ptr, QSize const * arg1) {
  this_ptr->resize(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setGeometry(QWidget * this_ptr, int x, int y, int w, int h) {
  this_ptr->setGeometry(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setGeometry1(QWidget * this_ptr, QRect const * arg1) {
  this_ptr->setGeometry(*arg1);
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QWidget_saveGeometry(QWidget const * this_ptr) {
  return new QByteArray(this_ptr->saveGeometry());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_restoreGeometry(QWidget * this_ptr, QByteArray const * geometry) {
  return this_ptr->restoreGeometry(*geometry);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_adjustSize(QWidget * this_ptr) {
  this_ptr->adjustSize();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isVisible(QWidget const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isVisibleTo(QWidget const * this_ptr, QWidget const * arg1) {
  return this_ptr->isVisibleTo(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isHidden(QWidget const * this_ptr) {
  return this_ptr->isHidden();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isMinimized(QWidget const * this_ptr) {
  return this_ptr->isMinimized();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isMaximized(QWidget const * this_ptr) {
  return this_ptr->isMaximized();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isFullScreen(QWidget const * this_ptr) {
  return this_ptr->isFullScreen();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_windowState(QWidget const * this_ptr) {
  return int(this_ptr->windowState());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowState(QWidget * this_ptr, int state) {
  this_ptr->setWindowState(QFlags< Qt::WindowState >(state));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_overrideWindowState(QWidget * this_ptr, int state) {
  this_ptr->overrideWindowState(QFlags< Qt::WindowState >(state));
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_sizeHint(QWidget const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidget_minimumSizeHint(QWidget const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QWidget_sizePolicy(QWidget const * this_ptr) {
  return new QSizePolicy(this_ptr->sizePolicy());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setSizePolicy(QWidget * this_ptr, QSizePolicy const * arg1) {
  this_ptr->setSizePolicy(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setSizePolicy1(QWidget * this_ptr, QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical) {
  this_ptr->setSizePolicy(horizontal, vertical);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_heightForWidth(QWidget const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_hasHeightForWidth(QWidget const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT QRegion * ctr_qt_widgets_ffi_QWidget_visibleRegion(QWidget const * this_ptr) {
  return new QRegion(this_ptr->visibleRegion());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setContentsMargins(QWidget * this_ptr, int left, int top, int right, int bottom) {
  this_ptr->setContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setContentsMargins1(QWidget * this_ptr, QMargins const * margins) {
  this_ptr->setContentsMargins(*margins);
}


RITUAL_EXPORT QMargins * ctr_qt_widgets_ffi_QWidget_contentsMargins(QWidget const * this_ptr) {
  return new QMargins(this_ptr->contentsMargins());
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QWidget_contentsRect(QWidget const * this_ptr) {
  return new QRect(this_ptr->contentsRect());
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_QWidget_layout(QWidget const * this_ptr) {
  return this_ptr->layout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setLayout(QWidget * this_ptr, QLayout * arg1) {
  this_ptr->setLayout(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_updateGeometry(QWidget * this_ptr) {
  this_ptr->updateGeometry();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setParent(QWidget * this_ptr, QWidget * parent) {
  this_ptr->setParent(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setParent1(QWidget * this_ptr, QWidget * parent, int f) {
  this_ptr->setParent(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_scroll(QWidget * this_ptr, int dx, int dy) {
  this_ptr->scroll(dx, dy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_scroll1(QWidget * this_ptr, int dx, int dy, QRect const * arg3) {
  this_ptr->scroll(dx, dy, *arg3);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_focusWidget(QWidget const * this_ptr) {
  return this_ptr->focusWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_nextInFocusChain(QWidget const * this_ptr) {
  return this_ptr->nextInFocusChain();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_previousInFocusChain(QWidget const * this_ptr) {
  return this_ptr->previousInFocusChain();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_acceptDrops(QWidget const * this_ptr) {
  return this_ptr->acceptDrops();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setAcceptDrops(QWidget * this_ptr, bool on) {
  this_ptr->setAcceptDrops(on);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_addAction(QWidget * this_ptr, QAction * action) {
  this_ptr->addAction(action);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_addActions(QWidget * this_ptr, QList< QAction * > const * actions) {
  this_ptr->addActions(*actions);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_insertActions(QWidget * this_ptr, QAction * before, QList< QAction * > const * actions) {
  this_ptr->insertActions(before, *actions);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_insertAction(QWidget * this_ptr, QAction * before, QAction * action) {
  this_ptr->insertAction(before, action);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_removeAction(QWidget * this_ptr, QAction * action) {
  this_ptr->removeAction(action);
}


RITUAL_EXPORT QList< QAction * > * ctr_qt_widgets_ffi_QWidget_actions(QWidget const * this_ptr) {
  return new QList< QAction * >(this_ptr->actions());
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction1(QWidget * this_ptr, QString const * text) {
  return this_ptr->addAction(*text);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction2(QWidget * this_ptr, QIcon const * icon, QString const * text) {
  return this_ptr->addAction(*icon, *text);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction3(QWidget * this_ptr, QString const * text, QObject const * receiver, char const * member, Qt::ConnectionType type) {
  return this_ptr->addAction(*text, receiver, member, type);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction4(QWidget * this_ptr, QIcon const * icon, QString const * text, QObject const * receiver, char const * member, Qt::ConnectionType type) {
  return this_ptr->addAction(*icon, *text, receiver, member, type);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction5(QWidget * this_ptr, QString const * text, QKeySequence const * shortcut) {
  return this_ptr->addAction(*text, *shortcut);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction6(QWidget * this_ptr, QIcon const * icon, QString const * text, QKeySequence const * shortcut) {
  return this_ptr->addAction(*icon, *text, *shortcut);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction7(QWidget * this_ptr, QString const * text, QKeySequence const * shortcut, QObject const * receiver, char const * member, Qt::ConnectionType type) {
  return this_ptr->addAction(*text, *shortcut, receiver, member, type);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QWidget_addAction8(QWidget * this_ptr, QIcon const * icon, QString const * text, QKeySequence const * shortcut, QObject const * receiver, char const * member, Qt::ConnectionType type) {
  return this_ptr->addAction(*icon, *text, *shortcut, receiver, member, type);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_parentWidget(QWidget const * this_ptr) {
  return this_ptr->parentWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowFlags(QWidget * this_ptr, int type) {
  this_ptr->setWindowFlags(QFlags< Qt::WindowType >(type));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_windowFlags(QWidget const * this_ptr) {
  return int(this_ptr->windowFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setWindowFlag(QWidget * this_ptr, Qt::WindowType arg1, bool on) {
  this_ptr->setWindowFlag(arg1, on);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_overrideWindowFlags(QWidget * this_ptr, int type) {
  this_ptr->overrideWindowFlags(QFlags< Qt::WindowType >(type));
}


RITUAL_EXPORT Qt::WindowType ctr_qt_widgets_ffi_QWidget_windowType(QWidget const * this_ptr) {
  return this_ptr->windowType();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_find(unsigned long long arg1) {
  return QWidget::find(arg1);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_childAt(QWidget const * this_ptr, int x, int y) {
  return this_ptr->childAt(x, y);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_childAt1(QWidget const * this_ptr, QPoint const * p) {
  return this_ptr->childAt(*p);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_childAt2(QWidget const * this_ptr, QPointF const * p) {
  return this_ptr->childAt(*p);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setAttribute(QWidget * this_ptr, Qt::WidgetAttribute arg1, bool on) {
  this_ptr->setAttribute(arg1, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_testAttribute(QWidget const * this_ptr, Qt::WidgetAttribute arg1) {
  return this_ptr->testAttribute(arg1);
}


RITUAL_EXPORT QPaintEngine * ctr_qt_widgets_ffi_QWidget_paintEngine(QWidget const * this_ptr) {
  return this_ptr->paintEngine();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_ensurePolished(QWidget const * this_ptr) {
  this_ptr->ensurePolished();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_isAncestorOf(QWidget const * this_ptr, QWidget const * child) {
  return this_ptr->isAncestorOf(child);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidget_autoFillBackground(QWidget const * this_ptr) {
  return this_ptr->autoFillBackground();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setAutoFillBackground(QWidget * this_ptr, bool enabled) {
  this_ptr->setAutoFillBackground(enabled);
}


RITUAL_EXPORT QBackingStore * ctr_qt_widgets_ffi_QWidget_backingStore(QWidget const * this_ptr) {
  return this_ptr->backingStore();
}


RITUAL_EXPORT QWindow * ctr_qt_widgets_ffi_QWidget_windowHandle(QWidget const * this_ptr) {
  return this_ptr->windowHandle();
}


RITUAL_EXPORT QScreen * ctr_qt_widgets_ffi_QWidget_screen(QWidget const * this_ptr) {
  return this_ptr->screen();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setScreen(QWidget * this_ptr, QScreen * arg1) {
  this_ptr->setScreen(arg1);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidget_createWindowContainer(QWindow * window, QWidget * parent, int flags) {
  return QWidget::createWindowContainer(window, parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QWidget_inputMethodQuery(QWidget const * this_ptr, Qt::InputMethodQuery arg1) {
  return new QVariant(this_ptr->inputMethodQuery(arg1));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidget_inputMethodHints(QWidget const * this_ptr) {
  return int(this_ptr->inputMethodHints());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidget_setInputMethodHints(QWidget * this_ptr, int hints) {
  this_ptr->setInputMethodHints(QFlags< Qt::InputMethodHint >(hints));
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__3(QDebug const * arg1, QWidget const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractButton_metaObject(QAbstractButton const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAbstractButton_qt_metacast(QAbstractButton * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractButton_qt_metacall(QAbstractButton * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractButton_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractButton::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_dQAbstractButton(QAbstractButton * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setText(QAbstractButton * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractButton_text(QAbstractButton const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setIcon(QAbstractButton * this_ptr, QIcon const * icon) {
  this_ptr->setIcon(*icon);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QAbstractButton_icon(QAbstractButton const * this_ptr) {
  return new QIcon(this_ptr->icon());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractButton_iconSize(QAbstractButton const * this_ptr) {
  return new QSize(this_ptr->iconSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setShortcut(QAbstractButton * this_ptr, QKeySequence const * key) {
  this_ptr->setShortcut(*key);
}


RITUAL_EXPORT QKeySequence * ctr_qt_widgets_ffi_QAbstractButton_shortcut(QAbstractButton const * this_ptr) {
  return new QKeySequence(this_ptr->shortcut());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setCheckable(QAbstractButton * this_ptr, bool arg1) {
  this_ptr->setCheckable(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractButton_isCheckable(QAbstractButton const * this_ptr) {
  return this_ptr->isCheckable();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractButton_isChecked(QAbstractButton const * this_ptr) {
  return this_ptr->isChecked();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setDown(QAbstractButton * this_ptr, bool arg1) {
  this_ptr->setDown(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractButton_isDown(QAbstractButton const * this_ptr) {
  return this_ptr->isDown();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setAutoRepeat(QAbstractButton * this_ptr, bool arg1) {
  this_ptr->setAutoRepeat(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractButton_autoRepeat(QAbstractButton const * this_ptr) {
  return this_ptr->autoRepeat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setAutoRepeatDelay(QAbstractButton * this_ptr, int arg1) {
  this_ptr->setAutoRepeatDelay(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractButton_autoRepeatDelay(QAbstractButton const * this_ptr) {
  return this_ptr->autoRepeatDelay();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setAutoRepeatInterval(QAbstractButton * this_ptr, int arg1) {
  this_ptr->setAutoRepeatInterval(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractButton_autoRepeatInterval(QAbstractButton const * this_ptr) {
  return this_ptr->autoRepeatInterval();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setAutoExclusive(QAbstractButton * this_ptr, bool arg1) {
  this_ptr->setAutoExclusive(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractButton_autoExclusive(QAbstractButton const * this_ptr) {
  return this_ptr->autoExclusive();
}


RITUAL_EXPORT QButtonGroup * ctr_qt_widgets_ffi_QAbstractButton_group(QAbstractButton const * this_ptr) {
  return this_ptr->group();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setIconSize(QAbstractButton * this_ptr, QSize const * size) {
  this_ptr->setIconSize(*size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_animateClick(QAbstractButton * this_ptr) {
  this_ptr->animateClick();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_click(QAbstractButton * this_ptr) {
  this_ptr->click();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_toggle(QAbstractButton * this_ptr) {
  this_ptr->toggle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractButton_setChecked(QAbstractButton * this_ptr, bool arg1) {
  this_ptr->setChecked(arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractSpinBox_metaObject(QAbstractSpinBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAbstractSpinBox_qt_metacast(QAbstractSpinBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSpinBox_qt_metacall(QAbstractSpinBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractSpinBox_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractSpinBox::tr(s, c, n));
}


RITUAL_EXPORT QAbstractSpinBox * ctr_qt_widgets_ffi_QAbstractSpinBox_QAbstractSpinBox(QWidget * parent) {
  return new QAbstractSpinBox(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_dQAbstractSpinBox(QAbstractSpinBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractSpinBox::ButtonSymbols ctr_qt_widgets_ffi_QAbstractSpinBox_buttonSymbols(QAbstractSpinBox const * this_ptr) {
  return this_ptr->buttonSymbols();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setButtonSymbols(QAbstractSpinBox * this_ptr, QAbstractSpinBox::ButtonSymbols bs) {
  this_ptr->setButtonSymbols(bs);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setCorrectionMode(QAbstractSpinBox * this_ptr, QAbstractSpinBox::CorrectionMode cm) {
  this_ptr->setCorrectionMode(cm);
}


RITUAL_EXPORT QAbstractSpinBox::CorrectionMode ctr_qt_widgets_ffi_QAbstractSpinBox_correctionMode(QAbstractSpinBox const * this_ptr) {
  return this_ptr->correctionMode();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_hasAcceptableInput(QAbstractSpinBox const * this_ptr) {
  return this_ptr->hasAcceptableInput();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractSpinBox_text(QAbstractSpinBox const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractSpinBox_specialValueText(QAbstractSpinBox const * this_ptr) {
  return new QString(this_ptr->specialValueText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setSpecialValueText(QAbstractSpinBox * this_ptr, QString const * txt) {
  this_ptr->setSpecialValueText(*txt);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_wrapping(QAbstractSpinBox const * this_ptr) {
  return this_ptr->wrapping();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setWrapping(QAbstractSpinBox * this_ptr, bool w) {
  this_ptr->setWrapping(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setReadOnly(QAbstractSpinBox * this_ptr, bool r) {
  this_ptr->setReadOnly(r);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_isReadOnly(QAbstractSpinBox const * this_ptr) {
  return this_ptr->isReadOnly();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setKeyboardTracking(QAbstractSpinBox * this_ptr, bool kt) {
  this_ptr->setKeyboardTracking(kt);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_keyboardTracking(QAbstractSpinBox const * this_ptr) {
  return this_ptr->keyboardTracking();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setAlignment(QAbstractSpinBox * this_ptr, int flag) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(flag));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSpinBox_alignment(QAbstractSpinBox const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setFrame(QAbstractSpinBox * this_ptr, bool arg1) {
  this_ptr->setFrame(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_hasFrame(QAbstractSpinBox const * this_ptr) {
  return this_ptr->hasFrame();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setAccelerated(QAbstractSpinBox * this_ptr, bool on) {
  this_ptr->setAccelerated(on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_isAccelerated(QAbstractSpinBox const * this_ptr) {
  return this_ptr->isAccelerated();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_setGroupSeparatorShown(QAbstractSpinBox * this_ptr, bool shown) {
  this_ptr->setGroupSeparatorShown(shown);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_isGroupSeparatorShown(QAbstractSpinBox const * this_ptr) {
  return this_ptr->isGroupSeparatorShown();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractSpinBox_sizeHint(QAbstractSpinBox const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractSpinBox_minimumSizeHint(QAbstractSpinBox const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_interpretText(QAbstractSpinBox * this_ptr) {
  this_ptr->interpretText();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSpinBox_event(QAbstractSpinBox * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QAbstractSpinBox_inputMethodQuery(QAbstractSpinBox const * this_ptr, Qt::InputMethodQuery arg1) {
  return new QVariant(this_ptr->inputMethodQuery(arg1));
}


RITUAL_EXPORT QValidator::State ctr_qt_widgets_ffi_QAbstractSpinBox_validate(QAbstractSpinBox const * this_ptr, QString * input, int * pos) {
  return this_ptr->validate(*input, *pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_fixup(QAbstractSpinBox const * this_ptr, QString * input) {
  this_ptr->fixup(*input);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_stepBy(QAbstractSpinBox * this_ptr, int steps) {
  this_ptr->stepBy(steps);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_stepUp(QAbstractSpinBox * this_ptr) {
  this_ptr->stepUp();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_stepDown(QAbstractSpinBox * this_ptr) {
  this_ptr->stepDown();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_selectAll(QAbstractSpinBox * this_ptr) {
  this_ptr->selectAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSpinBox_clear(QAbstractSpinBox * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractSlider_metaObject(QAbstractSlider const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAbstractSlider_qt_metacast(QAbstractSlider * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSlider_qt_metacall(QAbstractSlider * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractSlider_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractSlider::tr(s, c, n));
}


RITUAL_EXPORT QAbstractSlider * ctr_qt_widgets_ffi_QAbstractSlider_QAbstractSlider(QWidget * parent) {
  return new QAbstractSlider(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_dQAbstractSlider(QAbstractSlider * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QAbstractSlider_orientation(QAbstractSlider const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setMinimum(QAbstractSlider * this_ptr, int arg1) {
  this_ptr->setMinimum(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSlider_minimum(QAbstractSlider const * this_ptr) {
  return this_ptr->minimum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setMaximum(QAbstractSlider * this_ptr, int arg1) {
  this_ptr->setMaximum(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSlider_maximum(QAbstractSlider const * this_ptr) {
  return this_ptr->maximum();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setSingleStep(QAbstractSlider * this_ptr, int arg1) {
  this_ptr->setSingleStep(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSlider_singleStep(QAbstractSlider const * this_ptr) {
  return this_ptr->singleStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setPageStep(QAbstractSlider * this_ptr, int arg1) {
  this_ptr->setPageStep(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSlider_pageStep(QAbstractSlider const * this_ptr) {
  return this_ptr->pageStep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setTracking(QAbstractSlider * this_ptr, bool enable) {
  this_ptr->setTracking(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSlider_hasTracking(QAbstractSlider const * this_ptr) {
  return this_ptr->hasTracking();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setSliderDown(QAbstractSlider * this_ptr, bool arg1) {
  this_ptr->setSliderDown(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSlider_isSliderDown(QAbstractSlider const * this_ptr) {
  return this_ptr->isSliderDown();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setSliderPosition(QAbstractSlider * this_ptr, int arg1) {
  this_ptr->setSliderPosition(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSlider_sliderPosition(QAbstractSlider const * this_ptr) {
  return this_ptr->sliderPosition();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setInvertedAppearance(QAbstractSlider * this_ptr, bool arg1) {
  this_ptr->setInvertedAppearance(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSlider_invertedAppearance(QAbstractSlider const * this_ptr) {
  return this_ptr->invertedAppearance();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setInvertedControls(QAbstractSlider * this_ptr, bool arg1) {
  this_ptr->setInvertedControls(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractSlider_invertedControls(QAbstractSlider const * this_ptr) {
  return this_ptr->invertedControls();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractSlider_value(QAbstractSlider const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_triggerAction(QAbstractSlider * this_ptr, QAbstractSlider::SliderAction action) {
  this_ptr->triggerAction(action);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setValue(QAbstractSlider * this_ptr, int arg1) {
  this_ptr->setValue(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setOrientation(QAbstractSlider * this_ptr, Qt::Orientation arg1) {
  this_ptr->setOrientation(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractSlider_setRange(QAbstractSlider * this_ptr, int min, int max) {
  this_ptr->setRange(min, max);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSlider_metaObject(QSlider const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSlider_qt_metacast(QSlider * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSlider_qt_metacall(QSlider * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSlider_tr(char const * s, char const * c, int n) {
  return new QString(QSlider::tr(s, c, n));
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_QSlider_QSlider(QWidget * parent) {
  return new QSlider(parent);
}


RITUAL_EXPORT QSlider * ctr_qt_widgets_ffi_QSlider_QSlider1(Qt::Orientation orientation, QWidget * parent) {
  return new QSlider(orientation, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSlider_dQSlider(QSlider * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSlider_sizeHint(QSlider const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSlider_minimumSizeHint(QSlider const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSlider_setTickPosition(QSlider * this_ptr, QSlider::TickPosition position) {
  this_ptr->setTickPosition(position);
}


RITUAL_EXPORT QSlider::TickPosition ctr_qt_widgets_ffi_QSlider_tickPosition(QSlider const * this_ptr) {
  return this_ptr->tickPosition();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSlider_setTickInterval(QSlider * this_ptr, int ti) {
  this_ptr->setTickInterval(ti);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSlider_tickInterval(QSlider const * this_ptr) {
  return this_ptr->tickInterval();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSlider_event(QSlider * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QStyle_metaObject(QStyle const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QStyle_qt_metacast(QStyle * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_qt_metacall(QStyle * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyle_tr(char const * s, char const * c, int n) {
  return new QString(QStyle::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_dQStyle(QStyle * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QStyle_name(QStyle const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_polish(QStyle * this_ptr, QWidget * widget) {
  this_ptr->polish(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_unpolish(QStyle * this_ptr, QWidget * widget) {
  this_ptr->unpolish(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_polish1(QStyle * this_ptr, QApplication * application) {
  this_ptr->polish(application);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_unpolish1(QStyle * this_ptr, QApplication * application) {
  this_ptr->unpolish(application);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_polish2(QStyle * this_ptr, QPalette * palette) {
  this_ptr->polish(*palette);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyle_itemTextRect(QStyle const * this_ptr, QFontMetrics const * fm, QRect const * r, int flags, bool enabled, QString const * text) {
  return new QRect(this_ptr->itemTextRect(*fm, *r, flags, enabled, *text));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyle_itemPixmapRect(QStyle const * this_ptr, QRect const * r, int flags, QPixmap const * pixmap) {
  return new QRect(this_ptr->itemPixmapRect(*r, flags, *pixmap));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_drawItemText(QStyle const * this_ptr, QPainter * painter, QRect const * rect, int flags, QPalette const * pal, bool enabled, QString const * text, QPalette::ColorRole textRole) {
  this_ptr->drawItemText(painter, *rect, flags, *pal, enabled, *text, textRole);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_drawItemPixmap(QStyle const * this_ptr, QPainter * painter, QRect const * rect, int alignment, QPixmap const * pixmap) {
  this_ptr->drawItemPixmap(painter, *rect, alignment, *pixmap);
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QStyle_standardPalette(QStyle const * this_ptr) {
  return new QPalette(this_ptr->standardPalette());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_drawPrimitive(QStyle const * this_ptr, QStyle::PrimitiveElement pe, QStyleOption const * opt, QPainter * p, QWidget const * w) {
  this_ptr->drawPrimitive(pe, opt, p, w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_drawControl(QStyle const * this_ptr, QStyle::ControlElement element, QStyleOption const * opt, QPainter * p, QWidget const * w) {
  this_ptr->drawControl(element, opt, p, w);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyle_subElementRect(QStyle const * this_ptr, QStyle::SubElement subElement, QStyleOption const * option, QWidget const * widget) {
  return new QRect(this_ptr->subElementRect(subElement, option, widget));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyle_drawComplexControl(QStyle const * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt, QPainter * p, QWidget const * widget) {
  this_ptr->drawComplexControl(cc, opt, p, widget);
}


RITUAL_EXPORT QStyle::SubControl ctr_qt_widgets_ffi_QStyle_hitTestComplexControl(QStyle const * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt, QPoint const * pt, QWidget const * widget) {
  return this_ptr->hitTestComplexControl(cc, opt, *pt, widget);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyle_subControlRect(QStyle const * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt, QStyle::SubControl sc, QWidget const * widget) {
  return new QRect(this_ptr->subControlRect(cc, opt, sc, widget));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_pixelMetric(QStyle const * this_ptr, QStyle::PixelMetric metric, QStyleOption const * option, QWidget const * widget) {
  return this_ptr->pixelMetric(metric, option, widget);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QStyle_sizeFromContents(QStyle const * this_ptr, QStyle::ContentsType ct, QStyleOption const * opt, QSize const * contentsSize, QWidget const * w) {
  return new QSize(this_ptr->sizeFromContents(ct, opt, *contentsSize, w));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_styleHint(QStyle const * this_ptr, QStyle::StyleHint stylehint, QStyleOption const * opt, QWidget const * widget, QStyleHintReturn * returnData) {
  return this_ptr->styleHint(stylehint, opt, widget, returnData);
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QStyle_standardPixmap(QStyle const * this_ptr, QStyle::StandardPixmap standardPixmap, QStyleOption const * opt, QWidget const * widget) {
  return new QPixmap(this_ptr->standardPixmap(standardPixmap, opt, widget));
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QStyle_standardIcon(QStyle const * this_ptr, QStyle::StandardPixmap standardIcon, QStyleOption const * option, QWidget const * widget) {
  return new QIcon(this_ptr->standardIcon(standardIcon, option, widget));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QStyle_generatedIconPixmap(QStyle const * this_ptr, QIcon::Mode iconMode, QPixmap const * pixmap, QStyleOption const * opt) {
  return new QPixmap(this_ptr->generatedIconPixmap(iconMode, *pixmap, opt));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyle_visualRect(Qt::LayoutDirection direction, QRect const * boundingRect, QRect const * logicalRect) {
  return new QRect(QStyle::visualRect(direction, *boundingRect, *logicalRect));
}


RITUAL_EXPORT QPoint * ctr_qt_widgets_ffi_QStyle_visualPos(Qt::LayoutDirection direction, QRect const * boundingRect, QPoint const * logicalPos) {
  return new QPoint(QStyle::visualPos(direction, *boundingRect, *logicalPos));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_sliderPositionFromValue(int min, int max, int val, int space, bool upsideDown) {
  return QStyle::sliderPositionFromValue(min, max, val, space, upsideDown);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_sliderValueFromPosition(int min, int max, int pos, int space, bool upsideDown) {
  return QStyle::sliderValueFromPosition(min, max, pos, space, upsideDown);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_visualAlignment(Qt::LayoutDirection direction, int alignment) {
  return int(QStyle::visualAlignment(direction, QFlags< Qt::AlignmentFlag >(alignment)));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QStyle_alignedRect(Qt::LayoutDirection direction, int alignment, QSize const * size, QRect const * rectangle) {
  return new QRect(QStyle::alignedRect(direction, QFlags< Qt::AlignmentFlag >(alignment), *size, *rectangle));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_layoutSpacing(QStyle const * this_ptr, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, QStyleOption const * option, QWidget const * widget) {
  return this_ptr->layoutSpacing(control1, control2, orientation, option, widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QStyle_combinedLayoutSpacing(QStyle const * this_ptr, int controls1, int controls2, Qt::Orientation orientation, QStyleOption * option, QWidget * widget) {
  return this_ptr->combinedLayoutSpacing(QFlags< QSizePolicy::ControlType >(controls1), QFlags< QSizePolicy::ControlType >(controls2), orientation, option, widget);
}


RITUAL_EXPORT QStyle const * ctr_qt_widgets_ffi_QStyle_proxy(QStyle const * this_ptr) {
  return this_ptr->proxy();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTabBar_metaObject(QTabBar const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTabBar_qt_metacast(QTabBar * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_qt_metacall(QTabBar * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabBar_tr(char const * s, char const * c, int n) {
  return new QString(QTabBar::tr(s, c, n));
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_QTabBar_QTabBar(QWidget * parent) {
  return new QTabBar(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_dQTabBar(QTabBar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTabBar::Shape ctr_qt_widgets_ffi_QTabBar_shape(QTabBar const * this_ptr) {
  return this_ptr->shape();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setShape(QTabBar * this_ptr, QTabBar::Shape shape) {
  this_ptr->setShape(shape);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_addTab(QTabBar * this_ptr, QString const * text) {
  return this_ptr->addTab(*text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_addTab1(QTabBar * this_ptr, QIcon const * icon, QString const * text) {
  return this_ptr->addTab(*icon, *text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_insertTab(QTabBar * this_ptr, int index, QString const * text) {
  return this_ptr->insertTab(index, *text);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_insertTab1(QTabBar * this_ptr, int index, QIcon const * icon, QString const * text) {
  return this_ptr->insertTab(index, *icon, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_removeTab(QTabBar * this_ptr, int index) {
  this_ptr->removeTab(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_moveTab(QTabBar * this_ptr, int from, int to) {
  this_ptr->moveTab(from, to);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_isTabEnabled(QTabBar const * this_ptr, int index) {
  return this_ptr->isTabEnabled(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabEnabled(QTabBar * this_ptr, int index, bool enabled) {
  this_ptr->setTabEnabled(index, enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_isTabVisible(QTabBar const * this_ptr, int index) {
  return this_ptr->isTabVisible(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabVisible(QTabBar * this_ptr, int index, bool visible) {
  this_ptr->setTabVisible(index, visible);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabBar_tabText(QTabBar const * this_ptr, int index) {
  return new QString(this_ptr->tabText(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabText(QTabBar * this_ptr, int index, QString const * text) {
  this_ptr->setTabText(index, *text);
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QTabBar_tabTextColor(QTabBar const * this_ptr, int index) {
  return new QColor(this_ptr->tabTextColor(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabTextColor(QTabBar * this_ptr, int index, QColor const * color) {
  this_ptr->setTabTextColor(index, *color);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QTabBar_tabIcon(QTabBar const * this_ptr, int index) {
  return new QIcon(this_ptr->tabIcon(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabIcon(QTabBar * this_ptr, int index, QIcon const * icon) {
  this_ptr->setTabIcon(index, *icon);
}


RITUAL_EXPORT Qt::TextElideMode ctr_qt_widgets_ffi_QTabBar_elideMode(QTabBar const * this_ptr) {
  return this_ptr->elideMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setElideMode(QTabBar * this_ptr, Qt::TextElideMode mode) {
  this_ptr->setElideMode(mode);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabToolTip(QTabBar * this_ptr, int index, QString const * tip) {
  this_ptr->setTabToolTip(index, *tip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabBar_tabToolTip(QTabBar const * this_ptr, int index) {
  return new QString(this_ptr->tabToolTip(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabWhatsThis(QTabBar * this_ptr, int index, QString const * text) {
  this_ptr->setTabWhatsThis(index, *text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabBar_tabWhatsThis(QTabBar const * this_ptr, int index) {
  return new QString(this_ptr->tabWhatsThis(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabData(QTabBar * this_ptr, int index, QVariant const * data) {
  this_ptr->setTabData(index, *data);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QTabBar_tabData(QTabBar const * this_ptr, int index) {
  return new QVariant(this_ptr->tabData(index));
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QTabBar_tabRect(QTabBar const * this_ptr, int index) {
  return new QRect(this_ptr->tabRect(index));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_tabAt(QTabBar const * this_ptr, QPoint const * pos) {
  return this_ptr->tabAt(*pos);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_currentIndex(QTabBar const * this_ptr) {
  return this_ptr->currentIndex();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabBar_count(QTabBar const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTabBar_sizeHint(QTabBar const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTabBar_minimumSizeHint(QTabBar const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setDrawBase(QTabBar * this_ptr, bool drawTheBase) {
  this_ptr->setDrawBase(drawTheBase);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_drawBase(QTabBar const * this_ptr) {
  return this_ptr->drawBase();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTabBar_iconSize(QTabBar const * this_ptr) {
  return new QSize(this_ptr->iconSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setIconSize(QTabBar * this_ptr, QSize const * size) {
  this_ptr->setIconSize(*size);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_usesScrollButtons(QTabBar const * this_ptr) {
  return this_ptr->usesScrollButtons();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setUsesScrollButtons(QTabBar * this_ptr, bool useButtons) {
  this_ptr->setUsesScrollButtons(useButtons);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_tabsClosable(QTabBar const * this_ptr) {
  return this_ptr->tabsClosable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabsClosable(QTabBar * this_ptr, bool closable) {
  this_ptr->setTabsClosable(closable);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setTabButton(QTabBar * this_ptr, int index, QTabBar::ButtonPosition position, QWidget * widget) {
  this_ptr->setTabButton(index, position, widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QTabBar_tabButton(QTabBar const * this_ptr, int index, QTabBar::ButtonPosition position) {
  return this_ptr->tabButton(index, position);
}


RITUAL_EXPORT QTabBar::SelectionBehavior ctr_qt_widgets_ffi_QTabBar_selectionBehaviorOnRemove(QTabBar const * this_ptr) {
  return this_ptr->selectionBehaviorOnRemove();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setSelectionBehaviorOnRemove(QTabBar * this_ptr, QTabBar::SelectionBehavior behavior) {
  this_ptr->setSelectionBehaviorOnRemove(behavior);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_expanding(QTabBar const * this_ptr) {
  return this_ptr->expanding();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setExpanding(QTabBar * this_ptr, bool enabled) {
  this_ptr->setExpanding(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_isMovable(QTabBar const * this_ptr) {
  return this_ptr->isMovable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setMovable(QTabBar * this_ptr, bool movable) {
  this_ptr->setMovable(movable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_documentMode(QTabBar const * this_ptr) {
  return this_ptr->documentMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setDocumentMode(QTabBar * this_ptr, bool set) {
  this_ptr->setDocumentMode(set);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_autoHide(QTabBar const * this_ptr) {
  return this_ptr->autoHide();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setAutoHide(QTabBar * this_ptr, bool hide) {
  this_ptr->setAutoHide(hide);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabBar_changeCurrentOnDrag(QTabBar const * this_ptr) {
  return this_ptr->changeCurrentOnDrag();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setChangeCurrentOnDrag(QTabBar * this_ptr, bool change) {
  this_ptr->setChangeCurrentOnDrag(change);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabBar_accessibleTabName(QTabBar const * this_ptr, int index) {
  return new QString(this_ptr->accessibleTabName(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setAccessibleTabName(QTabBar * this_ptr, int index, QString const * name) {
  this_ptr->setAccessibleTabName(index, *name);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabBar_setCurrentIndex(QTabBar * this_ptr, int index) {
  this_ptr->setCurrentIndex(index);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTabWidget_metaObject(QTabWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTabWidget_qt_metacast(QTabWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_qt_metacall(QTabWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabWidget_tr(char const * s, char const * c, int n) {
  return new QString(QTabWidget::tr(s, c, n));
}


RITUAL_EXPORT QTabWidget * ctr_qt_widgets_ffi_QTabWidget_QTabWidget(QWidget * parent) {
  return new QTabWidget(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_dQTabWidget(QTabWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_addTab(QTabWidget * this_ptr, QWidget * widget, QString const * arg2) {
  return this_ptr->addTab(widget, *arg2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_addTab1(QTabWidget * this_ptr, QWidget * widget, QIcon const * icon, QString const * label) {
  return this_ptr->addTab(widget, *icon, *label);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_insertTab(QTabWidget * this_ptr, int index, QWidget * widget, QString const * arg3) {
  return this_ptr->insertTab(index, widget, *arg3);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_insertTab1(QTabWidget * this_ptr, int index, QWidget * widget, QIcon const * icon, QString const * label) {
  return this_ptr->insertTab(index, widget, *icon, *label);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_removeTab(QTabWidget * this_ptr, int index) {
  this_ptr->removeTab(index);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_isTabEnabled(QTabWidget const * this_ptr, int index) {
  return this_ptr->isTabEnabled(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabEnabled(QTabWidget * this_ptr, int index, bool enabled) {
  this_ptr->setTabEnabled(index, enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_isTabVisible(QTabWidget const * this_ptr, int index) {
  return this_ptr->isTabVisible(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabVisible(QTabWidget * this_ptr, int index, bool visible) {
  this_ptr->setTabVisible(index, visible);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabWidget_tabText(QTabWidget const * this_ptr, int index) {
  return new QString(this_ptr->tabText(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabText(QTabWidget * this_ptr, int index, QString const * text) {
  this_ptr->setTabText(index, *text);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QTabWidget_tabIcon(QTabWidget const * this_ptr, int index) {
  return new QIcon(this_ptr->tabIcon(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabIcon(QTabWidget * this_ptr, int index, QIcon const * icon) {
  this_ptr->setTabIcon(index, *icon);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabToolTip(QTabWidget * this_ptr, int index, QString const * tip) {
  this_ptr->setTabToolTip(index, *tip);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabWidget_tabToolTip(QTabWidget const * this_ptr, int index) {
  return new QString(this_ptr->tabToolTip(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabWhatsThis(QTabWidget * this_ptr, int index, QString const * text) {
  this_ptr->setTabWhatsThis(index, *text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTabWidget_tabWhatsThis(QTabWidget const * this_ptr, int index) {
  return new QString(this_ptr->tabWhatsThis(index));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_currentIndex(QTabWidget const * this_ptr) {
  return this_ptr->currentIndex();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QTabWidget_currentWidget(QTabWidget const * this_ptr) {
  return this_ptr->currentWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QTabWidget_widget(QTabWidget const * this_ptr, int index) {
  return this_ptr->widget(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_indexOf(QTabWidget const * this_ptr, QWidget const * widget) {
  return this_ptr->indexOf(widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_count(QTabWidget const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QTabWidget::TabPosition ctr_qt_widgets_ffi_QTabWidget_tabPosition(QTabWidget const * this_ptr) {
  return this_ptr->tabPosition();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabPosition(QTabWidget * this_ptr, QTabWidget::TabPosition position) {
  this_ptr->setTabPosition(position);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_tabsClosable(QTabWidget const * this_ptr) {
  return this_ptr->tabsClosable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabsClosable(QTabWidget * this_ptr, bool closeable) {
  this_ptr->setTabsClosable(closeable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_isMovable(QTabWidget const * this_ptr) {
  return this_ptr->isMovable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setMovable(QTabWidget * this_ptr, bool movable) {
  this_ptr->setMovable(movable);
}


RITUAL_EXPORT QTabWidget::TabShape ctr_qt_widgets_ffi_QTabWidget_tabShape(QTabWidget const * this_ptr) {
  return this_ptr->tabShape();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabShape(QTabWidget * this_ptr, QTabWidget::TabShape s) {
  this_ptr->setTabShape(s);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTabWidget_sizeHint(QTabWidget const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTabWidget_minimumSizeHint(QTabWidget const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTabWidget_heightForWidth(QTabWidget const * this_ptr, int width) {
  return this_ptr->heightForWidth(width);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_hasHeightForWidth(QTabWidget const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setCornerWidget(QTabWidget * this_ptr, QWidget * w, Qt::Corner corner) {
  this_ptr->setCornerWidget(w, corner);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QTabWidget_cornerWidget(QTabWidget const * this_ptr, Qt::Corner corner) {
  return this_ptr->cornerWidget(corner);
}


RITUAL_EXPORT Qt::TextElideMode ctr_qt_widgets_ffi_QTabWidget_elideMode(QTabWidget const * this_ptr) {
  return this_ptr->elideMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setElideMode(QTabWidget * this_ptr, Qt::TextElideMode mode) {
  this_ptr->setElideMode(mode);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QTabWidget_iconSize(QTabWidget const * this_ptr) {
  return new QSize(this_ptr->iconSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setIconSize(QTabWidget * this_ptr, QSize const * size) {
  this_ptr->setIconSize(*size);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_usesScrollButtons(QTabWidget const * this_ptr) {
  return this_ptr->usesScrollButtons();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setUsesScrollButtons(QTabWidget * this_ptr, bool useButtons) {
  this_ptr->setUsesScrollButtons(useButtons);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_documentMode(QTabWidget const * this_ptr) {
  return this_ptr->documentMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setDocumentMode(QTabWidget * this_ptr, bool set) {
  this_ptr->setDocumentMode(set);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QTabWidget_tabBarAutoHide(QTabWidget const * this_ptr) {
  return this_ptr->tabBarAutoHide();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setTabBarAutoHide(QTabWidget * this_ptr, bool enabled) {
  this_ptr->setTabBarAutoHide(enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_clear(QTabWidget * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QTabBar * ctr_qt_widgets_ffi_QTabWidget_tabBar(QTabWidget const * this_ptr) {
  return this_ptr->tabBar();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setCurrentIndex(QTabWidget * this_ptr, int index) {
  this_ptr->setCurrentIndex(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTabWidget_setCurrentWidget(QTabWidget * this_ptr, QWidget * widget) {
  this_ptr->setCurrentWidget(widget);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QRubberBand_metaObject(QRubberBand const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QRubberBand_qt_metacast(QRubberBand * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QRubberBand_qt_metacall(QRubberBand * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QRubberBand_tr(char const * s, char const * c, int n) {
  return new QString(QRubberBand::tr(s, c, n));
}


RITUAL_EXPORT QRubberBand * ctr_qt_widgets_ffi_QRubberBand_QRubberBand(QRubberBand::Shape arg1, QWidget * arg2) {
  return new QRubberBand(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRubberBand_dQRubberBand(QRubberBand * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRubberBand::Shape ctr_qt_widgets_ffi_QRubberBand_shape(QRubberBand const * this_ptr) {
  return this_ptr->shape();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRubberBand_setGeometry(QRubberBand * this_ptr, QRect const * r) {
  this_ptr->setGeometry(*r);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRubberBand_setGeometry1(QRubberBand * this_ptr, int x, int y, int w, int h) {
  this_ptr->setGeometry(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRubberBand_move(QRubberBand * this_ptr, int x, int y) {
  this_ptr->move(x, y);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRubberBand_move1(QRubberBand * this_ptr, QPoint const * p) {
  this_ptr->move(*p);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRubberBand_resize(QRubberBand * this_ptr, int w, int h) {
  this_ptr->resize(w, h);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QRubberBand_resize1(QRubberBand * this_ptr, QSize const * s) {
  this_ptr->resize(*s);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFrame_metaObject(QFrame const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QFrame_qt_metacast(QFrame * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFrame_qt_metacall(QFrame * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFrame_tr(char const * s, char const * c, int n) {
  return new QString(QFrame::tr(s, c, n));
}


RITUAL_EXPORT QFrame * ctr_qt_widgets_ffi_QFrame_QFrame(QWidget * parent, int f) {
  return new QFrame(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFrame_dQFrame(QFrame * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFrame_frameStyle(QFrame const * this_ptr) {
  return this_ptr->frameStyle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFrame_setFrameStyle(QFrame * this_ptr, int arg1) {
  this_ptr->setFrameStyle(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFrame_frameWidth(QFrame const * this_ptr) {
  return this_ptr->frameWidth();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QFrame_sizeHint(QFrame const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QFrame::Shape ctr_qt_widgets_ffi_QFrame_frameShape(QFrame const * this_ptr) {
  return this_ptr->frameShape();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFrame_setFrameShape(QFrame * this_ptr, QFrame::Shape arg1) {
  this_ptr->setFrameShape(arg1);
}


RITUAL_EXPORT QFrame::Shadow ctr_qt_widgets_ffi_QFrame_frameShadow(QFrame const * this_ptr) {
  return this_ptr->frameShadow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFrame_setFrameShadow(QFrame * this_ptr, QFrame::Shadow arg1) {
  this_ptr->setFrameShadow(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFrame_lineWidth(QFrame const * this_ptr) {
  return this_ptr->lineWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFrame_setLineWidth(QFrame * this_ptr, int arg1) {
  this_ptr->setLineWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFrame_midLineWidth(QFrame const * this_ptr) {
  return this_ptr->midLineWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFrame_setMidLineWidth(QFrame * this_ptr, int arg1) {
  this_ptr->setMidLineWidth(arg1);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QFrame_frameRect(QFrame const * this_ptr) {
  return new QRect(this_ptr->frameRect());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFrame_setFrameRect(QFrame * this_ptr, QRect const * arg1) {
  this_ptr->setFrameRect(*arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_58(QFrame::Shape lhs, QFrame::Shadow rhs) {
  return operator|(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_59(QFrame::Shape lhs, QFrame::Shadow rhs) {
  return operator&(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_60(QFrame::Shape lhs, QFrame::Shadow rhs) {
  return operator^(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_61(QFrame::Shadow lhs, QFrame::Shape rhs) {
  return operator|(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_62(QFrame::Shadow lhs, QFrame::Shape rhs) {
  return operator&(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_operator_63(QFrame::Shadow lhs, QFrame::Shape rhs) {
  return operator^(lhs, rhs);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_QStyleOption_QStyleOption(int version, int type) {
  return new QStyleOption(version, type);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_QStyleOption_QStyleOption1(QStyleOption const * other) {
  return new QStyleOption(*other);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOption_dQStyleOption(QStyleOption * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleOption_initFrom(QStyleOption * this_ptr, QWidget const * w) {
  this_ptr->initFrom(w);
}


RITUAL_EXPORT QStyleOption * ctr_qt_widgets_ffi_QStyleOption_operator_(QStyleOption * this_ptr, QStyleOption const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QStyleOptionFocusRect * ctr_qt_widgets_ffi_QStyleOptionFocusRect_QStyleOptionFocusRect() {
  return new QStyleOptionFocusRect();
}


RITUAL_EXPORT QStyleOptionFocusRect * ctr_qt_widgets_ffi_QStyleOptionFocusRect_QStyleOptionFocusRect1(QStyleOptionFocusRect const * other) {
  return new QStyleOptionFocusRect(*other);
}


RITUAL_EXPORT QStyleOptionFocusRect * ctr_qt_widgets_ffi_QStyleOptionFocusRect_operator_(QStyleOptionFocusRect * this_ptr, QStyleOptionFocusRect const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionFrame * ctr_qt_widgets_ffi_QStyleOptionFrame_QStyleOptionFrame() {
  return new QStyleOptionFrame();
}


RITUAL_EXPORT QStyleOptionFrame * ctr_qt_widgets_ffi_QStyleOptionFrame_QStyleOptionFrame1(QStyleOptionFrame const * other) {
  return new QStyleOptionFrame(*other);
}


RITUAL_EXPORT QStyleOptionFrame * ctr_qt_widgets_ffi_QStyleOptionFrame_operator_(QStyleOptionFrame * this_ptr, QStyleOptionFrame const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionTabWidgetFrame * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame() {
  return new QStyleOptionTabWidgetFrame();
}


RITUAL_EXPORT QStyleOptionTabWidgetFrame * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame1(QStyleOptionTabWidgetFrame const * other) {
  return new QStyleOptionTabWidgetFrame(*other);
}


RITUAL_EXPORT QStyleOptionTabWidgetFrame * ctr_qt_widgets_ffi_QStyleOptionTabWidgetFrame_operator_(QStyleOptionTabWidgetFrame * this_ptr, QStyleOptionTabWidgetFrame const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionTabBarBase * ctr_qt_widgets_ffi_QStyleOptionTabBarBase_QStyleOptionTabBarBase() {
  return new QStyleOptionTabBarBase();
}


RITUAL_EXPORT QStyleOptionTabBarBase * ctr_qt_widgets_ffi_QStyleOptionTabBarBase_QStyleOptionTabBarBase1(QStyleOptionTabBarBase const * other) {
  return new QStyleOptionTabBarBase(*other);
}


RITUAL_EXPORT QStyleOptionTabBarBase * ctr_qt_widgets_ffi_QStyleOptionTabBarBase_operator_(QStyleOptionTabBarBase * this_ptr, QStyleOptionTabBarBase const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionHeader * ctr_qt_widgets_ffi_QStyleOptionHeader_QStyleOptionHeader() {
  return new QStyleOptionHeader();
}


RITUAL_EXPORT QStyleOptionHeader * ctr_qt_widgets_ffi_QStyleOptionHeader_QStyleOptionHeader1(QStyleOptionHeader const * other) {
  return new QStyleOptionHeader(*other);
}


RITUAL_EXPORT QStyleOptionHeader * ctr_qt_widgets_ffi_QStyleOptionHeader_operator_(QStyleOptionHeader * this_ptr, QStyleOptionHeader const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionHeaderV2 * ctr_qt_widgets_ffi_QStyleOptionHeaderV2_QStyleOptionHeaderV2() {
  return new QStyleOptionHeaderV2();
}


RITUAL_EXPORT QStyleOptionHeaderV2 * ctr_qt_widgets_ffi_QStyleOptionHeaderV2_QStyleOptionHeaderV21(QStyleOptionHeaderV2 const * other) {
  return new QStyleOptionHeaderV2(*other);
}


RITUAL_EXPORT QStyleOptionHeaderV2 * ctr_qt_widgets_ffi_QStyleOptionHeaderV2_operator_(QStyleOptionHeaderV2 * this_ptr, QStyleOptionHeaderV2 const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionButton * ctr_qt_widgets_ffi_QStyleOptionButton_QStyleOptionButton() {
  return new QStyleOptionButton();
}


RITUAL_EXPORT QStyleOptionButton * ctr_qt_widgets_ffi_QStyleOptionButton_QStyleOptionButton1(QStyleOptionButton const * other) {
  return new QStyleOptionButton(*other);
}


RITUAL_EXPORT QStyleOptionButton * ctr_qt_widgets_ffi_QStyleOptionButton_operator_(QStyleOptionButton * this_ptr, QStyleOptionButton const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionTab * ctr_qt_widgets_ffi_QStyleOptionTab_QStyleOptionTab() {
  return new QStyleOptionTab();
}


RITUAL_EXPORT QStyleOptionTab * ctr_qt_widgets_ffi_QStyleOptionTab_QStyleOptionTab1(QStyleOptionTab const * other) {
  return new QStyleOptionTab(*other);
}


RITUAL_EXPORT QStyleOptionTab * ctr_qt_widgets_ffi_QStyleOptionTab_operator_(QStyleOptionTab * this_ptr, QStyleOptionTab const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionToolBar * ctr_qt_widgets_ffi_QStyleOptionToolBar_QStyleOptionToolBar() {
  return new QStyleOptionToolBar();
}


RITUAL_EXPORT QStyleOptionToolBar * ctr_qt_widgets_ffi_QStyleOptionToolBar_QStyleOptionToolBar1(QStyleOptionToolBar const * other) {
  return new QStyleOptionToolBar(*other);
}


RITUAL_EXPORT QStyleOptionToolBar * ctr_qt_widgets_ffi_QStyleOptionToolBar_operator_(QStyleOptionToolBar * this_ptr, QStyleOptionToolBar const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionProgressBar * ctr_qt_widgets_ffi_QStyleOptionProgressBar_QStyleOptionProgressBar() {
  return new QStyleOptionProgressBar();
}


RITUAL_EXPORT QStyleOptionProgressBar * ctr_qt_widgets_ffi_QStyleOptionProgressBar_QStyleOptionProgressBar1(QStyleOptionProgressBar const * other) {
  return new QStyleOptionProgressBar(*other);
}


RITUAL_EXPORT QStyleOptionProgressBar * ctr_qt_widgets_ffi_QStyleOptionProgressBar_operator_(QStyleOptionProgressBar * this_ptr, QStyleOptionProgressBar const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionMenuItem * ctr_qt_widgets_ffi_QStyleOptionMenuItem_QStyleOptionMenuItem() {
  return new QStyleOptionMenuItem();
}


RITUAL_EXPORT QStyleOptionMenuItem * ctr_qt_widgets_ffi_QStyleOptionMenuItem_QStyleOptionMenuItem1(QStyleOptionMenuItem const * other) {
  return new QStyleOptionMenuItem(*other);
}


RITUAL_EXPORT QStyleOptionMenuItem * ctr_qt_widgets_ffi_QStyleOptionMenuItem_operator_(QStyleOptionMenuItem * this_ptr, QStyleOptionMenuItem const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionDockWidget * ctr_qt_widgets_ffi_QStyleOptionDockWidget_QStyleOptionDockWidget() {
  return new QStyleOptionDockWidget();
}


RITUAL_EXPORT QStyleOptionDockWidget * ctr_qt_widgets_ffi_QStyleOptionDockWidget_QStyleOptionDockWidget1(QStyleOptionDockWidget const * other) {
  return new QStyleOptionDockWidget(*other);
}


RITUAL_EXPORT QStyleOptionDockWidget * ctr_qt_widgets_ffi_QStyleOptionDockWidget_operator_(QStyleOptionDockWidget * this_ptr, QStyleOptionDockWidget const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionViewItem * ctr_qt_widgets_ffi_QStyleOptionViewItem_QStyleOptionViewItem() {
  return new QStyleOptionViewItem();
}


RITUAL_EXPORT QStyleOptionViewItem * ctr_qt_widgets_ffi_QStyleOptionViewItem_QStyleOptionViewItem1(QStyleOptionViewItem const * other) {
  return new QStyleOptionViewItem(*other);
}


RITUAL_EXPORT QStyleOptionViewItem * ctr_qt_widgets_ffi_QStyleOptionViewItem_operator_(QStyleOptionViewItem * this_ptr, QStyleOptionViewItem const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionToolBox * ctr_qt_widgets_ffi_QStyleOptionToolBox_QStyleOptionToolBox() {
  return new QStyleOptionToolBox();
}


RITUAL_EXPORT QStyleOptionToolBox * ctr_qt_widgets_ffi_QStyleOptionToolBox_QStyleOptionToolBox1(QStyleOptionToolBox const * other) {
  return new QStyleOptionToolBox(*other);
}


RITUAL_EXPORT QStyleOptionToolBox * ctr_qt_widgets_ffi_QStyleOptionToolBox_operator_(QStyleOptionToolBox * this_ptr, QStyleOptionToolBox const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionRubberBand * ctr_qt_widgets_ffi_QStyleOptionRubberBand_QStyleOptionRubberBand() {
  return new QStyleOptionRubberBand();
}


RITUAL_EXPORT QStyleOptionRubberBand * ctr_qt_widgets_ffi_QStyleOptionRubberBand_QStyleOptionRubberBand1(QStyleOptionRubberBand const * other) {
  return new QStyleOptionRubberBand(*other);
}


RITUAL_EXPORT QStyleOptionRubberBand * ctr_qt_widgets_ffi_QStyleOptionRubberBand_operator_(QStyleOptionRubberBand * this_ptr, QStyleOptionRubberBand const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_QStyleOptionComplex_QStyleOptionComplex(int version, int type) {
  return new QStyleOptionComplex(version, type);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_QStyleOptionComplex_QStyleOptionComplex1(QStyleOptionComplex const * other) {
  return new QStyleOptionComplex(*other);
}


RITUAL_EXPORT QStyleOptionComplex * ctr_qt_widgets_ffi_QStyleOptionComplex_operator_(QStyleOptionComplex * this_ptr, QStyleOptionComplex const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionSlider * ctr_qt_widgets_ffi_QStyleOptionSlider_QStyleOptionSlider() {
  return new QStyleOptionSlider();
}


RITUAL_EXPORT QStyleOptionSlider * ctr_qt_widgets_ffi_QStyleOptionSlider_QStyleOptionSlider1(QStyleOptionSlider const * other) {
  return new QStyleOptionSlider(*other);
}


RITUAL_EXPORT QStyleOptionSlider * ctr_qt_widgets_ffi_QStyleOptionSlider_operator_(QStyleOptionSlider * this_ptr, QStyleOptionSlider const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionSpinBox * ctr_qt_widgets_ffi_QStyleOptionSpinBox_QStyleOptionSpinBox() {
  return new QStyleOptionSpinBox();
}


RITUAL_EXPORT QStyleOptionSpinBox * ctr_qt_widgets_ffi_QStyleOptionSpinBox_QStyleOptionSpinBox1(QStyleOptionSpinBox const * other) {
  return new QStyleOptionSpinBox(*other);
}


RITUAL_EXPORT QStyleOptionSpinBox * ctr_qt_widgets_ffi_QStyleOptionSpinBox_operator_(QStyleOptionSpinBox * this_ptr, QStyleOptionSpinBox const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionToolButton * ctr_qt_widgets_ffi_QStyleOptionToolButton_QStyleOptionToolButton() {
  return new QStyleOptionToolButton();
}


RITUAL_EXPORT QStyleOptionToolButton * ctr_qt_widgets_ffi_QStyleOptionToolButton_QStyleOptionToolButton1(QStyleOptionToolButton const * other) {
  return new QStyleOptionToolButton(*other);
}


RITUAL_EXPORT QStyleOptionToolButton * ctr_qt_widgets_ffi_QStyleOptionToolButton_operator_(QStyleOptionToolButton * this_ptr, QStyleOptionToolButton const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionComboBox * ctr_qt_widgets_ffi_QStyleOptionComboBox_QStyleOptionComboBox() {
  return new QStyleOptionComboBox();
}


RITUAL_EXPORT QStyleOptionComboBox * ctr_qt_widgets_ffi_QStyleOptionComboBox_QStyleOptionComboBox1(QStyleOptionComboBox const * other) {
  return new QStyleOptionComboBox(*other);
}


RITUAL_EXPORT QStyleOptionComboBox * ctr_qt_widgets_ffi_QStyleOptionComboBox_operator_(QStyleOptionComboBox * this_ptr, QStyleOptionComboBox const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionTitleBar * ctr_qt_widgets_ffi_QStyleOptionTitleBar_QStyleOptionTitleBar() {
  return new QStyleOptionTitleBar();
}


RITUAL_EXPORT QStyleOptionTitleBar * ctr_qt_widgets_ffi_QStyleOptionTitleBar_QStyleOptionTitleBar1(QStyleOptionTitleBar const * other) {
  return new QStyleOptionTitleBar(*other);
}


RITUAL_EXPORT QStyleOptionTitleBar * ctr_qt_widgets_ffi_QStyleOptionTitleBar_operator_(QStyleOptionTitleBar * this_ptr, QStyleOptionTitleBar const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionGroupBox * ctr_qt_widgets_ffi_QStyleOptionGroupBox_QStyleOptionGroupBox() {
  return new QStyleOptionGroupBox();
}


RITUAL_EXPORT QStyleOptionGroupBox * ctr_qt_widgets_ffi_QStyleOptionGroupBox_QStyleOptionGroupBox1(QStyleOptionGroupBox const * other) {
  return new QStyleOptionGroupBox(*other);
}


RITUAL_EXPORT QStyleOptionGroupBox * ctr_qt_widgets_ffi_QStyleOptionGroupBox_operator_(QStyleOptionGroupBox * this_ptr, QStyleOptionGroupBox const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionSizeGrip * ctr_qt_widgets_ffi_QStyleOptionSizeGrip_QStyleOptionSizeGrip() {
  return new QStyleOptionSizeGrip();
}


RITUAL_EXPORT QStyleOptionSizeGrip * ctr_qt_widgets_ffi_QStyleOptionSizeGrip_QStyleOptionSizeGrip1(QStyleOptionSizeGrip const * other) {
  return new QStyleOptionSizeGrip(*other);
}


RITUAL_EXPORT QStyleOptionSizeGrip * ctr_qt_widgets_ffi_QStyleOptionSizeGrip_operator_(QStyleOptionSizeGrip * this_ptr, QStyleOptionSizeGrip const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QStyleOptionGraphicsItem * ctr_qt_widgets_ffi_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem() {
  return new QStyleOptionGraphicsItem();
}


RITUAL_EXPORT QStyleOptionGraphicsItem * ctr_qt_widgets_ffi_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem1(QStyleOptionGraphicsItem const * other) {
  return new QStyleOptionGraphicsItem(*other);
}


RITUAL_EXPORT QStyleOptionGraphicsItem * ctr_qt_widgets_ffi_QStyleOptionGraphicsItem_operator_(QStyleOptionGraphicsItem * this_ptr, QStyleOptionGraphicsItem const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QStyleOptionGraphicsItem_levelOfDetailFromTransform(QTransform const * worldTransform) {
  return QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform);
}


RITUAL_EXPORT QStyleHintReturn * ctr_qt_widgets_ffi_QStyleHintReturn_QStyleHintReturn(int version, int type) {
  return new QStyleHintReturn(version, type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleHintReturn_dQStyleHintReturn(QStyleHintReturn * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyleHintReturnMask * ctr_qt_widgets_ffi_QStyleHintReturnMask_QStyleHintReturnMask() {
  return new QStyleHintReturnMask();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleHintReturnMask_dQStyleHintReturnMask(QStyleHintReturnMask * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyleHintReturnVariant * ctr_qt_widgets_ffi_QStyleHintReturnVariant_QStyleHintReturnVariant() {
  return new QStyleHintReturnVariant();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QStyleHintReturnVariant_dQStyleHintReturnVariant(QStyleHintReturnVariant * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__4(QDebug const * debug, QStyleOption::OptionType const * optionType) {
  return new QDebug(operator<<(*debug, *optionType));
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__5(QDebug const * debug, QStyleOption const * option) {
  return new QDebug(operator<<(*debug, *option));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractItemDelegate_metaObject(QAbstractItemDelegate const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAbstractItemDelegate_qt_metacast(QAbstractItemDelegate * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractItemDelegate_qt_metacall(QAbstractItemDelegate * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractItemDelegate_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractItemDelegate::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemDelegate_dQAbstractItemDelegate(QAbstractItemDelegate * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemDelegate_paint(QAbstractItemDelegate const * this_ptr, QPainter * painter, QStyleOptionViewItem const * option, QModelIndex const * index) {
  this_ptr->paint(painter, *option, *index);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractItemDelegate_sizeHint(QAbstractItemDelegate const * this_ptr, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return new QSize(this_ptr->sizeHint(*option, *index));
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QAbstractItemDelegate_createEditor(QAbstractItemDelegate const * this_ptr, QWidget * parent, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return this_ptr->createEditor(parent, *option, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemDelegate_destroyEditor(QAbstractItemDelegate const * this_ptr, QWidget * editor, QModelIndex const * index) {
  this_ptr->destroyEditor(editor, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemDelegate_setEditorData(QAbstractItemDelegate const * this_ptr, QWidget * editor, QModelIndex const * index) {
  this_ptr->setEditorData(editor, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemDelegate_setModelData(QAbstractItemDelegate const * this_ptr, QWidget * editor, QAbstractItemModel * model, QModelIndex const * index) {
  this_ptr->setModelData(editor, model, *index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemDelegate_updateEditorGeometry(QAbstractItemDelegate const * this_ptr, QWidget * editor, QStyleOptionViewItem const * option, QModelIndex const * index) {
  this_ptr->updateEditorGeometry(editor, *option, *index);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemDelegate_editorEvent(QAbstractItemDelegate * this_ptr, QEvent * event, QAbstractItemModel * model, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return this_ptr->editorEvent(event, model, *option, *index);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemDelegate_handleEditorEvent(QAbstractItemDelegate * this_ptr, QObject * object, QEvent * event) {
  return this_ptr->handleEditorEvent(object, event);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemDelegate_helpEvent(QAbstractItemDelegate * this_ptr, QHelpEvent * event, QAbstractItemView * view, QStyleOptionViewItem const * option, QModelIndex const * index) {
  return this_ptr->helpEvent(event, view, *option, *index);
}


RITUAL_EXPORT QList< int > * ctr_qt_widgets_ffi_QAbstractItemDelegate_paintingRoles(QAbstractItemDelegate const * this_ptr) {
  return new QList< int >(this_ptr->paintingRoles());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractScrollArea_metaObject(QAbstractScrollArea const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAbstractScrollArea_qt_metacast(QAbstractScrollArea * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractScrollArea_qt_metacall(QAbstractScrollArea * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractScrollArea_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractScrollArea::tr(s, c, n));
}


RITUAL_EXPORT QAbstractScrollArea * ctr_qt_widgets_ffi_QAbstractScrollArea_QAbstractScrollArea(QWidget * parent) {
  return new QAbstractScrollArea(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_dQAbstractScrollArea(QAbstractScrollArea * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::ScrollBarPolicy ctr_qt_widgets_ffi_QAbstractScrollArea_verticalScrollBarPolicy(QAbstractScrollArea const * this_ptr) {
  return this_ptr->verticalScrollBarPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setVerticalScrollBarPolicy(QAbstractScrollArea * this_ptr, Qt::ScrollBarPolicy arg1) {
  this_ptr->setVerticalScrollBarPolicy(arg1);
}


RITUAL_EXPORT QScrollBar * ctr_qt_widgets_ffi_QAbstractScrollArea_verticalScrollBar(QAbstractScrollArea const * this_ptr) {
  return this_ptr->verticalScrollBar();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setVerticalScrollBar(QAbstractScrollArea * this_ptr, QScrollBar * scrollbar) {
  this_ptr->setVerticalScrollBar(scrollbar);
}


RITUAL_EXPORT Qt::ScrollBarPolicy ctr_qt_widgets_ffi_QAbstractScrollArea_horizontalScrollBarPolicy(QAbstractScrollArea const * this_ptr) {
  return this_ptr->horizontalScrollBarPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setHorizontalScrollBarPolicy(QAbstractScrollArea * this_ptr, Qt::ScrollBarPolicy arg1) {
  this_ptr->setHorizontalScrollBarPolicy(arg1);
}


RITUAL_EXPORT QScrollBar * ctr_qt_widgets_ffi_QAbstractScrollArea_horizontalScrollBar(QAbstractScrollArea const * this_ptr) {
  return this_ptr->horizontalScrollBar();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setHorizontalScrollBar(QAbstractScrollArea * this_ptr, QScrollBar * scrollbar) {
  this_ptr->setHorizontalScrollBar(scrollbar);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QAbstractScrollArea_cornerWidget(QAbstractScrollArea const * this_ptr) {
  return this_ptr->cornerWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setCornerWidget(QAbstractScrollArea * this_ptr, QWidget * widget) {
  this_ptr->setCornerWidget(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_addScrollBarWidget(QAbstractScrollArea * this_ptr, QWidget * widget, int alignment) {
  this_ptr->addScrollBarWidget(widget, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT QList< QWidget * > * ctr_qt_widgets_ffi_QAbstractScrollArea_scrollBarWidgets(QAbstractScrollArea * this_ptr, int alignment) {
  return new QList< QWidget * >(this_ptr->scrollBarWidgets(QFlags< Qt::AlignmentFlag >(alignment)));
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QAbstractScrollArea_viewport(QAbstractScrollArea const * this_ptr) {
  return this_ptr->viewport();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setViewport(QAbstractScrollArea * this_ptr, QWidget * widget) {
  this_ptr->setViewport(widget);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractScrollArea_maximumViewportSize(QAbstractScrollArea const * this_ptr) {
  return new QSize(this_ptr->maximumViewportSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractScrollArea_minimumSizeHint(QAbstractScrollArea const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractScrollArea_sizeHint(QAbstractScrollArea const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setupViewport(QAbstractScrollArea * this_ptr, QWidget * viewport) {
  this_ptr->setupViewport(viewport);
}


RITUAL_EXPORT QAbstractScrollArea::SizeAdjustPolicy ctr_qt_widgets_ffi_QAbstractScrollArea_sizeAdjustPolicy(QAbstractScrollArea const * this_ptr) {
  return this_ptr->sizeAdjustPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractScrollArea_setSizeAdjustPolicy(QAbstractScrollArea * this_ptr, QAbstractScrollArea::SizeAdjustPolicy policy) {
  this_ptr->setSizeAdjustPolicy(policy);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QAbstractItemView_metaObject(QAbstractItemView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAbstractItemView_qt_metacast(QAbstractItemView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractItemView_qt_metacall(QAbstractItemView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAbstractItemView_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractItemView::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_dQAbstractItemView(QAbstractItemView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setModel(QAbstractItemView * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_widgets_ffi_QAbstractItemView_model(QAbstractItemView const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setSelectionModel(QAbstractItemView * this_ptr, QItemSelectionModel * selectionModel) {
  this_ptr->setSelectionModel(selectionModel);
}


RITUAL_EXPORT QItemSelectionModel * ctr_qt_widgets_ffi_QAbstractItemView_selectionModel(QAbstractItemView const * this_ptr) {
  return this_ptr->selectionModel();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setItemDelegate(QAbstractItemView * this_ptr, QAbstractItemDelegate * delegate) {
  this_ptr->setItemDelegate(delegate);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QAbstractItemView_itemDelegate(QAbstractItemView const * this_ptr) {
  return this_ptr->itemDelegate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setSelectionMode(QAbstractItemView * this_ptr, QAbstractItemView::SelectionMode mode) {
  this_ptr->setSelectionMode(mode);
}


RITUAL_EXPORT QAbstractItemView::SelectionMode ctr_qt_widgets_ffi_QAbstractItemView_selectionMode(QAbstractItemView const * this_ptr) {
  return this_ptr->selectionMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setSelectionBehavior(QAbstractItemView * this_ptr, QAbstractItemView::SelectionBehavior behavior) {
  this_ptr->setSelectionBehavior(behavior);
}


RITUAL_EXPORT QAbstractItemView::SelectionBehavior ctr_qt_widgets_ffi_QAbstractItemView_selectionBehavior(QAbstractItemView const * this_ptr) {
  return this_ptr->selectionBehavior();
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QAbstractItemView_currentIndex(QAbstractItemView const * this_ptr) {
  return new QModelIndex(this_ptr->currentIndex());
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QAbstractItemView_rootIndex(QAbstractItemView const * this_ptr) {
  return new QModelIndex(this_ptr->rootIndex());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setEditTriggers(QAbstractItemView * this_ptr, int triggers) {
  this_ptr->setEditTriggers(QFlags< QAbstractItemView::EditTrigger >(triggers));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractItemView_editTriggers(QAbstractItemView const * this_ptr) {
  return int(this_ptr->editTriggers());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setVerticalScrollMode(QAbstractItemView * this_ptr, QAbstractItemView::ScrollMode mode) {
  this_ptr->setVerticalScrollMode(mode);
}


RITUAL_EXPORT QAbstractItemView::ScrollMode ctr_qt_widgets_ffi_QAbstractItemView_verticalScrollMode(QAbstractItemView const * this_ptr) {
  return this_ptr->verticalScrollMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_resetVerticalScrollMode(QAbstractItemView * this_ptr) {
  this_ptr->resetVerticalScrollMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setHorizontalScrollMode(QAbstractItemView * this_ptr, QAbstractItemView::ScrollMode mode) {
  this_ptr->setHorizontalScrollMode(mode);
}


RITUAL_EXPORT QAbstractItemView::ScrollMode ctr_qt_widgets_ffi_QAbstractItemView_horizontalScrollMode(QAbstractItemView const * this_ptr) {
  return this_ptr->horizontalScrollMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_resetHorizontalScrollMode(QAbstractItemView * this_ptr) {
  this_ptr->resetHorizontalScrollMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setAutoScroll(QAbstractItemView * this_ptr, bool enable) {
  this_ptr->setAutoScroll(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemView_hasAutoScroll(QAbstractItemView const * this_ptr) {
  return this_ptr->hasAutoScroll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setAutoScrollMargin(QAbstractItemView * this_ptr, int margin) {
  this_ptr->setAutoScrollMargin(margin);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractItemView_autoScrollMargin(QAbstractItemView const * this_ptr) {
  return this_ptr->autoScrollMargin();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setTabKeyNavigation(QAbstractItemView * this_ptr, bool enable) {
  this_ptr->setTabKeyNavigation(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemView_tabKeyNavigation(QAbstractItemView const * this_ptr) {
  return this_ptr->tabKeyNavigation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setDropIndicatorShown(QAbstractItemView * this_ptr, bool enable) {
  this_ptr->setDropIndicatorShown(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemView_showDropIndicator(QAbstractItemView const * this_ptr) {
  return this_ptr->showDropIndicator();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setDragEnabled(QAbstractItemView * this_ptr, bool enable) {
  this_ptr->setDragEnabled(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemView_dragEnabled(QAbstractItemView const * this_ptr) {
  return this_ptr->dragEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setDragDropOverwriteMode(QAbstractItemView * this_ptr, bool overwrite) {
  this_ptr->setDragDropOverwriteMode(overwrite);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemView_dragDropOverwriteMode(QAbstractItemView const * this_ptr) {
  return this_ptr->dragDropOverwriteMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setDragDropMode(QAbstractItemView * this_ptr, QAbstractItemView::DragDropMode behavior) {
  this_ptr->setDragDropMode(behavior);
}


RITUAL_EXPORT QAbstractItemView::DragDropMode ctr_qt_widgets_ffi_QAbstractItemView_dragDropMode(QAbstractItemView const * this_ptr) {
  return this_ptr->dragDropMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setDefaultDropAction(QAbstractItemView * this_ptr, Qt::DropAction dropAction) {
  this_ptr->setDefaultDropAction(dropAction);
}


RITUAL_EXPORT Qt::DropAction ctr_qt_widgets_ffi_QAbstractItemView_defaultDropAction(QAbstractItemView const * this_ptr) {
  return this_ptr->defaultDropAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setAlternatingRowColors(QAbstractItemView * this_ptr, bool enable) {
  this_ptr->setAlternatingRowColors(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemView_alternatingRowColors(QAbstractItemView const * this_ptr) {
  return this_ptr->alternatingRowColors();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setIconSize(QAbstractItemView * this_ptr, QSize const * size) {
  this_ptr->setIconSize(*size);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractItemView_iconSize(QAbstractItemView const * this_ptr) {
  return new QSize(this_ptr->iconSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setTextElideMode(QAbstractItemView * this_ptr, Qt::TextElideMode mode) {
  this_ptr->setTextElideMode(mode);
}


RITUAL_EXPORT Qt::TextElideMode ctr_qt_widgets_ffi_QAbstractItemView_textElideMode(QAbstractItemView const * this_ptr) {
  return this_ptr->textElideMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_keyboardSearch(QAbstractItemView * this_ptr, QString const * search) {
  this_ptr->keyboardSearch(*search);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QAbstractItemView_visualRect(QAbstractItemView const * this_ptr, QModelIndex const * index) {
  return new QRect(this_ptr->visualRect(*index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_scrollTo(QAbstractItemView * this_ptr, QModelIndex const * index, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollTo(*index, hint);
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QAbstractItemView_indexAt(QAbstractItemView const * this_ptr, QPoint const * point) {
  return new QModelIndex(this_ptr->indexAt(*point));
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QAbstractItemView_sizeHintForIndex(QAbstractItemView const * this_ptr, QModelIndex const * index) {
  return new QSize(this_ptr->sizeHintForIndex(*index));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractItemView_sizeHintForRow(QAbstractItemView const * this_ptr, int row) {
  return this_ptr->sizeHintForRow(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractItemView_sizeHintForColumn(QAbstractItemView const * this_ptr, int column) {
  return this_ptr->sizeHintForColumn(column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAbstractItemView_updateThreshold(QAbstractItemView const * this_ptr) {
  return this_ptr->updateThreshold();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setUpdateThreshold(QAbstractItemView * this_ptr, int threshold) {
  this_ptr->setUpdateThreshold(threshold);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_openPersistentEditor(QAbstractItemView * this_ptr, QModelIndex const * index) {
  this_ptr->openPersistentEditor(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_closePersistentEditor(QAbstractItemView * this_ptr, QModelIndex const * index) {
  this_ptr->closePersistentEditor(*index);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractItemView_isPersistentEditorOpen(QAbstractItemView const * this_ptr, QModelIndex const * index) {
  return this_ptr->isPersistentEditorOpen(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setIndexWidget(QAbstractItemView * this_ptr, QModelIndex const * index, QWidget * widget) {
  this_ptr->setIndexWidget(*index, widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QAbstractItemView_indexWidget(QAbstractItemView const * this_ptr, QModelIndex const * index) {
  return this_ptr->indexWidget(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setItemDelegateForRow(QAbstractItemView * this_ptr, int row, QAbstractItemDelegate * delegate) {
  this_ptr->setItemDelegateForRow(row, delegate);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QAbstractItemView_itemDelegateForRow(QAbstractItemView const * this_ptr, int row) {
  return this_ptr->itemDelegateForRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setItemDelegateForColumn(QAbstractItemView * this_ptr, int column, QAbstractItemDelegate * delegate) {
  this_ptr->setItemDelegateForColumn(column, delegate);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QAbstractItemView_itemDelegateForColumn(QAbstractItemView const * this_ptr, int column) {
  return this_ptr->itemDelegateForColumn(column);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QAbstractItemView_itemDelegate1(QAbstractItemView const * this_ptr, QModelIndex const * index) {
  return this_ptr->itemDelegate(*index);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QAbstractItemView_itemDelegateForIndex(QAbstractItemView const * this_ptr, QModelIndex const * index) {
  return this_ptr->itemDelegateForIndex(*index);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QAbstractItemView_inputMethodQuery(QAbstractItemView const * this_ptr, Qt::InputMethodQuery query) {
  return new QVariant(this_ptr->inputMethodQuery(query));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_reset(QAbstractItemView * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setRootIndex(QAbstractItemView * this_ptr, QModelIndex const * index) {
  this_ptr->setRootIndex(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_doItemsLayout(QAbstractItemView * this_ptr) {
  this_ptr->doItemsLayout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_selectAll(QAbstractItemView * this_ptr) {
  this_ptr->selectAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_edit(QAbstractItemView * this_ptr, QModelIndex const * index) {
  this_ptr->edit(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_clearSelection(QAbstractItemView * this_ptr) {
  this_ptr->clearSelection();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_setCurrentIndex(QAbstractItemView * this_ptr, QModelIndex const * index) {
  this_ptr->setCurrentIndex(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_scrollToTop(QAbstractItemView * this_ptr) {
  this_ptr->scrollToTop();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_scrollToBottom(QAbstractItemView * this_ptr) {
  this_ptr->scrollToBottom();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractItemView_update(QAbstractItemView * this_ptr, QModelIndex const * index) {
  this_ptr->update(*index);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_QAccessibleWidget_QAccessibleWidget(QWidget * o, QAccessible::Role r) {
  return new QAccessibleWidget(o, r);
}


RITUAL_EXPORT QAccessibleWidget * ctr_qt_widgets_ffi_QAccessibleWidget_QAccessibleWidget1(QWidget * o, QAccessible::Role r, QString const * name) {
  return new QAccessibleWidget(o, r, *name);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAccessibleWidget_isValid(QAccessibleWidget const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QWindow * ctr_qt_widgets_ffi_QAccessibleWidget_window(QAccessibleWidget const * this_ptr) {
  return this_ptr->window();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAccessibleWidget_childCount(QAccessibleWidget const * this_ptr) {
  return this_ptr->childCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QAccessibleWidget_indexOfChild(QAccessibleWidget const * this_ptr, QAccessibleInterface const * child) {
  return this_ptr->indexOfChild(child);
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_widgets_ffi_QAccessibleWidget_focusChild(QAccessibleWidget const * this_ptr) {
  return this_ptr->focusChild();
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QAccessibleWidget_rect(QAccessibleWidget const * this_ptr) {
  return new QRect(this_ptr->rect());
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_widgets_ffi_QAccessibleWidget_parent(QAccessibleWidget const * this_ptr) {
  return this_ptr->parent();
}


RITUAL_EXPORT QAccessibleInterface * ctr_qt_widgets_ffi_QAccessibleWidget_child(QAccessibleWidget const * this_ptr, int index) {
  return this_ptr->child(index);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QAccessibleWidget_text(QAccessibleWidget const * this_ptr, QAccessible::Text t) {
  return new QString(this_ptr->text(t));
}


RITUAL_EXPORT QAccessible::Role ctr_qt_widgets_ffi_QAccessibleWidget_role(QAccessibleWidget const * this_ptr) {
  return this_ptr->role();
}


RITUAL_EXPORT QAccessible::State * ctr_qt_widgets_ffi_QAccessibleWidget_state(QAccessibleWidget const * this_ptr) {
  return new QAccessible::State(this_ptr->state());
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QAccessibleWidget_foregroundColor(QAccessibleWidget const * this_ptr) {
  return new QColor(this_ptr->foregroundColor());
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QAccessibleWidget_backgroundColor(QAccessibleWidget const * this_ptr) {
  return new QColor(this_ptr->backgroundColor());
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAccessibleWidget_interface_cast(QAccessibleWidget * this_ptr, QAccessible::InterfaceType t) {
  return this_ptr->interface_cast(t);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QAccessibleWidget_actionNames(QAccessibleWidget const * this_ptr) {
  return new QList< QString >(this_ptr->actionNames());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAccessibleWidget_doAction(QAccessibleWidget * this_ptr, QString const * actionName) {
  this_ptr->doAction(*actionName);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QAccessibleWidget_keyBindingsForAction(QAccessibleWidget const * this_ptr, QString const * actionName) {
  return new QList< QString >(this_ptr->keyBindingsForAction(*actionName));
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_QAccessibleWidgetV2_QAccessibleWidgetV2(QWidget * object, QAccessible::Role role) {
  return new QAccessibleWidgetV2(object, role);
}


RITUAL_EXPORT QAccessibleWidgetV2 * ctr_qt_widgets_ffi_QAccessibleWidgetV2_QAccessibleWidgetV21(QWidget * object, QAccessible::Role role, QString const * name) {
  return new QAccessibleWidgetV2(object, role, *name);
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QAccessibleWidgetV2_interface_cast(QAccessibleWidgetV2 * this_ptr, QAccessible::InterfaceType t) {
  return this_ptr->interface_cast(t);
}


RITUAL_EXPORT QList< QAccessible::Attribute > * ctr_qt_widgets_ffi_QAccessibleWidgetV2_attributeKeys(QAccessibleWidgetV2 const * this_ptr) {
  return new QList< QAccessible::Attribute >(this_ptr->attributeKeys());
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QAccessibleWidgetV2_attributeValue(QAccessibleWidgetV2 const * this_ptr, QAccessible::Attribute key) {
  return new QVariant(this_ptr->attributeValue(key));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QApplication_metaObject(QApplication const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QApplication_qt_metacast(QApplication * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_qt_metacall(QApplication * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QApplication_tr(char const * s, char const * c, int n) {
  return new QString(QApplication::tr(s, c, n));
}


RITUAL_EXPORT QApplication * ctr_qt_widgets_ffi_QApplication_QApplication(int * argc, char * * argv, int arg3) {
  return new QApplication(*argc, argv, arg3);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_dQApplication(QApplication * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QApplication_style() {
  return QApplication::style();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setStyle(QStyle * arg1) {
  QApplication::setStyle(arg1);
}


RITUAL_EXPORT QStyle * ctr_qt_widgets_ffi_QApplication_setStyle1(QString const * arg1) {
  return QApplication::setStyle(*arg1);
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QApplication_palette(QWidget const * arg1) {
  return new QPalette(QApplication::palette(arg1));
}


RITUAL_EXPORT QPalette * ctr_qt_widgets_ffi_QApplication_palette1(char const * className) {
  return new QPalette(QApplication::palette(className));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setPalette(QPalette const * arg1, char const * className) {
  QApplication::setPalette(*arg1, className);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QApplication_font() {
  return new QFont(QApplication::font());
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QApplication_font1(QWidget const * arg1) {
  return new QFont(QApplication::font(arg1));
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QApplication_font2(char const * className) {
  return new QFont(QApplication::font(className));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setFont(QFont const * arg1, char const * className) {
  QApplication::setFont(*arg1, className);
}


RITUAL_EXPORT QFontMetrics * ctr_qt_widgets_ffi_QApplication_fontMetrics() {
  return new QFontMetrics(QApplication::fontMetrics());
}


RITUAL_EXPORT QList< QWidget * > * ctr_qt_widgets_ffi_QApplication_allWidgets() {
  return new QList< QWidget * >(QApplication::allWidgets());
}


RITUAL_EXPORT QList< QWidget * > * ctr_qt_widgets_ffi_QApplication_topLevelWidgets() {
  return new QList< QWidget * >(QApplication::topLevelWidgets());
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_activePopupWidget() {
  return QApplication::activePopupWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_activeModalWidget() {
  return QApplication::activeModalWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_focusWidget() {
  return QApplication::focusWidget();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_activeWindow() {
  return QApplication::activeWindow();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setActiveWindow(QWidget * act) {
  QApplication::setActiveWindow(act);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_widgetAt(QPoint const * p) {
  return QApplication::widgetAt(*p);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_widgetAt1(int x, int y) {
  return QApplication::widgetAt(x, y);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_topLevelAt(QPoint const * p) {
  return QApplication::topLevelAt(*p);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QApplication_topLevelAt1(int x, int y) {
  return QApplication::topLevelAt(x, y);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_beep() {
  QApplication::beep();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_alert(QWidget * widget, int duration) {
  QApplication::alert(widget, duration);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setCursorFlashTime(int arg1) {
  QApplication::setCursorFlashTime(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_cursorFlashTime() {
  return QApplication::cursorFlashTime();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setDoubleClickInterval(int arg1) {
  QApplication::setDoubleClickInterval(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_doubleClickInterval() {
  return QApplication::doubleClickInterval();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setKeyboardInputInterval(int arg1) {
  QApplication::setKeyboardInputInterval(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_keyboardInputInterval() {
  return QApplication::keyboardInputInterval();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setWheelScrollLines(int arg1) {
  QApplication::setWheelScrollLines(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_wheelScrollLines() {
  return QApplication::wheelScrollLines();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setStartDragTime(int ms) {
  QApplication::setStartDragTime(ms);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_startDragTime() {
  return QApplication::startDragTime();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setStartDragDistance(int l) {
  QApplication::setStartDragDistance(l);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_startDragDistance() {
  return QApplication::startDragDistance();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QApplication_isEffectEnabled(Qt::UIEffect arg1) {
  return QApplication::isEffectEnabled(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setEffectEnabled(Qt::UIEffect arg1, bool enable) {
  QApplication::setEffectEnabled(arg1, enable);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QApplication_exec() {
  return QApplication::exec();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QApplication_notify(QApplication * this_ptr, QObject * arg1, QEvent * arg2) {
  return this_ptr->notify(arg1, arg2);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QApplication_styleSheet(QApplication const * this_ptr) {
  return new QString(this_ptr->styleSheet());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QApplication_autoSipEnabled(QApplication const * this_ptr) {
  return this_ptr->autoSipEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setStyleSheet(QApplication * this_ptr, QString const * sheet) {
  this_ptr->setStyleSheet(*sheet);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_setAutoSipEnabled(QApplication * this_ptr, bool enabled) {
  this_ptr->setAutoSipEnabled(enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_closeAllWindows() {
  QApplication::closeAllWindows();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QApplication_aboutQt() {
  QApplication::aboutQt();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayoutItem_dQLayoutItem(QLayoutItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayoutItem_sizeHint(QLayoutItem const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayoutItem_minimumSize(QLayoutItem const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayoutItem_maximumSize(QLayoutItem const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayoutItem_expandingDirections(QLayoutItem const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayoutItem_setGeometry(QLayoutItem * this_ptr, QRect const * arg1) {
  this_ptr->setGeometry(*arg1);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QLayoutItem_geometry(QLayoutItem const * this_ptr) {
  return new QRect(this_ptr->geometry());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLayoutItem_isEmpty(QLayoutItem const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLayoutItem_hasHeightForWidth(QLayoutItem const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayoutItem_heightForWidth(QLayoutItem const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayoutItem_minimumHeightForWidth(QLayoutItem const * this_ptr, int arg1) {
  return this_ptr->minimumHeightForWidth(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayoutItem_invalidate(QLayoutItem * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QLayoutItem_widget(QLayoutItem const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_QLayoutItem_layout(QLayoutItem * this_ptr) {
  return this_ptr->layout();
}


RITUAL_EXPORT QSpacerItem * ctr_qt_widgets_ffi_QLayoutItem_spacerItem(QLayoutItem * this_ptr) {
  return this_ptr->spacerItem();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayoutItem_alignment(QLayoutItem const * this_ptr) {
  return int(this_ptr->alignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayoutItem_setAlignment(QLayoutItem * this_ptr, int a) {
  this_ptr->setAlignment(QFlags< Qt::AlignmentFlag >(a));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayoutItem_controlTypes(QLayoutItem const * this_ptr) {
  return int(this_ptr->controlTypes());
}


RITUAL_EXPORT QSpacerItem * ctr_qt_widgets_ffi_QSpacerItem_QSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  return new QSpacerItem(w, h, hData, vData);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpacerItem_dQSpacerItem(QSpacerItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpacerItem_changeSize(QSpacerItem * this_ptr, int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  this_ptr->changeSize(w, h, hData, vData);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSpacerItem_sizeHint(QSpacerItem const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSpacerItem_minimumSize(QSpacerItem const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QSpacerItem_maximumSize(QSpacerItem const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSpacerItem_expandingDirections(QSpacerItem const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QSpacerItem_isEmpty(QSpacerItem const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSpacerItem_setGeometry(QSpacerItem * this_ptr, QRect const * arg1) {
  this_ptr->setGeometry(*arg1);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QSpacerItem_geometry(QSpacerItem const * this_ptr) {
  return new QRect(this_ptr->geometry());
}


RITUAL_EXPORT QSpacerItem * ctr_qt_widgets_ffi_QSpacerItem_spacerItem(QSpacerItem * this_ptr) {
  return this_ptr->spacerItem();
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QSpacerItem_sizePolicy(QSpacerItem const * this_ptr) {
  return new QSizePolicy(this_ptr->sizePolicy());
}


RITUAL_EXPORT QWidgetItem * ctr_qt_widgets_ffi_QWidgetItem_QWidgetItem(QWidget * w) {
  return new QWidgetItem(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidgetItem_dQWidgetItem(QWidgetItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidgetItem_sizeHint(QWidgetItem const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidgetItem_minimumSize(QWidgetItem const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QWidgetItem_maximumSize(QWidgetItem const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidgetItem_expandingDirections(QWidgetItem const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidgetItem_isEmpty(QWidgetItem const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QWidgetItem_setGeometry(QWidgetItem * this_ptr, QRect const * arg1) {
  this_ptr->setGeometry(*arg1);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QWidgetItem_geometry(QWidgetItem const * this_ptr) {
  return new QRect(this_ptr->geometry());
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QWidgetItem_widget(QWidgetItem const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QWidgetItem_hasHeightForWidth(QWidgetItem const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidgetItem_heightForWidth(QWidgetItem const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidgetItem_minimumHeightForWidth(QWidgetItem const * this_ptr, int arg1) {
  return this_ptr->minimumHeightForWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QWidgetItem_controlTypes(QWidgetItem const * this_ptr) {
  return int(this_ptr->controlTypes());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QLayout_metaObject(QLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QLayout_qt_metacast(QLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_qt_metacall(QLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QLayout_tr(char const * s, char const * c, int n) {
  return new QString(QLayout::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_dQLayout(QLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_spacing(QLayout const * this_ptr) {
  return this_ptr->spacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setSpacing(QLayout * this_ptr, int arg1) {
  this_ptr->setSpacing(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setContentsMargins(QLayout * this_ptr, int left, int top, int right, int bottom) {
  this_ptr->setContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setContentsMargins1(QLayout * this_ptr, QMargins const * margins) {
  this_ptr->setContentsMargins(*margins);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_unsetContentsMargins(QLayout * this_ptr) {
  this_ptr->unsetContentsMargins();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_getContentsMargins(QLayout const * this_ptr, int * left, int * top, int * right, int * bottom) {
  this_ptr->getContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT QMargins * ctr_qt_widgets_ffi_QLayout_contentsMargins(QLayout const * this_ptr) {
  return new QMargins(this_ptr->contentsMargins());
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QLayout_contentsRect(QLayout const * this_ptr) {
  return new QRect(this_ptr->contentsRect());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLayout_setAlignment(QLayout * this_ptr, QWidget * w, int alignment) {
  return this_ptr->setAlignment(w, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLayout_setAlignment1(QLayout * this_ptr, QLayout * l, int alignment) {
  return this_ptr->setAlignment(l, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setSizeConstraint(QLayout * this_ptr, QLayout::SizeConstraint constraint) {
  this_ptr->setSizeConstraint(constraint);
}


RITUAL_EXPORT QLayout::SizeConstraint ctr_qt_widgets_ffi_QLayout_sizeConstraint(QLayout const * this_ptr) {
  return this_ptr->sizeConstraint();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setSizeConstraints(QLayout * this_ptr, QLayout::SizeConstraint horizontal, QLayout::SizeConstraint vertical) {
  this_ptr->setSizeConstraints(horizontal, vertical);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setHorizontalSizeConstraint(QLayout * this_ptr, QLayout::SizeConstraint constraint) {
  this_ptr->setHorizontalSizeConstraint(constraint);
}


RITUAL_EXPORT QLayout::SizeConstraint ctr_qt_widgets_ffi_QLayout_horizontalSizeConstraint(QLayout const * this_ptr) {
  return this_ptr->horizontalSizeConstraint();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setVerticalSizeConstraint(QLayout * this_ptr, QLayout::SizeConstraint constraint) {
  this_ptr->setVerticalSizeConstraint(constraint);
}


RITUAL_EXPORT QLayout::SizeConstraint ctr_qt_widgets_ffi_QLayout_verticalSizeConstraint(QLayout const * this_ptr) {
  return this_ptr->verticalSizeConstraint();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setMenuBar(QLayout * this_ptr, QWidget * w) {
  this_ptr->setMenuBar(w);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QLayout_menuBar(QLayout const * this_ptr) {
  return this_ptr->menuBar();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QLayout_parentWidget(QLayout const * this_ptr) {
  return this_ptr->parentWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_invalidate(QLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QLayout_geometry(QLayout const * this_ptr) {
  return new QRect(this_ptr->geometry());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLayout_activate(QLayout * this_ptr) {
  return this_ptr->activate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_update(QLayout * this_ptr) {
  this_ptr->update();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_addWidget(QLayout * this_ptr, QWidget * w) {
  this_ptr->addWidget(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_addItem(QLayout * this_ptr, QLayoutItem * arg1) {
  this_ptr->addItem(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_removeWidget(QLayout * this_ptr, QWidget * w) {
  this_ptr->removeWidget(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_removeItem(QLayout * this_ptr, QLayoutItem * arg1) {
  this_ptr->removeItem(arg1);
}


} // extern "C"
