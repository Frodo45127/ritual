#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! Functions that provide access to C++ operators

/// Calls C++ function: <span style='color: green;'>```QPoint operator*(const QPoint& p, const QTransform& m)```</span>.
#[inline(always)]
pub unsafe fn mul_q_point_q_transform(
    p: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QPoint>>,
    m: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTransform>>,
) -> ::cpp_core::CppBox<::qt_core::QPoint> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QPoint>>::cast_into(p).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTransform>>::cast_into(m).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QPointF operator*(const QPointF& p, const QTransform& m)```</span>.
#[inline(always)]
pub unsafe fn mul_q_point_f_q_transform(
    p: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QPointF>>,
    m: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTransform>>,
) -> ::cpp_core::CppBox<::qt_core::QPointF> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_1(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QPointF>>::cast_into(p).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTransform>>::cast_into(m).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QLineF operator*(const QLineF& l, const QTransform& m)```</span>.
#[inline(always)]
pub unsafe fn mul_q_line_f_q_transform(
    l: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QLineF>>,
    m: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTransform>>,
) -> ::cpp_core::CppBox<::qt_core::QLineF> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_2(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QLineF>>::cast_into(l).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTransform>>::cast_into(m).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QLine operator*(const QLine& l, const QTransform& m)```</span>.
#[inline(always)]
pub unsafe fn mul_q_line_q_transform(
    l: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QLine>>,
    m: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTransform>>,
) -> ::cpp_core::CppBox<::qt_core::QLine> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_3(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QLine>>::cast_into(l).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTransform>>::cast_into(m).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QPoint operator*(const QPoint& point, const QMatrix4x4& matrix)```</span>.
#[inline(always)]
pub unsafe fn mul_q_point_q_matrix4_x4(
    point: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QPoint>>,
    matrix: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMatrix4X4>>,
) -> ::cpp_core::CppBox<::qt_core::QPoint> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_173(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QPoint>>::cast_into(point)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMatrix4X4>>::cast_into(matrix)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QPointF operator*(const QPointF& point, const QMatrix4x4& matrix)```</span>.
#[inline(always)]
pub unsafe fn mul_q_point_f_q_matrix4_x4(
    point: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QPointF>>,
    matrix: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMatrix4X4>>,
) -> ::cpp_core::CppBox<::qt_core::QPointF> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_174(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QPointF>>::cast_into(point)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMatrix4X4>>::cast_into(matrix)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QMatrix4x4 operator*(float factor, const QMatrix4x4& matrix)```</span>.
#[inline(always)]
pub unsafe fn mul_float_q_matrix4_x4(
    factor: ::std::os::raw::c_float,
    matrix: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMatrix4X4>>,
) -> ::cpp_core::CppBox<crate::QMatrix4X4> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_178(
            factor,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMatrix4X4>>::cast_into(matrix)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QQuaternion operator*(float factor, const QQuaternion& quaternion)```</span>.
#[inline(always)]
pub unsafe fn mul_float_q_quaternion(
    factor: ::std::os::raw::c_float,
    quaternion: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QQuaternion>>,
) -> ::cpp_core::CppBox<crate::QQuaternion> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator_239(
            factor,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QQuaternion>>::cast_into(quaternion)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QColor& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_color(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QColor>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QColor>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QColor& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_color(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QColor>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__1(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QColor>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QPolygon& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_polygon(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPolygon>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__3(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPolygon>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& stream, const QPolygon& polygon)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_polygon(
    stream: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    polygon: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPolygon>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__4(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(stream)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPolygon>>::cast_into(polygon)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QPolygonF& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_polygon_f(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPolygonF>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__6(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPolygonF>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& stream, const QPolygonF& array)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_polygon_f(
    stream: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    array: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPolygonF>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__7(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(stream)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPolygonF>>::cast_into(array)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QRegion& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_region(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QRegion>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__9(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QRegion>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QRegion& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_region(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QRegion>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__11(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QRegion>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QTransform& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_transform(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTransform>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__12(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTransform>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QTransform& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_transform(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTransform>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__14(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTransform>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QImage& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_image(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QImage>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__15(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QImage>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QImage& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_image(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QImage>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__17(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QImage>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QPixmap& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_pixmap(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPixmap>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__18(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPixmap>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QPixmap& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_pixmap(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPixmap>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__20(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPixmap>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QIcon& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_icon(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QIcon>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__21(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QIcon>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, const QIcon& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_icon(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QIcon>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__23(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QIcon>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, QVector2D vector)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_vector_2d(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    vector: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector2D>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__24(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector2D>>::cast_into(vector)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, QVector2D arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_vector_2d(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector2D>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__25(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector2D>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, QVector3D vector)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_vector_3d(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    vector: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector3D>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__27(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector3D>>::cast_into(vector)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, QVector3D arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_vector_3d(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector3D>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__28(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector3D>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, QVector4D vector)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_vector_4d(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    vector: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector4D>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__30(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector4D>>::cast_into(vector)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, QVector4D arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_vector_4d(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector4D>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__31(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector4D>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QScreen* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_screen(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QScreen>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__33(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QScreen>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QInputDevice* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_input_device(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QInputDevice>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__34(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QInputDevice>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QPointingDevice* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_pointing_device(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QPointingDevice>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__35(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QPointingDevice>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QEventPoint* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_event_point(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QEventPoint>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__36(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QEventPoint>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QEventPoint& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_event_point2(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QEventPoint>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__37(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QEventPoint>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& in, const QKeySequence& ks)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_key_sequence(
    in_: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    ks: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QKeySequence>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__38(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(in_)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QKeySequence>>::cast_into(ks)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QKeySequence& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_key_sequence(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QKeySequence>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__40(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QKeySequence>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QEvent* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_event(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<::qt_core::QEvent>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__41(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<::qt_core::QEvent>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QFont& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_font(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QFont>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__42(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QFont>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QFont& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_font(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QFont>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__44(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QFont>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QBrush& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_brush(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QBrush>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__45(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QBrush>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QBrush& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_brush(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QBrush>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__47(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QBrush>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QPen& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_pen(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPen>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__48(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPen>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QPen& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_pen(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPen>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__50(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPen>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QTextLength& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_text_length(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTextLength>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__51(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTextLength>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QTextFormat& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_text_format(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTextFormat>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__52(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTextFormat>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& ds, const QPalette& p)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_palette(
    ds: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    p: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPalette>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__53(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(ds)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPalette>>::cast_into(p).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QPalette& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_palette(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPalette>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__55(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPalette>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug d, const QAccessibleInterface* iface)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_accessible_interface(
    d: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    iface: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QAccessibleInterface>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__56(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(d).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QAccessibleInterface>>::cast_into(iface)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug d, const QAccessibleEvent& ev)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_accessible_event(
    d: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    ev: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QAccessibleEvent>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__57(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(d).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QAccessibleEvent>>::cast_into(ev)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QAction* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_action(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QAction>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__58(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QAction>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QSurfaceFormat& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_surface_format(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QSurfaceFormat>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__59(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QSurfaceFormat>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& outS, const QCursor& cursor)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_cursor(
    out_s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    cursor: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QCursor>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__60(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(out_s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QCursor>>::cast_into(cursor).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QCursor& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_cursor(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QCursor>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__62(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QCursor>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QWindow* arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_window(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QWindow>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__63(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QWindow>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QColorSpace& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_color_space(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QColorSpace>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__64(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QColorSpace>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QColorSpace& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_color_space(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QColorSpace>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__66(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QColorSpace>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, const QMatrix4x4& m)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_matrix4_x4(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    m: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMatrix4X4>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__67(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMatrix4X4>>::cast_into(m).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QMatrix4x4& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_matrix4_x4(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMatrix4X4>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__68(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMatrix4X4>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, const QOpenGLContext* ctx)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_opengl_context(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    ctx: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QOpenGLContext>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__70(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QOpenGLContext>>::cast_into(ctx)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug debug, const QOpenGLContextGroup* cg)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_opengl_context_group(
    debug: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    cg: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QOpenGLContextGroup>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__71(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(debug)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QOpenGLContextGroup>>::cast_into(cg)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, const QPageSize& pageSize)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_page_size(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    page_size: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPageSize>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__72(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPageSize>>::cast_into(page_size)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, const QPageLayout& pageLayout)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_page_layout(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    page_layout: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPageLayout>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__73(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPageLayout>>::cast_into(page_layout)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QPageRanges& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_page_ranges(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPageRanges>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__74(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPageRanges>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, const QPageRanges& pageRanges)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_page_ranges(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    page_ranges: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPageRanges>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__76(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPageRanges>>::cast_into(page_ranges)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QPainterPath& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_painter_path(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPainterPath>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__77(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPainterPath>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug arg1, const QPainterPath& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_painter_path(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPainterPath>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__79(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(arg1)
                .as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPainterPath>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QPicture& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_picture(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPicture>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__80(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPicture>>::cast_into(arg2).as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDebug operator<<(QDebug dbg, const QQuaternion& q)```</span>.
#[inline(always)]
pub unsafe fn shl_q_debug_q_quaternion(
    dbg: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDebug>>,
    q: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QQuaternion>>,
) -> ::cpp_core::CppBox<::qt_core::QDebug> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__82(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDebug>>::cast_into(dbg).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QQuaternion>>::cast_into(q).as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& arg1, const QQuaternion& arg2)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_quaternion(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QQuaternion>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__83(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QQuaternion>>::cast_into(arg2)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& out, const QStandardItem& item)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_standard_item(
    out: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QStandardItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__86(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(out)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QStandardItem>>::cast_into(item)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QEventPoint::State> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_state(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_event_point::State>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__87(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QMatrix4x4::Flag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_matrix_4x4::Flag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__88(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QPaintEngine::PaintEngineFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_paint_engine_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_paint_engine::PaintEngineFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__89(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QPaintEngine::DirtyFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_dirty_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_paint_engine::DirtyFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__90(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QAbstractFileIconProvider::Option> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_abstract_file_icon_provider::Option>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__91(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QInputDevice::Capability> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_capability(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_input_device::Capability>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__92(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QInputDevice::DeviceType> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_device_type(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_input_device::DeviceType>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__93(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QPointingDevice::PointerType> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_pointer_type(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_pointing_device::PointerType>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__94(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QRawFont::LayoutFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_layout_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_raw_font::LayoutFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__95(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QGlyphRun::GlyphRunFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_glyph_run_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_glyph_run::GlyphRunFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__96(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTextDocument::MarkdownFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_markdown_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_text_document::MarkdownFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__97(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTextDocument::FindFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_find_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_text_document::FindFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__98(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTextOption::Flag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_flag2(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_text_option::Flag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__99(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTextFormat::PageBreakFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_page_break_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_text_format::PageBreakFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__100(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTextLayout::GlyphRunRetrievalFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_glyph_run_retrieval_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_text_layout::GlyphRunRetrievalFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__101(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QAccessible::RelationFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_relation_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_accessible::RelationFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__102(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QSurfaceFormat::FormatOption> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_format_option(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_surface_format::FormatOption>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__103(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QFileSystemModel::Option> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_option2(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_file_system_model::Option>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__104(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QImageIOPlugin::Capability> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_capability2(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_image_io_plugin::Capability>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__105(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QImageIOHandler::Transformation> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_transformation(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_image_io_handler::Transformation>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__106(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QOpenGLFunctions::OpenGLFeature> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_opengl_feature(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_opengl_functions::OpenGLFeature>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__107(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QPainter::PixmapFragmentHint> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_pixmap_fragment_hint(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_painter::PixmapFragmentHint>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__108(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QPainter::RenderHint> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_render_hint(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_painter::RenderHint>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__109(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator<<(QDataStream& s, QFlags<QTextItem::RenderFlag> e)```</span>.
#[inline(always)]
pub unsafe fn shl_q_data_stream_q_flags_render_flag(
    s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    e: ::qt_core::QFlags<crate::q_text_item::RenderFlag>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__110(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            e.to_int(),
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QColor& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_color(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QColor>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__2(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QColor>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QColor,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& stream, QPolygon& polygon)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_polygon(
    stream: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    polygon: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPolygon>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__5(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(stream)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPolygon>>::cast_into(polygon)
                .as_raw_ptr() as *mut crate::QPolygon,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& stream, QPolygonF& array)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_polygon_f(
    stream: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    array: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPolygonF>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__8(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(stream)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPolygonF>>::cast_into(array).as_raw_ptr()
                as *mut crate::QPolygonF,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QRegion& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_region(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QRegion>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__10(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QRegion>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QRegion,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QTransform& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_transform(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QTransform>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__13(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QTransform>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QTransform,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QImage& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_image(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QImage>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__16(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QImage>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QImage,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QPixmap& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_pixmap(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPixmap>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__19(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPixmap>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QPixmap,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QIcon& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_icon(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QIcon>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__22(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QIcon>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QIcon,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QVector2D& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_vector_2d(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector2D>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__26(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector2D>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QVector2D,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QVector3D& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_vector_3d(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector3D>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__29(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector3D>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QVector3D,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QVector4D& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_vector_4d(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVector4D>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__32(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVector4D>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QVector4D,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& out, QKeySequence& ks)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_key_sequence(
    out: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    ks: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QKeySequence>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__39(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(out)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QKeySequence>>::cast_into(ks).as_raw_ptr()
                as *mut crate::QKeySequence,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QFont& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_font(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QFont>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__43(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QFont>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QFont,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QBrush& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_brush(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QBrush>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__46(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QBrush>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QBrush,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QPen& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_pen(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPen>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__49(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPen>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QPen,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& ds, QPalette& p)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_palette(
    ds: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    p: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPalette>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__54(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(ds)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPalette>>::cast_into(p).as_raw_ptr()
                as *mut crate::QPalette,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& inS, QCursor& cursor)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_cursor(
    in_s: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    cursor: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QCursor>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__61(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(in_s)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QCursor>>::cast_into(cursor).as_raw_ptr()
                as *mut crate::QCursor,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QColorSpace& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_color_space(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QColorSpace>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__65(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QColorSpace>>::cast_into(arg2)
                .as_raw_ptr() as *mut crate::QColorSpace,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QMatrix4x4& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_matrix4_x4(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMatrix4X4>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__69(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMatrix4X4>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QMatrix4X4,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QPageRanges& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_page_ranges(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPageRanges>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__75(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPageRanges>>::cast_into(arg2)
                .as_raw_ptr() as *mut crate::QPageRanges,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QPainterPath& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_painter_path(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPainterPath>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__78(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPainterPath>>::cast_into(arg2)
                .as_raw_ptr() as *mut crate::QPainterPath,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QPicture& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_picture(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QPicture>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__81(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QPicture>>::cast_into(arg2).as_raw_ptr()
                as *mut crate::QPicture,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& arg1, QQuaternion& arg2)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_quaternion(
    arg1: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    arg2: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QQuaternion>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__84(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(arg1)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QQuaternion>>::cast_into(arg2)
                .as_raw_ptr() as *mut crate::QQuaternion,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}

/// Calls C++ function: <span style='color: green;'>```QDataStream& operator>>(QDataStream& in, QStandardItem& item)```</span>.
#[inline(always)]
pub unsafe fn shr_q_data_stream_q_standard_item(
    in_: impl ::cpp_core::CastInto<::cpp_core::Ref<::qt_core::QDataStream>>,
    item: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QStandardItem>>,
) -> ::cpp_core::Ref<::qt_core::QDataStream> {
    let ffi_result = {
        crate::__ffi::ctr_qt_gui_ffi_operator__85(
            ::cpp_core::CastInto::<::cpp_core::Ref<::qt_core::QDataStream>>::cast_into(in_)
                .as_raw_ptr() as *mut ::qt_core::QDataStream,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QStandardItem>>::cast_into(item)
                .as_raw_ptr() as *mut crate::QStandardItem,
        )
    };
    ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
}
