#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```Qt```</span>

/// Calls C++ function: <span style='color: green;'>```QString Qt::convertFromPlainText(const QString& plain, Qt::WhiteSpaceMode mode = …)```</span>.
#[inline(always)]
pub unsafe fn convert_from_plain_text_2a(
    plain: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QString>>,
    mode: ::qt_core::WhiteSpaceMode,
) -> ::cpp_core::CppBox<::qt_core::QString> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_Qt_convertFromPlainText(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QString>>::cast_into(plain)
                .as_raw_ptr(),
            mode,
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QString Qt::convertFromPlainText(const QString& plain)```</span>.
#[inline(always)]
pub unsafe fn convert_from_plain_text_1a(
    plain: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QString>>,
) -> ::cpp_core::CppBox<::qt_core::QString> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_Qt_convertFromPlainText1(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QString>>::cast_into(plain)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```bool Qt::mightBeRichText(QAnyStringView arg1)```</span>.
#[inline(always)]
pub unsafe fn might_be_rich_text(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QAnyStringView>>,
) -> bool {
    crate::__ffi::ctr_qt_gui_ffi_Qt_mightBeRichText(
        ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QAnyStringView>>::cast_into(arg1)
            .as_raw_ptr(),
    )
}
