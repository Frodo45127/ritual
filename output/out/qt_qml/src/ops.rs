#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! Functions that provide access to C++ operators

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QJSValue& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_j_s_value(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QJSValue>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_qml_ffi_operator__(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QJSValue>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, const QQmlError& error)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_qml_error(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    error: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QQmlError>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_qml_ffi_operator__2(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QQmlError>>::cast_into(error)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QJSEngine::Extension> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_extension(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_j_s_engine::Extension>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_qml_ffi_operator__3(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QQmlImageProviderBase::Flag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_qml_image_provider_base::Flag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_qml_ffi_operator__4(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QJSValue& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QJSValue>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_qml_ffi_operator__1(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QJSValue>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QJSValue,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}
