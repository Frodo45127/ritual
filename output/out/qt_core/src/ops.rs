#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! Functions that provide access to C++ operators

/// Calls C++ function: <span style='color: green;'>```QByteArray operator+(const char* a1, const QByteArray& a2)```</span>.
#[inline(always)]
pub unsafe fn add_char_q_byte_array(
    a1: *const ::std::os::raw::c_char,
    a2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QByteArray>>,
) -> ::cpp_core::CppBox<crate::QByteArray> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_18(
            a1,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QByteArray>>::cast_into(a2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QByteArray operator+(char a1, const QByteArray& a2)```</span>.
#[inline(always)]
pub unsafe fn add_char_q_byte_array2(
    a1: ::std::os::raw::c_char,
    a2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QByteArray>>,
) -> ::cpp_core::CppBox<crate::QByteArray> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_19(
            a1,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QByteArray>>::cast_into(a2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QString operator+(const char* s1, const QString& s2)```</span>.
#[inline(always)]
pub unsafe fn add_char_q_string(
    s1: *const ::std::os::raw::c_char,
    s2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QString>>,
) -> ::cpp_core::CppBox<crate::QString> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_29(
            s1,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QString>>::cast_into(s2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QMargins operator+(int lhs, const QMargins& rhs)```</span>.
#[inline(always)]
pub unsafe fn add_int_q_margins(
    lhs: ::std::os::raw::c_int,
    rhs: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMargins>>,
) -> ::cpp_core::CppBox<crate::QMargins> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_305(
            lhs,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMargins>>::cast_into(rhs).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QMarginsF operator+(double lhs, const QMarginsF& rhs)```</span>.
#[inline(always)]
pub unsafe fn add_double_q_margins_f(
    lhs: ::std::os::raw::c_double,
    rhs: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMarginsF>>,
) -> ::cpp_core::CppBox<crate::QMarginsF> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_319(
            lhs,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMarginsF>>::cast_into(rhs).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QUrl::UrlFormattingOption f1, QUrl::UrlFormattingOption f2)```</span>.
#[inline(always)]
pub unsafe fn bit_or_2_url_formatting_option(
    f1: crate::q_url::UrlFormattingOption,
    f2: crate::q_url::UrlFormattingOption,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = { crate::__ffi::ctr_qt_core_ffi_operator_173(f1, f2) };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QUrl::UrlFormattingOption f1, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> f2)```</span>.
#[inline(always)]
pub unsafe fn bit_or_url_formatting_option_q_url_two_flags_of_url_formatting_option_component_formatting_option(
    f1: crate::q_url::UrlFormattingOption,
    f2: impl ::cpp_core::CastInto<
        ::cpp_core::Ref<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption>,
    >,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_174(
            f1,
            ::cpp_core::CastInto::<
                ::cpp_core::Ref<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption>,
            >::cast_into(f2)
            .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QUrl::UrlFormattingOption i, QUrl::ComponentFormattingOption f)```</span>.
#[inline(always)]
pub unsafe fn bit_or_url_formatting_option_component_formatting_option(
    i: crate::q_url::UrlFormattingOption,
    f: crate::q_url::ComponentFormattingOption,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = { crate::__ffi::ctr_qt_core_ffi_operator_175(i, f) };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QUrl::UrlFormattingOption i, QFlags<QUrl::ComponentFormattingOption> f)```</span>.
#[inline(always)]
pub unsafe fn bit_or_url_formatting_option_q_flags_component_formatting_option(
    i: crate::q_url::UrlFormattingOption,
    f: crate::QFlags<crate::q_url::ComponentFormattingOption>,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = { crate::__ffi::ctr_qt_core_ffi_operator_176(i, f.to_int()) };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QUrl::ComponentFormattingOption f, QUrl::UrlFormattingOption i)```</span>.
#[inline(always)]
pub unsafe fn bit_or_component_formatting_option_url_formatting_option(
    f: crate::q_url::ComponentFormattingOption,
    i: crate::q_url::UrlFormattingOption,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = { crate::__ffi::ctr_qt_core_ffi_operator_177(f, i) };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QFlags<QUrl::ComponentFormattingOption> f, QUrl::UrlFormattingOption i)```</span>.
#[inline(always)]
pub unsafe fn bit_or_q_flags_component_formatting_option_url_formatting_option(
    f: crate::QFlags<crate::q_url::ComponentFormattingOption>,
    i: crate::q_url::UrlFormattingOption,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = { crate::__ffi::ctr_qt_core_ffi_operator_178(f.to_int(), i) };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QUrl::ComponentFormattingOption f, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i)```</span>.
#[inline(always)]
pub unsafe fn bit_or_component_formatting_option_q_url_two_flags_of_url_formatting_option_component_formatting_option(
    f: crate::q_url::ComponentFormattingOption,
    i: impl ::cpp_core::CastInto<
        ::cpp_core::Ref<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption>,
    >,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_180(
            f,
            ::cpp_core::CastInto::<
                ::cpp_core::Ref<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption>,
            >::cast_into(i)
            .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> operator|(QFlags<QUrl::ComponentFormattingOption> f, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i)```</span>.
#[inline(always)]
pub unsafe fn bit_or_q_flags_component_formatting_option_q_url_two_flags_of_url_formatting_option_component_formatting_option(
    f: crate::QFlags<crate::q_url::ComponentFormattingOption>,
    i: impl ::cpp_core::CastInto<
        ::cpp_core::Ref<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption>,
    >,
) -> ::cpp_core::CppBox<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_181(
            f.to_int(),
            ::cpp_core::CastInto::<
                ::cpp_core::Ref<crate::QUrlTwoFlagsOfUrlFormattingOptionComponentFormattingOption>,
            >::cast_into(i)
            .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```bool operator==(QCborTag t, QCborKnownTags kt)```</span>.
#[inline(always)]
pub unsafe fn eq_q_cbor_tag_q_cbor_known_tags(
    t: crate::QCborTag,
    kt: crate::QCborKnownTags,
) -> bool {
    crate::__ffi::ctr_qt_core_ffi_operator__27(t, kt)
}

/// Calls C++ function: <span style='color: green;'>```bool operator==(QCborKnownTags kt, QCborTag t)```</span>.
#[inline(always)]
pub unsafe fn eq_q_cbor_known_tags_q_cbor_tag(
    kt: crate::QCborKnownTags,
    t: crate::QCborTag,
) -> bool {
    crate::__ffi::ctr_qt_core_ffi_operator__28(kt, t)
}

/// Calls C++ function: <span style='color: green;'>```QMargins operator*(int factor, const QMargins& margins)```</span>.
#[inline(always)]
pub unsafe fn mul_int_q_margins(
    factor: ::std::os::raw::c_int,
    margins: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMargins>>,
) -> ::cpp_core::CppBox<crate::QMargins> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_308(
            factor,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMargins>>::cast_into(margins)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QMargins operator*(double factor, const QMargins& margins)```</span>.
#[inline(always)]
pub unsafe fn mul_double_q_margins(
    factor: ::std::os::raw::c_double,
    margins: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMargins>>,
) -> ::cpp_core::CppBox<crate::QMargins> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_310(
            factor,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMargins>>::cast_into(margins)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QMarginsF operator*(double lhs, const QMarginsF& rhs)```</span>.
#[inline(always)]
pub unsafe fn mul_double_q_margins_f(
    lhs: ::std::os::raw::c_double,
    rhs: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMarginsF>>,
) -> ::cpp_core::CppBox<crate::QMarginsF> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_operator_322(
            lhs,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMarginsF>>::cast_into(rhs).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}
