extern "C" {

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_metaObject(
        this_ptr: *const crate::QUiLoader,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_qt_metacast(
        this_ptr: *mut crate::QUiLoader,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_qt_metacall(
        this_ptr: *mut crate::QUiLoader,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_QUiLoader(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QUiLoader;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_dQUiLoader(this_ptr: *mut crate::QUiLoader);

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_pluginPaths(
        this_ptr: *const crate::QUiLoader,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_clearPluginPaths(this_ptr: *mut crate::QUiLoader);

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_addPluginPath(
        this_ptr: *mut crate::QUiLoader,
        path: *const ::qt_core::QString,
    );

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_load(
        this_ptr: *mut crate::QUiLoader,
        device: *mut ::qt_core::QIODevice,
        parentWidget: *mut ::qt_widgets::QWidget,
    ) -> *mut ::qt_widgets::QWidget;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_availableWidgets(
        this_ptr: *const crate::QUiLoader,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_availableLayouts(
        this_ptr: *const crate::QUiLoader,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createWidget(
        this_ptr: *mut crate::QUiLoader,
        className: *const ::qt_core::QString,
        parent: *mut ::qt_widgets::QWidget,
        name: *const ::qt_core::QString,
    ) -> *mut ::qt_widgets::QWidget;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createLayout(
        this_ptr: *mut crate::QUiLoader,
        className: *const ::qt_core::QString,
        parent: *mut ::qt_core::QObject,
        name: *const ::qt_core::QString,
    ) -> *mut ::qt_widgets::QLayout;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createActionGroup(
        this_ptr: *mut crate::QUiLoader,
        parent: *mut ::qt_core::QObject,
        name: *const ::qt_core::QString,
    ) -> *mut ::qt_gui::QActionGroup;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createAction(
        this_ptr: *mut crate::QUiLoader,
        parent: *mut ::qt_core::QObject,
        name: *const ::qt_core::QString,
    ) -> *mut ::qt_gui::QAction;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_setWorkingDirectory(
        this_ptr: *mut crate::QUiLoader,
        dir: *const ::qt_core::QDir,
    );

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_workingDirectory(
        this_ptr: *const crate::QUiLoader,
    ) -> *mut ::qt_core::QDir;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_setLanguageChangeEnabled(
        this_ptr: *mut crate::QUiLoader,
        enabled: bool,
    );

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_isLanguageChangeEnabled(
        this_ptr: *const crate::QUiLoader,
    ) -> bool;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_setTranslationEnabled(
        this_ptr: *mut crate::QUiLoader,
        enabled: bool,
    );

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_isTranslationEnabled(
        this_ptr: *const crate::QUiLoader,
    ) -> bool;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_errorString(
        this_ptr: *const crate::QUiLoader,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_QUiLoader1() -> *mut crate::QUiLoader;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_load1(
        this_ptr: *mut crate::QUiLoader,
        device: *mut ::qt_core::QIODevice,
    ) -> *mut ::qt_widgets::QWidget;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createWidget1(
        this_ptr: *mut crate::QUiLoader,
        className: *const ::qt_core::QString,
        parent: *mut ::qt_widgets::QWidget,
    ) -> *mut ::qt_widgets::QWidget;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createWidget2(
        this_ptr: *mut crate::QUiLoader,
        className: *const ::qt_core::QString,
    ) -> *mut ::qt_widgets::QWidget;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createLayout1(
        this_ptr: *mut crate::QUiLoader,
        className: *const ::qt_core::QString,
        parent: *mut ::qt_core::QObject,
    ) -> *mut ::qt_widgets::QLayout;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createLayout2(
        this_ptr: *mut crate::QUiLoader,
        className: *const ::qt_core::QString,
    ) -> *mut ::qt_widgets::QLayout;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createActionGroup1(
        this_ptr: *mut crate::QUiLoader,
        parent: *mut ::qt_core::QObject,
    ) -> *mut ::qt_gui::QActionGroup;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createActionGroup2(
        this_ptr: *mut crate::QUiLoader,
    ) -> *mut ::qt_gui::QActionGroup;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createAction1(
        this_ptr: *mut crate::QUiLoader,
        parent: *mut ::qt_core::QObject,
    ) -> *mut ::qt_gui::QAction;

    pub fn ctr_qt_ui_tools_ffi_QUiLoader_createAction2(
        this_ptr: *mut crate::QUiLoader,
    ) -> *mut ::qt_gui::QAction;

    pub fn ctr_qt_ui_tools_ffi_static_cast_QUiLoader_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QUiLoader;

    pub fn ctr_qt_ui_tools_ffi_static_cast_QObject_ptr(
        ptr: *mut crate::QUiLoader,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_ui_tools_ffi_dynamic_cast_QUiLoader_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QUiLoader;

}
