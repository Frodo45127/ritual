#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! Functions that provide access to C++ operators

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QChart::AnimationOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_animation_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_chart::AnimationOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_charts_ffi_operator__(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QChartView::RubberBand> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_rubber_band(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_chart_view::RubberBand>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_charts_ffi_operator__1(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QPolarChart::PolarOrientation> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_polar_orientation(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_polar_chart::PolarOrientation>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_charts_ffi_operator__2(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}
