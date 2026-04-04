#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! Functions that provide access to C++ operators

/// Calls C++ function: <span style='color: green;'>```int operator&(QSizePolicy::Policy lhs, QSizePolicy::PolicyFlag rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_and_policy_policy_flag(
    lhs: crate::q_size_policy::Policy,
    rhs: crate::q_size_policy::PolicyFlag,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_12(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator&(QFrame::Shape lhs, QFrame::Shadow rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_and_shape_shadow(
    lhs: crate::q_frame::Shape,
    rhs: crate::q_frame::Shadow,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_59(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator&(QFrame::Shadow lhs, QFrame::Shape rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_and_shadow_shape(
    lhs: crate::q_frame::Shadow,
    rhs: crate::q_frame::Shape,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_62(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator|(QSizePolicy::Policy lhs, QSizePolicy::PolicyFlag rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_or_policy_policy_flag(
    lhs: crate::q_size_policy::Policy,
    rhs: crate::q_size_policy::PolicyFlag,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_11(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator|(QFrame::Shape lhs, QFrame::Shadow rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_or_shape_shadow(
    lhs: crate::q_frame::Shape,
    rhs: crate::q_frame::Shadow,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_58(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator|(QFrame::Shadow lhs, QFrame::Shape rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_or_shadow_shape(
    lhs: crate::q_frame::Shadow,
    rhs: crate::q_frame::Shape,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_61(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator^(QSizePolicy::Policy lhs, QSizePolicy::PolicyFlag rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_xor_policy_policy_flag(
    lhs: crate::q_size_policy::Policy,
    rhs: crate::q_size_policy::PolicyFlag,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_13(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator^(QFrame::Shape lhs, QFrame::Shadow rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_xor_shape_shadow(
    lhs: crate::q_frame::Shape,
    rhs: crate::q_frame::Shadow,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_60(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```int operator^(QFrame::Shadow lhs, QFrame::Shape rhs)```</span>.
#[inline(always)]
pub unsafe fn bit_xor_shadow_shape(
    lhs: crate::q_frame::Shadow,
    rhs: crate::q_frame::Shape,
) -> ::std::os::raw::c_int {
    crate::__ffi::ctr_qt_widgets_ffi_operator_63(lhs, rhs)
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QSizePolicy& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_q_size_policy(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QSizePolicy>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QSizePolicy>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, const QSizePolicy& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_size_policy(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QSizePolicy>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__2(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QSizePolicy>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QWidget* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_widget(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QWidget>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__3(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QWidget>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, const QStyleOption::OptionType& optionType)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_style_option_option_type(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    option_type: *const crate::q_style_option::OptionType,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__4(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            option_type,
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, const QStyleOption& option)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_style_option(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    option: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QStyleOption>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__5(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QStyleOption>>::cast_into(option)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QGesture* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_gesture(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QGesture>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__6(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QGesture>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QGestureEvent* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_gesture_event(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QGestureEvent>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__7(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QGestureEvent>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, const QGraphicsItem* item)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_graphics_item(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QGraphicsItem>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__8(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QGraphicsItem>>::cast_into(item)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, const QGraphicsObject* item)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_graphics_object(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QGraphicsObject>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__9(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QGraphicsObject>>::cast_into(item)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, QGraphicsItem::GraphicsItemChange change)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_graphics_item_graphics_item_change(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    change: crate::q_graphics_item::GraphicsItemChange,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__10(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            change,
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, QGraphicsItem::GraphicsItemFlag flag)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_graphics_item_graphics_item_flag(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    flag: crate::q_graphics_item::GraphicsItemFlag,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__11(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            flag,
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QGraphicsSceneEvent* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_debug_q_graphics_scene_event(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QGraphicsSceneEvent>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__12(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QGraphicsSceneEvent>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& out, const QListWidgetItem& item)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_q_list_widget_item(
    out: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QListWidgetItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__13(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(out)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QListWidgetItem>>::cast_into(item)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& out, const QTableWidgetItem& item)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_q_table_widget_item(
    out: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTableWidgetItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__16(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(out)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTableWidgetItem>>::cast_into(item)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& out, const QTreeWidgetItem& item)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_q_tree_widget_item(
    out: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTreeWidgetItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__17(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(out)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTreeWidgetItem>>::cast_into(item)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyle::StateFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_state_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style::StateFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__19(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyleOptionFrame::FrameFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_option_frame_frame_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style_option_frame::FrameFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__20(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyleOptionButton::ButtonFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_option_button_button_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style_option_button::ButtonFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__21(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyleOptionTab::CornerWidget> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_option_tab_corner_widget(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style_option_tab::CornerWidget>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__22(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyleOptionTab::TabFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_option_tab_tab_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style_option_tab::TabFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__23(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyleOptionToolBar::ToolBarFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_option_tool_bar_tool_bar_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style_option_tool_bar::ToolBarFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__24(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyleOptionViewItem::ViewItemFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_option_view_item_view_item_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style_option_view_item::ViewItemFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__25(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyle::SubControl> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_sub_control(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style::SubControl>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__26(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QAbstractSpinBox::StepEnabledFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_abstract_spin_box_step_enabled_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_abstract_spin_box::StepEnabledFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__27(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QStyleOptionToolButton::ToolButtonFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_style_option_tool_button_tool_button_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_style_option_tool_button::ToolButtonFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__28(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTreeWidgetItemIterator::IteratorFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_tree_widget_item_iterator_iterator_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_tree_widget_item_iterator::IteratorFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__29(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QSizePolicy::ControlType> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_size_policy_control_type(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_size_policy::ControlType>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__30(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QWidget::RenderFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_widget_render_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_widget::RenderFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__31(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QAbstractItemView::EditTrigger> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_abstract_item_view_edit_trigger(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_abstract_item_view::EditTrigger>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__32(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QColorDialog::ColorDialogOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_color_dialog_color_dialog_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_color_dialog::ColorDialogOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__33(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QDateTimeEdit::Section> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_date_time_edit_section(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_date_time_edit::Section>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__34(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QDialogButtonBox::StandardButton> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_dialog_button_box_standard_button(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_dialog_button_box::StandardButton>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__35(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QDockWidget::DockWidgetFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_dock_widget_dock_widget_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_dock_widget::DockWidgetFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__36(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QDrawBorderPixmap::DrawingHint> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_draw_border_pixmap_drawing_hint(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_draw_border_pixmap::DrawingHint>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__37(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QFileDialog::Option> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_file_dialog_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_file_dialog::Option>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__38(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QFontComboBox::FontFilter> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_font_combo_box_font_filter(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_font_combo_box::FontFilter>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__39(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QFontDialog::FontDialogOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_font_dialog_font_dialog_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_font_dialog::FontDialogOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__40(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QPinchGesture::ChangeFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_pinch_gesture_change_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_pinch_gesture::ChangeFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__41(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGestureRecognizer::ResultFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_gesture_recognizer_result_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_gesture_recognizer::ResultFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__42(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGraphicsItem::GraphicsItemFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_graphics_item_graphics_item_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_graphics_item::GraphicsItemFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__43(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGraphicsEffect::ChangeFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_graphics_effect_change_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_graphics_effect::ChangeFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__44(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGraphicsBlurEffect::BlurHint> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_graphics_blur_effect_blur_hint(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_graphics_blur_effect::BlurHint>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__45(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGraphicsScene::SceneLayer> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_graphics_scene_scene_layer(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_graphics_scene::SceneLayer>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__46(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGraphicsView::OptimizationFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_graphics_view_optimization_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_graphics_view::OptimizationFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__47(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGraphicsView::CacheModeFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_graphics_view_cache_mode_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_graphics_view::CacheModeFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__48(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QInputDialog::InputDialogOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_input_dialog_input_dialog_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_input_dialog::InputDialogOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__49(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QMainWindow::DockOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_main_window_dock_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_main_window::DockOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__50(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QMdiArea::AreaOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_mdi_area_area_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_mdi_area::AreaOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__51(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QMdiSubWindow::SubWindowOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_mdi_sub_window_sub_window_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_mdi_sub_window::SubWindowOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__52(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QMessageBox::StandardButton> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_message_box_standard_button(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_message_box::StandardButton>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__53(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QMessageBox::Option> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_message_box_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_message_box::Option>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__54(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTextEdit::AutoFormattingFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_text_edit_auto_formatting_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_text_edit::AutoFormattingFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__55(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QWizard::WizardOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_qt_core_q_data_stream_qt_core_q_flags_q_wizard_wizard_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_wizard::WizardOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__56(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QSizePolicy& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_size_policy(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QSizePolicy>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__1(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QSizePolicy>>::cast_into(arg2)
                .as_raw_ptr() as *mut crate::QSizePolicy,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& in, QListWidgetItem& item)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_list_widget_item(
    in_: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QListWidgetItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__14(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(in_)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QListWidgetItem>>::cast_into(item)
                .as_raw_ptr() as *mut crate::QListWidgetItem,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& in, QTableWidgetItem& item)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_table_widget_item(
    in_: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTableWidgetItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__15(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(in_)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTableWidgetItem>>::cast_into(item)
                .as_raw_ptr() as *mut crate::QTableWidgetItem,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& in, QTreeWidgetItem& item)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_tree_widget_item(
    in_: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTreeWidgetItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_widgets_ffi_operator__18(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(in_)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTreeWidgetItem>>::cast_into(item)
                .as_raw_ptr() as *mut crate::QTreeWidgetItem,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}
