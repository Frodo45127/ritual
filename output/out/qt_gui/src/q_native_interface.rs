#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QNativeInterface```</span>

pub mod q_x11_application {
    //! C++ type: <span style='color: green;'>```QNativeInterface::QX11Application```</span>

    /// C++ class: <span style='color: green;'>```QNativeInterface::QX11Application::TypeInfo```</span>.
    #[repr(C)]
    pub struct TypeInfo {
        _unused: u8,
    }
}
/// <p>Accessed through <a href="http://doc.qt.io/qt-5/qguiapplication.html#nativeInterface" translate="no">QGuiApplication::nativeInterface</a>().</p>
///
/// C++ class: <span style='color: green;'>```QNativeInterface::QX11Application```</span>.
///
/// <a href="http://doc.qt.io/qt-5/qnativeinterface-qx11application.html">C++ documentation</a>:<div style='border: 1px solid #5CFF95; background: #D6FFE4; padding: 16px;'><p>Accessed through <a href="http://doc.qt.io/qt-5/qguiapplication.html#nativeInterface" translate="no">QGuiApplication::nativeInterface</a>().</p></div>
#[repr(C)]
pub struct QX11Application {
    _unused: u8,
}
pub mod q_wayland_application {
    //! C++ type: <span style='color: green;'>```QNativeInterface::QWaylandApplication```</span>

    /// C++ class: <span style='color: green;'>```QNativeInterface::QWaylandApplication::TypeInfo```</span>.
    #[repr(C)]
    pub struct TypeInfo {
        _unused: u8,
    }
}
/// <p>Accessed through <a href="http://doc.qt.io/qt-5/qguiapplication.html#nativeInterface" translate="no">QGuiApplication::nativeInterface</a>().</p>
///
/// C++ class: <span style='color: green;'>```QNativeInterface::QWaylandApplication```</span>.
///
/// <a href="http://doc.qt.io/qt-5/qnativeinterface-qwaylandapplication.html">C++ documentation</a>:<div style='border: 1px solid #5CFF95; background: #D6FFE4; padding: 16px;'><p>Accessed through <a href="http://doc.qt.io/qt-5/qguiapplication.html#nativeInterface" translate="no">QGuiApplication::nativeInterface</a>().</p></div>
#[repr(C)]
pub struct QWaylandApplication {
    _unused: u8,
}
impl QWaylandApplication {
    /// Calls C++ function: <span style='color: green;'>```pure virtual unsigned int QNativeInterface::QWaylandApplication::lastInputSerial() const```</span>.
    #[inline(always)]
    pub unsafe fn last_input_serial(&self) -> ::std::os::raw::c_uint {
        crate::__ffi::ctr_qt_gui_ffi_QNativeInterface_QWaylandApplication_lastInputSerial(
            self as *const crate::q_native_interface::QWaylandApplication,
        )
    }
}

pub mod q_wayland_screen {
    //! C++ type: <span style='color: green;'>```QNativeInterface::QWaylandScreen```</span>

    /// C++ class: <span style='color: green;'>```QNativeInterface::QWaylandScreen::TypeInfo```</span>.
    #[repr(C)]
    pub struct TypeInfo {
        _unused: u8,
    }
}
/// <p>Accessed through <a href="http://doc.qt.io/qt-5/qscreen.html#nativeInterface" translate="no">QScreen::nativeInterface</a>().</p>
///
/// C++ class: <span style='color: green;'>```QNativeInterface::QWaylandScreen```</span>.
///
/// <a href="http://doc.qt.io/qt-5/qnativeinterface-qwaylandscreen.html">C++ documentation</a>:<div style='border: 1px solid #5CFF95; background: #D6FFE4; padding: 16px;'><p>Accessed through <a href="http://doc.qt.io/qt-5/qscreen.html#nativeInterface" translate="no">QScreen::nativeInterface</a>().</p></div>
#[repr(C)]
pub struct QWaylandScreen {
    _unused: u8,
}
pub mod q_g_l_x_context {
    //! C++ type: <span style='color: green;'>```QNativeInterface::QGLXContext```</span>

