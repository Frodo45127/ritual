#include "qt_widgets_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_expandingDirections(QLayout const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayout_minimumSize(QLayout const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayout_maximumSize(QLayout const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setGeometry(QLayout * this_ptr, QRect const * arg1) {
  this_ptr->setGeometry(*arg1);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QLayout_itemAt(QLayout const * this_ptr, int index) {
  return this_ptr->itemAt(index);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QLayout_takeAt(QLayout * this_ptr, int index) {
  return this_ptr->takeAt(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_indexOf(QLayout const * this_ptr, QWidget const * arg1) {
  return this_ptr->indexOf(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_indexOf1(QLayout const * this_ptr, QLayoutItem const * arg1) {
  return this_ptr->indexOf(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_count(QLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLayout_isEmpty(QLayout const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_controlTypes(QLayout const * this_ptr) {
  return int(this_ptr->controlTypes());
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QLayout_replaceWidget(QLayout * this_ptr, QWidget * from, QWidget * to, int options) {
  return this_ptr->replaceWidget(from, to, QFlags< Qt::FindChildOption >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_totalMinimumHeightForWidth(QLayout const * this_ptr, int w) {
  return this_ptr->totalMinimumHeightForWidth(w);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QLayout_totalHeightForWidth(QLayout const * this_ptr, int w) {
  return this_ptr->totalHeightForWidth(w);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayout_totalMinimumSize(QLayout const * this_ptr) {
  return new QSize(this_ptr->totalMinimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayout_totalMaximumSize(QLayout const * this_ptr) {
  return new QSize(this_ptr->totalMaximumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayout_totalSizeHint(QLayout const * this_ptr) {
  return new QSize(this_ptr->totalSizeHint());
}


RITUAL_EXPORT QLayout * ctr_qt_widgets_ffi_QLayout_layout(QLayout * this_ptr) {
  return this_ptr->layout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QLayout_setEnabled(QLayout * this_ptr, bool arg1) {
  this_ptr->setEnabled(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QLayout_isEnabled(QLayout const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QLayout_closestAcceptableSize(QWidget const * w, QSize const * s) {
  return new QSize(QLayout::closestAcceptableSize(w, *s));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGridLayout_metaObject(QGridLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGridLayout_qt_metacast(QGridLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_qt_metacall(QGridLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGridLayout_tr(char const * s, char const * c, int n) {
  return new QString(QGridLayout::tr(s, c, n));
}


RITUAL_EXPORT QGridLayout * ctr_qt_widgets_ffi_QGridLayout_QGridLayout(QWidget * parent) {
  return new QGridLayout(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_dQGridLayout(QGridLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QGridLayout_sizeHint(QGridLayout const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QGridLayout_minimumSize(QGridLayout const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QGridLayout_maximumSize(QGridLayout const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setHorizontalSpacing(QGridLayout * this_ptr, int spacing) {
  this_ptr->setHorizontalSpacing(spacing);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_horizontalSpacing(QGridLayout const * this_ptr) {
  return this_ptr->horizontalSpacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setVerticalSpacing(QGridLayout * this_ptr, int spacing) {
  this_ptr->setVerticalSpacing(spacing);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_verticalSpacing(QGridLayout const * this_ptr) {
  return this_ptr->verticalSpacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setSpacing(QGridLayout * this_ptr, int spacing) {
  this_ptr->setSpacing(spacing);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_spacing(QGridLayout const * this_ptr) {
  return this_ptr->spacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setRowStretch(QGridLayout * this_ptr, int row, int stretch) {
  this_ptr->setRowStretch(row, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setColumnStretch(QGridLayout * this_ptr, int column, int stretch) {
  this_ptr->setColumnStretch(column, stretch);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_rowStretch(QGridLayout const * this_ptr, int row) {
  return this_ptr->rowStretch(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_columnStretch(QGridLayout const * this_ptr, int column) {
  return this_ptr->columnStretch(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setRowMinimumHeight(QGridLayout * this_ptr, int row, int minSize) {
  this_ptr->setRowMinimumHeight(row, minSize);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setColumnMinimumWidth(QGridLayout * this_ptr, int column, int minSize) {
  this_ptr->setColumnMinimumWidth(column, minSize);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_rowMinimumHeight(QGridLayout const * this_ptr, int row) {
  return this_ptr->rowMinimumHeight(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_columnMinimumWidth(QGridLayout const * this_ptr, int column) {
  return this_ptr->columnMinimumWidth(column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_columnCount(QGridLayout const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_rowCount(QGridLayout const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QGridLayout_cellRect(QGridLayout const * this_ptr, int row, int column) {
  return new QRect(this_ptr->cellRect(row, column));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGridLayout_hasHeightForWidth(QGridLayout const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_heightForWidth(QGridLayout const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_minimumHeightForWidth(QGridLayout const * this_ptr, int arg1) {
  return this_ptr->minimumHeightForWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_expandingDirections(QGridLayout const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_invalidate(QGridLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_addWidget(QGridLayout * this_ptr, QWidget * w) {
  this_ptr->addWidget(w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_addWidget1(QGridLayout * this_ptr, QWidget * arg1, int row, int column, int arg4) {
  this_ptr->addWidget(arg1, row, column, QFlags< Qt::AlignmentFlag >(arg4));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_addWidget2(QGridLayout * this_ptr, QWidget * arg1, int row, int column, int rowSpan, int columnSpan, int arg6) {
  this_ptr->addWidget(arg1, row, column, rowSpan, columnSpan, QFlags< Qt::AlignmentFlag >(arg6));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_addLayout(QGridLayout * this_ptr, QLayout * arg1, int row, int column, int arg4) {
  this_ptr->addLayout(arg1, row, column, QFlags< Qt::AlignmentFlag >(arg4));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_addLayout1(QGridLayout * this_ptr, QLayout * arg1, int row, int column, int rowSpan, int columnSpan, int arg6) {
  this_ptr->addLayout(arg1, row, column, rowSpan, columnSpan, QFlags< Qt::AlignmentFlag >(arg6));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setOriginCorner(QGridLayout * this_ptr, Qt::Corner arg1) {
  this_ptr->setOriginCorner(arg1);
}


RITUAL_EXPORT Qt::Corner ctr_qt_widgets_ffi_QGridLayout_originCorner(QGridLayout const * this_ptr) {
  return this_ptr->originCorner();
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QGridLayout_itemAt(QGridLayout const * this_ptr, int index) {
  return this_ptr->itemAt(index);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QGridLayout_itemAtPosition(QGridLayout const * this_ptr, int row, int column) {
  return this_ptr->itemAtPosition(row, column);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QGridLayout_takeAt(QGridLayout * this_ptr, int index) {
  return this_ptr->takeAt(index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGridLayout_count(QGridLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setGeometry(QGridLayout * this_ptr, QRect const * arg1) {
  this_ptr->setGeometry(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_addItem(QGridLayout * this_ptr, QLayoutItem * item, int row, int column, int rowSpan, int columnSpan, int arg6) {
  this_ptr->addItem(item, row, column, rowSpan, columnSpan, QFlags< Qt::AlignmentFlag >(arg6));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_setDefaultPositioning(QGridLayout * this_ptr, int n, Qt::Orientation orient) {
  this_ptr->setDefaultPositioning(n, orient);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGridLayout_getItemPosition(QGridLayout const * this_ptr, int idx, int * row, int * column, int * rowSpan, int * columnSpan) {
  this_ptr->getItemPosition(idx, row, column, rowSpan, columnSpan);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QBoxLayout_metaObject(QBoxLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QBoxLayout_qt_metacast(QBoxLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QBoxLayout_qt_metacall(QBoxLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QBoxLayout_tr(char const * s, char const * c, int n) {
  return new QString(QBoxLayout::tr(s, c, n));
}


RITUAL_EXPORT QBoxLayout * ctr_qt_widgets_ffi_QBoxLayout_QBoxLayout(QBoxLayout::Direction arg1, QWidget * parent) {
  return new QBoxLayout(arg1, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_dQBoxLayout(QBoxLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QBoxLayout::Direction ctr_qt_widgets_ffi_QBoxLayout_direction(QBoxLayout const * this_ptr) {
  return this_ptr->direction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_setDirection(QBoxLayout * this_ptr, QBoxLayout::Direction arg1) {
  this_ptr->setDirection(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_addSpacing(QBoxLayout * this_ptr, int size) {
  this_ptr->addSpacing(size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_addStretch(QBoxLayout * this_ptr, int stretch) {
  this_ptr->addStretch(stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_addSpacerItem(QBoxLayout * this_ptr, QSpacerItem * spacerItem) {
  this_ptr->addSpacerItem(spacerItem);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_addWidget(QBoxLayout * this_ptr, QWidget * arg1, int stretch, int alignment) {
  this_ptr->addWidget(arg1, stretch, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_addLayout(QBoxLayout * this_ptr, QLayout * layout, int stretch) {
  this_ptr->addLayout(layout, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_addStrut(QBoxLayout * this_ptr, int arg1) {
  this_ptr->addStrut(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_addItem(QBoxLayout * this_ptr, QLayoutItem * arg1) {
  this_ptr->addItem(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_insertSpacing(QBoxLayout * this_ptr, int index, int size) {
  this_ptr->insertSpacing(index, size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_insertStretch(QBoxLayout * this_ptr, int index, int stretch) {
  this_ptr->insertStretch(index, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_insertSpacerItem(QBoxLayout * this_ptr, int index, QSpacerItem * spacerItem) {
  this_ptr->insertSpacerItem(index, spacerItem);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_insertWidget(QBoxLayout * this_ptr, int index, QWidget * widget, int stretch, int alignment) {
  this_ptr->insertWidget(index, widget, stretch, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_insertLayout(QBoxLayout * this_ptr, int index, QLayout * layout, int stretch) {
  this_ptr->insertLayout(index, layout, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_insertItem(QBoxLayout * this_ptr, int index, QLayoutItem * arg2) {
  this_ptr->insertItem(index, arg2);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QBoxLayout_spacing(QBoxLayout const * this_ptr) {
  return this_ptr->spacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_setSpacing(QBoxLayout * this_ptr, int spacing) {
  this_ptr->setSpacing(spacing);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QBoxLayout_setStretchFactor(QBoxLayout * this_ptr, QWidget * w, int stretch) {
  return this_ptr->setStretchFactor(w, stretch);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QBoxLayout_setStretchFactor1(QBoxLayout * this_ptr, QLayout * l, int stretch) {
  return this_ptr->setStretchFactor(l, stretch);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_setStretch(QBoxLayout * this_ptr, int index, int stretch) {
  this_ptr->setStretch(index, stretch);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QBoxLayout_stretch(QBoxLayout const * this_ptr, int index) {
  return this_ptr->stretch(index);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QBoxLayout_sizeHint(QBoxLayout const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QBoxLayout_minimumSize(QBoxLayout const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QBoxLayout_maximumSize(QBoxLayout const * this_ptr) {
  return new QSize(this_ptr->maximumSize());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QBoxLayout_hasHeightForWidth(QBoxLayout const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QBoxLayout_heightForWidth(QBoxLayout const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QBoxLayout_minimumHeightForWidth(QBoxLayout const * this_ptr, int arg1) {
  return this_ptr->minimumHeightForWidth(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QBoxLayout_expandingDirections(QBoxLayout const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_invalidate(QBoxLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QBoxLayout_itemAt(QBoxLayout const * this_ptr, int arg1) {
  return this_ptr->itemAt(arg1);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QBoxLayout_takeAt(QBoxLayout * this_ptr, int arg1) {
  return this_ptr->takeAt(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QBoxLayout_count(QBoxLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QBoxLayout_setGeometry(QBoxLayout * this_ptr, QRect const * arg1) {
  this_ptr->setGeometry(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QHBoxLayout_metaObject(QHBoxLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QHBoxLayout_qt_metacast(QHBoxLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QHBoxLayout_qt_metacall(QHBoxLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QHBoxLayout_tr(char const * s, char const * c, int n) {
  return new QString(QHBoxLayout::tr(s, c, n));
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_QHBoxLayout_QHBoxLayout() {
  return new QHBoxLayout();
}


RITUAL_EXPORT QHBoxLayout * ctr_qt_widgets_ffi_QHBoxLayout_QHBoxLayout1(QWidget * parent) {
  return new QHBoxLayout(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QHBoxLayout_dQHBoxLayout(QHBoxLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QVBoxLayout_metaObject(QVBoxLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QVBoxLayout_qt_metacast(QVBoxLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QVBoxLayout_qt_metacall(QVBoxLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QVBoxLayout_tr(char const * s, char const * c, int n) {
  return new QString(QVBoxLayout::tr(s, c, n));
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_QVBoxLayout_QVBoxLayout() {
  return new QVBoxLayout();
}


RITUAL_EXPORT QVBoxLayout * ctr_qt_widgets_ffi_QVBoxLayout_QVBoxLayout1(QWidget * parent) {
  return new QVBoxLayout(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QVBoxLayout_dQVBoxLayout(QVBoxLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QButtonGroup_metaObject(QButtonGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QButtonGroup_qt_metacast(QButtonGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QButtonGroup_qt_metacall(QButtonGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QButtonGroup_tr(char const * s, char const * c, int n) {
  return new QString(QButtonGroup::tr(s, c, n));
}


RITUAL_EXPORT QButtonGroup * ctr_qt_widgets_ffi_QButtonGroup_QButtonGroup(QObject * parent) {
  return new QButtonGroup(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QButtonGroup_dQButtonGroup(QButtonGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QButtonGroup_setExclusive(QButtonGroup * this_ptr, bool arg1) {
  this_ptr->setExclusive(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QButtonGroup_exclusive(QButtonGroup const * this_ptr) {
  return this_ptr->exclusive();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QButtonGroup_addButton(QButtonGroup * this_ptr, QAbstractButton * arg1, int id) {
  this_ptr->addButton(arg1, id);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QButtonGroup_removeButton(QButtonGroup * this_ptr, QAbstractButton * arg1) {
  this_ptr->removeButton(arg1);
}


RITUAL_EXPORT QList< QAbstractButton * > * ctr_qt_widgets_ffi_QButtonGroup_buttons(QButtonGroup const * this_ptr) {
  return new QList< QAbstractButton * >(this_ptr->buttons());
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_QButtonGroup_checkedButton(QButtonGroup const * this_ptr) {
  return this_ptr->checkedButton();
}


RITUAL_EXPORT QAbstractButton * ctr_qt_widgets_ffi_QButtonGroup_button(QButtonGroup const * this_ptr, int id) {
  return this_ptr->button(id);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QButtonGroup_setId(QButtonGroup * this_ptr, QAbstractButton * button, int id) {
  this_ptr->setId(button, id);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QButtonGroup_id(QButtonGroup const * this_ptr, QAbstractButton * button) {
  return this_ptr->id(button);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QButtonGroup_checkedId(QButtonGroup const * this_ptr) {
  return this_ptr->checkedId();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCalendarWidget_metaObject(QCalendarWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QCalendarWidget_qt_metacast(QCalendarWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCalendarWidget_qt_metacall(QCalendarWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCalendarWidget_tr(char const * s, char const * c, int n) {
  return new QString(QCalendarWidget::tr(s, c, n));
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_QCalendarWidget_QCalendarWidget(QWidget * parent) {
  return new QCalendarWidget(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_dQCalendarWidget(QCalendarWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QCalendarWidget_sizeHint(QCalendarWidget const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QCalendarWidget_minimumSizeHint(QCalendarWidget const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT QDate * ctr_qt_widgets_ffi_QCalendarWidget_selectedDate(QCalendarWidget const * this_ptr) {
  return new QDate(this_ptr->selectedDate());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCalendarWidget_yearShown(QCalendarWidget const * this_ptr) {
  return this_ptr->yearShown();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCalendarWidget_monthShown(QCalendarWidget const * this_ptr) {
  return this_ptr->monthShown();
}


RITUAL_EXPORT QDate * ctr_qt_widgets_ffi_QCalendarWidget_minimumDate(QCalendarWidget const * this_ptr) {
  return new QDate(this_ptr->minimumDate());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setMinimumDate(QCalendarWidget * this_ptr, QDate const * date) {
  this_ptr->setMinimumDate(*date);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_clearMinimumDate(QCalendarWidget * this_ptr) {
  this_ptr->clearMinimumDate();
}


RITUAL_EXPORT QDate * ctr_qt_widgets_ffi_QCalendarWidget_maximumDate(QCalendarWidget const * this_ptr) {
  return new QDate(this_ptr->maximumDate());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setMaximumDate(QCalendarWidget * this_ptr, QDate const * date) {
  this_ptr->setMaximumDate(*date);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_clearMaximumDate(QCalendarWidget * this_ptr) {
  this_ptr->clearMaximumDate();
}


RITUAL_EXPORT Qt::DayOfWeek ctr_qt_widgets_ffi_QCalendarWidget_firstDayOfWeek(QCalendarWidget const * this_ptr) {
  return this_ptr->firstDayOfWeek();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setFirstDayOfWeek(QCalendarWidget * this_ptr, Qt::DayOfWeek dayOfWeek) {
  this_ptr->setFirstDayOfWeek(dayOfWeek);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QCalendarWidget_isNavigationBarVisible(QCalendarWidget const * this_ptr) {
  return this_ptr->isNavigationBarVisible();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QCalendarWidget_isGridVisible(QCalendarWidget const * this_ptr) {
  return this_ptr->isGridVisible();
}


RITUAL_EXPORT QCalendar * ctr_qt_widgets_ffi_QCalendarWidget_calendar(QCalendarWidget const * this_ptr) {
  return new QCalendar(this_ptr->calendar());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setCalendar(QCalendarWidget * this_ptr, QCalendar const * calendar) {
  this_ptr->setCalendar(*calendar);
}


RITUAL_EXPORT QCalendarWidget::SelectionMode ctr_qt_widgets_ffi_QCalendarWidget_selectionMode(QCalendarWidget const * this_ptr) {
  return this_ptr->selectionMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setSelectionMode(QCalendarWidget * this_ptr, QCalendarWidget::SelectionMode mode) {
  this_ptr->setSelectionMode(mode);
}


RITUAL_EXPORT QCalendarWidget::HorizontalHeaderFormat ctr_qt_widgets_ffi_QCalendarWidget_horizontalHeaderFormat(QCalendarWidget const * this_ptr) {
  return this_ptr->horizontalHeaderFormat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setHorizontalHeaderFormat(QCalendarWidget * this_ptr, QCalendarWidget::HorizontalHeaderFormat format) {
  this_ptr->setHorizontalHeaderFormat(format);
}


RITUAL_EXPORT QCalendarWidget::VerticalHeaderFormat ctr_qt_widgets_ffi_QCalendarWidget_verticalHeaderFormat(QCalendarWidget const * this_ptr) {
  return this_ptr->verticalHeaderFormat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setVerticalHeaderFormat(QCalendarWidget * this_ptr, QCalendarWidget::VerticalHeaderFormat format) {
  this_ptr->setVerticalHeaderFormat(format);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_widgets_ffi_QCalendarWidget_headerTextFormat(QCalendarWidget const * this_ptr) {
  return new QTextCharFormat(this_ptr->headerTextFormat());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setHeaderTextFormat(QCalendarWidget * this_ptr, QTextCharFormat const * format) {
  this_ptr->setHeaderTextFormat(*format);
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_widgets_ffi_QCalendarWidget_weekdayTextFormat(QCalendarWidget const * this_ptr, Qt::DayOfWeek dayOfWeek) {
  return new QTextCharFormat(this_ptr->weekdayTextFormat(dayOfWeek));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setWeekdayTextFormat(QCalendarWidget * this_ptr, Qt::DayOfWeek dayOfWeek, QTextCharFormat const * format) {
  this_ptr->setWeekdayTextFormat(dayOfWeek, *format);
}


RITUAL_EXPORT QMap< QDate, QTextCharFormat > * ctr_qt_widgets_ffi_QCalendarWidget_dateTextFormat(QCalendarWidget const * this_ptr) {
  return new QMap< QDate, QTextCharFormat >(this_ptr->dateTextFormat());
}


RITUAL_EXPORT QTextCharFormat * ctr_qt_widgets_ffi_QCalendarWidget_dateTextFormat1(QCalendarWidget const * this_ptr, QDate const * date) {
  return new QTextCharFormat(this_ptr->dateTextFormat(*date));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setDateTextFormat(QCalendarWidget * this_ptr, QDate const * date, QTextCharFormat const * format) {
  this_ptr->setDateTextFormat(*date, *format);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QCalendarWidget_isDateEditEnabled(QCalendarWidget const * this_ptr) {
  return this_ptr->isDateEditEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setDateEditEnabled(QCalendarWidget * this_ptr, bool enable) {
  this_ptr->setDateEditEnabled(enable);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCalendarWidget_dateEditAcceptDelay(QCalendarWidget const * this_ptr) {
  return this_ptr->dateEditAcceptDelay();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setDateEditAcceptDelay(QCalendarWidget * this_ptr, int delay) {
  this_ptr->setDateEditAcceptDelay(delay);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setSelectedDate(QCalendarWidget * this_ptr, QDate const * date) {
  this_ptr->setSelectedDate(*date);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setDateRange(QCalendarWidget * this_ptr, QDate const * min, QDate const * max) {
  this_ptr->setDateRange(*min, *max);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setCurrentPage(QCalendarWidget * this_ptr, int year, int month) {
  this_ptr->setCurrentPage(year, month);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setGridVisible(QCalendarWidget * this_ptr, bool show) {
  this_ptr->setGridVisible(show);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_setNavigationBarVisible(QCalendarWidget * this_ptr, bool visible) {
  this_ptr->setNavigationBarVisible(visible);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_showNextMonth(QCalendarWidget * this_ptr) {
  this_ptr->showNextMonth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_showPreviousMonth(QCalendarWidget * this_ptr) {
  this_ptr->showPreviousMonth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_showNextYear(QCalendarWidget * this_ptr) {
  this_ptr->showNextYear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_showPreviousYear(QCalendarWidget * this_ptr) {
  this_ptr->showPreviousYear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_showSelectedDate(QCalendarWidget * this_ptr) {
  this_ptr->showSelectedDate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCalendarWidget_showToday(QCalendarWidget * this_ptr) {
  this_ptr->showToday();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCheckBox_metaObject(QCheckBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QCheckBox_qt_metacast(QCheckBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCheckBox_qt_metacall(QCheckBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCheckBox_tr(char const * s, char const * c, int n) {
  return new QString(QCheckBox::tr(s, c, n));
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_QCheckBox_QCheckBox(QWidget * parent) {
  return new QCheckBox(parent);
}


RITUAL_EXPORT QCheckBox * ctr_qt_widgets_ffi_QCheckBox_QCheckBox1(QString const * text, QWidget * parent) {
  return new QCheckBox(*text, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCheckBox_dQCheckBox(QCheckBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QCheckBox_sizeHint(QCheckBox const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QCheckBox_minimumSizeHint(QCheckBox const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCheckBox_setTristate(QCheckBox * this_ptr, bool y) {
  this_ptr->setTristate(y);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QCheckBox_isTristate(QCheckBox const * this_ptr) {
  return this_ptr->isTristate();
}


RITUAL_EXPORT Qt::CheckState ctr_qt_widgets_ffi_QCheckBox_checkState(QCheckBox const * this_ptr) {
  return this_ptr->checkState();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCheckBox_setCheckState(QCheckBox * this_ptr, Qt::CheckState state) {
  this_ptr->setCheckState(state);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDialog_metaObject(QDialog const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDialog_qt_metacast(QDialog * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDialog_qt_metacall(QDialog * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDialog_tr(char const * s, char const * c, int n) {
  return new QString(QDialog::tr(s, c, n));
}


RITUAL_EXPORT QDialog * ctr_qt_widgets_ffi_QDialog_QDialog(QWidget * parent, int f) {
  return new QDialog(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_dQDialog(QDialog * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDialog_result(QDialog const * this_ptr) {
  return this_ptr->result();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_setVisible(QDialog * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QDialog_sizeHint(QDialog const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QDialog_minimumSizeHint(QDialog const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_setSizeGripEnabled(QDialog * this_ptr, bool arg1) {
  this_ptr->setSizeGripEnabled(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDialog_isSizeGripEnabled(QDialog const * this_ptr) {
  return this_ptr->isSizeGripEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_setModal(QDialog * this_ptr, bool modal) {
  this_ptr->setModal(modal);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_setResult(QDialog * this_ptr, int r) {
  this_ptr->setResult(r);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_open(QDialog * this_ptr) {
  this_ptr->open();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDialog_exec(QDialog * this_ptr) {
  return this_ptr->exec();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_done(QDialog * this_ptr, int arg1) {
  this_ptr->done(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_accept(QDialog * this_ptr) {
  this_ptr->accept();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialog_reject(QDialog * this_ptr) {
  this_ptr->reject();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QColorDialog_metaObject(QColorDialog const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QColorDialog_qt_metacast(QColorDialog * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QColorDialog_qt_metacall(QColorDialog * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QColorDialog_tr(char const * s, char const * c, int n) {
  return new QString(QColorDialog::tr(s, c, n));
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_QColorDialog_QColorDialog(QWidget * parent) {
  return new QColorDialog(parent);
}


RITUAL_EXPORT QColorDialog * ctr_qt_widgets_ffi_QColorDialog_QColorDialog1(QColor const * initial, QWidget * parent) {
  return new QColorDialog(*initial, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_dQColorDialog(QColorDialog * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_setCurrentColor(QColorDialog * this_ptr, QColor const * color) {
  this_ptr->setCurrentColor(*color);
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QColorDialog_currentColor(QColorDialog const * this_ptr) {
  return new QColor(this_ptr->currentColor());
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QColorDialog_selectedColor(QColorDialog const * this_ptr) {
  return new QColor(this_ptr->selectedColor());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_setOption(QColorDialog * this_ptr, QColorDialog::ColorDialogOption option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QColorDialog_testOption(QColorDialog const * this_ptr, QColorDialog::ColorDialogOption option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_setOptions(QColorDialog * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QColorDialog::ColorDialogOption >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QColorDialog_options(QColorDialog const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_open(QColorDialog * this_ptr, QObject * receiver, char const * member) {
  this_ptr->open(receiver, member);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_setVisible(QColorDialog * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QColorDialog_getColor(QColor const * initial, QWidget * parent, QString const * title, int options) {
  return new QColor(QColorDialog::getColor(*initial, parent, *title, QFlags< QColorDialog::ColorDialogOption >(options)));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QColorDialog_customCount() {
  return QColorDialog::customCount();
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QColorDialog_customColor(int index) {
  return new QColor(QColorDialog::customColor(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_setCustomColor(int index, QColor const * color) {
  QColorDialog::setCustomColor(index, *color);
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QColorDialog_standardColor(int index) {
  return new QColor(QColorDialog::standardColor(index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColorDialog_setStandardColor(int index, QColor const * color) {
  QColorDialog::setStandardColor(index, *color);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColormap_initialize() {
  QColormap::initialize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColormap_cleanup() {
  QColormap::cleanup();
}


RITUAL_EXPORT QColormap * ctr_qt_widgets_ffi_QColormap_instance(int screen) {
  return new QColormap(QColormap::instance(screen));
}


RITUAL_EXPORT QColormap * ctr_qt_widgets_ffi_QColormap_QColormap(QColormap const * colormap) {
  return new QColormap(*colormap);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColormap_dQColormap(QColormap * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QColormap * ctr_qt_widgets_ffi_QColormap_operator_(QColormap * this_ptr, QColormap const * colormap) {
  return &this_ptr->operator=(*colormap);
}


RITUAL_EXPORT QColormap::Mode ctr_qt_widgets_ffi_QColormap_mode(QColormap const * this_ptr) {
  return this_ptr->mode();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QColormap_depth(QColormap const * this_ptr) {
  return this_ptr->depth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QColormap_size(QColormap const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT unsigned int ctr_qt_widgets_ffi_QColormap_pixel(QColormap const * this_ptr, QColor const * color) {
  return this_ptr->pixel(*color);
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QColormap_colorAt(QColormap const * this_ptr, unsigned int pixel) {
  return new QColor(this_ptr->colorAt(pixel));
}


RITUAL_EXPORT QList< QColor > * ctr_qt_widgets_ffi_QColormap_colormap(QColormap const * this_ptr) {
  return new QList< QColor >(this_ptr->colormap());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QColumnView_metaObject(QColumnView const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QColumnView_qt_metacast(QColumnView * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QColumnView_qt_metacall(QColumnView * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QColumnView_tr(char const * s, char const * c, int n) {
  return new QString(QColumnView::tr(s, c, n));
}


RITUAL_EXPORT QColumnView * ctr_qt_widgets_ffi_QColumnView_QColumnView(QWidget * parent) {
  return new QColumnView(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_dQColumnView(QColumnView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QColumnView_indexAt(QColumnView const * this_ptr, QPoint const * point) {
  return new QModelIndex(this_ptr->indexAt(*point));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_scrollTo(QColumnView * this_ptr, QModelIndex const * index, QAbstractItemView::ScrollHint hint) {
  this_ptr->scrollTo(*index, hint);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QColumnView_sizeHint(QColumnView const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QColumnView_visualRect(QColumnView const * this_ptr, QModelIndex const * index) {
  return new QRect(this_ptr->visualRect(*index));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_setModel(QColumnView * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_setSelectionModel(QColumnView * this_ptr, QItemSelectionModel * selectionModel) {
  this_ptr->setSelectionModel(selectionModel);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_setRootIndex(QColumnView * this_ptr, QModelIndex const * index) {
  this_ptr->setRootIndex(*index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_selectAll(QColumnView * this_ptr) {
  this_ptr->selectAll();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_setResizeGripsVisible(QColumnView * this_ptr, bool visible) {
  this_ptr->setResizeGripsVisible(visible);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QColumnView_resizeGripsVisible(QColumnView const * this_ptr) {
  return this_ptr->resizeGripsVisible();
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QColumnView_previewWidget(QColumnView const * this_ptr) {
  return this_ptr->previewWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_setPreviewWidget(QColumnView * this_ptr, QWidget * widget) {
  this_ptr->setPreviewWidget(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QColumnView_setColumnWidths(QColumnView * this_ptr, QList< int > const * list) {
  this_ptr->setColumnWidths(*list);
}


RITUAL_EXPORT QList< int > * ctr_qt_widgets_ffi_QColumnView_columnWidths(QColumnView const * this_ptr) {
  return new QList< int >(this_ptr->columnWidths());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QComboBox_metaObject(QComboBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QComboBox_qt_metacast(QComboBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_qt_metacall(QComboBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QComboBox_tr(char const * s, char const * c, int n) {
  return new QString(QComboBox::tr(s, c, n));
}


RITUAL_EXPORT QComboBox * ctr_qt_widgets_ffi_QComboBox_QComboBox(QWidget * parent) {
  return new QComboBox(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_dQComboBox(QComboBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_maxVisibleItems(QComboBox const * this_ptr) {
  return this_ptr->maxVisibleItems();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setMaxVisibleItems(QComboBox * this_ptr, int maxItems) {
  this_ptr->setMaxVisibleItems(maxItems);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_count(QComboBox const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setMaxCount(QComboBox * this_ptr, int max) {
  this_ptr->setMaxCount(max);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_maxCount(QComboBox const * this_ptr) {
  return this_ptr->maxCount();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QComboBox_duplicatesEnabled(QComboBox const * this_ptr) {
  return this_ptr->duplicatesEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setDuplicatesEnabled(QComboBox * this_ptr, bool enable) {
  this_ptr->setDuplicatesEnabled(enable);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setFrame(QComboBox * this_ptr, bool arg1) {
  this_ptr->setFrame(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QComboBox_hasFrame(QComboBox const * this_ptr) {
  return this_ptr->hasFrame();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_findText(QComboBox const * this_ptr, QString const * text, int flags) {
  return this_ptr->findText(*text, QFlags< Qt::MatchFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_findData(QComboBox const * this_ptr, QVariant const * data, int role, int flags) {
  return this_ptr->findData(*data, role, QFlags< Qt::MatchFlag >(flags));
}


RITUAL_EXPORT QComboBox::InsertPolicy ctr_qt_widgets_ffi_QComboBox_insertPolicy(QComboBox const * this_ptr) {
  return this_ptr->insertPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setInsertPolicy(QComboBox * this_ptr, QComboBox::InsertPolicy policy) {
  this_ptr->setInsertPolicy(policy);
}


RITUAL_EXPORT QComboBox::SizeAdjustPolicy ctr_qt_widgets_ffi_QComboBox_sizeAdjustPolicy(QComboBox const * this_ptr) {
  return this_ptr->sizeAdjustPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setSizeAdjustPolicy(QComboBox * this_ptr, QComboBox::SizeAdjustPolicy policy) {
  this_ptr->setSizeAdjustPolicy(policy);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_minimumContentsLength(QComboBox const * this_ptr) {
  return this_ptr->minimumContentsLength();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setMinimumContentsLength(QComboBox * this_ptr, int characters) {
  this_ptr->setMinimumContentsLength(characters);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QComboBox_iconSize(QComboBox const * this_ptr) {
  return new QSize(this_ptr->iconSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setIconSize(QComboBox * this_ptr, QSize const * size) {
  this_ptr->setIconSize(*size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setPlaceholderText(QComboBox * this_ptr, QString const * placeholderText) {
  this_ptr->setPlaceholderText(*placeholderText);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QComboBox_placeholderText(QComboBox const * this_ptr) {
  return new QString(this_ptr->placeholderText());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QComboBox_isEditable(QComboBox const * this_ptr) {
  return this_ptr->isEditable();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setEditable(QComboBox * this_ptr, bool editable) {
  this_ptr->setEditable(editable);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setLineEdit(QComboBox * this_ptr, QLineEdit * edit) {
  this_ptr->setLineEdit(edit);
}


RITUAL_EXPORT QLineEdit * ctr_qt_widgets_ffi_QComboBox_lineEdit(QComboBox const * this_ptr) {
  return this_ptr->lineEdit();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setValidator(QComboBox * this_ptr, QValidator const * v) {
  this_ptr->setValidator(v);
}


RITUAL_EXPORT QValidator const * ctr_qt_widgets_ffi_QComboBox_validator(QComboBox const * this_ptr) {
  return this_ptr->validator();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setCompleter(QComboBox * this_ptr, QCompleter * c) {
  this_ptr->setCompleter(c);
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_QComboBox_completer(QComboBox const * this_ptr) {
  return this_ptr->completer();
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QComboBox_itemDelegate(QComboBox const * this_ptr) {
  return this_ptr->itemDelegate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setItemDelegate(QComboBox * this_ptr, QAbstractItemDelegate * delegate) {
  this_ptr->setItemDelegate(delegate);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_widgets_ffi_QComboBox_model(QComboBox const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setModel(QComboBox * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QComboBox_rootModelIndex(QComboBox const * this_ptr) {
  return new QModelIndex(this_ptr->rootModelIndex());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setRootModelIndex(QComboBox * this_ptr, QModelIndex const * index) {
  this_ptr->setRootModelIndex(*index);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_modelColumn(QComboBox const * this_ptr) {
  return this_ptr->modelColumn();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setModelColumn(QComboBox * this_ptr, int visibleColumn) {
  this_ptr->setModelColumn(visibleColumn);
}


RITUAL_EXPORT QComboBox::LabelDrawingMode ctr_qt_widgets_ffi_QComboBox_labelDrawingMode(QComboBox const * this_ptr) {
  return this_ptr->labelDrawingMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setLabelDrawingMode(QComboBox * this_ptr, QComboBox::LabelDrawingMode labelDrawing) {
  this_ptr->setLabelDrawingMode(labelDrawing);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QComboBox_currentIndex(QComboBox const * this_ptr) {
  return this_ptr->currentIndex();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QComboBox_currentText(QComboBox const * this_ptr) {
  return new QString(this_ptr->currentText());
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QComboBox_currentData(QComboBox const * this_ptr, int role) {
  return new QVariant(this_ptr->currentData(role));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QComboBox_itemText(QComboBox const * this_ptr, int index) {
  return new QString(this_ptr->itemText(index));
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QComboBox_itemIcon(QComboBox const * this_ptr, int index) {
  return new QIcon(this_ptr->itemIcon(index));
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QComboBox_itemData(QComboBox const * this_ptr, int index, int role) {
  return new QVariant(this_ptr->itemData(index, role));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_addItem(QComboBox * this_ptr, QString const * text, QVariant const * userData) {
  this_ptr->addItem(*text, *userData);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_addItem1(QComboBox * this_ptr, QIcon const * icon, QString const * text, QVariant const * userData) {
  this_ptr->addItem(*icon, *text, *userData);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_addItems(QComboBox * this_ptr, QList< QString > const * texts) {
  this_ptr->addItems(*texts);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_insertItem(QComboBox * this_ptr, int index, QString const * text, QVariant const * userData) {
  this_ptr->insertItem(index, *text, *userData);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_insertItem1(QComboBox * this_ptr, int index, QIcon const * icon, QString const * text, QVariant const * userData) {
  this_ptr->insertItem(index, *icon, *text, *userData);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_insertItems(QComboBox * this_ptr, int index, QList< QString > const * texts) {
  this_ptr->insertItems(index, *texts);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_insertSeparator(QComboBox * this_ptr, int index) {
  this_ptr->insertSeparator(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_removeItem(QComboBox * this_ptr, int index) {
  this_ptr->removeItem(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setItemText(QComboBox * this_ptr, int index, QString const * text) {
  this_ptr->setItemText(index, *text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setItemIcon(QComboBox * this_ptr, int index, QIcon const * icon) {
  this_ptr->setItemIcon(index, *icon);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setItemData(QComboBox * this_ptr, int index, QVariant const * value, int role) {
  this_ptr->setItemData(index, *value, role);
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_QComboBox_view(QComboBox const * this_ptr) {
  return this_ptr->view();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setView(QComboBox * this_ptr, QAbstractItemView * itemView) {
  this_ptr->setView(itemView);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QComboBox_sizeHint(QComboBox const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QComboBox_minimumSizeHint(QComboBox const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_showPopup(QComboBox * this_ptr) {
  this_ptr->showPopup();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_hidePopup(QComboBox * this_ptr) {
  this_ptr->hidePopup();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QComboBox_event(QComboBox * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QComboBox_inputMethodQuery(QComboBox const * this_ptr, Qt::InputMethodQuery arg1) {
  return new QVariant(this_ptr->inputMethodQuery(arg1));
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QComboBox_inputMethodQuery1(QComboBox const * this_ptr, Qt::InputMethodQuery query, QVariant const * argument) {
  return new QVariant(this_ptr->inputMethodQuery(query, *argument));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_clear(QComboBox * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_clearEditText(QComboBox * this_ptr) {
  this_ptr->clearEditText();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setEditText(QComboBox * this_ptr, QString const * text) {
  this_ptr->setEditText(*text);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setCurrentIndex(QComboBox * this_ptr, int index) {
  this_ptr->setCurrentIndex(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QComboBox_setCurrentText(QComboBox * this_ptr, QString const * text) {
  this_ptr->setCurrentText(*text);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPushButton_metaObject(QPushButton const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QPushButton_qt_metacast(QPushButton * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPushButton_qt_metacall(QPushButton * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPushButton_tr(char const * s, char const * c, int n) {
  return new QString(QPushButton::tr(s, c, n));
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QPushButton_QPushButton(QWidget * parent) {
  return new QPushButton(parent);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QPushButton_QPushButton1(QString const * text, QWidget * parent) {
  return new QPushButton(*text, parent);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QPushButton_QPushButton2(QIcon const * icon, QString const * text, QWidget * parent) {
  return new QPushButton(*icon, *text, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPushButton_dQPushButton(QPushButton * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QPushButton_sizeHint(QPushButton const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QPushButton_minimumSizeHint(QPushButton const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPushButton_autoDefault(QPushButton const * this_ptr) {
  return this_ptr->autoDefault();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPushButton_setAutoDefault(QPushButton * this_ptr, bool arg1) {
  this_ptr->setAutoDefault(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPushButton_isDefault(QPushButton const * this_ptr) {
  return this_ptr->isDefault();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPushButton_setDefault(QPushButton * this_ptr, bool arg1) {
  this_ptr->setDefault(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPushButton_setMenu(QPushButton * this_ptr, QMenu * menu) {
  this_ptr->setMenu(menu);
}


RITUAL_EXPORT QMenu * ctr_qt_widgets_ffi_QPushButton_menu(QPushButton const * this_ptr) {
  return this_ptr->menu();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPushButton_setFlat(QPushButton * this_ptr, bool arg1) {
  this_ptr->setFlat(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QPushButton_isFlat(QPushButton const * this_ptr) {
  return this_ptr->isFlat();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPushButton_showMenu(QPushButton * this_ptr) {
  this_ptr->showMenu();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCommandLinkButton_metaObject(QCommandLinkButton const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QCommandLinkButton_qt_metacast(QCommandLinkButton * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCommandLinkButton_qt_metacall(QCommandLinkButton * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCommandLinkButton_tr(char const * s, char const * c, int n) {
  return new QString(QCommandLinkButton::tr(s, c, n));
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_QCommandLinkButton_QCommandLinkButton(QWidget * parent) {
  return new QCommandLinkButton(parent);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_QCommandLinkButton_QCommandLinkButton1(QString const * text, QWidget * parent) {
  return new QCommandLinkButton(*text, parent);
}


RITUAL_EXPORT QCommandLinkButton * ctr_qt_widgets_ffi_QCommandLinkButton_QCommandLinkButton2(QString const * text, QString const * description, QWidget * parent) {
  return new QCommandLinkButton(*text, *description, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommandLinkButton_dQCommandLinkButton(QCommandLinkButton * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCommandLinkButton_description(QCommandLinkButton const * this_ptr) {
  return new QString(this_ptr->description());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommandLinkButton_setDescription(QCommandLinkButton * this_ptr, QString const * description) {
  this_ptr->setDescription(*description);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QCommandLinkButton_sizeHint(QCommandLinkButton const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCommandLinkButton_heightForWidth(QCommandLinkButton const * this_ptr, int arg1) {
  return this_ptr->heightForWidth(arg1);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QCommandLinkButton_minimumSizeHint(QCommandLinkButton const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommandLinkButton_initStyleOption(QCommandLinkButton const * this_ptr, QStyleOptionButton * option) {
  this_ptr->initStyleOption(option);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCommonStyle_metaObject(QCommonStyle const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QCommonStyle_qt_metacast(QCommonStyle * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCommonStyle_qt_metacall(QCommonStyle * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCommonStyle_tr(char const * s, char const * c, int n) {
  return new QString(QCommonStyle::tr(s, c, n));
}


RITUAL_EXPORT QCommonStyle * ctr_qt_widgets_ffi_QCommonStyle_QCommonStyle() {
  return new QCommonStyle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_dQCommonStyle(QCommonStyle * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_drawPrimitive(QCommonStyle const * this_ptr, QStyle::PrimitiveElement pe, QStyleOption const * opt, QPainter * p, QWidget const * w) {
  this_ptr->drawPrimitive(pe, opt, p, w);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_drawControl(QCommonStyle const * this_ptr, QStyle::ControlElement element, QStyleOption const * opt, QPainter * p, QWidget const * w) {
  this_ptr->drawControl(element, opt, p, w);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QCommonStyle_subElementRect(QCommonStyle const * this_ptr, QStyle::SubElement r, QStyleOption const * opt, QWidget const * widget) {
  return new QRect(this_ptr->subElementRect(r, opt, widget));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_drawComplexControl(QCommonStyle const * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt, QPainter * p, QWidget const * w) {
  this_ptr->drawComplexControl(cc, opt, p, w);
}


RITUAL_EXPORT QStyle::SubControl ctr_qt_widgets_ffi_QCommonStyle_hitTestComplexControl(QCommonStyle const * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt, QPoint const * pt, QWidget const * w) {
  return this_ptr->hitTestComplexControl(cc, opt, *pt, w);
}


RITUAL_EXPORT QRect * ctr_qt_widgets_ffi_QCommonStyle_subControlRect(QCommonStyle const * this_ptr, QStyle::ComplexControl cc, QStyleOptionComplex const * opt, QStyle::SubControl sc, QWidget const * w) {
  return new QRect(this_ptr->subControlRect(cc, opt, sc, w));
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QCommonStyle_sizeFromContents(QCommonStyle const * this_ptr, QStyle::ContentsType ct, QStyleOption const * opt, QSize const * contentsSize, QWidget const * widget) {
  return new QSize(this_ptr->sizeFromContents(ct, opt, *contentsSize, widget));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCommonStyle_pixelMetric(QCommonStyle const * this_ptr, QStyle::PixelMetric m, QStyleOption const * opt, QWidget const * widget) {
  return this_ptr->pixelMetric(m, opt, widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCommonStyle_styleHint(QCommonStyle const * this_ptr, QStyle::StyleHint sh, QStyleOption const * opt, QWidget const * w, QStyleHintReturn * shret) {
  return this_ptr->styleHint(sh, opt, w, shret);
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QCommonStyle_standardIcon(QCommonStyle const * this_ptr, QStyle::StandardPixmap standardIcon, QStyleOption const * opt, QWidget const * widget) {
  return new QIcon(this_ptr->standardIcon(standardIcon, opt, widget));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QCommonStyle_standardPixmap(QCommonStyle const * this_ptr, QStyle::StandardPixmap sp, QStyleOption const * opt, QWidget const * widget) {
  return new QPixmap(this_ptr->standardPixmap(sp, opt, widget));
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QCommonStyle_generatedIconPixmap(QCommonStyle const * this_ptr, QIcon::Mode iconMode, QPixmap const * pixmap, QStyleOption const * opt) {
  return new QPixmap(this_ptr->generatedIconPixmap(iconMode, *pixmap, opt));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCommonStyle_layoutSpacing(QCommonStyle const * this_ptr, QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, QStyleOption const * option, QWidget const * widget) {
  return this_ptr->layoutSpacing(control1, control2, orientation, option, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_polish(QCommonStyle * this_ptr, QPalette * arg1) {
  this_ptr->polish(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_polish1(QCommonStyle * this_ptr, QApplication * app) {
  this_ptr->polish(app);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_polish2(QCommonStyle * this_ptr, QWidget * widget) {
  this_ptr->polish(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_unpolish(QCommonStyle * this_ptr, QWidget * widget) {
  this_ptr->unpolish(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCommonStyle_unpolish1(QCommonStyle * this_ptr, QApplication * application) {
  this_ptr->unpolish(application);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QCompleter_metaObject(QCompleter const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QCompleter_qt_metacast(QCompleter * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCompleter_qt_metacall(QCompleter * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCompleter_tr(char const * s, char const * c, int n) {
  return new QString(QCompleter::tr(s, c, n));
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_QCompleter_QCompleter(QObject * parent) {
  return new QCompleter(parent);
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_QCompleter_QCompleter1(QAbstractItemModel * model, QObject * parent) {
  return new QCompleter(model, parent);
}


RITUAL_EXPORT QCompleter * ctr_qt_widgets_ffi_QCompleter_QCompleter2(QList< QString > const * completions, QObject * parent) {
  return new QCompleter(*completions, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_dQCompleter(QCompleter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setWidget(QCompleter * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QCompleter_widget(QCompleter const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setModel(QCompleter * this_ptr, QAbstractItemModel * c) {
  this_ptr->setModel(c);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_widgets_ffi_QCompleter_model(QCompleter const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setCompletionMode(QCompleter * this_ptr, QCompleter::CompletionMode mode) {
  this_ptr->setCompletionMode(mode);
}


RITUAL_EXPORT QCompleter::CompletionMode ctr_qt_widgets_ffi_QCompleter_completionMode(QCompleter const * this_ptr) {
  return this_ptr->completionMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setFilterMode(QCompleter * this_ptr, int filterMode) {
  this_ptr->setFilterMode(QFlags< Qt::MatchFlag >(filterMode));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCompleter_filterMode(QCompleter const * this_ptr) {
  return int(this_ptr->filterMode());
}


RITUAL_EXPORT QAbstractItemView * ctr_qt_widgets_ffi_QCompleter_popup(QCompleter const * this_ptr) {
  return this_ptr->popup();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setPopup(QCompleter * this_ptr, QAbstractItemView * popup) {
  this_ptr->setPopup(popup);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setCaseSensitivity(QCompleter * this_ptr, Qt::CaseSensitivity caseSensitivity) {
  this_ptr->setCaseSensitivity(caseSensitivity);
}


RITUAL_EXPORT Qt::CaseSensitivity ctr_qt_widgets_ffi_QCompleter_caseSensitivity(QCompleter const * this_ptr) {
  return this_ptr->caseSensitivity();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setModelSorting(QCompleter * this_ptr, QCompleter::ModelSorting sorting) {
  this_ptr->setModelSorting(sorting);
}


RITUAL_EXPORT QCompleter::ModelSorting ctr_qt_widgets_ffi_QCompleter_modelSorting(QCompleter const * this_ptr) {
  return this_ptr->modelSorting();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setCompletionColumn(QCompleter * this_ptr, int column) {
  this_ptr->setCompletionColumn(column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCompleter_completionColumn(QCompleter const * this_ptr) {
  return this_ptr->completionColumn();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setCompletionRole(QCompleter * this_ptr, int role) {
  this_ptr->setCompletionRole(role);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCompleter_completionRole(QCompleter const * this_ptr) {
  return this_ptr->completionRole();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QCompleter_wrapAround(QCompleter const * this_ptr) {
  return this_ptr->wrapAround();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCompleter_maxVisibleItems(QCompleter const * this_ptr) {
  return this_ptr->maxVisibleItems();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setMaxVisibleItems(QCompleter * this_ptr, int maxItems) {
  this_ptr->setMaxVisibleItems(maxItems);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCompleter_completionCount(QCompleter const * this_ptr) {
  return this_ptr->completionCount();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QCompleter_setCurrentRow(QCompleter * this_ptr, int row) {
  return this_ptr->setCurrentRow(row);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QCompleter_currentRow(QCompleter const * this_ptr) {
  return this_ptr->currentRow();
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QCompleter_currentIndex(QCompleter const * this_ptr) {
  return new QModelIndex(this_ptr->currentIndex());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCompleter_currentCompletion(QCompleter const * this_ptr) {
  return new QString(this_ptr->currentCompletion());
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_widgets_ffi_QCompleter_completionModel(QCompleter const * this_ptr) {
  return this_ptr->completionModel();
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCompleter_completionPrefix(QCompleter const * this_ptr) {
  return new QString(this_ptr->completionPrefix());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setCompletionPrefix(QCompleter * this_ptr, QString const * prefix) {
  this_ptr->setCompletionPrefix(*prefix);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_complete(QCompleter * this_ptr, QRect const * rect) {
  this_ptr->complete(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QCompleter_setWrapAround(QCompleter * this_ptr, bool wrap) {
  this_ptr->setWrapAround(wrap);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QCompleter_pathFromIndex(QCompleter const * this_ptr, QModelIndex const * index) {
  return new QString(this_ptr->pathFromIndex(*index));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QCompleter_splitPath(QCompleter const * this_ptr, QString const * path) {
  return new QList< QString >(this_ptr->splitPath(*path));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDataWidgetMapper_metaObject(QDataWidgetMapper const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDataWidgetMapper_qt_metacast(QDataWidgetMapper * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDataWidgetMapper_qt_metacall(QDataWidgetMapper * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDataWidgetMapper_tr(char const * s, char const * c, int n) {
  return new QString(QDataWidgetMapper::tr(s, c, n));
}


RITUAL_EXPORT QDataWidgetMapper * ctr_qt_widgets_ffi_QDataWidgetMapper_QDataWidgetMapper(QObject * parent) {
  return new QDataWidgetMapper(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_dQDataWidgetMapper(QDataWidgetMapper * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_setModel(QDataWidgetMapper * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_widgets_ffi_QDataWidgetMapper_model(QDataWidgetMapper const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_setItemDelegate(QDataWidgetMapper * this_ptr, QAbstractItemDelegate * delegate) {
  this_ptr->setItemDelegate(delegate);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QDataWidgetMapper_itemDelegate(QDataWidgetMapper const * this_ptr) {
  return this_ptr->itemDelegate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_setRootIndex(QDataWidgetMapper * this_ptr, QModelIndex const * index) {
  this_ptr->setRootIndex(*index);
}


RITUAL_EXPORT QModelIndex * ctr_qt_widgets_ffi_QDataWidgetMapper_rootIndex(QDataWidgetMapper const * this_ptr) {
  return new QModelIndex(this_ptr->rootIndex());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_setOrientation(QDataWidgetMapper * this_ptr, Qt::Orientation aOrientation) {
  this_ptr->setOrientation(aOrientation);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QDataWidgetMapper_orientation(QDataWidgetMapper const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_setSubmitPolicy(QDataWidgetMapper * this_ptr, QDataWidgetMapper::SubmitPolicy policy) {
  this_ptr->setSubmitPolicy(policy);
}


RITUAL_EXPORT QDataWidgetMapper::SubmitPolicy ctr_qt_widgets_ffi_QDataWidgetMapper_submitPolicy(QDataWidgetMapper const * this_ptr) {
  return this_ptr->submitPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_addMapping(QDataWidgetMapper * this_ptr, QWidget * widget, int section) {
  this_ptr->addMapping(widget, section);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_addMapping1(QDataWidgetMapper * this_ptr, QWidget * widget, int section, QByteArray const * propertyName) {
  this_ptr->addMapping(widget, section, *propertyName);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_removeMapping(QDataWidgetMapper * this_ptr, QWidget * widget) {
  this_ptr->removeMapping(widget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDataWidgetMapper_mappedSection(QDataWidgetMapper const * this_ptr, QWidget * widget) {
  return this_ptr->mappedSection(widget);
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QDataWidgetMapper_mappedPropertyName(QDataWidgetMapper const * this_ptr, QWidget * widget) {
  return new QByteArray(this_ptr->mappedPropertyName(widget));
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QDataWidgetMapper_mappedWidgetAt(QDataWidgetMapper const * this_ptr, int section) {
  return this_ptr->mappedWidgetAt(section);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_clearMapping(QDataWidgetMapper * this_ptr) {
  this_ptr->clearMapping();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDataWidgetMapper_currentIndex(QDataWidgetMapper const * this_ptr) {
  return this_ptr->currentIndex();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_revert(QDataWidgetMapper * this_ptr) {
  this_ptr->revert();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDataWidgetMapper_submit(QDataWidgetMapper * this_ptr) {
  return this_ptr->submit();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_toFirst(QDataWidgetMapper * this_ptr) {
  this_ptr->toFirst();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_toLast(QDataWidgetMapper * this_ptr) {
  this_ptr->toLast();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_toNext(QDataWidgetMapper * this_ptr) {
  this_ptr->toNext();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_toPrevious(QDataWidgetMapper * this_ptr) {
  this_ptr->toPrevious();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_setCurrentIndex(QDataWidgetMapper * this_ptr, int index) {
  this_ptr->setCurrentIndex(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDataWidgetMapper_setCurrentModelIndex(QDataWidgetMapper * this_ptr, QModelIndex const * index) {
  this_ptr->setCurrentModelIndex(*index);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDateTimeEdit_metaObject(QDateTimeEdit const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDateTimeEdit_qt_metacast(QDateTimeEdit * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDateTimeEdit_qt_metacall(QDateTimeEdit * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDateTimeEdit_tr(char const * s, char const * c, int n) {
  return new QString(QDateTimeEdit::tr(s, c, n));
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_QDateTimeEdit_QDateTimeEdit(QWidget * parent) {
  return new QDateTimeEdit(parent);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_QDateTimeEdit_QDateTimeEdit1(QDateTime const * dt, QWidget * parent) {
  return new QDateTimeEdit(*dt, parent);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_QDateTimeEdit_QDateTimeEdit2(QDate const * d, QWidget * parent) {
  return new QDateTimeEdit(*d, parent);
}


RITUAL_EXPORT QDateTimeEdit * ctr_qt_widgets_ffi_QDateTimeEdit_QDateTimeEdit3(QTime const * t, QWidget * parent) {
  return new QDateTimeEdit(*t, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_dQDateTimeEdit(QDateTimeEdit * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDateTime * ctr_qt_widgets_ffi_QDateTimeEdit_dateTime(QDateTimeEdit const * this_ptr) {
  return new QDateTime(this_ptr->dateTime());
}


RITUAL_EXPORT QDate * ctr_qt_widgets_ffi_QDateTimeEdit_date(QDateTimeEdit const * this_ptr) {
  return new QDate(this_ptr->date());
}


RITUAL_EXPORT QTime * ctr_qt_widgets_ffi_QDateTimeEdit_time(QDateTimeEdit const * this_ptr) {
  return new QTime(this_ptr->time());
}


RITUAL_EXPORT QCalendar * ctr_qt_widgets_ffi_QDateTimeEdit_calendar(QDateTimeEdit const * this_ptr) {
  return new QCalendar(this_ptr->calendar());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setCalendar(QDateTimeEdit * this_ptr, QCalendar const * calendar) {
  this_ptr->setCalendar(*calendar);
}


RITUAL_EXPORT QDateTime * ctr_qt_widgets_ffi_QDateTimeEdit_minimumDateTime(QDateTimeEdit const * this_ptr) {
  return new QDateTime(this_ptr->minimumDateTime());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_clearMinimumDateTime(QDateTimeEdit * this_ptr) {
  this_ptr->clearMinimumDateTime();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setMinimumDateTime(QDateTimeEdit * this_ptr, QDateTime const * dt) {
  this_ptr->setMinimumDateTime(*dt);
}


RITUAL_EXPORT QDateTime * ctr_qt_widgets_ffi_QDateTimeEdit_maximumDateTime(QDateTimeEdit const * this_ptr) {
  return new QDateTime(this_ptr->maximumDateTime());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_clearMaximumDateTime(QDateTimeEdit * this_ptr) {
  this_ptr->clearMaximumDateTime();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setMaximumDateTime(QDateTimeEdit * this_ptr, QDateTime const * dt) {
  this_ptr->setMaximumDateTime(*dt);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setDateTimeRange(QDateTimeEdit * this_ptr, QDateTime const * min, QDateTime const * max) {
  this_ptr->setDateTimeRange(*min, *max);
}


RITUAL_EXPORT QDate * ctr_qt_widgets_ffi_QDateTimeEdit_minimumDate(QDateTimeEdit const * this_ptr) {
  return new QDate(this_ptr->minimumDate());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setMinimumDate(QDateTimeEdit * this_ptr, QDate const * min) {
  this_ptr->setMinimumDate(*min);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_clearMinimumDate(QDateTimeEdit * this_ptr) {
  this_ptr->clearMinimumDate();
}


RITUAL_EXPORT QDate * ctr_qt_widgets_ffi_QDateTimeEdit_maximumDate(QDateTimeEdit const * this_ptr) {
  return new QDate(this_ptr->maximumDate());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setMaximumDate(QDateTimeEdit * this_ptr, QDate const * max) {
  this_ptr->setMaximumDate(*max);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_clearMaximumDate(QDateTimeEdit * this_ptr) {
  this_ptr->clearMaximumDate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setDateRange(QDateTimeEdit * this_ptr, QDate const * min, QDate const * max) {
  this_ptr->setDateRange(*min, *max);
}


RITUAL_EXPORT QTime * ctr_qt_widgets_ffi_QDateTimeEdit_minimumTime(QDateTimeEdit const * this_ptr) {
  return new QTime(this_ptr->minimumTime());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setMinimumTime(QDateTimeEdit * this_ptr, QTime const * min) {
  this_ptr->setMinimumTime(*min);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_clearMinimumTime(QDateTimeEdit * this_ptr) {
  this_ptr->clearMinimumTime();
}


RITUAL_EXPORT QTime * ctr_qt_widgets_ffi_QDateTimeEdit_maximumTime(QDateTimeEdit const * this_ptr) {
  return new QTime(this_ptr->maximumTime());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setMaximumTime(QDateTimeEdit * this_ptr, QTime const * max) {
  this_ptr->setMaximumTime(*max);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_clearMaximumTime(QDateTimeEdit * this_ptr) {
  this_ptr->clearMaximumTime();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setTimeRange(QDateTimeEdit * this_ptr, QTime const * min, QTime const * max) {
  this_ptr->setTimeRange(*min, *max);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDateTimeEdit_displayedSections(QDateTimeEdit const * this_ptr) {
  return int(this_ptr->displayedSections());
}


RITUAL_EXPORT QDateTimeEdit::Section ctr_qt_widgets_ffi_QDateTimeEdit_currentSection(QDateTimeEdit const * this_ptr) {
  return this_ptr->currentSection();
}


RITUAL_EXPORT QDateTimeEdit::Section ctr_qt_widgets_ffi_QDateTimeEdit_sectionAt(QDateTimeEdit const * this_ptr, int index) {
  return this_ptr->sectionAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setCurrentSection(QDateTimeEdit * this_ptr, QDateTimeEdit::Section section) {
  this_ptr->setCurrentSection(section);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDateTimeEdit_currentSectionIndex(QDateTimeEdit const * this_ptr) {
  return this_ptr->currentSectionIndex();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setCurrentSectionIndex(QDateTimeEdit * this_ptr, int index) {
  this_ptr->setCurrentSectionIndex(index);
}


RITUAL_EXPORT QCalendarWidget * ctr_qt_widgets_ffi_QDateTimeEdit_calendarWidget(QDateTimeEdit const * this_ptr) {
  return this_ptr->calendarWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setCalendarWidget(QDateTimeEdit * this_ptr, QCalendarWidget * calendarWidget) {
  this_ptr->setCalendarWidget(calendarWidget);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDateTimeEdit_sectionCount(QDateTimeEdit const * this_ptr) {
  return this_ptr->sectionCount();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setSelectedSection(QDateTimeEdit * this_ptr, QDateTimeEdit::Section section) {
  this_ptr->setSelectedSection(section);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDateTimeEdit_sectionText(QDateTimeEdit const * this_ptr, QDateTimeEdit::Section section) {
  return new QString(this_ptr->sectionText(section));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDateTimeEdit_displayFormat(QDateTimeEdit const * this_ptr) {
  return new QString(this_ptr->displayFormat());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setDisplayFormat(QDateTimeEdit * this_ptr, QString const * format) {
  this_ptr->setDisplayFormat(*format);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDateTimeEdit_calendarPopup(QDateTimeEdit const * this_ptr) {
  return this_ptr->calendarPopup();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setCalendarPopup(QDateTimeEdit * this_ptr, bool enable) {
  this_ptr->setCalendarPopup(enable);
}


RITUAL_EXPORT Qt::TimeSpec ctr_qt_widgets_ffi_QDateTimeEdit_timeSpec(QDateTimeEdit const * this_ptr) {
  return this_ptr->timeSpec();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setTimeSpec(QDateTimeEdit * this_ptr, Qt::TimeSpec spec) {
  this_ptr->setTimeSpec(spec);
}


RITUAL_EXPORT QTimeZone * ctr_qt_widgets_ffi_QDateTimeEdit_timeZone(QDateTimeEdit const * this_ptr) {
  return new QTimeZone(this_ptr->timeZone());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setTimeZone(QDateTimeEdit * this_ptr, QTimeZone const * zone) {
  this_ptr->setTimeZone(*zone);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QDateTimeEdit_sizeHint(QDateTimeEdit const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_clear(QDateTimeEdit * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_stepBy(QDateTimeEdit * this_ptr, int steps) {
  this_ptr->stepBy(steps);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDateTimeEdit_event(QDateTimeEdit * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setDateTime(QDateTimeEdit * this_ptr, QDateTime const * dateTime) {
  this_ptr->setDateTime(*dateTime);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setDate(QDateTimeEdit * this_ptr, QDate const * date) {
  this_ptr->setDate(*date);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateTimeEdit_setTime(QDateTimeEdit * this_ptr, QTime const * time) {
  this_ptr->setTime(*time);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTimeEdit_metaObject(QTimeEdit const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTimeEdit_qt_metacast(QTimeEdit * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTimeEdit_qt_metacall(QTimeEdit * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTimeEdit_tr(char const * s, char const * c, int n) {
  return new QString(QTimeEdit::tr(s, c, n));
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_QTimeEdit_QTimeEdit(QWidget * parent) {
  return new QTimeEdit(parent);
}


RITUAL_EXPORT QTimeEdit * ctr_qt_widgets_ffi_QTimeEdit_QTimeEdit1(QTime const * time, QWidget * parent) {
  return new QTimeEdit(*time, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTimeEdit_dQTimeEdit(QTimeEdit * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDateEdit_metaObject(QDateEdit const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDateEdit_qt_metacast(QDateEdit * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDateEdit_qt_metacall(QDateEdit * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDateEdit_tr(char const * s, char const * c, int n) {
  return new QString(QDateEdit::tr(s, c, n));
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_QDateEdit_QDateEdit(QWidget * parent) {
  return new QDateEdit(parent);
}


RITUAL_EXPORT QDateEdit * ctr_qt_widgets_ffi_QDateEdit_QDateEdit1(QDate const * date, QWidget * parent) {
  return new QDateEdit(*date, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDateEdit_dQDateEdit(QDateEdit * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDial_metaObject(QDial const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDial_qt_metacast(QDial * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDial_qt_metacall(QDial * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDial_tr(char const * s, char const * c, int n) {
  return new QString(QDial::tr(s, c, n));
}


RITUAL_EXPORT QDial * ctr_qt_widgets_ffi_QDial_QDial(QWidget * parent) {
  return new QDial(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDial_dQDial(QDial * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDial_wrapping(QDial const * this_ptr) {
  return this_ptr->wrapping();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDial_notchSize(QDial const * this_ptr) {
  return this_ptr->notchSize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDial_setNotchTarget(QDial * this_ptr, double target) {
  this_ptr->setNotchTarget(target);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QDial_notchTarget(QDial const * this_ptr) {
  return this_ptr->notchTarget();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDial_notchesVisible(QDial const * this_ptr) {
  return this_ptr->notchesVisible();
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QDial_sizeHint(QDial const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QDial_minimumSizeHint(QDial const * this_ptr) {
  return new QSize(this_ptr->minimumSizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDial_setNotchesVisible(QDial * this_ptr, bool visible) {
  this_ptr->setNotchesVisible(visible);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDial_setWrapping(QDial * this_ptr, bool on) {
  this_ptr->setWrapping(on);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDialogButtonBox_metaObject(QDialogButtonBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDialogButtonBox_qt_metacast(QDialogButtonBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDialogButtonBox_qt_metacall(QDialogButtonBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDialogButtonBox_tr(char const * s, char const * c, int n) {
  return new QString(QDialogButtonBox::tr(s, c, n));
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_QDialogButtonBox_QDialogButtonBox(QWidget * parent) {
  return new QDialogButtonBox(parent);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_QDialogButtonBox_QDialogButtonBox1(Qt::Orientation orientation, QWidget * parent) {
  return new QDialogButtonBox(orientation, parent);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_QDialogButtonBox_QDialogButtonBox2(int buttons, QWidget * parent) {
  return new QDialogButtonBox(QFlags< QDialogButtonBox::StandardButton >(buttons), parent);
}


RITUAL_EXPORT QDialogButtonBox * ctr_qt_widgets_ffi_QDialogButtonBox_QDialogButtonBox3(int buttons, Qt::Orientation orientation, QWidget * parent) {
  return new QDialogButtonBox(QFlags< QDialogButtonBox::StandardButton >(buttons), orientation, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialogButtonBox_dQDialogButtonBox(QDialogButtonBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialogButtonBox_setOrientation(QDialogButtonBox * this_ptr, Qt::Orientation orientation) {
  this_ptr->setOrientation(orientation);
}


RITUAL_EXPORT Qt::Orientation ctr_qt_widgets_ffi_QDialogButtonBox_orientation(QDialogButtonBox const * this_ptr) {
  return this_ptr->orientation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialogButtonBox_addButton(QDialogButtonBox * this_ptr, QAbstractButton * button, QDialogButtonBox::ButtonRole role) {
  this_ptr->addButton(button, role);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QDialogButtonBox_addButton1(QDialogButtonBox * this_ptr, QString const * text, QDialogButtonBox::ButtonRole role) {
  return this_ptr->addButton(*text, role);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QDialogButtonBox_addButton2(QDialogButtonBox * this_ptr, QDialogButtonBox::StandardButton button) {
  return this_ptr->addButton(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialogButtonBox_removeButton(QDialogButtonBox * this_ptr, QAbstractButton * button) {
  this_ptr->removeButton(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialogButtonBox_clear(QDialogButtonBox * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QList< QAbstractButton * > * ctr_qt_widgets_ffi_QDialogButtonBox_buttons(QDialogButtonBox const * this_ptr) {
  return new QList< QAbstractButton * >(this_ptr->buttons());
}


RITUAL_EXPORT QDialogButtonBox::ButtonRole ctr_qt_widgets_ffi_QDialogButtonBox_buttonRole(QDialogButtonBox const * this_ptr, QAbstractButton * button) {
  return this_ptr->buttonRole(button);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialogButtonBox_setStandardButtons(QDialogButtonBox * this_ptr, int buttons) {
  this_ptr->setStandardButtons(QFlags< QDialogButtonBox::StandardButton >(buttons));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDialogButtonBox_standardButtons(QDialogButtonBox const * this_ptr) {
  return int(this_ptr->standardButtons());
}


RITUAL_EXPORT QDialogButtonBox::StandardButton ctr_qt_widgets_ffi_QDialogButtonBox_standardButton(QDialogButtonBox const * this_ptr, QAbstractButton * button) {
  return this_ptr->standardButton(button);
}


RITUAL_EXPORT QPushButton * ctr_qt_widgets_ffi_QDialogButtonBox_button(QDialogButtonBox const * this_ptr, QDialogButtonBox::StandardButton which) {
  return this_ptr->button(which);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDialogButtonBox_setCenterButtons(QDialogButtonBox * this_ptr, bool center) {
  this_ptr->setCenterButtons(center);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDialogButtonBox_centerButtons(QDialogButtonBox const * this_ptr) {
  return this_ptr->centerButtons();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QDockWidget_metaObject(QDockWidget const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QDockWidget_qt_metacast(QDockWidget * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDockWidget_qt_metacall(QDockWidget * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QDockWidget_tr(char const * s, char const * c, int n) {
  return new QString(QDockWidget::tr(s, c, n));
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_QDockWidget_QDockWidget(QString const * title, QWidget * parent, int flags) {
  return new QDockWidget(*title, parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT QDockWidget * ctr_qt_widgets_ffi_QDockWidget_QDockWidget1(QWidget * parent, int flags) {
  return new QDockWidget(parent, QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDockWidget_dQDockWidget(QDockWidget * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QDockWidget_widget(QDockWidget const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDockWidget_setWidget(QDockWidget * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDockWidget_setFeatures(QDockWidget * this_ptr, int features) {
  this_ptr->setFeatures(QFlags< QDockWidget::DockWidgetFeature >(features));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDockWidget_features(QDockWidget const * this_ptr) {
  return int(this_ptr->features());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDockWidget_setFloating(QDockWidget * this_ptr, bool floating) {
  this_ptr->setFloating(floating);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDockWidget_isFloating(QDockWidget const * this_ptr) {
  return this_ptr->isFloating();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDockWidget_setAllowedAreas(QDockWidget * this_ptr, int areas) {
  this_ptr->setAllowedAreas(QFlags< Qt::DockWidgetArea >(areas));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QDockWidget_allowedAreas(QDockWidget const * this_ptr) {
  return int(this_ptr->allowedAreas());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDockWidget_setTitleBarWidget(QDockWidget * this_ptr, QWidget * widget) {
  this_ptr->setTitleBarWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QDockWidget_titleBarWidget(QDockWidget const * this_ptr) {
  return this_ptr->titleBarWidget();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QDockWidget_setDockLocation(QDockWidget * this_ptr, Qt::DockWidgetArea area) {
  this_ptr->setDockLocation(area);
}


RITUAL_EXPORT Qt::DockWidgetArea ctr_qt_widgets_ffi_QDockWidget_dockLocation(QDockWidget const * this_ptr) {
  return this_ptr->dockLocation();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QDockWidget_isAreaAllowed(QDockWidget const * this_ptr, Qt::DockWidgetArea area) {
  return this_ptr->isAreaAllowed(area);
}


RITUAL_EXPORT QAction * ctr_qt_widgets_ffi_QDockWidget_toggleViewAction(QDockWidget const * this_ptr) {
  return this_ptr->toggleViewAction();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadeLine(QPainter * p, int x1, int y1, int x2, int y2, QPalette const * pal, bool sunken, int lineWidth, int midLineWidth) {
  qDrawShadeLine(p, x1, y1, x2, y2, *pal, sunken, lineWidth, midLineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadeLine1(QPainter * p, QPoint const * p1, QPoint const * p2, QPalette const * pal, bool sunken, int lineWidth, int midLineWidth) {
  qDrawShadeLine(p, *p1, *p2, *pal, sunken, lineWidth, midLineWidth);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadeRect(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken, int lineWidth, int midLineWidth, QBrush const * fill) {
  qDrawShadeRect(p, x, y, w, h, *pal, sunken, lineWidth, midLineWidth, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadeRect1(QPainter * p, QRect const * r, QPalette const * pal, bool sunken, int lineWidth, int midLineWidth, QBrush const * fill) {
  qDrawShadeRect(p, *r, *pal, sunken, lineWidth, midLineWidth, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken, int lineWidth, QBrush const * fill) {
  qDrawShadePanel(p, x, y, w, h, *pal, sunken, lineWidth, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawShadePanel1(QPainter * p, QRect const * r, QPalette const * pal, bool sunken, int lineWidth, QBrush const * fill) {
  qDrawShadePanel(p, *r, *pal, sunken, lineWidth, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinButton(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken, QBrush const * fill) {
  qDrawWinButton(p, x, y, w, h, *pal, sunken, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinButton1(QPainter * p, QRect const * r, QPalette const * pal, bool sunken, QBrush const * fill) {
  qDrawWinButton(p, *r, *pal, sunken, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinPanel(QPainter * p, int x, int y, int w, int h, QPalette const * pal, bool sunken, QBrush const * fill) {
  qDrawWinPanel(p, x, y, w, h, *pal, sunken, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawWinPanel1(QPainter * p, QRect const * r, QPalette const * pal, bool sunken, QBrush const * fill) {
  qDrawWinPanel(p, *r, *pal, sunken, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRect(QPainter * p, int x, int y, int w, int h, QColor const * arg6, int lineWidth, QBrush const * fill) {
  qDrawPlainRect(p, x, y, w, h, *arg6, lineWidth, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRect1(QPainter * p, QRect const * r, QColor const * arg3, int lineWidth, QBrush const * fill) {
  qDrawPlainRect(p, *r, *arg3, lineWidth, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRoundedRect(QPainter * p, int x, int y, int w, int h, double rx, double ry, QColor const * arg8, int lineWidth, QBrush const * fill) {
  qDrawPlainRoundedRect(p, x, y, w, h, rx, ry, *arg8, lineWidth, fill);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawPlainRoundedRect1(QPainter * painter, QRect const * rect, double rx, double ry, QColor const * lineColor, int lineWidth, QBrush const * fill) {
  qDrawPlainRoundedRect(painter, *rect, rx, ry, *lineColor, lineWidth, fill);
}


RITUAL_EXPORT QTileRules * ctr_qt_widgets_ffi_QTileRules_QTileRules(Qt::TileRule horizontalRule, Qt::TileRule verticalRule) {
  return new QTileRules(horizontalRule, verticalRule);
}


RITUAL_EXPORT QTileRules * ctr_qt_widgets_ffi_QTileRules_QTileRules1(Qt::TileRule rule) {
  return new QTileRules(rule);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawBorderPixmap(QPainter * painter, QRect const * targetRect, QMargins const * targetMargins, QPixmap const * pixmap, QRect const * sourceRect, QMargins const * sourceMargins, QTileRules const * rules, int hints) {
  qDrawBorderPixmap(painter, *targetRect, *targetMargins, *pixmap, *sourceRect, *sourceMargins, *rules, QFlags< QDrawBorderPixmap::DrawingHint >(hints));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_qDrawBorderPixmap1(QPainter * painter, QRect const * target, QMargins const * margins, QPixmap const * pixmap) {
  qDrawBorderPixmap(painter, *target, *margins, *pixmap);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QErrorMessage_metaObject(QErrorMessage const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QErrorMessage_qt_metacast(QErrorMessage * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QErrorMessage_qt_metacall(QErrorMessage * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QErrorMessage_tr(char const * s, char const * c, int n) {
  return new QString(QErrorMessage::tr(s, c, n));
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_QErrorMessage_QErrorMessage(QWidget * parent) {
  return new QErrorMessage(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QErrorMessage_dQErrorMessage(QErrorMessage * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QErrorMessage * ctr_qt_widgets_ffi_QErrorMessage_qtHandler() {
  return QErrorMessage::qtHandler();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QErrorMessage_showMessage(QErrorMessage * this_ptr, QString const * message) {
  this_ptr->showMessage(*message);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QErrorMessage_showMessage1(QErrorMessage * this_ptr, QString const * message, QString const * type) {
  this_ptr->showMessage(*message, *type);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFileDialog_metaObject(QFileDialog const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QFileDialog_qt_metacast(QFileDialog * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFileDialog_qt_metacall(QFileDialog * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_tr(char const * s, char const * c, int n) {
  return new QString(QFileDialog::tr(s, c, n));
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_QFileDialog_QFileDialog(QWidget * parent, int f) {
  return new QFileDialog(parent, QFlags< Qt::WindowType >(f));
}


RITUAL_EXPORT QFileDialog * ctr_qt_widgets_ffi_QFileDialog_QFileDialog1(QWidget * parent, QString const * caption, QString const * directory, QString const * filter) {
  return new QFileDialog(parent, *caption, *directory, *filter);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_dQFileDialog(QFileDialog * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setDirectory(QFileDialog * this_ptr, QString const * directory) {
  this_ptr->setDirectory(*directory);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setDirectory1(QFileDialog * this_ptr, QDir const * directory) {
  this_ptr->setDirectory(*directory);
}


RITUAL_EXPORT QDir * ctr_qt_widgets_ffi_QFileDialog_directory(QFileDialog const * this_ptr) {
  return new QDir(this_ptr->directory());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setDirectoryUrl(QFileDialog * this_ptr, QUrl const * directory) {
  this_ptr->setDirectoryUrl(*directory);
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_directoryUrl(QFileDialog const * this_ptr) {
  return new QUrl(this_ptr->directoryUrl());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_selectFile(QFileDialog * this_ptr, QString const * filename) {
  this_ptr->selectFile(*filename);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_selectedFiles(QFileDialog const * this_ptr) {
  return new QList< QString >(this_ptr->selectedFiles());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_selectUrl(QFileDialog * this_ptr, QUrl const * url) {
  this_ptr->selectUrl(*url);
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_selectedUrls(QFileDialog const * this_ptr) {
  return new QList< QUrl >(this_ptr->selectedUrls());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setNameFilter(QFileDialog * this_ptr, QString const * filter) {
  this_ptr->setNameFilter(*filter);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setNameFilters(QFileDialog * this_ptr, QList< QString > const * filters) {
  this_ptr->setNameFilters(*filters);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_nameFilters(QFileDialog const * this_ptr) {
  return new QList< QString >(this_ptr->nameFilters());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_selectNameFilter(QFileDialog * this_ptr, QString const * filter) {
  this_ptr->selectNameFilter(*filter);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_selectedMimeTypeFilter(QFileDialog const * this_ptr) {
  return new QString(this_ptr->selectedMimeTypeFilter());
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_selectedNameFilter(QFileDialog const * this_ptr) {
  return new QString(this_ptr->selectedNameFilter());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setMimeTypeFilters(QFileDialog * this_ptr, QList< QString > const * filters) {
  this_ptr->setMimeTypeFilters(*filters);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_mimeTypeFilters(QFileDialog const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypeFilters());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_selectMimeTypeFilter(QFileDialog * this_ptr, QString const * filter) {
  this_ptr->selectMimeTypeFilter(*filter);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFileDialog_filter(QFileDialog const * this_ptr) {
  return int(this_ptr->filter());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setFilter(QFileDialog * this_ptr, int filters) {
  this_ptr->setFilter(QFlags< QDir::Filter >(filters));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setViewMode(QFileDialog * this_ptr, QFileDialog::ViewMode mode) {
  this_ptr->setViewMode(mode);
}


RITUAL_EXPORT QFileDialog::ViewMode ctr_qt_widgets_ffi_QFileDialog_viewMode(QFileDialog const * this_ptr) {
  return this_ptr->viewMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setFileMode(QFileDialog * this_ptr, QFileDialog::FileMode mode) {
  this_ptr->setFileMode(mode);
}


RITUAL_EXPORT QFileDialog::FileMode ctr_qt_widgets_ffi_QFileDialog_fileMode(QFileDialog const * this_ptr) {
  return this_ptr->fileMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setAcceptMode(QFileDialog * this_ptr, QFileDialog::AcceptMode mode) {
  this_ptr->setAcceptMode(mode);
}


RITUAL_EXPORT QFileDialog::AcceptMode ctr_qt_widgets_ffi_QFileDialog_acceptMode(QFileDialog const * this_ptr) {
  return this_ptr->acceptMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setSidebarUrls(QFileDialog * this_ptr, QList< QUrl > const * urls) {
  this_ptr->setSidebarUrls(*urls);
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_sidebarUrls(QFileDialog const * this_ptr) {
  return new QList< QUrl >(this_ptr->sidebarUrls());
}


RITUAL_EXPORT QByteArray * ctr_qt_widgets_ffi_QFileDialog_saveState(QFileDialog const * this_ptr) {
  return new QByteArray(this_ptr->saveState());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QFileDialog_restoreState(QFileDialog * this_ptr, QByteArray const * state) {
  return this_ptr->restoreState(*state);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setDefaultSuffix(QFileDialog * this_ptr, QString const * suffix) {
  this_ptr->setDefaultSuffix(*suffix);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_defaultSuffix(QFileDialog const * this_ptr) {
  return new QString(this_ptr->defaultSuffix());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setHistory(QFileDialog * this_ptr, QList< QString > const * paths) {
  this_ptr->setHistory(*paths);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_history(QFileDialog const * this_ptr) {
  return new QList< QString >(this_ptr->history());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setItemDelegate(QFileDialog * this_ptr, QAbstractItemDelegate * delegate) {
  this_ptr->setItemDelegate(delegate);
}


RITUAL_EXPORT QAbstractItemDelegate * ctr_qt_widgets_ffi_QFileDialog_itemDelegate(QFileDialog const * this_ptr) {
  return this_ptr->itemDelegate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setIconProvider(QFileDialog * this_ptr, QAbstractFileIconProvider * provider) {
  this_ptr->setIconProvider(provider);
}


RITUAL_EXPORT QAbstractFileIconProvider * ctr_qt_widgets_ffi_QFileDialog_iconProvider(QFileDialog const * this_ptr) {
  return this_ptr->iconProvider();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setLabelText(QFileDialog * this_ptr, QFileDialog::DialogLabel label, QString const * text) {
  this_ptr->setLabelText(label, *text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_labelText(QFileDialog const * this_ptr, QFileDialog::DialogLabel label) {
  return new QString(this_ptr->labelText(label));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setSupportedSchemes(QFileDialog * this_ptr, QList< QString > const * schemes) {
  this_ptr->setSupportedSchemes(*schemes);
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_supportedSchemes(QFileDialog const * this_ptr) {
  return new QList< QString >(this_ptr->supportedSchemes());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setProxyModel(QFileDialog * this_ptr, QAbstractProxyModel * model) {
  this_ptr->setProxyModel(model);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_widgets_ffi_QFileDialog_proxyModel(QFileDialog const * this_ptr) {
  return this_ptr->proxyModel();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setOption(QFileDialog * this_ptr, QFileDialog::Option option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QFileDialog_testOption(QFileDialog const * this_ptr, QFileDialog::Option option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setOptions(QFileDialog * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QFileDialog::Option >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFileDialog_options(QFileDialog const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_open(QFileDialog * this_ptr, QObject * receiver, char const * member) {
  this_ptr->open(receiver, member);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_setVisible(QFileDialog * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getOpenFileName(QWidget * parent, QString const * caption, QString const * dir, QString const * filter, QString * selectedFilter, int options) {
  return new QString(QFileDialog::getOpenFileName(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrl(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter, int options, QList< QString > const * supportedSchemes) {
  return new QUrl(QFileDialog::getOpenFileUrl(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options), *supportedSchemes));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getSaveFileName(QWidget * parent, QString const * caption, QString const * dir, QString const * filter, QString * selectedFilter, int options) {
  return new QString(QFileDialog::getSaveFileName(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getSaveFileUrl(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter, int options, QList< QString > const * supportedSchemes) {
  return new QUrl(QFileDialog::getSaveFileUrl(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options), *supportedSchemes));
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectory(QWidget * parent, QString const * caption, QString const * dir, int options) {
  return new QString(QFileDialog::getExistingDirectory(parent, *caption, *dir, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QUrl * ctr_qt_widgets_ffi_QFileDialog_getExistingDirectoryUrl(QWidget * parent, QString const * caption, QUrl const * dir, int options, QList< QString > const * supportedSchemes) {
  return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, *caption, *dir, QFlags< QFileDialog::Option >(options), *supportedSchemes));
}


RITUAL_EXPORT QList< QString > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileNames(QWidget * parent, QString const * caption, QString const * dir, QString const * filter, QString * selectedFilter, int options) {
  return new QList< QString >(QFileDialog::getOpenFileNames(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options)));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_widgets_ffi_QFileDialog_getOpenFileUrls(QWidget * parent, QString const * caption, QUrl const * dir, QString const * filter, QString * selectedFilter, int options, QList< QString > const * supportedSchemes) {
  return new QList< QUrl >(QFileDialog::getOpenFileUrls(parent, *caption, *dir, *filter, selectedFilter, QFlags< QFileDialog::Option >(options), *supportedSchemes));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileDialog_saveFileContent(QByteArray const * fileContent, QString const * fileNameHint, QWidget * parent) {
  QFileDialog::saveFileContent(*fileContent, *fileNameHint, parent);
}


RITUAL_EXPORT QFileIconProvider * ctr_qt_widgets_ffi_QFileIconProvider_QFileIconProvider() {
  return new QFileIconProvider();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFileIconProvider_dQFileIconProvider(QFileIconProvider * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QFileIconProvider_icon(QFileIconProvider const * this_ptr, QAbstractFileIconProvider::IconType type) {
  return new QIcon(this_ptr->icon(type));
}


RITUAL_EXPORT QIcon * ctr_qt_widgets_ffi_QFileIconProvider_icon1(QFileIconProvider const * this_ptr, QFileInfo const * info) {
  return new QIcon(this_ptr->icon(*info));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFocusFrame_metaObject(QFocusFrame const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QFocusFrame_qt_metacast(QFocusFrame * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFocusFrame_qt_metacall(QFocusFrame * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFocusFrame_tr(char const * s, char const * c, int n) {
  return new QString(QFocusFrame::tr(s, c, n));
}


RITUAL_EXPORT QFocusFrame * ctr_qt_widgets_ffi_QFocusFrame_QFocusFrame(QWidget * parent) {
  return new QFocusFrame(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFocusFrame_dQFocusFrame(QFocusFrame * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFocusFrame_setWidget(QFocusFrame * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QFocusFrame_widget(QFocusFrame const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFontComboBox_metaObject(QFontComboBox const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QFontComboBox_qt_metacast(QFontComboBox * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFontComboBox_qt_metacall(QFontComboBox * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFontComboBox_tr(char const * s, char const * c, int n) {
  return new QString(QFontComboBox::tr(s, c, n));
}


RITUAL_EXPORT QFontComboBox * ctr_qt_widgets_ffi_QFontComboBox_QFontComboBox(QWidget * parent) {
  return new QFontComboBox(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontComboBox_dQFontComboBox(QFontComboBox * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontComboBox_setWritingSystem(QFontComboBox * this_ptr, QFontDatabase::WritingSystem arg1) {
  this_ptr->setWritingSystem(arg1);
}


RITUAL_EXPORT QFontDatabase::WritingSystem ctr_qt_widgets_ffi_QFontComboBox_writingSystem(QFontComboBox const * this_ptr) {
  return this_ptr->writingSystem();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontComboBox_setFontFilters(QFontComboBox * this_ptr, int filters) {
  this_ptr->setFontFilters(QFlags< QFontComboBox::FontFilter >(filters));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFontComboBox_fontFilters(QFontComboBox const * this_ptr) {
  return int(this_ptr->fontFilters());
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontComboBox_currentFont(QFontComboBox const * this_ptr) {
  return new QFont(this_ptr->currentFont());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QFontComboBox_sizeHint(QFontComboBox const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontComboBox_setSampleTextForSystem(QFontComboBox * this_ptr, QFontDatabase::WritingSystem writingSystem, QString const * sampleText) {
  this_ptr->setSampleTextForSystem(writingSystem, *sampleText);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFontComboBox_sampleTextForSystem(QFontComboBox const * this_ptr, QFontDatabase::WritingSystem writingSystem) {
  return new QString(this_ptr->sampleTextForSystem(writingSystem));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontComboBox_setSampleTextForFont(QFontComboBox * this_ptr, QString const * fontFamily, QString const * sampleText) {
  this_ptr->setSampleTextForFont(*fontFamily, *sampleText);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFontComboBox_sampleTextForFont(QFontComboBox const * this_ptr, QString const * fontFamily) {
  return new QString(this_ptr->sampleTextForFont(*fontFamily));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontComboBox_setDisplayFont(QFontComboBox * this_ptr, QString const * fontFamily, QFont const * font) {
  this_ptr->setDisplayFont(*fontFamily, *font);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontComboBox_setCurrentFont(QFontComboBox * this_ptr, QFont const * f) {
  this_ptr->setCurrentFont(*f);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFontDialog_metaObject(QFontDialog const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QFontDialog_qt_metacast(QFontDialog * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFontDialog_qt_metacall(QFontDialog * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFontDialog_tr(char const * s, char const * c, int n) {
  return new QString(QFontDialog::tr(s, c, n));
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_QFontDialog_QFontDialog(QWidget * parent) {
  return new QFontDialog(parent);
}


RITUAL_EXPORT QFontDialog * ctr_qt_widgets_ffi_QFontDialog_QFontDialog1(QFont const * initial, QWidget * parent) {
  return new QFontDialog(*initial, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontDialog_dQFontDialog(QFontDialog * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontDialog_setCurrentFont(QFontDialog * this_ptr, QFont const * font) {
  this_ptr->setCurrentFont(*font);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_currentFont(QFontDialog const * this_ptr) {
  return new QFont(this_ptr->currentFont());
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_selectedFont(QFontDialog const * this_ptr) {
  return new QFont(this_ptr->selectedFont());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontDialog_setOption(QFontDialog * this_ptr, QFontDialog::FontDialogOption option, bool on) {
  this_ptr->setOption(option, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QFontDialog_testOption(QFontDialog const * this_ptr, QFontDialog::FontDialogOption option) {
  return this_ptr->testOption(option);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontDialog_setOptions(QFontDialog * this_ptr, int options) {
  this_ptr->setOptions(QFlags< QFontDialog::FontDialogOption >(options));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFontDialog_options(QFontDialog const * this_ptr) {
  return int(this_ptr->options());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontDialog_open(QFontDialog * this_ptr, QObject * receiver, char const * member) {
  this_ptr->open(receiver, member);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFontDialog_setVisible(QFontDialog * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_getFont(bool * ok, QWidget * parent) {
  return new QFont(QFontDialog::getFont(ok, parent));
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QFontDialog_getFont1(bool * ok, QFont const * initial, QWidget * parent, QString const * title, int options) {
  return new QFont(QFontDialog::getFont(ok, *initial, parent, *title, QFlags< QFontDialog::FontDialogOption >(options)));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QFormLayout_metaObject(QFormLayout const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QFormLayout_qt_metacast(QFormLayout * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_qt_metacall(QFormLayout * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QFormLayout_tr(char const * s, char const * c, int n) {
  return new QString(QFormLayout::tr(s, c, n));
}


RITUAL_EXPORT QFormLayout * ctr_qt_widgets_ffi_QFormLayout_QFormLayout(QWidget * parent) {
  return new QFormLayout(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_dQFormLayout(QFormLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setFieldGrowthPolicy(QFormLayout * this_ptr, QFormLayout::FieldGrowthPolicy policy) {
  this_ptr->setFieldGrowthPolicy(policy);
}


RITUAL_EXPORT QFormLayout::FieldGrowthPolicy ctr_qt_widgets_ffi_QFormLayout_fieldGrowthPolicy(QFormLayout const * this_ptr) {
  return this_ptr->fieldGrowthPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setRowWrapPolicy(QFormLayout * this_ptr, QFormLayout::RowWrapPolicy policy) {
  this_ptr->setRowWrapPolicy(policy);
}


RITUAL_EXPORT QFormLayout::RowWrapPolicy ctr_qt_widgets_ffi_QFormLayout_rowWrapPolicy(QFormLayout const * this_ptr) {
  return this_ptr->rowWrapPolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setLabelAlignment(QFormLayout * this_ptr, int alignment) {
  this_ptr->setLabelAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_labelAlignment(QFormLayout const * this_ptr) {
  return int(this_ptr->labelAlignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setFormAlignment(QFormLayout * this_ptr, int alignment) {
  this_ptr->setFormAlignment(QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_formAlignment(QFormLayout const * this_ptr) {
  return int(this_ptr->formAlignment());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setHorizontalSpacing(QFormLayout * this_ptr, int spacing) {
  this_ptr->setHorizontalSpacing(spacing);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_horizontalSpacing(QFormLayout const * this_ptr) {
  return this_ptr->horizontalSpacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setVerticalSpacing(QFormLayout * this_ptr, int spacing) {
  this_ptr->setVerticalSpacing(spacing);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_verticalSpacing(QFormLayout const * this_ptr) {
  return this_ptr->verticalSpacing();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_spacing(QFormLayout const * this_ptr) {
  return this_ptr->spacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setSpacing(QFormLayout * this_ptr, int arg1) {
  this_ptr->setSpacing(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_addRow(QFormLayout * this_ptr, QWidget * label, QWidget * field) {
  this_ptr->addRow(label, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_addRow1(QFormLayout * this_ptr, QWidget * label, QLayout * field) {
  this_ptr->addRow(label, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_addRow2(QFormLayout * this_ptr, QString const * labelText, QWidget * field) {
  this_ptr->addRow(*labelText, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_addRow3(QFormLayout * this_ptr, QString const * labelText, QLayout * field) {
  this_ptr->addRow(*labelText, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_addRow4(QFormLayout * this_ptr, QWidget * widget) {
  this_ptr->addRow(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_addRow5(QFormLayout * this_ptr, QLayout * layout) {
  this_ptr->addRow(layout);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_insertRow(QFormLayout * this_ptr, int row, QWidget * label, QWidget * field) {
  this_ptr->insertRow(row, label, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_insertRow1(QFormLayout * this_ptr, int row, QWidget * label, QLayout * field) {
  this_ptr->insertRow(row, label, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_insertRow2(QFormLayout * this_ptr, int row, QString const * labelText, QWidget * field) {
  this_ptr->insertRow(row, *labelText, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_insertRow3(QFormLayout * this_ptr, int row, QString const * labelText, QLayout * field) {
  this_ptr->insertRow(row, *labelText, field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_insertRow4(QFormLayout * this_ptr, int row, QWidget * widget) {
  this_ptr->insertRow(row, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_insertRow5(QFormLayout * this_ptr, int row, QLayout * layout) {
  this_ptr->insertRow(row, layout);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_removeRow(QFormLayout * this_ptr, int row) {
  this_ptr->removeRow(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_removeRow1(QFormLayout * this_ptr, QWidget * widget) {
  this_ptr->removeRow(widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_removeRow2(QFormLayout * this_ptr, QLayout * layout) {
  this_ptr->removeRow(layout);
}


RITUAL_EXPORT QFormLayout::TakeRowResult * ctr_qt_widgets_ffi_QFormLayout_takeRow(QFormLayout * this_ptr, int row) {
  return new QFormLayout::TakeRowResult(this_ptr->takeRow(row));
}


RITUAL_EXPORT QFormLayout::TakeRowResult * ctr_qt_widgets_ffi_QFormLayout_takeRow1(QFormLayout * this_ptr, QWidget * widget) {
  return new QFormLayout::TakeRowResult(this_ptr->takeRow(widget));
}


RITUAL_EXPORT QFormLayout::TakeRowResult * ctr_qt_widgets_ffi_QFormLayout_takeRow2(QFormLayout * this_ptr, QLayout * layout) {
  return new QFormLayout::TakeRowResult(this_ptr->takeRow(layout));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setItem(QFormLayout * this_ptr, int row, QFormLayout::ItemRole role, QLayoutItem * item) {
  this_ptr->setItem(row, role, item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setWidget(QFormLayout * this_ptr, int row, QFormLayout::ItemRole role, QWidget * widget) {
  this_ptr->setWidget(row, role, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setLayout(QFormLayout * this_ptr, int row, QFormLayout::ItemRole role, QLayout * layout) {
  this_ptr->setLayout(row, role, layout);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setRowVisible(QFormLayout * this_ptr, int row, bool on) {
  this_ptr->setRowVisible(row, on);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setRowVisible1(QFormLayout * this_ptr, QWidget * widget, bool on) {
  this_ptr->setRowVisible(widget, on);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setRowVisible2(QFormLayout * this_ptr, QLayout * layout, bool on) {
  this_ptr->setRowVisible(layout, on);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QFormLayout_isRowVisible(QFormLayout const * this_ptr, int row) {
  return this_ptr->isRowVisible(row);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QFormLayout_isRowVisible1(QFormLayout const * this_ptr, QWidget * widget) {
  return this_ptr->isRowVisible(widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QFormLayout_isRowVisible2(QFormLayout const * this_ptr, QLayout * layout) {
  return this_ptr->isRowVisible(layout);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QFormLayout_itemAt(QFormLayout const * this_ptr, int row, QFormLayout::ItemRole role) {
  return this_ptr->itemAt(row, role);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_getItemPosition(QFormLayout const * this_ptr, int index, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  this_ptr->getItemPosition(index, rowPtr, rolePtr);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_getWidgetPosition(QFormLayout const * this_ptr, QWidget * widget, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  this_ptr->getWidgetPosition(widget, rowPtr, rolePtr);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_getLayoutPosition(QFormLayout const * this_ptr, QLayout * layout, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  this_ptr->getLayoutPosition(layout, rowPtr, rolePtr);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QFormLayout_labelForField(QFormLayout const * this_ptr, QWidget * field) {
  return this_ptr->labelForField(field);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QFormLayout_labelForField1(QFormLayout const * this_ptr, QLayout * field) {
  return this_ptr->labelForField(field);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_addItem(QFormLayout * this_ptr, QLayoutItem * item) {
  this_ptr->addItem(item);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QFormLayout_itemAt1(QFormLayout const * this_ptr, int index) {
  return this_ptr->itemAt(index);
}


RITUAL_EXPORT QLayoutItem * ctr_qt_widgets_ffi_QFormLayout_takeAt(QFormLayout * this_ptr, int index) {
  return this_ptr->takeAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_setGeometry(QFormLayout * this_ptr, QRect const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QFormLayout_minimumSize(QFormLayout const * this_ptr) {
  return new QSize(this_ptr->minimumSize());
}


RITUAL_EXPORT QSize * ctr_qt_widgets_ffi_QFormLayout_sizeHint(QFormLayout const * this_ptr) {
  return new QSize(this_ptr->sizeHint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QFormLayout_invalidate(QFormLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QFormLayout_hasHeightForWidth(QFormLayout const * this_ptr) {
  return this_ptr->hasHeightForWidth();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_heightForWidth(QFormLayout const * this_ptr, int width) {
  return this_ptr->heightForWidth(width);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_expandingDirections(QFormLayout const * this_ptr) {
  return int(this_ptr->expandingDirections());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_count(QFormLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QFormLayout_rowCount(QFormLayout const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_qRegisterNormalizedMetaType_Qt__GestureState(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_Qt__GestureState(*arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_qRegisterNormalizedMetaType_Qt__GestureType(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_Qt__GestureType(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGesture_metaObject(QGesture const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGesture_qt_metacast(QGesture * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGesture_qt_metacall(QGesture * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGesture_tr(char const * s, char const * c, int n) {
  return new QString(QGesture::tr(s, c, n));
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_QGesture_QGesture(QObject * parent) {
  return new QGesture(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGesture_dQGesture(QGesture * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::GestureType ctr_qt_widgets_ffi_QGesture_gestureType(QGesture const * this_ptr) {
  return this_ptr->gestureType();
}


RITUAL_EXPORT Qt::GestureState ctr_qt_widgets_ffi_QGesture_state(QGesture const * this_ptr) {
  return this_ptr->state();
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGesture_hotSpot(QGesture const * this_ptr) {
  return new QPointF(this_ptr->hotSpot());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGesture_setHotSpot(QGesture * this_ptr, QPointF const * value) {
  this_ptr->setHotSpot(*value);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGesture_hasHotSpot(QGesture const * this_ptr) {
  return this_ptr->hasHotSpot();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGesture_unsetHotSpot(QGesture * this_ptr) {
  this_ptr->unsetHotSpot();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGesture_setGestureCancelPolicy(QGesture * this_ptr, QGesture::GestureCancelPolicy policy) {
  this_ptr->setGestureCancelPolicy(policy);
}


RITUAL_EXPORT QGesture::GestureCancelPolicy ctr_qt_widgets_ffi_QGesture_gestureCancelPolicy(QGesture const * this_ptr) {
  return this_ptr->gestureCancelPolicy();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPanGesture_metaObject(QPanGesture const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QPanGesture_qt_metacast(QPanGesture * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPanGesture_qt_metacall(QPanGesture * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPanGesture_tr(char const * s, char const * c, int n) {
  return new QString(QPanGesture::tr(s, c, n));
}


RITUAL_EXPORT QPanGesture * ctr_qt_widgets_ffi_QPanGesture_QPanGesture(QObject * parent) {
  return new QPanGesture(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPanGesture_dQPanGesture(QPanGesture * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QPanGesture_lastOffset(QPanGesture const * this_ptr) {
  return new QPointF(this_ptr->lastOffset());
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QPanGesture_offset(QPanGesture const * this_ptr) {
  return new QPointF(this_ptr->offset());
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QPanGesture_delta(QPanGesture const * this_ptr) {
  return new QPointF(this_ptr->delta());
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPanGesture_acceleration(QPanGesture const * this_ptr) {
  return this_ptr->acceleration();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPanGesture_setLastOffset(QPanGesture * this_ptr, QPointF const * value) {
  this_ptr->setLastOffset(*value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPanGesture_setOffset(QPanGesture * this_ptr, QPointF const * value) {
  this_ptr->setOffset(*value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPanGesture_setAcceleration(QPanGesture * this_ptr, double value) {
  this_ptr->setAcceleration(value);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QPinchGesture_metaObject(QPinchGesture const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QPinchGesture_qt_metacast(QPinchGesture * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPinchGesture_qt_metacall(QPinchGesture * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QPinchGesture_tr(char const * s, char const * c, int n) {
  return new QString(QPinchGesture::tr(s, c, n));
}


RITUAL_EXPORT QPinchGesture * ctr_qt_widgets_ffi_QPinchGesture_QPinchGesture(QObject * parent) {
  return new QPinchGesture(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_dQPinchGesture(QPinchGesture * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPinchGesture_totalChangeFlags(QPinchGesture const * this_ptr) {
  return int(this_ptr->totalChangeFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setTotalChangeFlags(QPinchGesture * this_ptr, int value) {
  this_ptr->setTotalChangeFlags(QFlags< QPinchGesture::ChangeFlag >(value));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QPinchGesture_changeFlags(QPinchGesture const * this_ptr) {
  return int(this_ptr->changeFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setChangeFlags(QPinchGesture * this_ptr, int value) {
  this_ptr->setChangeFlags(QFlags< QPinchGesture::ChangeFlag >(value));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QPinchGesture_startCenterPoint(QPinchGesture const * this_ptr) {
  return new QPointF(this_ptr->startCenterPoint());
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QPinchGesture_lastCenterPoint(QPinchGesture const * this_ptr) {
  return new QPointF(this_ptr->lastCenterPoint());
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QPinchGesture_centerPoint(QPinchGesture const * this_ptr) {
  return new QPointF(this_ptr->centerPoint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setStartCenterPoint(QPinchGesture * this_ptr, QPointF const * value) {
  this_ptr->setStartCenterPoint(*value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setLastCenterPoint(QPinchGesture * this_ptr, QPointF const * value) {
  this_ptr->setLastCenterPoint(*value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setCenterPoint(QPinchGesture * this_ptr, QPointF const * value) {
  this_ptr->setCenterPoint(*value);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPinchGesture_totalScaleFactor(QPinchGesture const * this_ptr) {
  return this_ptr->totalScaleFactor();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPinchGesture_lastScaleFactor(QPinchGesture const * this_ptr) {
  return this_ptr->lastScaleFactor();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPinchGesture_scaleFactor(QPinchGesture const * this_ptr) {
  return this_ptr->scaleFactor();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setTotalScaleFactor(QPinchGesture * this_ptr, double value) {
  this_ptr->setTotalScaleFactor(value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setLastScaleFactor(QPinchGesture * this_ptr, double value) {
  this_ptr->setLastScaleFactor(value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setScaleFactor(QPinchGesture * this_ptr, double value) {
  this_ptr->setScaleFactor(value);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPinchGesture_totalRotationAngle(QPinchGesture const * this_ptr) {
  return this_ptr->totalRotationAngle();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPinchGesture_lastRotationAngle(QPinchGesture const * this_ptr) {
  return this_ptr->lastRotationAngle();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QPinchGesture_rotationAngle(QPinchGesture const * this_ptr) {
  return this_ptr->rotationAngle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setTotalRotationAngle(QPinchGesture * this_ptr, double value) {
  this_ptr->setTotalRotationAngle(value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setLastRotationAngle(QPinchGesture * this_ptr, double value) {
  this_ptr->setLastRotationAngle(value);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QPinchGesture_setRotationAngle(QPinchGesture * this_ptr, double value) {
  this_ptr->setRotationAngle(value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_qRegisterNormalizedMetaType_QPinchGesture__ChangeFlags(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPinchGesture__ChangeFlags(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QSwipeGesture_metaObject(QSwipeGesture const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QSwipeGesture_qt_metacast(QSwipeGesture * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QSwipeGesture_qt_metacall(QSwipeGesture * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QSwipeGesture_tr(char const * s, char const * c, int n) {
  return new QString(QSwipeGesture::tr(s, c, n));
}


RITUAL_EXPORT QSwipeGesture * ctr_qt_widgets_ffi_QSwipeGesture_QSwipeGesture(QObject * parent) {
  return new QSwipeGesture(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSwipeGesture_dQSwipeGesture(QSwipeGesture * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSwipeGesture::SwipeDirection ctr_qt_widgets_ffi_QSwipeGesture_horizontalDirection(QSwipeGesture const * this_ptr) {
  return this_ptr->horizontalDirection();
}


RITUAL_EXPORT QSwipeGesture::SwipeDirection ctr_qt_widgets_ffi_QSwipeGesture_verticalDirection(QSwipeGesture const * this_ptr) {
  return this_ptr->verticalDirection();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QSwipeGesture_swipeAngle(QSwipeGesture const * this_ptr) {
  return this_ptr->swipeAngle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QSwipeGesture_setSwipeAngle(QSwipeGesture * this_ptr, double value) {
  this_ptr->setSwipeAngle(value);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTapGesture_metaObject(QTapGesture const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTapGesture_qt_metacast(QTapGesture * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTapGesture_qt_metacall(QTapGesture * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTapGesture_tr(char const * s, char const * c, int n) {
  return new QString(QTapGesture::tr(s, c, n));
}


RITUAL_EXPORT QTapGesture * ctr_qt_widgets_ffi_QTapGesture_QTapGesture(QObject * parent) {
  return new QTapGesture(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTapGesture_dQTapGesture(QTapGesture * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QTapGesture_position(QTapGesture const * this_ptr) {
  return new QPointF(this_ptr->position());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTapGesture_setPosition(QTapGesture * this_ptr, QPointF const * pos) {
  this_ptr->setPosition(*pos);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QTapAndHoldGesture_metaObject(QTapAndHoldGesture const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QTapAndHoldGesture_qt_metacast(QTapAndHoldGesture * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTapAndHoldGesture_qt_metacall(QTapAndHoldGesture * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QTapAndHoldGesture_tr(char const * s, char const * c, int n) {
  return new QString(QTapAndHoldGesture::tr(s, c, n));
}


RITUAL_EXPORT QTapAndHoldGesture * ctr_qt_widgets_ffi_QTapAndHoldGesture_QTapAndHoldGesture(QObject * parent) {
  return new QTapAndHoldGesture(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTapAndHoldGesture_dQTapAndHoldGesture(QTapAndHoldGesture * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QTapAndHoldGesture_position(QTapAndHoldGesture const * this_ptr) {
  return new QPointF(this_ptr->position());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTapAndHoldGesture_setPosition(QTapAndHoldGesture * this_ptr, QPointF const * pos) {
  this_ptr->setPosition(*pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QTapAndHoldGesture_setTimeout(int msecs) {
  QTapAndHoldGesture::setTimeout(msecs);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QTapAndHoldGesture_timeout() {
  return QTapAndHoldGesture::timeout();
}


RITUAL_EXPORT QGestureEvent * ctr_qt_widgets_ffi_QGestureEvent_QGestureEvent(QList< QGesture * > const * gestures) {
  return new QGestureEvent(*gestures);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_dQGestureEvent(QGestureEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QGesture * > * ctr_qt_widgets_ffi_QGestureEvent_gestures(QGestureEvent const * this_ptr) {
  return new QList< QGesture * >(this_ptr->gestures());
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_QGestureEvent_gesture(QGestureEvent const * this_ptr, Qt::GestureType type) {
  return this_ptr->gesture(type);
}


RITUAL_EXPORT QList< QGesture * > * ctr_qt_widgets_ffi_QGestureEvent_activeGestures(QGestureEvent const * this_ptr) {
  return new QList< QGesture * >(this_ptr->activeGestures());
}


RITUAL_EXPORT QList< QGesture * > * ctr_qt_widgets_ffi_QGestureEvent_canceledGestures(QGestureEvent const * this_ptr) {
  return new QList< QGesture * >(this_ptr->canceledGestures());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_setAccepted(QGestureEvent * this_ptr, QGesture * arg1, bool arg2) {
  this_ptr->setAccepted(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_accept(QGestureEvent * this_ptr, QGesture * arg1) {
  this_ptr->accept(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_ignore(QGestureEvent * this_ptr, QGesture * arg1) {
  this_ptr->ignore(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGestureEvent_isAccepted(QGestureEvent const * this_ptr, QGesture * arg1) {
  return this_ptr->isAccepted(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_setAccepted1(QGestureEvent * this_ptr, Qt::GestureType arg1, bool arg2) {
  this_ptr->setAccepted(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_accept1(QGestureEvent * this_ptr, Qt::GestureType arg1) {
  this_ptr->accept(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_ignore1(QGestureEvent * this_ptr, Qt::GestureType arg1) {
  this_ptr->ignore(arg1);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGestureEvent_isAccepted1(QGestureEvent const * this_ptr, Qt::GestureType arg1) {
  return this_ptr->isAccepted(arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureEvent_setWidget(QGestureEvent * this_ptr, QWidget * widget) {
  this_ptr->setWidget(widget);
}


RITUAL_EXPORT QWidget * ctr_qt_widgets_ffi_QGestureEvent_widget(QGestureEvent const * this_ptr) {
  return this_ptr->widget();
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGestureEvent_mapToGraphicsScene(QGestureEvent const * this_ptr, QPointF const * gesturePoint) {
  return new QPointF(this_ptr->mapToGraphicsScene(*gesturePoint));
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__6(QDebug const * arg1, QGesture const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__7(QDebug const * arg1, QGestureEvent const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_qRegisterNormalizedMetaType_QGesture__GestureCancelPolicy(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QGesture__GestureCancelPolicy(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureRecognizer_dQGestureRecognizer(QGestureRecognizer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGesture * ctr_qt_widgets_ffi_QGestureRecognizer_create(QGestureRecognizer * this_ptr, QObject * target) {
  return this_ptr->create(target);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGestureRecognizer_recognize(QGestureRecognizer * this_ptr, QGesture * state, QObject * watched, QEvent * event) {
  return int(this_ptr->recognize(state, watched, event));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureRecognizer_reset(QGestureRecognizer * this_ptr, QGesture * state) {
  this_ptr->reset(state);
}


RITUAL_EXPORT Qt::GestureType ctr_qt_widgets_ffi_QGestureRecognizer_registerRecognizer(QGestureRecognizer * recognizer) {
  return QGestureRecognizer::registerRecognizer(recognizer);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGestureRecognizer_unregisterRecognizer(Qt::GestureType type) {
  QGestureRecognizer::unregisterRecognizer(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_dQGraphicsItem(QGraphicsItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGraphicsScene * ctr_qt_widgets_ffi_QGraphicsItem_scene(QGraphicsItem const * this_ptr) {
  return this_ptr->scene();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItem_parentItem(QGraphicsItem const * this_ptr) {
  return this_ptr->parentItem();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItem_topLevelItem(QGraphicsItem const * this_ptr) {
  return this_ptr->topLevelItem();
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_QGraphicsItem_parentObject(QGraphicsItem const * this_ptr) {
  return this_ptr->parentObject();
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsItem_parentWidget(QGraphicsItem const * this_ptr) {
  return this_ptr->parentWidget();
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsItem_topLevelWidget(QGraphicsItem const * this_ptr) {
  return this_ptr->topLevelWidget();
}


RITUAL_EXPORT QGraphicsWidget * ctr_qt_widgets_ffi_QGraphicsItem_window(QGraphicsItem const * this_ptr) {
  return this_ptr->window();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItem_panel(QGraphicsItem const * this_ptr) {
  return this_ptr->panel();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setParentItem(QGraphicsItem * this_ptr, QGraphicsItem * parent) {
  this_ptr->setParentItem(parent);
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsItem_childItems(QGraphicsItem const * this_ptr) {
  return new QList< QGraphicsItem * >(this_ptr->childItems());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isWidget(QGraphicsItem const * this_ptr) {
  return this_ptr->isWidget();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isWindow(QGraphicsItem const * this_ptr) {
  return this_ptr->isWindow();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isPanel(QGraphicsItem const * this_ptr) {
  return this_ptr->isPanel();
}


RITUAL_EXPORT QGraphicsObject * ctr_qt_widgets_ffi_QGraphicsItem_toGraphicsObject(QGraphicsItem * this_ptr) {
  return this_ptr->toGraphicsObject();
}


RITUAL_EXPORT QGraphicsObject const * ctr_qt_widgets_ffi_QGraphicsItem_toGraphicsObject1(QGraphicsItem const * this_ptr) {
  return this_ptr->toGraphicsObject();
}


RITUAL_EXPORT QGraphicsItemGroup * ctr_qt_widgets_ffi_QGraphicsItem_group(QGraphicsItem const * this_ptr) {
  return this_ptr->group();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setGroup(QGraphicsItem * this_ptr, QGraphicsItemGroup * group) {
  this_ptr->setGroup(group);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsItem_flags(QGraphicsItem const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setFlag(QGraphicsItem * this_ptr, QGraphicsItem::GraphicsItemFlag flag, bool enabled) {
  this_ptr->setFlag(flag, enabled);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setFlags(QGraphicsItem * this_ptr, int flags) {
  this_ptr->setFlags(QFlags< QGraphicsItem::GraphicsItemFlag >(flags));
}


RITUAL_EXPORT QGraphicsItem::CacheMode ctr_qt_widgets_ffi_QGraphicsItem_cacheMode(QGraphicsItem const * this_ptr) {
  return this_ptr->cacheMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setCacheMode(QGraphicsItem * this_ptr, QGraphicsItem::CacheMode mode, QSize const * cacheSize) {
  this_ptr->setCacheMode(mode, *cacheSize);
}


RITUAL_EXPORT QGraphicsItem::PanelModality ctr_qt_widgets_ffi_QGraphicsItem_panelModality(QGraphicsItem const * this_ptr) {
  return this_ptr->panelModality();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setPanelModality(QGraphicsItem * this_ptr, QGraphicsItem::PanelModality panelModality) {
  this_ptr->setPanelModality(panelModality);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isBlockedByModalPanel(QGraphicsItem const * this_ptr, QGraphicsItem * * blockingPanel) {
  return this_ptr->isBlockedByModalPanel(blockingPanel);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsItem_toolTip(QGraphicsItem const * this_ptr) {
  return new QString(this_ptr->toolTip());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setToolTip(QGraphicsItem * this_ptr, QString const * toolTip) {
  this_ptr->setToolTip(*toolTip);
}


RITUAL_EXPORT QCursor * ctr_qt_widgets_ffi_QGraphicsItem_cursor(QGraphicsItem const * this_ptr) {
  return new QCursor(this_ptr->cursor());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setCursor(QGraphicsItem * this_ptr, QCursor const * cursor) {
  this_ptr->setCursor(*cursor);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_hasCursor(QGraphicsItem const * this_ptr) {
  return this_ptr->hasCursor();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_unsetCursor(QGraphicsItem * this_ptr) {
  this_ptr->unsetCursor();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isVisible(QGraphicsItem const * this_ptr) {
  return this_ptr->isVisible();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isVisibleTo(QGraphicsItem const * this_ptr, QGraphicsItem const * parent) {
  return this_ptr->isVisibleTo(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setVisible(QGraphicsItem * this_ptr, bool visible) {
  this_ptr->setVisible(visible);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_hide(QGraphicsItem * this_ptr) {
  this_ptr->hide();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_show(QGraphicsItem * this_ptr) {
  this_ptr->show();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isEnabled(QGraphicsItem const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setEnabled(QGraphicsItem * this_ptr, bool enabled) {
  this_ptr->setEnabled(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isSelected(QGraphicsItem const * this_ptr) {
  return this_ptr->isSelected();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setSelected(QGraphicsItem * this_ptr, bool selected) {
  this_ptr->setSelected(selected);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_acceptDrops(QGraphicsItem const * this_ptr) {
  return this_ptr->acceptDrops();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setAcceptDrops(QGraphicsItem * this_ptr, bool on) {
  this_ptr->setAcceptDrops(on);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_opacity(QGraphicsItem const * this_ptr) {
  return this_ptr->opacity();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_effectiveOpacity(QGraphicsItem const * this_ptr) {
  return this_ptr->effectiveOpacity();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setOpacity(QGraphicsItem * this_ptr, double opacity) {
  this_ptr->setOpacity(opacity);
}


RITUAL_EXPORT QGraphicsEffect * ctr_qt_widgets_ffi_QGraphicsItem_graphicsEffect(QGraphicsItem const * this_ptr) {
  return this_ptr->graphicsEffect();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setGraphicsEffect(QGraphicsItem * this_ptr, QGraphicsEffect * effect) {
  this_ptr->setGraphicsEffect(effect);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsItem_acceptedMouseButtons(QGraphicsItem const * this_ptr) {
  return int(this_ptr->acceptedMouseButtons());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setAcceptedMouseButtons(QGraphicsItem * this_ptr, int buttons) {
  this_ptr->setAcceptedMouseButtons(QFlags< Qt::MouseButton >(buttons));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_acceptHoverEvents(QGraphicsItem const * this_ptr) {
  return this_ptr->acceptHoverEvents();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setAcceptHoverEvents(QGraphicsItem * this_ptr, bool enabled) {
  this_ptr->setAcceptHoverEvents(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_acceptTouchEvents(QGraphicsItem const * this_ptr) {
  return this_ptr->acceptTouchEvents();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setAcceptTouchEvents(QGraphicsItem * this_ptr, bool enabled) {
  this_ptr->setAcceptTouchEvents(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_filtersChildEvents(QGraphicsItem const * this_ptr) {
  return this_ptr->filtersChildEvents();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setFiltersChildEvents(QGraphicsItem * this_ptr, bool enabled) {
  this_ptr->setFiltersChildEvents(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_handlesChildEvents(QGraphicsItem const * this_ptr) {
  return this_ptr->handlesChildEvents();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setHandlesChildEvents(QGraphicsItem * this_ptr, bool enabled) {
  this_ptr->setHandlesChildEvents(enabled);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isActive(QGraphicsItem const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setActive(QGraphicsItem * this_ptr, bool active) {
  this_ptr->setActive(active);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_hasFocus(QGraphicsItem const * this_ptr) {
  return this_ptr->hasFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setFocus(QGraphicsItem * this_ptr, Qt::FocusReason focusReason) {
  this_ptr->setFocus(focusReason);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_clearFocus(QGraphicsItem * this_ptr) {
  this_ptr->clearFocus();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItem_focusProxy(QGraphicsItem const * this_ptr) {
  return this_ptr->focusProxy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setFocusProxy(QGraphicsItem * this_ptr, QGraphicsItem * item) {
  this_ptr->setFocusProxy(item);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItem_focusItem(QGraphicsItem const * this_ptr) {
  return this_ptr->focusItem();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItem_focusScopeItem(QGraphicsItem const * this_ptr) {
  return this_ptr->focusScopeItem();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_grabMouse(QGraphicsItem * this_ptr) {
  this_ptr->grabMouse();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ungrabMouse(QGraphicsItem * this_ptr) {
  this_ptr->ungrabMouse();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_grabKeyboard(QGraphicsItem * this_ptr) {
  this_ptr->grabKeyboard();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ungrabKeyboard(QGraphicsItem * this_ptr) {
  this_ptr->ungrabKeyboard();
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_pos(QGraphicsItem const * this_ptr) {
  return new QPointF(this_ptr->pos());
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_x(QGraphicsItem const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setX(QGraphicsItem * this_ptr, double x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_y(QGraphicsItem const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setY(QGraphicsItem * this_ptr, double y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_scenePos(QGraphicsItem const * this_ptr) {
  return new QPointF(this_ptr->scenePos());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setPos(QGraphicsItem * this_ptr, QPointF const * pos) {
  this_ptr->setPos(*pos);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setPos1(QGraphicsItem * this_ptr, double x, double y) {
  this_ptr->setPos(x, y);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_moveBy(QGraphicsItem * this_ptr, double dx, double dy) {
  this_ptr->moveBy(dx, dy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ensureVisible(QGraphicsItem * this_ptr, QRectF const * rect, int xmargin, int ymargin) {
  this_ptr->ensureVisible(*rect, xmargin, ymargin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_ensureVisible1(QGraphicsItem * this_ptr, double x, double y, double w, double h, int xmargin, int ymargin) {
  this_ptr->ensureVisible(x, y, w, h, xmargin, ymargin);
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsItem_transform(QGraphicsItem const * this_ptr) {
  return new QTransform(this_ptr->transform());
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsItem_sceneTransform(QGraphicsItem const * this_ptr) {
  return new QTransform(this_ptr->sceneTransform());
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsItem_deviceTransform(QGraphicsItem const * this_ptr, QTransform const * viewportTransform) {
  return new QTransform(this_ptr->deviceTransform(*viewportTransform));
}


RITUAL_EXPORT QTransform * ctr_qt_widgets_ffi_QGraphicsItem_itemTransform(QGraphicsItem const * this_ptr, QGraphicsItem const * other, bool * ok) {
  return new QTransform(this_ptr->itemTransform(other, ok));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setTransform(QGraphicsItem * this_ptr, QTransform const * matrix, bool combine) {
  this_ptr->setTransform(*matrix, combine);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_resetTransform(QGraphicsItem * this_ptr) {
  this_ptr->resetTransform();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setRotation(QGraphicsItem * this_ptr, double angle) {
  this_ptr->setRotation(angle);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_rotation(QGraphicsItem const * this_ptr) {
  return this_ptr->rotation();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setScale(QGraphicsItem * this_ptr, double scale) {
  this_ptr->setScale(scale);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_scale(QGraphicsItem const * this_ptr) {
  return this_ptr->scale();
}


RITUAL_EXPORT QList< QGraphicsTransform * > * ctr_qt_widgets_ffi_QGraphicsItem_transformations(QGraphicsItem const * this_ptr) {
  return new QList< QGraphicsTransform * >(this_ptr->transformations());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setTransformations(QGraphicsItem * this_ptr, QList< QGraphicsTransform * > const * transformations) {
  this_ptr->setTransformations(*transformations);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_transformOriginPoint(QGraphicsItem const * this_ptr) {
  return new QPointF(this_ptr->transformOriginPoint());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setTransformOriginPoint(QGraphicsItem * this_ptr, QPointF const * origin) {
  this_ptr->setTransformOriginPoint(*origin);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setTransformOriginPoint1(QGraphicsItem * this_ptr, double ax, double ay) {
  this_ptr->setTransformOriginPoint(ax, ay);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_advance(QGraphicsItem * this_ptr, int phase) {
  this_ptr->advance(phase);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_zValue(QGraphicsItem const * this_ptr) {
  return this_ptr->zValue();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setZValue(QGraphicsItem * this_ptr, double z) {
  this_ptr->setZValue(z);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_stackBefore(QGraphicsItem * this_ptr, QGraphicsItem const * sibling) {
  this_ptr->stackBefore(sibling);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_boundingRect(QGraphicsItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_childrenBoundingRect(QGraphicsItem const * this_ptr) {
  return new QRectF(this_ptr->childrenBoundingRect());
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_sceneBoundingRect(QGraphicsItem const * this_ptr) {
  return new QRectF(this_ptr->sceneBoundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_shape(QGraphicsItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isClipped(QGraphicsItem const * this_ptr) {
  return this_ptr->isClipped();
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_clipPath(QGraphicsItem const * this_ptr) {
  return new QPainterPath(this_ptr->clipPath());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_contains(QGraphicsItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_collidesWithItem(QGraphicsItem const * this_ptr, QGraphicsItem const * other, Qt::ItemSelectionMode mode) {
  return this_ptr->collidesWithItem(other, mode);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_collidesWithPath(QGraphicsItem const * this_ptr, QPainterPath const * path, Qt::ItemSelectionMode mode) {
  return this_ptr->collidesWithPath(*path, mode);
}


RITUAL_EXPORT QList< QGraphicsItem * > * ctr_qt_widgets_ffi_QGraphicsItem_collidingItems(QGraphicsItem const * this_ptr, Qt::ItemSelectionMode mode) {
  return new QList< QGraphicsItem * >(this_ptr->collidingItems(mode));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isObscured(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return this_ptr->isObscured(*rect);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isObscured1(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return this_ptr->isObscured(x, y, w, h);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isObscuredBy(QGraphicsItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_opaqueArea(QGraphicsItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT QRegion * ctr_qt_widgets_ffi_QGraphicsItem_boundingRegion(QGraphicsItem const * this_ptr, QTransform const * itemToDeviceTransform) {
  return new QRegion(this_ptr->boundingRegion(*itemToDeviceTransform));
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsItem_boundingRegionGranularity(QGraphicsItem const * this_ptr) {
  return this_ptr->boundingRegionGranularity();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setBoundingRegionGranularity(QGraphicsItem * this_ptr, double granularity) {
  this_ptr->setBoundingRegionGranularity(granularity);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_paint(QGraphicsItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_update(QGraphicsItem * this_ptr, QRectF const * rect) {
  this_ptr->update(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_update1(QGraphicsItem * this_ptr, double x, double y, double width, double height) {
  this_ptr->update(x, y, width, height);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_scroll(QGraphicsItem * this_ptr, double dx, double dy, QRectF const * rect) {
  this_ptr->scroll(dx, dy, *rect);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapToItem(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QPointF const * point) {
  return new QPointF(this_ptr->mapToItem(item, *point));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapToParent(QGraphicsItem const * this_ptr, QPointF const * point) {
  return new QPointF(this_ptr->mapToParent(*point));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapToScene(QGraphicsItem const * this_ptr, QPointF const * point) {
  return new QPointF(this_ptr->mapToScene(*point));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToItem1(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QRectF const * rect) {
  return new QPolygonF(this_ptr->mapToItem(item, *rect));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToParent1(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QPolygonF(this_ptr->mapToParent(*rect));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToScene1(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QPolygonF(this_ptr->mapToScene(*rect));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectToItem(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QRectF const * rect) {
  return new QRectF(this_ptr->mapRectToItem(item, *rect));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectToParent(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QRectF(this_ptr->mapRectToParent(*rect));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectToScene(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QRectF(this_ptr->mapRectToScene(*rect));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToItem2(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QPolygonF const * polygon) {
  return new QPolygonF(this_ptr->mapToItem(item, *polygon));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToParent2(QGraphicsItem const * this_ptr, QPolygonF const * polygon) {
  return new QPolygonF(this_ptr->mapToParent(*polygon));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToScene2(QGraphicsItem const * this_ptr, QPolygonF const * polygon) {
  return new QPolygonF(this_ptr->mapToScene(*polygon));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_mapToItem3(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapToItem(item, *path));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_mapToParent3(QGraphicsItem const * this_ptr, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapToParent(*path));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_mapToScene3(QGraphicsItem const * this_ptr, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapToScene(*path));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromItem(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QPointF const * point) {
  return new QPointF(this_ptr->mapFromItem(item, *point));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromParent(QGraphicsItem const * this_ptr, QPointF const * point) {
  return new QPointF(this_ptr->mapFromParent(*point));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromScene(QGraphicsItem const * this_ptr, QPointF const * point) {
  return new QPointF(this_ptr->mapFromScene(*point));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromItem1(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QRectF const * rect) {
  return new QPolygonF(this_ptr->mapFromItem(item, *rect));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromParent1(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QPolygonF(this_ptr->mapFromParent(*rect));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromScene1(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QPolygonF(this_ptr->mapFromScene(*rect));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectFromItem(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QRectF const * rect) {
  return new QRectF(this_ptr->mapRectFromItem(item, *rect));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectFromParent(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QRectF(this_ptr->mapRectFromParent(*rect));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectFromScene(QGraphicsItem const * this_ptr, QRectF const * rect) {
  return new QRectF(this_ptr->mapRectFromScene(*rect));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromItem2(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QPolygonF const * polygon) {
  return new QPolygonF(this_ptr->mapFromItem(item, *polygon));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromParent2(QGraphicsItem const * this_ptr, QPolygonF const * polygon) {
  return new QPolygonF(this_ptr->mapFromParent(*polygon));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromScene2(QGraphicsItem const * this_ptr, QPolygonF const * polygon) {
  return new QPolygonF(this_ptr->mapFromScene(*polygon));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_mapFromItem3(QGraphicsItem const * this_ptr, QGraphicsItem const * item, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapFromItem(item, *path));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_mapFromParent3(QGraphicsItem const * this_ptr, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapFromParent(*path));
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItem_mapFromScene3(QGraphicsItem const * this_ptr, QPainterPath const * path) {
  return new QPainterPath(this_ptr->mapFromScene(*path));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapToItem4(QGraphicsItem const * this_ptr, QGraphicsItem const * item, double x, double y) {
  return new QPointF(this_ptr->mapToItem(item, x, y));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapToParent4(QGraphicsItem const * this_ptr, double x, double y) {
  return new QPointF(this_ptr->mapToParent(x, y));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapToScene4(QGraphicsItem const * this_ptr, double x, double y) {
  return new QPointF(this_ptr->mapToScene(x, y));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToItem5(QGraphicsItem const * this_ptr, QGraphicsItem const * item, double x, double y, double w, double h) {
  return new QPolygonF(this_ptr->mapToItem(item, x, y, w, h));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToParent5(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QPolygonF(this_ptr->mapToParent(x, y, w, h));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapToScene5(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QPolygonF(this_ptr->mapToScene(x, y, w, h));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectToItem1(QGraphicsItem const * this_ptr, QGraphicsItem const * item, double x, double y, double w, double h) {
  return new QRectF(this_ptr->mapRectToItem(item, x, y, w, h));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectToParent1(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QRectF(this_ptr->mapRectToParent(x, y, w, h));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectToScene1(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QRectF(this_ptr->mapRectToScene(x, y, w, h));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromItem4(QGraphicsItem const * this_ptr, QGraphicsItem const * item, double x, double y) {
  return new QPointF(this_ptr->mapFromItem(item, x, y));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromParent4(QGraphicsItem const * this_ptr, double x, double y) {
  return new QPointF(this_ptr->mapFromParent(x, y));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromScene4(QGraphicsItem const * this_ptr, double x, double y) {
  return new QPointF(this_ptr->mapFromScene(x, y));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromItem5(QGraphicsItem const * this_ptr, QGraphicsItem const * item, double x, double y, double w, double h) {
  return new QPolygonF(this_ptr->mapFromItem(item, x, y, w, h));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromParent5(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QPolygonF(this_ptr->mapFromParent(x, y, w, h));
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsItem_mapFromScene5(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QPolygonF(this_ptr->mapFromScene(x, y, w, h));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectFromItem1(QGraphicsItem const * this_ptr, QGraphicsItem const * item, double x, double y, double w, double h) {
  return new QRectF(this_ptr->mapRectFromItem(item, x, y, w, h));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectFromParent1(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QRectF(this_ptr->mapRectFromParent(x, y, w, h));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItem_mapRectFromScene1(QGraphicsItem const * this_ptr, double x, double y, double w, double h) {
  return new QRectF(this_ptr->mapRectFromScene(x, y, w, h));
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isAncestorOf(QGraphicsItem const * this_ptr, QGraphicsItem const * child) {
  return this_ptr->isAncestorOf(child);
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsItem_commonAncestorItem(QGraphicsItem const * this_ptr, QGraphicsItem const * other) {
  return this_ptr->commonAncestorItem(other);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItem_isUnderMouse(QGraphicsItem const * this_ptr) {
  return this_ptr->isUnderMouse();
}


RITUAL_EXPORT QVariant * ctr_qt_widgets_ffi_QGraphicsItem_data(QGraphicsItem const * this_ptr, int key) {
  return new QVariant(this_ptr->data(key));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setData(QGraphicsItem * this_ptr, int key, QVariant const * value) {
  this_ptr->setData(key, *value);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsItem_inputMethodHints(QGraphicsItem const * this_ptr) {
  return int(this_ptr->inputMethodHints());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_setInputMethodHints(QGraphicsItem * this_ptr, int hints) {
  this_ptr->setInputMethodHints(QFlags< Qt::InputMethodHint >(hints));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsItem_type(QGraphicsItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_installSceneEventFilter(QGraphicsItem * this_ptr, QGraphicsItem * filterItem) {
  this_ptr->installSceneEventFilter(filterItem);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItem_removeSceneEventFilter(QGraphicsItem * this_ptr, QGraphicsItem * filterItem) {
  this_ptr->removeSceneEventFilter(filterItem);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsObject_metaObject(QGraphicsObject const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsObject_qt_metacast(QGraphicsObject * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsObject_qt_metacall(QGraphicsObject * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsObject_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsObject::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsObject_dQGraphicsObject(QGraphicsObject * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsObject_grabGesture(QGraphicsObject * this_ptr, Qt::GestureType type, int flags) {
  this_ptr->grabGesture(type, QFlags< Qt::GestureFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsObject_ungrabGesture(QGraphicsObject * this_ptr, Qt::GestureType type) {
  this_ptr->ungrabGesture(type);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractGraphicsShapeItem_dQAbstractGraphicsShapeItem(QAbstractGraphicsShapeItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPen * ctr_qt_widgets_ffi_QAbstractGraphicsShapeItem_pen(QAbstractGraphicsShapeItem const * this_ptr) {
  return new QPen(this_ptr->pen());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractGraphicsShapeItem_setPen(QAbstractGraphicsShapeItem * this_ptr, QPen const * pen) {
  this_ptr->setPen(*pen);
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QAbstractGraphicsShapeItem_brush(QAbstractGraphicsShapeItem const * this_ptr) {
  return new QBrush(this_ptr->brush());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QAbstractGraphicsShapeItem_setBrush(QAbstractGraphicsShapeItem * this_ptr, QBrush const * brush) {
  this_ptr->setBrush(*brush);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QAbstractGraphicsShapeItem_isObscuredBy(QAbstractGraphicsShapeItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QAbstractGraphicsShapeItem_opaqueArea(QAbstractGraphicsShapeItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_QGraphicsPathItem_QGraphicsPathItem(QGraphicsItem * parent) {
  return new QGraphicsPathItem(parent);
}


RITUAL_EXPORT QGraphicsPathItem * ctr_qt_widgets_ffi_QGraphicsPathItem_QGraphicsPathItem1(QPainterPath const * path, QGraphicsItem * parent) {
  return new QGraphicsPathItem(*path, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPathItem_dQGraphicsPathItem(QGraphicsPathItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsPathItem_path(QGraphicsPathItem const * this_ptr) {
  return new QPainterPath(this_ptr->path());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPathItem_setPath(QGraphicsPathItem * this_ptr, QPainterPath const * path) {
  this_ptr->setPath(*path);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsPathItem_boundingRect(QGraphicsPathItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsPathItem_shape(QGraphicsPathItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsPathItem_contains(QGraphicsPathItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPathItem_paint(QGraphicsPathItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsPathItem_isObscuredBy(QGraphicsPathItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsPathItem_opaqueArea(QGraphicsPathItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsPathItem_type(QGraphicsPathItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsRectItem_QGraphicsRectItem(QGraphicsItem * parent) {
  return new QGraphicsRectItem(parent);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsRectItem_QGraphicsRectItem1(QRectF const * rect, QGraphicsItem * parent) {
  return new QGraphicsRectItem(*rect, parent);
}


RITUAL_EXPORT QGraphicsRectItem * ctr_qt_widgets_ffi_QGraphicsRectItem_QGraphicsRectItem2(double x, double y, double w, double h, QGraphicsItem * parent) {
  return new QGraphicsRectItem(x, y, w, h, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRectItem_dQGraphicsRectItem(QGraphicsRectItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsRectItem_rect(QGraphicsRectItem const * this_ptr) {
  return new QRectF(this_ptr->rect());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRectItem_setRect(QGraphicsRectItem * this_ptr, QRectF const * rect) {
  this_ptr->setRect(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRectItem_setRect1(QGraphicsRectItem * this_ptr, double x, double y, double w, double h) {
  this_ptr->setRect(x, y, w, h);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsRectItem_boundingRect(QGraphicsRectItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsRectItem_shape(QGraphicsRectItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsRectItem_contains(QGraphicsRectItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsRectItem_paint(QGraphicsRectItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsRectItem_isObscuredBy(QGraphicsRectItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsRectItem_opaqueArea(QGraphicsRectItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsRectItem_type(QGraphicsRectItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsEllipseItem_QGraphicsEllipseItem(QGraphicsItem * parent) {
  return new QGraphicsEllipseItem(parent);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsEllipseItem_QGraphicsEllipseItem1(QRectF const * rect, QGraphicsItem * parent) {
  return new QGraphicsEllipseItem(*rect, parent);
}


RITUAL_EXPORT QGraphicsEllipseItem * ctr_qt_widgets_ffi_QGraphicsEllipseItem_QGraphicsEllipseItem2(double x, double y, double w, double h, QGraphicsItem * parent) {
  return new QGraphicsEllipseItem(x, y, w, h, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEllipseItem_dQGraphicsEllipseItem(QGraphicsEllipseItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsEllipseItem_rect(QGraphicsEllipseItem const * this_ptr) {
  return new QRectF(this_ptr->rect());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEllipseItem_setRect(QGraphicsEllipseItem * this_ptr, QRectF const * rect) {
  this_ptr->setRect(*rect);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEllipseItem_setRect1(QGraphicsEllipseItem * this_ptr, double x, double y, double w, double h) {
  this_ptr->setRect(x, y, w, h);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsEllipseItem_startAngle(QGraphicsEllipseItem const * this_ptr) {
  return this_ptr->startAngle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEllipseItem_setStartAngle(QGraphicsEllipseItem * this_ptr, int angle) {
  this_ptr->setStartAngle(angle);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsEllipseItem_spanAngle(QGraphicsEllipseItem const * this_ptr) {
  return this_ptr->spanAngle();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEllipseItem_setSpanAngle(QGraphicsEllipseItem * this_ptr, int angle) {
  this_ptr->setSpanAngle(angle);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsEllipseItem_boundingRect(QGraphicsEllipseItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsEllipseItem_shape(QGraphicsEllipseItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsEllipseItem_contains(QGraphicsEllipseItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEllipseItem_paint(QGraphicsEllipseItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsEllipseItem_isObscuredBy(QGraphicsEllipseItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsEllipseItem_opaqueArea(QGraphicsEllipseItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsEllipseItem_type(QGraphicsEllipseItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_QGraphicsPolygonItem_QGraphicsPolygonItem(QGraphicsItem * parent) {
  return new QGraphicsPolygonItem(parent);
}


RITUAL_EXPORT QGraphicsPolygonItem * ctr_qt_widgets_ffi_QGraphicsPolygonItem_QGraphicsPolygonItem1(QPolygonF const * polygon, QGraphicsItem * parent) {
  return new QGraphicsPolygonItem(*polygon, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPolygonItem_dQGraphicsPolygonItem(QGraphicsPolygonItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPolygonF * ctr_qt_widgets_ffi_QGraphicsPolygonItem_polygon(QGraphicsPolygonItem const * this_ptr) {
  return new QPolygonF(this_ptr->polygon());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPolygonItem_setPolygon(QGraphicsPolygonItem * this_ptr, QPolygonF const * polygon) {
  this_ptr->setPolygon(*polygon);
}


RITUAL_EXPORT Qt::FillRule ctr_qt_widgets_ffi_QGraphicsPolygonItem_fillRule(QGraphicsPolygonItem const * this_ptr) {
  return this_ptr->fillRule();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPolygonItem_setFillRule(QGraphicsPolygonItem * this_ptr, Qt::FillRule rule) {
  this_ptr->setFillRule(rule);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsPolygonItem_boundingRect(QGraphicsPolygonItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsPolygonItem_shape(QGraphicsPolygonItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsPolygonItem_contains(QGraphicsPolygonItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPolygonItem_paint(QGraphicsPolygonItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsPolygonItem_isObscuredBy(QGraphicsPolygonItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsPolygonItem_opaqueArea(QGraphicsPolygonItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsPolygonItem_type(QGraphicsPolygonItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsLineItem_QGraphicsLineItem(QGraphicsItem * parent) {
  return new QGraphicsLineItem(parent);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsLineItem_QGraphicsLineItem1(QLineF const * line, QGraphicsItem * parent) {
  return new QGraphicsLineItem(*line, parent);
}


RITUAL_EXPORT QGraphicsLineItem * ctr_qt_widgets_ffi_QGraphicsLineItem_QGraphicsLineItem2(double x1, double y1, double x2, double y2, QGraphicsItem * parent) {
  return new QGraphicsLineItem(x1, y1, x2, y2, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLineItem_dQGraphicsLineItem(QGraphicsLineItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPen * ctr_qt_widgets_ffi_QGraphicsLineItem_pen(QGraphicsLineItem const * this_ptr) {
  return new QPen(this_ptr->pen());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLineItem_setPen(QGraphicsLineItem * this_ptr, QPen const * pen) {
  this_ptr->setPen(*pen);
}


RITUAL_EXPORT QLineF * ctr_qt_widgets_ffi_QGraphicsLineItem_line(QGraphicsLineItem const * this_ptr) {
  return new QLineF(this_ptr->line());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLineItem_setLine(QGraphicsLineItem * this_ptr, QLineF const * line) {
  this_ptr->setLine(*line);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLineItem_setLine1(QGraphicsLineItem * this_ptr, double x1, double y1, double x2, double y2) {
  this_ptr->setLine(x1, y1, x2, y2);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsLineItem_boundingRect(QGraphicsLineItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsLineItem_shape(QGraphicsLineItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsLineItem_contains(QGraphicsLineItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLineItem_paint(QGraphicsLineItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsLineItem_isObscuredBy(QGraphicsLineItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsLineItem_opaqueArea(QGraphicsLineItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsLineItem_type(QGraphicsLineItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsPixmapItem * ctr_qt_widgets_ffi_QGraphicsPixmapItem_QGraphicsPixmapItem(QGraphicsItem * parent) {
  return new QGraphicsPixmapItem(parent);
}


RITUAL_EXPORT QGraphicsPixmapItem * ctr_qt_widgets_ffi_QGraphicsPixmapItem_QGraphicsPixmapItem1(QPixmap const * pixmap, QGraphicsItem * parent) {
  return new QGraphicsPixmapItem(*pixmap, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPixmapItem_dQGraphicsPixmapItem(QGraphicsPixmapItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPixmap * ctr_qt_widgets_ffi_QGraphicsPixmapItem_pixmap(QGraphicsPixmapItem const * this_ptr) {
  return new QPixmap(this_ptr->pixmap());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPixmapItem_setPixmap(QGraphicsPixmapItem * this_ptr, QPixmap const * pixmap) {
  this_ptr->setPixmap(*pixmap);
}


RITUAL_EXPORT Qt::TransformationMode ctr_qt_widgets_ffi_QGraphicsPixmapItem_transformationMode(QGraphicsPixmapItem const * this_ptr) {
  return this_ptr->transformationMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPixmapItem_setTransformationMode(QGraphicsPixmapItem * this_ptr, Qt::TransformationMode mode) {
  this_ptr->setTransformationMode(mode);
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsPixmapItem_offset(QGraphicsPixmapItem const * this_ptr) {
  return new QPointF(this_ptr->offset());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPixmapItem_setOffset(QGraphicsPixmapItem * this_ptr, QPointF const * offset) {
  this_ptr->setOffset(*offset);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPixmapItem_setOffset1(QGraphicsPixmapItem * this_ptr, double x, double y) {
  this_ptr->setOffset(x, y);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsPixmapItem_boundingRect(QGraphicsPixmapItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsPixmapItem_shape(QGraphicsPixmapItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsPixmapItem_contains(QGraphicsPixmapItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPixmapItem_paint(QGraphicsPixmapItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsPixmapItem_isObscuredBy(QGraphicsPixmapItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsPixmapItem_opaqueArea(QGraphicsPixmapItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsPixmapItem_type(QGraphicsPixmapItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsPixmapItem::ShapeMode ctr_qt_widgets_ffi_QGraphicsPixmapItem_shapeMode(QGraphicsPixmapItem const * this_ptr) {
  return this_ptr->shapeMode();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsPixmapItem_setShapeMode(QGraphicsPixmapItem * this_ptr, QGraphicsPixmapItem::ShapeMode mode) {
  this_ptr->setShapeMode(mode);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsTextItem_metaObject(QGraphicsTextItem const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsTextItem_qt_metacast(QGraphicsTextItem * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsTextItem_qt_metacall(QGraphicsTextItem * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsTextItem_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsTextItem::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_QGraphicsTextItem_QGraphicsTextItem(QGraphicsItem * parent) {
  return new QGraphicsTextItem(parent);
}


RITUAL_EXPORT QGraphicsTextItem * ctr_qt_widgets_ffi_QGraphicsTextItem_QGraphicsTextItem1(QString const * text, QGraphicsItem * parent) {
  return new QGraphicsTextItem(*text, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_dQGraphicsTextItem(QGraphicsTextItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsTextItem_toHtml(QGraphicsTextItem const * this_ptr) {
  return new QString(this_ptr->toHtml());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setHtml(QGraphicsTextItem * this_ptr, QString const * html) {
  this_ptr->setHtml(*html);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsTextItem_toPlainText(QGraphicsTextItem const * this_ptr) {
  return new QString(this_ptr->toPlainText());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setPlainText(QGraphicsTextItem * this_ptr, QString const * text) {
  this_ptr->setPlainText(*text);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QGraphicsTextItem_font(QGraphicsTextItem const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setFont(QGraphicsTextItem * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setDefaultTextColor(QGraphicsTextItem * this_ptr, QColor const * c) {
  this_ptr->setDefaultTextColor(*c);
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QGraphicsTextItem_defaultTextColor(QGraphicsTextItem const * this_ptr) {
  return new QColor(this_ptr->defaultTextColor());
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsTextItem_boundingRect(QGraphicsTextItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsTextItem_shape(QGraphicsTextItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsTextItem_contains(QGraphicsTextItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_paint(QGraphicsTextItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsTextItem_isObscuredBy(QGraphicsTextItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsTextItem_opaqueArea(QGraphicsTextItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsTextItem_type(QGraphicsTextItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setTextWidth(QGraphicsTextItem * this_ptr, double width) {
  this_ptr->setTextWidth(width);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsTextItem_textWidth(QGraphicsTextItem const * this_ptr) {
  return this_ptr->textWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_adjustSize(QGraphicsTextItem * this_ptr) {
  this_ptr->adjustSize();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setDocument(QGraphicsTextItem * this_ptr, QTextDocument * document) {
  this_ptr->setDocument(document);
}


RITUAL_EXPORT QTextDocument * ctr_qt_widgets_ffi_QGraphicsTextItem_document(QGraphicsTextItem const * this_ptr) {
  return this_ptr->document();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setTextInteractionFlags(QGraphicsTextItem * this_ptr, int flags) {
  this_ptr->setTextInteractionFlags(QFlags< Qt::TextInteractionFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsTextItem_textInteractionFlags(QGraphicsTextItem const * this_ptr) {
  return int(this_ptr->textInteractionFlags());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setTabChangesFocus(QGraphicsTextItem * this_ptr, bool b) {
  this_ptr->setTabChangesFocus(b);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsTextItem_tabChangesFocus(QGraphicsTextItem const * this_ptr) {
  return this_ptr->tabChangesFocus();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setOpenExternalLinks(QGraphicsTextItem * this_ptr, bool open) {
  this_ptr->setOpenExternalLinks(open);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsTextItem_openExternalLinks(QGraphicsTextItem const * this_ptr) {
  return this_ptr->openExternalLinks();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsTextItem_setTextCursor(QGraphicsTextItem * this_ptr, QTextCursor const * cursor) {
  this_ptr->setTextCursor(*cursor);
}


RITUAL_EXPORT QTextCursor * ctr_qt_widgets_ffi_QGraphicsTextItem_textCursor(QGraphicsTextItem const * this_ptr) {
  return new QTextCursor(this_ptr->textCursor());
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_QGraphicsSimpleTextItem(QGraphicsItem * parent) {
  return new QGraphicsSimpleTextItem(parent);
}


RITUAL_EXPORT QGraphicsSimpleTextItem * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_QGraphicsSimpleTextItem1(QString const * text, QGraphicsItem * parent) {
  return new QGraphicsSimpleTextItem(*text, parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_dQGraphicsSimpleTextItem(QGraphicsSimpleTextItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_setText(QGraphicsSimpleTextItem * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_text(QGraphicsSimpleTextItem const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_setFont(QGraphicsSimpleTextItem * this_ptr, QFont const * font) {
  this_ptr->setFont(*font);
}


RITUAL_EXPORT QFont * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_font(QGraphicsSimpleTextItem const * this_ptr) {
  return new QFont(this_ptr->font());
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_boundingRect(QGraphicsSimpleTextItem const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_shape(QGraphicsSimpleTextItem const * this_ptr) {
  return new QPainterPath(this_ptr->shape());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_contains(QGraphicsSimpleTextItem const * this_ptr, QPointF const * point) {
  return this_ptr->contains(*point);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_paint(QGraphicsSimpleTextItem * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_isObscuredBy(QGraphicsSimpleTextItem const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_opaqueArea(QGraphicsSimpleTextItem const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsSimpleTextItem_type(QGraphicsSimpleTextItem const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QGraphicsItemGroup * ctr_qt_widgets_ffi_QGraphicsItemGroup_QGraphicsItemGroup(QGraphicsItem * parent) {
  return new QGraphicsItemGroup(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemGroup_dQGraphicsItemGroup(QGraphicsItemGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemGroup_addToGroup(QGraphicsItemGroup * this_ptr, QGraphicsItem * item) {
  this_ptr->addToGroup(item);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemGroup_removeFromGroup(QGraphicsItemGroup * this_ptr, QGraphicsItem * item) {
  this_ptr->removeFromGroup(item);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsItemGroup_boundingRect(QGraphicsItemGroup const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsItemGroup_paint(QGraphicsItemGroup * this_ptr, QPainter * painter, QStyleOptionGraphicsItem const * option, QWidget * widget) {
  this_ptr->paint(painter, option, widget);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsItemGroup_isObscuredBy(QGraphicsItemGroup const * this_ptr, QGraphicsItem const * item) {
  return this_ptr->isObscuredBy(item);
}


RITUAL_EXPORT QPainterPath * ctr_qt_widgets_ffi_QGraphicsItemGroup_opaqueArea(QGraphicsItemGroup const * this_ptr) {
  return new QPainterPath(this_ptr->opaqueArea());
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsItemGroup_type(QGraphicsItemGroup const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__8(QDebug const * debug, QGraphicsItem const * item) {
  return new QDebug(operator<<(*debug, item));
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__9(QDebug const * debug, QGraphicsObject const * item) {
  return new QDebug(operator<<(*debug, item));
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__10(QDebug const * debug, QGraphicsItem::GraphicsItemChange change) {
  return new QDebug(operator<<(*debug, change));
}


RITUAL_EXPORT QDebug * ctr_qt_widgets_ffi_operator__11(QDebug const * debug, QGraphicsItem::GraphicsItemFlag flag) {
  return new QDebug(operator<<(*debug, flag));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_qRegisterNormalizedMetaType_QGraphicsItem_ptr(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QGraphicsItem_ptr(*arg1);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_dQGraphicsLayoutItem(QGraphicsLayoutItem * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setSizePolicy(QGraphicsLayoutItem * this_ptr, QSizePolicy const * policy) {
  this_ptr->setSizePolicy(*policy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setSizePolicy1(QGraphicsLayoutItem * this_ptr, QSizePolicy::Policy hPolicy, QSizePolicy::Policy vPolicy, QSizePolicy::ControlType controlType) {
  this_ptr->setSizePolicy(hPolicy, vPolicy, controlType);
}


RITUAL_EXPORT QSizePolicy * ctr_qt_widgets_ffi_QGraphicsLayoutItem_sizePolicy(QGraphicsLayoutItem const * this_ptr) {
  return new QSizePolicy(this_ptr->sizePolicy());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMinimumSize(QGraphicsLayoutItem * this_ptr, QSizeF const * size) {
  this_ptr->setMinimumSize(*size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMinimumSize1(QGraphicsLayoutItem * this_ptr, double w, double h) {
  this_ptr->setMinimumSize(w, h);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsLayoutItem_minimumSize(QGraphicsLayoutItem const * this_ptr) {
  return new QSizeF(this_ptr->minimumSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMinimumWidth(QGraphicsLayoutItem * this_ptr, double width) {
  this_ptr->setMinimumWidth(width);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLayoutItem_minimumWidth(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->minimumWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMinimumHeight(QGraphicsLayoutItem * this_ptr, double height) {
  this_ptr->setMinimumHeight(height);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLayoutItem_minimumHeight(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->minimumHeight();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setPreferredSize(QGraphicsLayoutItem * this_ptr, QSizeF const * size) {
  this_ptr->setPreferredSize(*size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setPreferredSize1(QGraphicsLayoutItem * this_ptr, double w, double h) {
  this_ptr->setPreferredSize(w, h);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsLayoutItem_preferredSize(QGraphicsLayoutItem const * this_ptr) {
  return new QSizeF(this_ptr->preferredSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setPreferredWidth(QGraphicsLayoutItem * this_ptr, double width) {
  this_ptr->setPreferredWidth(width);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLayoutItem_preferredWidth(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->preferredWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setPreferredHeight(QGraphicsLayoutItem * this_ptr, double height) {
  this_ptr->setPreferredHeight(height);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLayoutItem_preferredHeight(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->preferredHeight();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMaximumSize(QGraphicsLayoutItem * this_ptr, QSizeF const * size) {
  this_ptr->setMaximumSize(*size);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMaximumSize1(QGraphicsLayoutItem * this_ptr, double w, double h) {
  this_ptr->setMaximumSize(w, h);
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsLayoutItem_maximumSize(QGraphicsLayoutItem const * this_ptr) {
  return new QSizeF(this_ptr->maximumSize());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMaximumWidth(QGraphicsLayoutItem * this_ptr, double width) {
  this_ptr->setMaximumWidth(width);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLayoutItem_maximumWidth(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->maximumWidth();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setMaximumHeight(QGraphicsLayoutItem * this_ptr, double height) {
  this_ptr->setMaximumHeight(height);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsLayoutItem_maximumHeight(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->maximumHeight();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setGeometry(QGraphicsLayoutItem * this_ptr, QRectF const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsLayoutItem_geometry(QGraphicsLayoutItem const * this_ptr) {
  return new QRectF(this_ptr->geometry());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_getContentsMargins(QGraphicsLayoutItem const * this_ptr, double * left, double * top, double * right, double * bottom) {
  this_ptr->getContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsLayoutItem_contentsRect(QGraphicsLayoutItem const * this_ptr) {
  return new QRectF(this_ptr->contentsRect());
}


RITUAL_EXPORT QSizeF * ctr_qt_widgets_ffi_QGraphicsLayoutItem_effectiveSizeHint(QGraphicsLayoutItem const * this_ptr, Qt::SizeHint which, QSizeF const * constraint) {
  return new QSizeF(this_ptr->effectiveSizeHint(which, *constraint));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_updateGeometry(QGraphicsLayoutItem * this_ptr) {
  this_ptr->updateGeometry();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsLayoutItem_isEmpty(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_QGraphicsLayoutItem_parentLayoutItem(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->parentLayoutItem();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayoutItem_setParentLayoutItem(QGraphicsLayoutItem * this_ptr, QGraphicsLayoutItem * parent) {
  this_ptr->setParentLayoutItem(parent);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsLayoutItem_isLayout(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->isLayout();
}


RITUAL_EXPORT QGraphicsItem * ctr_qt_widgets_ffi_QGraphicsLayoutItem_graphicsItem(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->graphicsItem();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsLayoutItem_ownedByLayout(QGraphicsLayoutItem const * this_ptr) {
  return this_ptr->ownedByLayout();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_dQGraphicsLayout(QGraphicsLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_setContentsMargins(QGraphicsLayout * this_ptr, double left, double top, double right, double bottom) {
  this_ptr->setContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_getContentsMargins(QGraphicsLayout const * this_ptr, double * left, double * top, double * right, double * bottom) {
  this_ptr->getContentsMargins(left, top, right, bottom);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_activate(QGraphicsLayout * this_ptr) {
  this_ptr->activate();
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsLayout_isActivated(QGraphicsLayout const * this_ptr) {
  return this_ptr->isActivated();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_invalidate(QGraphicsLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_updateGeometry(QGraphicsLayout * this_ptr) {
  this_ptr->updateGeometry();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_widgetEvent(QGraphicsLayout * this_ptr, QEvent * e) {
  this_ptr->widgetEvent(e);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsLayout_count(QGraphicsLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_QGraphicsLayout_itemAt(QGraphicsLayout const * this_ptr, int i) {
  return this_ptr->itemAt(i);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_removeAt(QGraphicsLayout * this_ptr, int index) {
  this_ptr->removeAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsLayout_setInstantInvalidatePropagation(bool enable) {
  QGraphicsLayout::setInstantInvalidatePropagation(enable);
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsLayout_instantInvalidatePropagation() {
  return QGraphicsLayout::instantInvalidatePropagation();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsAnchor_metaObject(QGraphicsAnchor const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsAnchor_qt_metacast(QGraphicsAnchor * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsAnchor_qt_metacall(QGraphicsAnchor * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsAnchor_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsAnchor::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchor_setSpacing(QGraphicsAnchor * this_ptr, double spacing) {
  this_ptr->setSpacing(spacing);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchor_unsetSpacing(QGraphicsAnchor * this_ptr) {
  this_ptr->unsetSpacing();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsAnchor_spacing(QGraphicsAnchor const * this_ptr) {
  return this_ptr->spacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchor_setSizePolicy(QGraphicsAnchor * this_ptr, QSizePolicy::Policy policy) {
  this_ptr->setSizePolicy(policy);
}


RITUAL_EXPORT QSizePolicy::Policy ctr_qt_widgets_ffi_QGraphicsAnchor_sizePolicy(QGraphicsAnchor const * this_ptr) {
  return this_ptr->sizePolicy();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchor_dQGraphicsAnchor(QGraphicsAnchor * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGraphicsAnchorLayout * ctr_qt_widgets_ffi_QGraphicsAnchorLayout_QGraphicsAnchorLayout(QGraphicsLayoutItem * parent) {
  return new QGraphicsAnchorLayout(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_dQGraphicsAnchorLayout(QGraphicsAnchorLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QGraphicsAnchor * ctr_qt_widgets_ffi_QGraphicsAnchorLayout_addAnchor(QGraphicsAnchorLayout * this_ptr, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return this_ptr->addAnchor(firstItem, firstEdge, secondItem, secondEdge);
}


RITUAL_EXPORT QGraphicsAnchor * ctr_qt_widgets_ffi_QGraphicsAnchorLayout_anchor(QGraphicsAnchorLayout * this_ptr, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return this_ptr->anchor(firstItem, firstEdge, secondItem, secondEdge);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_addCornerAnchors(QGraphicsAnchorLayout * this_ptr, QGraphicsLayoutItem * firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem * secondItem, Qt::Corner secondCorner) {
  this_ptr->addCornerAnchors(firstItem, firstCorner, secondItem, secondCorner);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_addAnchors(QGraphicsAnchorLayout * this_ptr, QGraphicsLayoutItem * firstItem, QGraphicsLayoutItem * secondItem, int orientations) {
  this_ptr->addAnchors(firstItem, secondItem, QFlags< Qt::Orientation >(orientations));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_setHorizontalSpacing(QGraphicsAnchorLayout * this_ptr, double spacing) {
  this_ptr->setHorizontalSpacing(spacing);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_setVerticalSpacing(QGraphicsAnchorLayout * this_ptr, double spacing) {
  this_ptr->setVerticalSpacing(spacing);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_setSpacing(QGraphicsAnchorLayout * this_ptr, double spacing) {
  this_ptr->setSpacing(spacing);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsAnchorLayout_horizontalSpacing(QGraphicsAnchorLayout const * this_ptr) {
  return this_ptr->horizontalSpacing();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsAnchorLayout_verticalSpacing(QGraphicsAnchorLayout const * this_ptr) {
  return this_ptr->verticalSpacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_removeAt(QGraphicsAnchorLayout * this_ptr, int index) {
  this_ptr->removeAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_setGeometry(QGraphicsAnchorLayout * this_ptr, QRectF const * rect) {
  this_ptr->setGeometry(*rect);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsAnchorLayout_count(QGraphicsAnchorLayout const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_QGraphicsAnchorLayout_itemAt(QGraphicsAnchorLayout const * this_ptr, int index) {
  return this_ptr->itemAt(index);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsAnchorLayout_invalidate(QGraphicsAnchorLayout * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsEffect_metaObject(QGraphicsEffect const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsEffect_qt_metacast(QGraphicsEffect * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsEffect_qt_metacall(QGraphicsEffect * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsEffect_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsEffect::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEffect_dQGraphicsEffect(QGraphicsEffect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsEffect_boundingRectFor(QGraphicsEffect const * this_ptr, QRectF const * sourceRect) {
  return new QRectF(this_ptr->boundingRectFor(*sourceRect));
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsEffect_boundingRect(QGraphicsEffect const * this_ptr) {
  return new QRectF(this_ptr->boundingRect());
}


RITUAL_EXPORT bool ctr_qt_widgets_ffi_QGraphicsEffect_isEnabled(QGraphicsEffect const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEffect_setEnabled(QGraphicsEffect * this_ptr, bool enable) {
  this_ptr->setEnabled(enable);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsEffect_update(QGraphicsEffect * this_ptr) {
  this_ptr->update();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsColorizeEffect_metaObject(QGraphicsColorizeEffect const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsColorizeEffect_qt_metacast(QGraphicsColorizeEffect * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsColorizeEffect_qt_metacall(QGraphicsColorizeEffect * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsColorizeEffect_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsColorizeEffect::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsColorizeEffect * ctr_qt_widgets_ffi_QGraphicsColorizeEffect_QGraphicsColorizeEffect(QObject * parent) {
  return new QGraphicsColorizeEffect(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsColorizeEffect_dQGraphicsColorizeEffect(QGraphicsColorizeEffect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QGraphicsColorizeEffect_color(QGraphicsColorizeEffect const * this_ptr) {
  return new QColor(this_ptr->color());
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsColorizeEffect_strength(QGraphicsColorizeEffect const * this_ptr) {
  return this_ptr->strength();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsColorizeEffect_setColor(QGraphicsColorizeEffect * this_ptr, QColor const * c) {
  this_ptr->setColor(*c);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsColorizeEffect_setStrength(QGraphicsColorizeEffect * this_ptr, double strength) {
  this_ptr->setStrength(strength);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsBlurEffect_metaObject(QGraphicsBlurEffect const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsBlurEffect_qt_metacast(QGraphicsBlurEffect * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsBlurEffect_qt_metacall(QGraphicsBlurEffect * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsBlurEffect_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsBlurEffect::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsBlurEffect * ctr_qt_widgets_ffi_QGraphicsBlurEffect_QGraphicsBlurEffect(QObject * parent) {
  return new QGraphicsBlurEffect(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsBlurEffect_dQGraphicsBlurEffect(QGraphicsBlurEffect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsBlurEffect_boundingRectFor(QGraphicsBlurEffect const * this_ptr, QRectF const * rect) {
  return new QRectF(this_ptr->boundingRectFor(*rect));
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsBlurEffect_blurRadius(QGraphicsBlurEffect const * this_ptr) {
  return this_ptr->blurRadius();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsBlurEffect_blurHints(QGraphicsBlurEffect const * this_ptr) {
  return int(this_ptr->blurHints());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsBlurEffect_setBlurRadius(QGraphicsBlurEffect * this_ptr, double blurRadius) {
  this_ptr->setBlurRadius(blurRadius);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsBlurEffect_setBlurHints(QGraphicsBlurEffect * this_ptr, int hints) {
  this_ptr->setBlurHints(QFlags< QGraphicsBlurEffect::BlurHint >(hints));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_metaObject(QGraphicsDropShadowEffect const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_qt_metacast(QGraphicsDropShadowEffect * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_qt_metacall(QGraphicsDropShadowEffect * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsDropShadowEffect::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsDropShadowEffect * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect(QObject * parent) {
  return new QGraphicsDropShadowEffect(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_dQGraphicsDropShadowEffect(QGraphicsDropShadowEffect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRectF * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_boundingRectFor(QGraphicsDropShadowEffect const * this_ptr, QRectF const * rect) {
  return new QRectF(this_ptr->boundingRectFor(*rect));
}


RITUAL_EXPORT QPointF * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_offset(QGraphicsDropShadowEffect const * this_ptr) {
  return new QPointF(this_ptr->offset());
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_xOffset(QGraphicsDropShadowEffect const * this_ptr) {
  return this_ptr->xOffset();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_yOffset(QGraphicsDropShadowEffect const * this_ptr) {
  return this_ptr->yOffset();
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_blurRadius(QGraphicsDropShadowEffect const * this_ptr) {
  return this_ptr->blurRadius();
}


RITUAL_EXPORT QColor * ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_color(QGraphicsDropShadowEffect const * this_ptr) {
  return new QColor(this_ptr->color());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_setOffset(QGraphicsDropShadowEffect * this_ptr, QPointF const * ofs) {
  this_ptr->setOffset(*ofs);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_setOffset1(QGraphicsDropShadowEffect * this_ptr, double dx, double dy) {
  this_ptr->setOffset(dx, dy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_setOffset2(QGraphicsDropShadowEffect * this_ptr, double d) {
  this_ptr->setOffset(d);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_setXOffset(QGraphicsDropShadowEffect * this_ptr, double dx) {
  this_ptr->setXOffset(dx);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_setYOffset(QGraphicsDropShadowEffect * this_ptr, double dy) {
  this_ptr->setYOffset(dy);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_setBlurRadius(QGraphicsDropShadowEffect * this_ptr, double blurRadius) {
  this_ptr->setBlurRadius(blurRadius);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsDropShadowEffect_setColor(QGraphicsDropShadowEffect * this_ptr, QColor const * color) {
  this_ptr->setColor(*color);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_widgets_ffi_QGraphicsOpacityEffect_metaObject(QGraphicsOpacityEffect const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_widgets_ffi_QGraphicsOpacityEffect_qt_metacast(QGraphicsOpacityEffect * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsOpacityEffect_qt_metacall(QGraphicsOpacityEffect * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_widgets_ffi_QGraphicsOpacityEffect_tr(char const * s, char const * c, int n) {
  return new QString(QGraphicsOpacityEffect::tr(s, c, n));
}


RITUAL_EXPORT QGraphicsOpacityEffect * ctr_qt_widgets_ffi_QGraphicsOpacityEffect_QGraphicsOpacityEffect(QObject * parent) {
  return new QGraphicsOpacityEffect(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsOpacityEffect_dQGraphicsOpacityEffect(QGraphicsOpacityEffect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsOpacityEffect_opacity(QGraphicsOpacityEffect const * this_ptr) {
  return this_ptr->opacity();
}


RITUAL_EXPORT QBrush * ctr_qt_widgets_ffi_QGraphicsOpacityEffect_opacityMask(QGraphicsOpacityEffect const * this_ptr) {
  return new QBrush(this_ptr->opacityMask());
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsOpacityEffect_setOpacity(QGraphicsOpacityEffect * this_ptr, double opacity) {
  this_ptr->setOpacity(opacity);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsOpacityEffect_setOpacityMask(QGraphicsOpacityEffect * this_ptr, QBrush const * mask) {
  this_ptr->setOpacityMask(*mask);
}


RITUAL_EXPORT QGraphicsGridLayout * ctr_qt_widgets_ffi_QGraphicsGridLayout_QGraphicsGridLayout(QGraphicsLayoutItem * parent) {
  return new QGraphicsGridLayout(parent);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_dQGraphicsGridLayout(QGraphicsGridLayout * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_addItem(QGraphicsGridLayout * this_ptr, QGraphicsLayoutItem * item, int row, int column, int rowSpan, int columnSpan, int alignment) {
  this_ptr->addItem(item, row, column, rowSpan, columnSpan, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_addItem1(QGraphicsGridLayout * this_ptr, QGraphicsLayoutItem * item, int row, int column, int alignment) {
  this_ptr->addItem(item, row, column, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setHorizontalSpacing(QGraphicsGridLayout * this_ptr, double spacing) {
  this_ptr->setHorizontalSpacing(spacing);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_horizontalSpacing(QGraphicsGridLayout const * this_ptr) {
  return this_ptr->horizontalSpacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setVerticalSpacing(QGraphicsGridLayout * this_ptr, double spacing) {
  this_ptr->setVerticalSpacing(spacing);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_verticalSpacing(QGraphicsGridLayout const * this_ptr) {
  return this_ptr->verticalSpacing();
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setSpacing(QGraphicsGridLayout * this_ptr, double spacing) {
  this_ptr->setSpacing(spacing);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setRowSpacing(QGraphicsGridLayout * this_ptr, int row, double spacing) {
  this_ptr->setRowSpacing(row, spacing);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_rowSpacing(QGraphicsGridLayout const * this_ptr, int row) {
  return this_ptr->rowSpacing(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setColumnSpacing(QGraphicsGridLayout * this_ptr, int column, double spacing) {
  this_ptr->setColumnSpacing(column, spacing);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_columnSpacing(QGraphicsGridLayout const * this_ptr, int column) {
  return this_ptr->columnSpacing(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setRowStretchFactor(QGraphicsGridLayout * this_ptr, int row, int stretch) {
  this_ptr->setRowStretchFactor(row, stretch);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_rowStretchFactor(QGraphicsGridLayout const * this_ptr, int row) {
  return this_ptr->rowStretchFactor(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setColumnStretchFactor(QGraphicsGridLayout * this_ptr, int column, int stretch) {
  this_ptr->setColumnStretchFactor(column, stretch);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_columnStretchFactor(QGraphicsGridLayout const * this_ptr, int column) {
  return this_ptr->columnStretchFactor(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setRowMinimumHeight(QGraphicsGridLayout * this_ptr, int row, double height) {
  this_ptr->setRowMinimumHeight(row, height);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_rowMinimumHeight(QGraphicsGridLayout const * this_ptr, int row) {
  return this_ptr->rowMinimumHeight(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setRowPreferredHeight(QGraphicsGridLayout * this_ptr, int row, double height) {
  this_ptr->setRowPreferredHeight(row, height);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_rowPreferredHeight(QGraphicsGridLayout const * this_ptr, int row) {
  return this_ptr->rowPreferredHeight(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setRowMaximumHeight(QGraphicsGridLayout * this_ptr, int row, double height) {
  this_ptr->setRowMaximumHeight(row, height);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_rowMaximumHeight(QGraphicsGridLayout const * this_ptr, int row) {
  return this_ptr->rowMaximumHeight(row);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setRowFixedHeight(QGraphicsGridLayout * this_ptr, int row, double height) {
  this_ptr->setRowFixedHeight(row, height);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setColumnMinimumWidth(QGraphicsGridLayout * this_ptr, int column, double width) {
  this_ptr->setColumnMinimumWidth(column, width);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_columnMinimumWidth(QGraphicsGridLayout const * this_ptr, int column) {
  return this_ptr->columnMinimumWidth(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setColumnPreferredWidth(QGraphicsGridLayout * this_ptr, int column, double width) {
  this_ptr->setColumnPreferredWidth(column, width);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_columnPreferredWidth(QGraphicsGridLayout const * this_ptr, int column) {
  return this_ptr->columnPreferredWidth(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setColumnMaximumWidth(QGraphicsGridLayout * this_ptr, int column, double width) {
  this_ptr->setColumnMaximumWidth(column, width);
}


RITUAL_EXPORT double ctr_qt_widgets_ffi_QGraphicsGridLayout_columnMaximumWidth(QGraphicsGridLayout const * this_ptr, int column) {
  return this_ptr->columnMaximumWidth(column);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setColumnFixedWidth(QGraphicsGridLayout * this_ptr, int column, double width) {
  this_ptr->setColumnFixedWidth(column, width);
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setRowAlignment(QGraphicsGridLayout * this_ptr, int row, int alignment) {
  this_ptr->setRowAlignment(row, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_rowAlignment(QGraphicsGridLayout const * this_ptr, int row) {
  return int(this_ptr->rowAlignment(row));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setColumnAlignment(QGraphicsGridLayout * this_ptr, int column, int alignment) {
  this_ptr->setColumnAlignment(column, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_columnAlignment(QGraphicsGridLayout const * this_ptr, int column) {
  return int(this_ptr->columnAlignment(column));
}


RITUAL_EXPORT void ctr_qt_widgets_ffi_QGraphicsGridLayout_setAlignment(QGraphicsGridLayout * this_ptr, QGraphicsLayoutItem * item, int alignment) {
  this_ptr->setAlignment(item, QFlags< Qt::AlignmentFlag >(alignment));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_alignment(QGraphicsGridLayout const * this_ptr, QGraphicsLayoutItem * item) {
  return int(this_ptr->alignment(item));
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_rowCount(QGraphicsGridLayout const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_columnCount(QGraphicsGridLayout const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT QGraphicsLayoutItem * ctr_qt_widgets_ffi_QGraphicsGridLayout_itemAt(QGraphicsGridLayout const * this_ptr, int row, int column) {
  return this_ptr->itemAt(row, column);
}


RITUAL_EXPORT int ctr_qt_widgets_ffi_QGraphicsGridLayout_count(QGraphicsGridLayout const * this_ptr) {
  return this_ptr->count();
}


} // extern "C"
