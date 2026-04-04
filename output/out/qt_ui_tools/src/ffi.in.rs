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

    /// <p>In addition, you can customize or create your own user interface by deriving your own loader class.</p>
    ///
    /// <a href="http://doc.qt.io/qt-5/quiloader.html">C++ documentation</a>:<div style='border: 1px solid #5CFF95; background: #D6FFE4; padding: 16px;'><p>In addition, you can customize or create your own user interface by deriving your own loader class.</p>
    /// <p>If you have a custom component or an application that embeds Qt Widgets Designer, you can also use the <a href="http://doc.qt.io/qt-5/qformbuilder.html" translate="no">QFormBuilder</a> class provided by the <a href="http://doc.qt.io/qt-5/qtdesigner-module.html" translate="no">QtDesigner</a> module to create user interfaces from UI files.</p>
    /// <p>The QUiLoader class provides a collection of functions allowing you to create widgets based on the information stored in UI files (created with Qt Widgets Designer) or available in the specified plugin paths. The specified plugin paths can be retrieved using the <a href="http://doc.qt.io/qt-5/quiloader.html#pluginPaths" translate="no">pluginPaths</a>() function. Similarly, the contents of a UI file can be retrieved using the <a href="http://doc.qt.io/qt-5/quiloader.html#load" translate="no">load</a>() function. For example:</p>
    /// <pre class="cpp" translate="no"> MyWidget<span class="operator">::</span>MyWidget(<span class="type"><a href="http://doc.qt.io/qt-5/qwidget.html" translate="no">QWidget</a></span> <span class="operator">*</span>parent)
    /// &#32;    : <span class="type"><a href="http://doc.qt.io/qt-5/qwidget.html" translate="no">QWidget</a></span>(parent)
    ///  {
    /// &#32;    <span class="type"><a href="http://doc.qt.io/qt-5/qfile.html" translate="no">QFile</a></span> file(<span class="string">":/forms/myform.ui"</span>);
    /// &#32;    <span class="keyword">if</span> (<span class="operator">!</span>file<span class="operator">.</span>open(<span class="type"><a href="http://doc.qt.io/qt-5/qfile.html" translate="no">QFile</a></span><span class="operator">::</span>ReadOnly))
    /// &#32;   &#32;    <a href="http://doc.qt.io/qt-5/qdebug.html#qFatal" translate="no">qFatal</a>(<span class="string">"Cannot open resource file"</span>);
    ///
    /// &#32;    <span class="type"><a href="http://doc.qt.io/qt-5/quiloader.html" translate="no">QUiLoader</a></span> loader;
    /// &#32;    <span class="type"><a href="http://doc.qt.io/qt-5/qwidget.html" translate="no">QWidget</a></span> <span class="operator">*</span>myWidget <span class="operator">=</span> loader<span class="operator">.</span>load(<span class="operator">&amp;</span>file<span class="operator">,</span> <span class="keyword">this</span>);
    ///
    /// &#32;    <span class="type"><a href="http://doc.qt.io/qt-5/qvboxlayout.html" translate="no">QVBoxLayout</a></span> <span class="operator">*</span>layout <span class="operator">=</span> <span class="keyword">new</span> <span class="type"><a href="http://doc.qt.io/qt-5/qvboxlayout.html" translate="no">QVBoxLayout</a></span>;
    /// &#32;    layout<span class="operator">-</span><span class="operator">&gt;</span>addWidget(myWidget);
    /// &#32;    setLayout(layout);
    ///  }
    /// </pre>
    /// <p>By including the user interface in the form's resources (<code translate="no">myform.qrc</code>), we ensure that it will be present at run-time:</p>
    /// <pre class="cpp" translate="no"> &lt;!DOCTYPE RCC&gt;&lt;RCC version="1.0"&gt;
    ///  &lt;qresource prefix="/forms"&gt;
    ///  &lt;file&gt;myform.ui&lt;/file&gt;
    ///  &lt;/qresource&gt;
    ///  &lt;/RCC&gt;
    /// </pre>
    /// <p>The <a href="http://doc.qt.io/qt-5/quiloader.html#availableWidgets" translate="no">availableWidgets</a>() function returns a <a href="http://doc.qt.io/qt-5/qstringlist.html" translate="no">QStringList</a> with the class names of the widgets available in the specified plugin paths. To create these widgets, simply use the <a href="http://doc.qt.io/qt-5/quiloader.html#createWidget" translate="no">createWidget</a>() function. For example:</p>
    /// <pre class="cpp" translate="no"> <span class="type"><a href="http://doc.qt.io/qt-5/qwidget.html" translate="no">QWidget</a></span> <span class="operator">*</span>loadCustomWidget(<span class="keyword">const</span> <span class="type"><a href="http://doc.qt.io/qt-5/qstring.html" translate="no">QString</a></span> <span class="operator">&amp;</span>className<span class="operator">,</span> <span class="type"><a href="http://doc.qt.io/qt-5/qwidget.html" translate="no">QWidget</a></span> <span class="operator">*</span>parent)
    ///  {
    /// &#32;    <span class="type"><a href="http://doc.qt.io/qt-5/quiloader.html" translate="no">QUiLoader</a></span> loader;
    /// &#32;    <span class="type"><a href="http://doc.qt.io/qt-5/qstringlist.html" translate="no">QStringList</a></span> availableWidgets <span class="operator">=</span> loader<span class="operator">.</span>availableWidgets();
    ///
    /// &#32;    <span class="keyword">if</span> (<span class="operator">!</span>availableWidgets<span class="operator">.</span>contains(className)) {
    /// &#32;   &#32;    <a href="http://doc.qt.io/qt-5/qdebug.html#qWarning" translate="no">qWarning</a>() <span class="operator">&lt;</span><span class="operator">&lt;</span> <span class="string">"Cannot create widget"</span> <span class="operator">&lt;</span><span class="operator">&lt;</span> className;
    /// &#32;   &#32;    <span class="keyword">return</span> nullptr;
    /// &#32;    }
    ///
    /// &#32;    <span class="keyword">return</span> loader<span class="operator">.</span>createWidget(className<span class="operator">,</span> parent);
    ///  }
    /// </pre>
    /// <p>To make a custom widget available to the loader, you can use the <a href="http://doc.qt.io/qt-5/quiloader.html#addPluginPath" translate="no">addPluginPath</a>() function; to remove all available widgets, you can call the <a href="http://doc.qt.io/qt-5/quiloader.html#clearPluginPaths" translate="no">clearPluginPaths</a>() function.</p>
    /// <p>The <a href="http://doc.qt.io/qt-5/quiloader.html#createAction" translate="no">createAction</a>(), <a href="http://doc.qt.io/qt-5/quiloader.html#createActionGroup" translate="no">createActionGroup</a>(), <a href="http://doc.qt.io/qt-5/quiloader.html#createLayout" translate="no">createLayout</a>(), and <a href="http://doc.qt.io/qt-5/quiloader.html#createWidget" translate="no">createWidget</a>() functions are used internally by the QUiLoader class whenever it has to create an action, action group, layout, or widget respectively. For that reason, you can subclass the QUiLoader class and reimplement these functions to intervene the process of constructing a user interface. For example, you might want to have a list of the actions created when loading a form or creating a custom widget.</p>
    /// <p>For a complete example using the QUiLoader class, see the <a href="http://doc.qt.io/qt-5/qtdesigner-calculatorbuilder-example.html">Calculator Builder</a>.</p></div>
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