    /// C++ class: <span style='color: green;'>```QNativeInterface::QGLXContext::TypeInfo```</span>.
    #[repr(C)]
    pub struct TypeInfo {
        _unused: u8,
    }
}
/// <p>Accessed through <a href="http://doc.qt.io/qt-5/qopenglcontext.html#nativeInterface" translate="no">QOpenGLContext::nativeInterface</a>().</p>
///
/// C++ class: <span style='color: green;'>```QNativeInterface::QGLXContext```</span>.
///
/// <a href="http://doc.qt.io/qt-5/qnativeinterface-qglxcontext.html">C++ documentation</a>:<div style='border: 1px solid #5CFF95; background: #D6FFE4; padding: 16px;'><p>Accessed through <a href="http://doc.qt.io/qt-5/qopenglcontext.html#nativeInterface" translate="no">QOpenGLContext::nativeInterface</a>().</p></div>
#[repr(C)]
pub struct QGLXContext {
    _unused: u8,
}
pub mod q_e_g_l_context {
    //! C++ type: <span style='color: green;'>```QNativeInterface::QEGLContext```</span>

    /// C++ class: <span style='color: green;'>```QNativeInterface::QEGLContext::TypeInfo```</span>.
    #[repr(C)]
    pub struct TypeInfo {
        _unused: u8,
    }
}
/// <p>Accessed through <a href="http://doc.qt.io/qt-5/qopenglcontext.html#nativeInterface" translate="no">QOpenGLContext::nativeInterface</a>().</p>
///
/// C++ class: <span style='color: green;'>```QNativeInterface::QEGLContext```</span>.
///
/// <a href="http://doc.qt.io/qt-5/qnativeinterface-qeglcontext.html">C++ documentation</a>:<div style='border: 1px solid #5CFF95; background: #D6FFE4; padding: 16px;'><p>Accessed through <a href="http://doc.qt.io/qt-5/qopenglcontext.html#nativeInterface" translate="no">QOpenGLContext::nativeInterface</a>().</p></div>
#[repr(C)]
pub struct QEGLContext {
    _unused: u8,
}
impl QEGLContext {
    /// Calls C++ function: <span style='color: green;'>```pure virtual void* QNativeInterface::QEGLContext::config() const```</span>.
    #[inline(always)]
    pub unsafe fn config(&self) -> *mut ::std::ffi::c_void {
        crate::__ffi::ctr_qt_gui_ffi_QNativeInterface_QEGLContext_config(
            self as *const crate::q_native_interface::QEGLContext,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```pure virtual void* QNativeInterface::QEGLContext::display() const```</span>.
    #[inline(always)]
    pub unsafe fn display(&self) -> *mut ::std::ffi::c_void {
        crate::__ffi::ctr_qt_gui_ffi_QNativeInterface_QEGLContext_display(
            self as *const crate::q_native_interface::QEGLContext,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```static QOpenGLContext* QNativeInterface::QEGLContext::fromNative(void* context, void* display, QOpenGLContext* shareContext = …)```</span>.
    #[inline(always)]
    pub unsafe fn from_native_3a(
        context: *mut ::std::ffi::c_void,
        display: *mut ::std::ffi::c_void,
        share_context: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QOpenGLContext>>,
    ) -> ::qt_core::QPtr<crate::QOpenGLContext> {
        let ffi_result = {
            crate::__ffi::ctr_qt_gui_ffi_QNativeInterface_QEGLContext_fromNative(
                context,
                display,
                ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QOpenGLContext>>::cast_into(
                    share_context,
                )
                .as_raw_ptr() as *mut crate::QOpenGLContext,
            )
        };
        ::qt_core::QPtr::from_raw(ffi_result)
    }

    /// Calls C++ function: <span style='color: green;'>```static QOpenGLContext* QNativeInterface::QEGLContext::fromNative(void* context, void* display)```</span>.
    #[inline(always)]
    pub unsafe fn from_native_2a(
        context: *mut ::std::ffi::c_void,
        display: *mut ::std::ffi::c_void,
    ) -> ::qt_core::QPtr<crate::QOpenGLContext> {
        let ffi_result = {
            crate::__ffi::ctr_qt_gui_ffi_QNativeInterface_QEGLContext_fromNative1(context, display)
        };
        ::qt_core::QPtr::from_raw(ffi_result)
    }

    /// Calls C++ function: <span style='color: green;'>```pure virtual void QNativeInterface::QEGLContext::invalidateContext()```</span>.
    #[inline(always)]
    pub unsafe fn invalidate_context(&self) {
        crate::__ffi::ctr_qt_gui_ffi_QNativeInterface_QEGLContext_invalidateContext(
            self as *const crate::q_native_interface::QEGLContext
                as *mut crate::q_native_interface::QEGLContext,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```pure virtual void* QNativeInterface::QEGLContext::nativeContext() const```</span>.
    #[inline(always)]
    pub unsafe fn native_context(&self) -> *mut ::std::ffi::c_void {
        crate::__ffi::ctr_qt_gui_ffi_QNativeInterface_QEGLContext_nativeContext(
            self as *const crate::q_native_interface::QEGLContext,
        )
    }
}
