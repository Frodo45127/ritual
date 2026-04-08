extern "C" {

    pub fn ctr_qt_qml_ffi_QJSEngine_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlEngine_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlComponent_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlContext_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_name(
        this_ptr: *const crate::q_qml_context::PropertyPair,
    ) -> *const ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_name_mut(
        this_ptr: *mut crate::q_qml_context::PropertyPair,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_set_QQmlContext_PropertyPair_name(
        this_ptr: *mut crate::q_qml_context::PropertyPair,
        value: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_value(
        this_ptr: *const crate::q_qml_context::PropertyPair,
    ) -> *const ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_value_mut(
        this_ptr: *mut crate::q_qml_context::PropertyPair,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_set_QQmlContext_PropertyPair_value(
        this_ptr: *mut crate::q_qml_context::PropertyPair,
        value: *const ::qt_core::QVariant,
    );

    pub fn ctr_qt_qml_ffi_QQmlScriptString_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlExpression_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlProperty_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue(
        value: crate::q_j_s_value::SpecialValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_dQJSValue(this_ptr: *mut crate::QJSValue);

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue1(other: *const crate::QJSValue)
        -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue3(value: bool) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue4(value: ::std::os::raw::c_int) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue5(value: ::std::os::raw::c_uint)
        -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue6(
        value: ::std::os::raw::c_double,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue7(
        value: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue8(
        value: *const ::qt_core::QLatin1String,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue9(
        str: *const ::std::os::raw::c_char,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_operator_1(
        this_ptr: *mut crate::QJSValue,
        other: *const crate::QJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_isBool(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isNumber(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isNull(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isString(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isUndefined(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isVariant(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isQObject(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isQMetaObject(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isObject(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isDate(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isRegExp(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isArray(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isError(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isUrl(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_toString(
        this_ptr: *const crate::QJSValue,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QJSValue_toNumber(
        this_ptr: *const crate::QJSValue,
    ) -> ::std::os::raw::c_double;

    pub fn ctr_qt_qml_ffi_QJSValue_toInt(this_ptr: *const crate::QJSValue)
        -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QJSValue_toUInt(
        this_ptr: *const crate::QJSValue,
    ) -> ::std::os::raw::c_uint;

    pub fn ctr_qt_qml_ffi_QJSValue_toBool(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_toVariant(
        this_ptr: *const crate::QJSValue,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QJSValue_toVariant1(
        this_ptr: *const crate::QJSValue,
        behavior: crate::q_j_s_value::ObjectConversionBehavior,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QJSValue_toPrimitive(
        this_ptr: *const crate::QJSValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSValue_toQObject(
        this_ptr: *const crate::QJSValue,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QJSValue_toQMetaObject(
        this_ptr: *const crate::QJSValue,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QJSValue_toDateTime(
        this_ptr: *const crate::QJSValue,
    ) -> *mut ::qt_core::QDateTime;

    pub fn ctr_qt_qml_ffi_QJSValue_equals(
        this_ptr: *const crate::QJSValue,
        other: *const crate::QJSValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_strictlyEquals(
        this_ptr: *const crate::QJSValue,
        other: *const crate::QJSValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_prototype(
        this_ptr: *const crate::QJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_setPrototype(
        this_ptr: *mut crate::QJSValue,
        prototype: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QJSValue_property(
        this_ptr: *const crate::QJSValue,
        name: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_setProperty(
        this_ptr: *mut crate::QJSValue,
        name: *const ::qt_core::QString,
        value: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QJSValue_hasProperty(
        this_ptr: *const crate::QJSValue,
        name: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_hasOwnProperty(
        this_ptr: *const crate::QJSValue,
        name: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_property1(
        this_ptr: *const crate::QJSValue,
        arrayIndex: ::std::os::raw::c_uint,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_setProperty1(
        this_ptr: *mut crate::QJSValue,
        arrayIndex: ::std::os::raw::c_uint,
        value: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QJSValue_deleteProperty(
        this_ptr: *mut crate::QJSValue,
        name: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_isCallable(this_ptr: *const crate::QJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValue_call(
        this_ptr: *const crate::QJSValue,
        args: *const crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_callWithInstance(
        this_ptr: *const crate::QJSValue,
        instance: *const crate::QJSValue,
        args: *const crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_callAsConstructor(
        this_ptr: *const crate::QJSValue,
        args: *const crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_errorType(
        this_ptr: *const crate::QJSValue,
    ) -> crate::q_j_s_value::ErrorType;

    pub fn ctr_qt_qml_ffi_operator__(
        arg1: *mut ::qt_core::QDataStream,
        arg2: *const crate::QJSValue,
    ) -> *mut ::qt_core::QDataStream;

    pub fn ctr_qt_qml_ffi_operator__1(
        arg1: *mut ::qt_core::QDataStream,
        arg2: *mut crate::QJSValue,
    ) -> *mut ::qt_core::QDataStream;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_isInteger(d: ::std::os::raw::c_double) -> bool;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_isArrayIndex(d: ::std::os::raw::c_double) -> bool;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_isArrayIndex1(i: ::std::os::raw::c_longlong) -> bool;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_isArrayIndex2(i: ::std::os::raw::c_ulonglong) -> bool;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_toInteger(
        d: ::std::os::raw::c_double,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_equals(
        lhs: ::std::os::raw::c_double,
        rhs: ::std::os::raw::c_double,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_roundTowards0(
        d: ::std::os::raw::c_double,
    ) -> ::std::os::raw::c_double;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_type(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> crate::q_j_s_primitive_value::Type;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue1() -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue2(
        undefined: *const crate::QJSPrimitiveUndefined,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue3(
        null: *const crate::QJSPrimitiveNull,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue4(
        value: bool,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue5(
        value: ::std::os::raw::c_int,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue6(
        value: ::std::os::raw::c_double,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue7(
        string: *const ::qt_core::QString,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue8(
        type_: *const ::qt_core::QMetaType,
        value: *const ::std::ffi::c_void,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue9(
        type_: *const ::qt_core::QMetaType,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue10(
        variant: *const ::qt_core::QVariant,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_metaType(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> *mut ::qt_core::QMetaType;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_data(
        this_ptr: *mut crate::QJSPrimitiveValue,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_data1(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> *const ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_constData(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> *const ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_toBoolean(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_toInteger(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_toDouble(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> ::std::os::raw::c_double;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_toString(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_toVariant(
        this_ptr: *const crate::QJSPrimitiveValue,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_operator__(
        this_ptr: *mut crate::QJSPrimitiveValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_operator__1(
        this_ptr: *mut crate::QJSPrimitiveValue,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_operator__2(
        this_ptr: *mut crate::QJSPrimitiveValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_operator__3(
        this_ptr: *mut crate::QJSPrimitiveValue,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_operator_(
        this_ptr: *mut crate::QJSPrimitiveValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_operator_1(
        this_ptr: *mut crate::QJSPrimitiveValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_strictlyEquals(
        this_ptr: *const crate::QJSPrimitiveValue,
        other: *const crate::QJSPrimitiveValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_equals(
        this_ptr: *const crate::QJSPrimitiveValue,
        other: *const crate::QJSPrimitiveValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_QJSManagedValue() -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_QJSManagedValue1(
        value: *const crate::QJSValue,
        engine: *mut crate::QJSEngine,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_QJSManagedValue2(
        value: *const crate::QJSPrimitiveValue,
        engine: *mut crate::QJSEngine,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_QJSManagedValue3(
        variant: *const ::qt_core::QVariant,
        engine: *mut crate::QJSEngine,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_QJSManagedValue4(
        string: *const ::qt_core::QString,
        engine: *mut crate::QJSEngine,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_dQJSManagedValue(this_ptr: *mut crate::QJSManagedValue);

    pub fn ctr_qt_qml_ffi_QJSManagedValue_equals(
        this_ptr: *const crate::QJSManagedValue,
        other: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_strictlyEquals(
        this_ptr: *const crate::QJSManagedValue,
        other: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_engine(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_prototype(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_setPrototype(
        this_ptr: *mut crate::QJSManagedValue,
        prototype: *const crate::QJSManagedValue,
    );

    pub fn ctr_qt_qml_ffi_QJSManagedValue_type(
        this_ptr: *const crate::QJSManagedValue,
    ) -> crate::q_j_s_managed_value::Type;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isUndefined(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isBoolean(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isNumber(this_ptr: *const crate::QJSManagedValue)
        -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isString(this_ptr: *const crate::QJSManagedValue)
        -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isObject(this_ptr: *const crate::QJSManagedValue)
        -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isSymbol(this_ptr: *const crate::QJSManagedValue)
        -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isFunction(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isInteger(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isNull(this_ptr: *const crate::QJSManagedValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isRegularExpression(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isArray(this_ptr: *const crate::QJSManagedValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isUrl(this_ptr: *const crate::QJSManagedValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isVariant(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isQObject(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isQMetaObject(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isDate(this_ptr: *const crate::QJSManagedValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isError(this_ptr: *const crate::QJSManagedValue) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_isJsMetaType(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toString(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toNumber(
        this_ptr: *const crate::QJSManagedValue,
    ) -> ::std::os::raw::c_double;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toBoolean(
        this_ptr: *const crate::QJSManagedValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toPrimitive(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toJSValue(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toVariant(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toInteger(
        this_ptr: *const crate::QJSManagedValue,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toRegularExpression(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut ::qt_core::QRegularExpression;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toUrl(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toQObject(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toQMetaObject(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_toDateTime(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut ::qt_core::QDateTime;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_hasProperty(
        this_ptr: *const crate::QJSManagedValue,
        name: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_hasOwnProperty(
        this_ptr: *const crate::QJSManagedValue,
        name: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_property(
        this_ptr: *const crate::QJSManagedValue,
        name: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_setProperty(
        this_ptr: *mut crate::QJSManagedValue,
        name: *const ::qt_core::QString,
        value: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QJSManagedValue_deleteProperty(
        this_ptr: *mut crate::QJSManagedValue,
        name: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_hasProperty1(
        this_ptr: *const crate::QJSManagedValue,
        arrayIndex: ::std::os::raw::c_uint,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_hasOwnProperty1(
        this_ptr: *const crate::QJSManagedValue,
        arrayIndex: ::std::os::raw::c_uint,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_property1(
        this_ptr: *const crate::QJSManagedValue,
        arrayIndex: ::std::os::raw::c_uint,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_setProperty1(
        this_ptr: *mut crate::QJSManagedValue,
        arrayIndex: ::std::os::raw::c_uint,
        value: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QJSManagedValue_deleteProperty1(
        this_ptr: *mut crate::QJSManagedValue,
        arrayIndex: ::std::os::raw::c_uint,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_call(
        this_ptr: *const crate::QJSManagedValue,
        arguments: *const crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_callWithInstance(
        this_ptr: *const crate::QJSManagedValue,
        instance: *const crate::QJSValue,
        arguments: *const crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_callAsConstructor(
        this_ptr: *const crate::QJSManagedValue,
        arguments: *const crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_jsMetaType(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_jsMetaMembers(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_jsMetaInstantiate(
        this_ptr: *const crate::QJSManagedValue,
        values: *const crate::QListOfQJSValue,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_enableDebugging(printWarning: bool);

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_QQmlDebuggingEnabler(
        printWarning: bool,
    ) -> *mut crate::QQmlDebuggingEnabler;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_debuggerServices() -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_inspectorServices() -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_profilerServices() -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_nativeDebuggerServices(
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_setServices(
        services: *const ::qt_core::QListOfQString,
    );

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_startTcpDebugServer(
        port: ::std::os::raw::c_int,
        mode: crate::q_qml_debugging_enabler::StartMode,
        hostName: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_connectToLocalDebugger(
        socketFileName: *const ::qt_core::QString,
        mode: crate::q_qml_debugging_enabler::StartMode,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_startDebugConnector(
        pluginName: *const ::qt_core::QString,
        configuration: *const ::qt_core::QHashOfQStringQVariant,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSEngine_metaObject(
        this_ptr: *const crate::QJSEngine,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QJSEngine_qt_metacast(
        this_ptr: *mut crate::QJSEngine,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QJSEngine_qt_metacall(
        this_ptr: *mut crate::QJSEngine,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QJSEngine_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QJSEngine_QJSEngine() -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_QJSEngine_QJSEngine1(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_QJSEngine_dQJSEngine(this_ptr: *mut crate::QJSEngine);

    pub fn ctr_qt_qml_ffi_QJSEngine_globalObject(
        this_ptr: *const crate::QJSEngine,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_evaluate(
        this_ptr: *mut crate::QJSEngine,
        program: *const ::qt_core::QString,
        fileName: *const ::qt_core::QString,
        lineNumber: ::std::os::raw::c_int,
        exceptionStackTrace: *mut ::qt_core::QListOfQString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_importModule(
        this_ptr: *mut crate::QJSEngine,
        fileName: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_registerModule(
        this_ptr: *mut crate::QJSEngine,
        moduleName: *const ::qt_core::QString,
        value: *const crate::QJSValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSEngine_newObject(
        this_ptr: *mut crate::QJSEngine,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_newSymbol(
        this_ptr: *mut crate::QJSEngine,
        name: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_newArray(
        this_ptr: *mut crate::QJSEngine,
        length: ::std::os::raw::c_uint,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_newQObject(
        this_ptr: *mut crate::QJSEngine,
        object: *mut ::qt_core::QObject,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_newQMetaObject(
        this_ptr: *mut crate::QJSEngine,
        metaObject: *const ::qt_core::QMetaObject,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_newErrorObject(
        this_ptr: *mut crate::QJSEngine,
        errorType: crate::q_j_s_value::ErrorType,
        message: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_collectGarbage(this_ptr: *mut crate::QJSEngine);

    pub fn ctr_qt_qml_ffi_QJSEngine_setObjectOwnership(
        arg1: *mut ::qt_core::QObject,
        arg2: crate::q_j_s_engine::ObjectOwnership,
    );

    pub fn ctr_qt_qml_ffi_QJSEngine_objectOwnership(
        arg1: *mut ::qt_core::QObject,
    ) -> crate::q_j_s_engine::ObjectOwnership;

    pub fn ctr_qt_qml_ffi_QJSEngine_installExtensions(
        this_ptr: *mut crate::QJSEngine,
        extensions: ::std::os::raw::c_int,
        object: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QJSEngine_setInterrupted(
        this_ptr: *mut crate::QJSEngine,
        interrupted: bool,
    );

    pub fn ctr_qt_qml_ffi_QJSEngine_isInterrupted(this_ptr: *const crate::QJSEngine) -> bool;

    pub fn ctr_qt_qml_ffi_QJSEngine_throwError(
        this_ptr: *mut crate::QJSEngine,
        message: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QJSEngine_throwError1(
        this_ptr: *mut crate::QJSEngine,
        errorType: crate::q_j_s_value::ErrorType,
        message: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QJSEngine_throwError2(
        this_ptr: *mut crate::QJSEngine,
        error: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QJSEngine_hasError(this_ptr: *const crate::QJSEngine) -> bool;

    pub fn ctr_qt_qml_ffi_QJSEngine_catchError(
        this_ptr: *mut crate::QJSEngine,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_uiLanguage(
        this_ptr: *const crate::QJSEngine,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QJSEngine_setUiLanguage(
        this_ptr: *mut crate::QJSEngine,
        language: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_qjsEngine(arg1: *const ::qt_core::QObject) -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_QQmlListReference_QQmlListReference() -> *mut crate::QQmlListReference;

    pub fn ctr_qt_qml_ffi_QQmlListReference_QQmlListReference1(
        variant: *const ::qt_core::QVariant,
        engine: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlListReference;

    pub fn ctr_qt_qml_ffi_QQmlListReference_QQmlListReference2(
        o: *mut ::qt_core::QObject,
        property: *const ::std::os::raw::c_char,
        engine: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlListReference;

    pub fn ctr_qt_qml_ffi_QQmlListReference_QQmlListReference3(
        variant: *const ::qt_core::QVariant,
    ) -> *mut crate::QQmlListReference;

    pub fn ctr_qt_qml_ffi_QQmlListReference_QQmlListReference4(
        o: *mut ::qt_core::QObject,
        property: *const ::std::os::raw::c_char,
    ) -> *mut crate::QQmlListReference;

    pub fn ctr_qt_qml_ffi_QQmlListReference_QQmlListReference5(
        arg1: *const crate::QQmlListReference,
    ) -> *mut crate::QQmlListReference;

    pub fn ctr_qt_qml_ffi_QQmlListReference_operator_(
        this_ptr: *mut crate::QQmlListReference,
        arg1: *const crate::QQmlListReference,
    ) -> *mut crate::QQmlListReference;

    pub fn ctr_qt_qml_ffi_QQmlListReference_dQQmlListReference(
        this_ptr: *mut crate::QQmlListReference,
    );

    pub fn ctr_qt_qml_ffi_QQmlListReference_isValid(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_object(
        this_ptr: *const crate::QQmlListReference,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlListReference_listElementType(
        this_ptr: *const crate::QQmlListReference,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlListReference_canAppend(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_canAt(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_canClear(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_canCount(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_canReplace(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_canRemoveLast(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_isManipulable(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_isReadable(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_append(
        this_ptr: *const crate::QQmlListReference,
        arg1: *mut ::qt_core::QObject,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_at(
        this_ptr: *const crate::QQmlListReference,
        arg1: ::std::os::raw::c_longlong,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlListReference_clear(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_count(
        this_ptr: *const crate::QQmlListReference,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QQmlListReference_size(
        this_ptr: *const crate::QQmlListReference,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QQmlListReference_replace(
        this_ptr: *const crate::QQmlListReference,
        arg1: ::std::os::raw::c_longlong,
        arg2: *mut ::qt_core::QObject,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_removeLast(
        this_ptr: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlListReference_operator__(
        this_ptr: *const crate::QQmlListReference,
        other: *const crate::QQmlListReference,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSListIndexClamp_clamp(
        start: ::std::os::raw::c_longlong,
        max: ::std::os::raw::c_longlong,
        min: ::std::os::raw::c_longlong,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QJSListForInIterator_hasNext(
        this_ptr: *const crate::QJSListForInIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSListForInIterator_next(
        this_ptr: *mut crate::QJSListForInIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QJSListForOfIterator_init(this_ptr: *mut crate::QJSListForOfIterator);

    pub fn ctr_qt_qml_ffi_QJSValueIterator_QJSValueIterator(
        value: *const crate::QJSValue,
    ) -> *mut crate::QJSValueIterator;

    pub fn ctr_qt_qml_ffi_QJSValueIterator_dQJSValueIterator(
        this_ptr: *mut crate::QJSValueIterator,
    );

    pub fn ctr_qt_qml_ffi_QJSValueIterator_hasNext(
        this_ptr: *const crate::QJSValueIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValueIterator_next(this_ptr: *mut crate::QJSValueIterator) -> bool;

    pub fn ctr_qt_qml_ffi_QJSValueIterator_name(
        this_ptr: *const crate::QJSValueIterator,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QJSValueIterator_value(
        this_ptr: *const crate::QJSValueIterator,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValueIterator_operator_(
        this_ptr: *mut crate::QJSValueIterator,
        value: *mut crate::QJSValue,
    ) -> *mut crate::QJSValueIterator;

    pub fn ctr_qt_qml_ffi_QQmlParserStatus_dQQmlParserStatus(
        this_ptr: *mut crate::QQmlParserStatus,
    );

    pub fn ctr_qt_qml_ffi_QQmlParserStatus_classBegin(this_ptr: *mut crate::QQmlParserStatus);

    pub fn ctr_qt_qml_ffi_QQmlParserStatus_componentComplete(
        this_ptr: *mut crate::QQmlParserStatus,
    );

    pub fn ctr_qt_qml_ffi_QQmlPropertyValueSource_dQQmlPropertyValueSource(
        this_ptr: *mut crate::QQmlPropertyValueSource,
    );

    pub fn ctr_qt_qml_ffi_QQmlPropertyValueSource_setTarget(
        this_ptr: *mut crate::QQmlPropertyValueSource,
        arg1: *const crate::QQmlProperty,
    );

    pub fn ctr_qt_qml_ffi_qHash(
        func: ::std::option::Option<
            extern "C" fn(*mut ::qt_core::QObject) -> *mut ::qt_core::QObject,
        >,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_qmlClearTypeRegistrations();

    pub fn ctr_qt_qml_ffi_QQmlTypeNotAvailable_metaObject(
        this_ptr: *const crate::QQmlTypeNotAvailable,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlTypeNotAvailable_qt_metacast(
        this_ptr: *mut crate::QQmlTypeNotAvailable,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlTypeNotAvailable_qt_metacall(
        this_ptr: *mut crate::QQmlTypeNotAvailable,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_qmlRegisterTypeNotAvailable(
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        versionMinor: ::std::os::raw::c_int,
        qmlName: *const ::std::os::raw::c_char,
        message: *const ::qt_core::QString,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_qmlRegisterUncreatableMetaObject(
        staticMetaObject: *const ::qt_core::QMetaObject,
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        versionMinor: ::std::os::raw::c_int,
        qmlName: *const ::std::os::raw::c_char,
        reason: *const ::qt_core::QString,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_qmlExecuteDeferred(arg1: *mut ::qt_core::QObject);

    pub fn ctr_qt_qml_ffi_qmlContext(arg1: *const ::qt_core::QObject) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_qmlEngine(arg1: *const ::qt_core::QObject) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_qmlAttachedPropertiesFunction(
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::qt_core::QMetaObject,
    ) -> ::std::option::Option<extern "C" fn(*mut ::qt_core::QObject) -> *mut ::qt_core::QObject>;

    pub fn ctr_qt_qml_ffi_qmlAttachedPropertiesObject(
        arg1: *mut ::qt_core::QObject,
        func: ::std::option::Option<
            extern "C" fn(*mut ::qt_core::QObject) -> *mut ::qt_core::QObject,
        >,
        create: bool,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_qmlExtendedObject(
        arg1: *mut ::qt_core::QObject,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_qmlProtectModule(
        uri: *const ::std::os::raw::c_char,
        majVersion: ::std::os::raw::c_int,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_qmlRegisterModule(
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        versionMinor: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_qmlRegisterModuleImport(
        uri: *const ::std::os::raw::c_char,
        moduleMajor: ::std::os::raw::c_int,
        import: *const ::std::os::raw::c_char,
        importMajor: ::std::os::raw::c_int,
        importMinor: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_qmlUnregisterModuleImport(
        uri: *const ::std::os::raw::c_char,
        moduleMajor: ::std::os::raw::c_int,
        import: *const ::std::os::raw::c_char,
        importMajor: ::std::os::raw::c_int,
        importMinor: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_qmlRegisterSingletonType(
        url: *const ::qt_core::QUrl,
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        versionMinor: ::std::os::raw::c_int,
        qmlName: *const ::std::os::raw::c_char,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_qmlRegisterType(
        url: *const ::qt_core::QUrl,
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        versionMinor: ::std::os::raw::c_int,
        qmlName: *const ::std::os::raw::c_char,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_qmlRegisterNamespaceAndRevisions(
        metaObject: *const ::qt_core::QMetaObject,
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        qmlTypeIds: *mut ::qt_core::QListOfInt,
        classInfoMetaObject: *const ::qt_core::QMetaObject,
        extensionMetaObject: *const ::qt_core::QMetaObject,
    );

    pub fn ctr_qt_qml_ffi_qmlRegisterNamespaceAndRevisions1(
        metaObject: *const ::qt_core::QMetaObject,
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        qmlTypeIds: *mut ::qt_core::QListOfInt,
        classInfoMetaObject: *const ::qt_core::QMetaObject,
    );

    pub fn ctr_qt_qml_ffi_qmlTypeId(
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        versionMinor: ::std::os::raw::c_int,
        qmlName: *const ::std::os::raw::c_char,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlAbstractUrlInterceptor_dQQmlAbstractUrlInterceptor(
        this_ptr: *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QQmlAbstractUrlInterceptor_intercept(
        this_ptr: *mut crate::QQmlAbstractUrlInterceptor,
        path: *const ::qt_core::QUrl,
        type_: crate::q_qml_abstract_url_interceptor::DataType,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlError_QQmlError() -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QQmlError_QQmlError1(
        arg1: *const crate::QQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QQmlError_operator_(
        this_ptr: *mut crate::QQmlError,
        arg1: *const crate::QQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QQmlError_dQQmlError(this_ptr: *mut crate::QQmlError);

    pub fn ctr_qt_qml_ffi_QQmlError_swap(
        this_ptr: *mut crate::QQmlError,
        other: *mut crate::QQmlError,
    );

    pub fn ctr_qt_qml_ffi_QQmlError_isValid(this_ptr: *const crate::QQmlError) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlError_url(this_ptr: *const crate::QQmlError) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlError_setUrl(
        this_ptr: *mut crate::QQmlError,
        arg1: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlError_description(
        this_ptr: *const crate::QQmlError,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlError_setDescription(
        this_ptr: *mut crate::QQmlError,
        arg1: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlError_line(
        this_ptr: *const crate::QQmlError,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlError_setLine(
        this_ptr: *mut crate::QQmlError,
        arg1: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_QQmlError_column(
        this_ptr: *const crate::QQmlError,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlError_setColumn(
        this_ptr: *mut crate::QQmlError,
        arg1: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_QQmlError_object(
        this_ptr: *const crate::QQmlError,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlError_setObject(
        this_ptr: *mut crate::QQmlError,
        arg1: *mut ::qt_core::QObject,
    );

    pub fn ctr_qt_qml_ffi_QQmlError_messageType(
        this_ptr: *const crate::QQmlError,
    ) -> ::qt_core::QtMsgType;

    pub fn ctr_qt_qml_ffi_QQmlError_setMessageType(
        this_ptr: *mut crate::QQmlError,
        messageType: ::qt_core::QtMsgType,
    );

    pub fn ctr_qt_qml_ffi_QQmlError_toString(
        this_ptr: *const crate::QQmlError,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_operator__2(
        debug: *const ::qt_core::QDebug,
        error: *const crate::QQmlError,
    ) -> *mut ::qt_core::QDebug;

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_metaObject(
        this_ptr: *const crate::QQmlImageProviderBase,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_qt_metacast(
        this_ptr: *mut crate::QQmlImageProviderBase,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_qt_metacall(
        this_ptr: *mut crate::QQmlImageProviderBase,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_dQQmlImageProviderBase(
        this_ptr: *mut crate::QQmlImageProviderBase,
    );

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_imageType(
        this_ptr: *const crate::QQmlImageProviderBase,
    ) -> crate::q_qml_image_provider_base::ImageType;

    pub fn ctr_qt_qml_ffi_QQmlImageProviderBase_flags(
        this_ptr: *const crate::QQmlImageProviderBase,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlEngine_metaObject(
        this_ptr: *const crate::QQmlEngine,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlEngine_qt_metacast(
        this_ptr: *mut crate::QQmlEngine,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlEngine_qt_metacall(
        this_ptr: *mut crate::QQmlEngine,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlEngine_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlEngine_QQmlEngine(
        p: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_QQmlEngine_dQQmlEngine(this_ptr: *mut crate::QQmlEngine);

    pub fn ctr_qt_qml_ffi_QQmlEngine_rootContext(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlEngine_clearComponentCache(this_ptr: *mut crate::QQmlEngine);

    pub fn ctr_qt_qml_ffi_QQmlEngine_trimComponentCache(this_ptr: *mut crate::QQmlEngine);

    pub fn ctr_qt_qml_ffi_QQmlEngine_clearSingletons(this_ptr: *mut crate::QQmlEngine);

    pub fn ctr_qt_qml_ffi_QQmlEngine_importPathList(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setImportPathList(
        this_ptr: *mut crate::QQmlEngine,
        paths: *const ::qt_core::QListOfQString,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_addImportPath(
        this_ptr: *mut crate::QQmlEngine,
        dir: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_pluginPathList(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setPluginPathList(
        this_ptr: *mut crate::QQmlEngine,
        paths: *const ::qt_core::QListOfQString,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_addPluginPath(
        this_ptr: *mut crate::QQmlEngine,
        dir: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_addNamedBundle(
        this_ptr: *mut crate::QQmlEngine,
        arg1: *const ::qt_core::QString,
        arg2: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlEngine_importPlugin(
        this_ptr: *mut crate::QQmlEngine,
        filePath: *const ::qt_core::QString,
        uri: *const ::qt_core::QString,
        errors: *mut crate::QListOfQQmlError,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setNetworkAccessManagerFactory(
        this_ptr: *mut crate::QQmlEngine,
        arg1: *mut crate::QQmlNetworkAccessManagerFactory,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_networkAccessManagerFactory(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut crate::QQmlNetworkAccessManagerFactory;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setUrlInterceptor(
        this_ptr: *mut crate::QQmlEngine,
        urlInterceptor: *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_urlInterceptor(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QQmlEngine_addUrlInterceptor(
        this_ptr: *mut crate::QQmlEngine,
        urlInterceptor: *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_removeUrlInterceptor(
        this_ptr: *mut crate::QQmlEngine,
        urlInterceptor: *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_urlInterceptors(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QQmlEngine_interceptUrl(
        this_ptr: *const crate::QQmlEngine,
        url: *const ::qt_core::QUrl,
        type_: crate::q_qml_abstract_url_interceptor::DataType,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlEngine_addImageProvider(
        this_ptr: *mut crate::QQmlEngine,
        id: *const ::qt_core::QString,
        arg2: *mut crate::QQmlImageProviderBase,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_imageProvider(
        this_ptr: *const crate::QQmlEngine,
        id: *const ::qt_core::QString,
    ) -> *mut crate::QQmlImageProviderBase;

    pub fn ctr_qt_qml_ffi_QQmlEngine_removeImageProvider(
        this_ptr: *mut crate::QQmlEngine,
        id: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_setIncubationController(
        this_ptr: *mut crate::QQmlEngine,
        arg1: *mut crate::QQmlIncubationController,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_incubationController(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut crate::QQmlIncubationController;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setOfflineStoragePath(
        this_ptr: *mut crate::QQmlEngine,
        dir: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_offlineStoragePath(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlEngine_offlineStorageDatabaseFilePath(
        this_ptr: *const crate::QQmlEngine,
        databaseName: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlEngine_baseUrl(
        this_ptr: *const crate::QQmlEngine,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setBaseUrl(
        this_ptr: *mut crate::QQmlEngine,
        arg1: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_outputWarningsToStandardError(
        this_ptr: *const crate::QQmlEngine,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setOutputWarningsToStandardError(
        this_ptr: *mut crate::QQmlEngine,
        arg1: bool,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_markCurrentFunctionAsTranslationBinding(
        this_ptr: *mut crate::QQmlEngine,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_captureProperty(
        this_ptr: *const crate::QQmlEngine,
        object: *mut ::qt_core::QObject,
        property: *const ::qt_core::QMetaProperty,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngine_retranslate(this_ptr: *mut crate::QQmlEngine);

    pub fn ctr_qt_qml_ffi_QQmlEngine_contextForObject(
        arg1: *const ::qt_core::QObject,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlEngine_setContextForObject(
        arg1: *mut ::qt_core::QObject,
        arg2: *mut crate::QQmlContext,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_metaObject(
        this_ptr: *const crate::QQmlApplicationEngine,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_qt_metacast(
        this_ptr: *mut crate::QQmlApplicationEngine,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_qt_metacall(
        this_ptr: *mut crate::QQmlApplicationEngine,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine1(
        url: *const ::qt_core::QUrl,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine2(
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine3(
        filePath: *const ::qt_core::QString,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_dQQmlApplicationEngine(
        this_ptr: *mut crate::QQmlApplicationEngine,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_rootObjects(
        this_ptr: *const crate::QQmlApplicationEngine,
    ) -> *mut ::qt_core::QListOfQObject;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_load(
        this_ptr: *mut crate::QQmlApplicationEngine,
        url: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_load1(
        this_ptr: *mut crate::QQmlApplicationEngine,
        filePath: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_loadFromModule(
        this_ptr: *mut crate::QQmlApplicationEngine,
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_setInitialProperties(
        this_ptr: *mut crate::QQmlApplicationEngine,
        initialProperties: *const ::qt_core::QMapOfQStringQVariant,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_setExtraFileSelectors(
        this_ptr: *mut crate::QQmlApplicationEngine,
        extraFileSelectors: *const ::qt_core::QListOfQString,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_loadData(
        this_ptr: *mut crate::QQmlApplicationEngine,
        data: *const ::qt_core::QByteArray,
        url: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_metaObject(
        this_ptr: *const crate::QQmlComponent,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlComponent_qt_metacast(
        this_ptr: *mut crate::QQmlComponent,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlComponent_qt_metacall(
        this_ptr: *mut crate::QQmlComponent,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlComponent_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent1(
        arg1: *mut crate::QQmlEngine,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent2(
        arg1: *mut crate::QQmlEngine,
        fileName: *const ::qt_core::QString,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent3(
        arg1: *mut crate::QQmlEngine,
        fileName: *const ::qt_core::QString,
        mode: crate::q_qml_component::CompilationMode,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent4(
        arg1: *mut crate::QQmlEngine,
        url: *const ::qt_core::QUrl,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent5(
        arg1: *mut crate::QQmlEngine,
        url: *const ::qt_core::QUrl,
        mode: crate::q_qml_component::CompilationMode,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent6(
        engine: *mut crate::QQmlEngine,
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent7(
        engine: *mut crate::QQmlEngine,
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
        mode: crate::q_qml_component::CompilationMode,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_dQQmlComponent(this_ptr: *mut crate::QQmlComponent);

    pub fn ctr_qt_qml_ffi_QQmlComponent_status(
        this_ptr: *const crate::QQmlComponent,
    ) -> crate::q_qml_component::Status;

    pub fn ctr_qt_qml_ffi_QQmlComponent_isNull(this_ptr: *const crate::QQmlComponent) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlComponent_isReady(this_ptr: *const crate::QQmlComponent) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlComponent_isError(this_ptr: *const crate::QQmlComponent) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlComponent_isLoading(this_ptr: *const crate::QQmlComponent) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlComponent_isBound(this_ptr: *const crate::QQmlComponent) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlComponent_errors(
        this_ptr: *const crate::QQmlComponent,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QQmlComponent_errorString(
        this_ptr: *const crate::QQmlComponent,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlComponent_progress(
        this_ptr: *const crate::QQmlComponent,
    ) -> ::std::os::raw::c_double;

    pub fn ctr_qt_qml_ffi_QQmlComponent_url(
        this_ptr: *const crate::QQmlComponent,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlComponent_create(
        this_ptr: *mut crate::QQmlComponent,
        context: *mut crate::QQmlContext,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlComponent_createWithInitialProperties(
        this_ptr: *mut crate::QQmlComponent,
        initialProperties: *const ::qt_core::QMapOfQStringQVariant,
        context: *mut crate::QQmlContext,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlComponent_setInitialProperties(
        this_ptr: *mut crate::QQmlComponent,
        component: *mut ::qt_core::QObject,
        properties: *const ::qt_core::QMapOfQStringQVariant,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_beginCreate(
        this_ptr: *mut crate::QQmlComponent,
        arg1: *mut crate::QQmlContext,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlComponent_completeCreate(this_ptr: *mut crate::QQmlComponent);

    pub fn ctr_qt_qml_ffi_QQmlComponent_create1(
        this_ptr: *mut crate::QQmlComponent,
        arg1: *mut crate::QQmlIncubator,
        context: *mut crate::QQmlContext,
        forContext: *mut crate::QQmlContext,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_creationContext(
        this_ptr: *const crate::QQmlComponent,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlComponent_engine(
        this_ptr: *const crate::QQmlComponent,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_QQmlComponent_loadUrl(
        this_ptr: *mut crate::QQmlComponent,
        url: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_loadUrl1(
        this_ptr: *mut crate::QQmlComponent,
        url: *const ::qt_core::QUrl,
        mode: crate::q_qml_component::CompilationMode,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_loadFromModule(
        this_ptr: *mut crate::QQmlComponent,
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
        mode: crate::q_qml_component::CompilationMode,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_setData(
        this_ptr: *mut crate::QQmlComponent,
        arg1: *const ::qt_core::QByteArray,
        baseUrl: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_metaObject(
        this_ptr: *const crate::QQmlContext,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlContext_qt_metacast(
        this_ptr: *mut crate::QQmlContext,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlContext_qt_metacall(
        this_ptr: *mut crate::QQmlContext,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlContext_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlContext_QQmlContext(
        parent: *mut crate::QQmlEngine,
        objParent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlContext_QQmlContext1(
        parent: *mut crate::QQmlContext,
        objParent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlContext_dQQmlContext(this_ptr: *mut crate::QQmlContext);

    pub fn ctr_qt_qml_ffi_QQmlContext_isValid(this_ptr: *const crate::QQmlContext) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlContext_engine(
        this_ptr: *const crate::QQmlContext,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_QQmlContext_parentContext(
        this_ptr: *const crate::QQmlContext,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlContext_contextObject(
        this_ptr: *const crate::QQmlContext,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlContext_setContextObject(
        this_ptr: *mut crate::QQmlContext,
        arg1: *mut ::qt_core::QObject,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_contextProperty(
        this_ptr: *const crate::QQmlContext,
        arg1: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlContext_setContextProperty(
        this_ptr: *mut crate::QQmlContext,
        arg1: *const ::qt_core::QString,
        arg2: *mut ::qt_core::QObject,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_setContextProperty1(
        this_ptr: *mut crate::QQmlContext,
        arg1: *const ::qt_core::QString,
        arg2: *const ::qt_core::QVariant,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_setContextProperties(
        this_ptr: *mut crate::QQmlContext,
        properties: *const crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_nameForObject(
        this_ptr: *const crate::QQmlContext,
        arg1: *const ::qt_core::QObject,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlContext_objectForName(
        this_ptr: *const crate::QQmlContext,
        arg1: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlContext_resolvedUrl(
        this_ptr: *const crate::QQmlContext,
        arg1: *const ::qt_core::QUrl,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlContext_setBaseUrl(
        this_ptr: *mut crate::QQmlContext,
        arg1: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_baseUrl(
        this_ptr: *const crate::QQmlContext,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlContext_importedScript(
        this_ptr: *const crate::QQmlContext,
        name: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_QQmlScriptString() -> *mut crate::QQmlScriptString;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_QQmlScriptString1(
        arg1: *const crate::QQmlScriptString,
    ) -> *mut crate::QQmlScriptString;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_dQQmlScriptString(
        this_ptr: *mut crate::QQmlScriptString,
    );

    pub fn ctr_qt_qml_ffi_QQmlScriptString_operator_(
        this_ptr: *mut crate::QQmlScriptString,
        arg1: *const crate::QQmlScriptString,
    ) -> *mut crate::QQmlScriptString;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_operator__(
        this_ptr: *const crate::QQmlScriptString,
        arg1: *const crate::QQmlScriptString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_isEmpty(
        this_ptr: *const crate::QQmlScriptString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_isUndefinedLiteral(
        this_ptr: *const crate::QQmlScriptString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_isNullLiteral(
        this_ptr: *const crate::QQmlScriptString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_stringLiteral(
        this_ptr: *const crate::QQmlScriptString,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_numberLiteral(
        this_ptr: *const crate::QQmlScriptString,
        ok: *mut bool,
    ) -> ::std::os::raw::c_double;

    pub fn ctr_qt_qml_ffi_QQmlScriptString_booleanLiteral(
        this_ptr: *const crate::QQmlScriptString,
        ok: *mut bool,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlExpression_metaObject(
        this_ptr: *const crate::QQmlExpression,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlExpression_qt_metacast(
        this_ptr: *mut crate::QQmlExpression,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlExpression_qt_metacall(
        this_ptr: *mut crate::QQmlExpression,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlExpression_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlExpression_QQmlExpression() -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_QQmlExpression_QQmlExpression1(
        arg1: *mut crate::QQmlContext,
        arg2: *mut ::qt_core::QObject,
        arg3: *const ::qt_core::QString,
        arg4: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_QQmlExpression_QQmlExpression2(
        arg1: *const crate::QQmlScriptString,
        arg2: *mut crate::QQmlContext,
        arg3: *mut ::qt_core::QObject,
        arg4: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_QQmlExpression_dQQmlExpression(this_ptr: *mut crate::QQmlExpression);

    pub fn ctr_qt_qml_ffi_QQmlExpression_engine(
        this_ptr: *const crate::QQmlExpression,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_QQmlExpression_context(
        this_ptr: *const crate::QQmlExpression,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlExpression_expression(
        this_ptr: *const crate::QQmlExpression,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlExpression_setExpression(
        this_ptr: *mut crate::QQmlExpression,
        arg1: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlExpression_notifyOnValueChanged(
        this_ptr: *const crate::QQmlExpression,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlExpression_setNotifyOnValueChanged(
        this_ptr: *mut crate::QQmlExpression,
        arg1: bool,
    );

    pub fn ctr_qt_qml_ffi_QQmlExpression_sourceFile(
        this_ptr: *const crate::QQmlExpression,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlExpression_lineNumber(
        this_ptr: *const crate::QQmlExpression,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlExpression_columnNumber(
        this_ptr: *const crate::QQmlExpression,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlExpression_setSourceLocation(
        this_ptr: *mut crate::QQmlExpression,
        fileName: *const ::qt_core::QString,
        line: ::std::os::raw::c_int,
        column: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_QQmlExpression_scopeObject(
        this_ptr: *const crate::QQmlExpression,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlExpression_hasError(this_ptr: *const crate::QQmlExpression) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlExpression_clearError(this_ptr: *mut crate::QQmlExpression);

    pub fn ctr_qt_qml_ffi_QQmlExpression_error(
        this_ptr: *const crate::QQmlExpression,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QQmlExpression_evaluate(
        this_ptr: *mut crate::QQmlExpression,
        valueIsUndefined: *mut bool,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlTypesExtensionInterface_dQQmlTypesExtensionInterface(
        this_ptr: *mut crate::QQmlTypesExtensionInterface,
    );

    pub fn ctr_qt_qml_ffi_QQmlTypesExtensionInterface_registerTypes(
        this_ptr: *mut crate::QQmlTypesExtensionInterface,
        uri: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_QQmlExtensionInterface_dQQmlExtensionInterface(
        this_ptr: *mut crate::QQmlExtensionInterface,
    );

    pub fn ctr_qt_qml_ffi_QQmlExtensionInterface_initializeEngine(
        this_ptr: *mut crate::QQmlExtensionInterface,
        engine: *mut crate::QQmlEngine,
        uri: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionInterface_dQQmlEngineExtensionInterface(
        this_ptr: *mut crate::QQmlEngineExtensionInterface,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionInterface_initializeEngine(
        this_ptr: *mut crate::QQmlEngineExtensionInterface,
        engine: *mut crate::QQmlEngine,
        uri: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_metaObject(
        this_ptr: *const crate::QQmlExtensionPlugin,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_qt_metacast(
        this_ptr: *mut crate::QQmlExtensionPlugin,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_qt_metacall(
        this_ptr: *mut crate::QQmlExtensionPlugin,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_dQQmlExtensionPlugin(
        this_ptr: *mut crate::QQmlExtensionPlugin,
    );

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_baseUrl(
        this_ptr: *const crate::QQmlExtensionPlugin,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_registerTypes(
        this_ptr: *mut crate::QQmlExtensionPlugin,
        uri: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_unregisterTypes(
        this_ptr: *mut crate::QQmlExtensionPlugin,
    );

    pub fn ctr_qt_qml_ffi_QQmlExtensionPlugin_initializeEngine(
        this_ptr: *mut crate::QQmlExtensionPlugin,
        engine: *mut crate::QQmlEngine,
        uri: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_metaObject(
        this_ptr: *const crate::QQmlEngineExtensionPlugin,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_qt_metacast(
        this_ptr: *mut crate::QQmlEngineExtensionPlugin,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_qt_metacall(
        this_ptr: *mut crate::QQmlEngineExtensionPlugin,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_QQmlEngineExtensionPlugin(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlEngineExtensionPlugin;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_dQQmlEngineExtensionPlugin(
        this_ptr: *mut crate::QQmlEngineExtensionPlugin,
    );

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_initializeEngine(
        this_ptr: *mut crate::QQmlEngineExtensionPlugin,
        engine: *mut crate::QQmlEngine,
        uri: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_QQmlFile_QQmlFile() -> *mut crate::QQmlFile;

    pub fn ctr_qt_qml_ffi_QQmlFile_QQmlFile1(
        engine: *mut crate::QQmlEngine,
        url: *const ::qt_core::QUrl,
    ) -> *mut crate::QQmlFile;

    pub fn ctr_qt_qml_ffi_QQmlFile_QQmlFile2(
        engine: *mut crate::QQmlEngine,
        url: *const ::qt_core::QString,
    ) -> *mut crate::QQmlFile;

    pub fn ctr_qt_qml_ffi_QQmlFile_dQQmlFile(this_ptr: *mut crate::QQmlFile);

    pub fn ctr_qt_qml_ffi_QQmlFile_isNull(this_ptr: *const crate::QQmlFile) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_isReady(this_ptr: *const crate::QQmlFile) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_isError(this_ptr: *const crate::QQmlFile) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_isLoading(this_ptr: *const crate::QQmlFile) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_url(this_ptr: *const crate::QQmlFile) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_qml_ffi_QQmlFile_status(
        this_ptr: *const crate::QQmlFile,
    ) -> crate::q_qml_file::Status;

    pub fn ctr_qt_qml_ffi_QQmlFile_error(
        this_ptr: *const crate::QQmlFile,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlFile_size(
        this_ptr: *const crate::QQmlFile,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QQmlFile_data(
        this_ptr: *const crate::QQmlFile,
    ) -> *const ::std::os::raw::c_char;

    pub fn ctr_qt_qml_ffi_QQmlFile_dataByteArray(
        this_ptr: *const crate::QQmlFile,
    ) -> *mut ::qt_core::QByteArray;

    pub fn ctr_qt_qml_ffi_QQmlFile_load(
        this_ptr: *mut crate::QQmlFile,
        arg1: *mut crate::QQmlEngine,
        arg2: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_QQmlFile_load1(
        this_ptr: *mut crate::QQmlFile,
        arg1: *mut crate::QQmlEngine,
        arg2: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlFile_clear(this_ptr: *mut crate::QQmlFile);

    pub fn ctr_qt_qml_ffi_QQmlFile_clear1(
        this_ptr: *mut crate::QQmlFile,
        object: *mut ::qt_core::QObject,
    );

    pub fn ctr_qt_qml_ffi_QQmlFile_connectFinished(
        this_ptr: *mut crate::QQmlFile,
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::std::os::raw::c_char,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_connectFinished1(
        this_ptr: *mut crate::QQmlFile,
        arg1: *mut ::qt_core::QObject,
        arg2: ::std::os::raw::c_int,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_connectDownloadProgress(
        this_ptr: *mut crate::QQmlFile,
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::std::os::raw::c_char,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_connectDownloadProgress1(
        this_ptr: *mut crate::QQmlFile,
        arg1: *mut ::qt_core::QObject,
        arg2: ::std::os::raw::c_int,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_isSynchronous(url: *const ::qt_core::QString) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_isSynchronous1(url: *const ::qt_core::QUrl) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_isLocalFile(url: *const ::qt_core::QString) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_isLocalFile1(url: *const ::qt_core::QUrl) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlFile_urlToLocalFileOrQrc(
        arg1: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlFile_urlToLocalFileOrQrc1(
        arg1: *const ::qt_core::QUrl,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_metaObject(
        this_ptr: *const crate::QQmlFileSelector,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_qt_metacast(
        this_ptr: *mut crate::QQmlFileSelector,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_qt_metacall(
        this_ptr: *mut crate::QQmlFileSelector,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_QQmlFileSelector(
        engine: *mut crate::QQmlEngine,
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlFileSelector;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_dQQmlFileSelector(
        this_ptr: *mut crate::QQmlFileSelector,
    );

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_selector(
        this_ptr: *const crate::QQmlFileSelector,
    ) -> *mut ::qt_core::QFileSelector;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_setSelector(
        this_ptr: *mut crate::QQmlFileSelector,
        selector: *mut ::qt_core::QFileSelector,
    );

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_setExtraSelectors(
        this_ptr: *mut crate::QQmlFileSelector,
        strings: *const ::qt_core::QListOfQString,
    );

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_get(
        arg1: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlFileSelector;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_QQmlIncubator(
        arg1: crate::q_qml_incubator::IncubationMode,
    ) -> *mut crate::QQmlIncubator;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_dQQmlIncubator(this_ptr: *mut crate::QQmlIncubator);

    pub fn ctr_qt_qml_ffi_QQmlIncubator_clear(this_ptr: *mut crate::QQmlIncubator);

    pub fn ctr_qt_qml_ffi_QQmlIncubator_forceCompletion(this_ptr: *mut crate::QQmlIncubator);

    pub fn ctr_qt_qml_ffi_QQmlIncubator_isNull(this_ptr: *const crate::QQmlIncubator) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_isReady(this_ptr: *const crate::QQmlIncubator) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_isError(this_ptr: *const crate::QQmlIncubator) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_isLoading(this_ptr: *const crate::QQmlIncubator) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_errors(
        this_ptr: *const crate::QQmlIncubator,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_incubationMode(
        this_ptr: *const crate::QQmlIncubator,
    ) -> crate::q_qml_incubator::IncubationMode;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_status(
        this_ptr: *const crate::QQmlIncubator,
    ) -> crate::q_qml_incubator::Status;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_object(
        this_ptr: *const crate::QQmlIncubator,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_setInitialProperties(
        this_ptr: *mut crate::QQmlIncubator,
        initialProperties: *const ::qt_core::QMapOfQStringQVariant,
    );

    pub fn ctr_qt_qml_ffi_QQmlIncubationController_QQmlIncubationController(
    ) -> *mut crate::QQmlIncubationController;

    pub fn ctr_qt_qml_ffi_QQmlIncubationController_dQQmlIncubationController(
        this_ptr: *mut crate::QQmlIncubationController,
    );

    pub fn ctr_qt_qml_ffi_QQmlIncubationController_engine(
        this_ptr: *const crate::QQmlIncubationController,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_QQmlIncubationController_incubatingObjectCount(
        this_ptr: *const crate::QQmlIncubationController,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlIncubationController_incubateFor(
        this_ptr: *mut crate::QQmlIncubationController,
        msecs: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_qmlDebug(me: *const ::qt_core::QObject) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlDebug1(
        me: *const ::qt_core::QObject,
        error: *const crate::QQmlError,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlDebug2(
        me: *const ::qt_core::QObject,
        errors: *const crate::QListOfQQmlError,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlInfo(me: *const ::qt_core::QObject) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlInfo1(
        me: *const ::qt_core::QObject,
        error: *const crate::QQmlError,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlInfo2(
        me: *const ::qt_core::QObject,
        errors: *const crate::QListOfQQmlError,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlWarning(me: *const ::qt_core::QObject) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlWarning1(
        me: *const ::qt_core::QObject,
        error: *const crate::QQmlError,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_qmlWarning2(
        me: *const ::qt_core::QObject,
        errors: *const crate::QListOfQQmlError,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_QQmlInfo(arg1: *const crate::QQmlInfo) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_dQQmlInfo(this_ptr: *mut crate::QQmlInfo);

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::qt_core::QChar,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__1(
        this_ptr: *mut crate::QQmlInfo,
        t: bool,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__2(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_char,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__3(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_short,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__4(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_ushort,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__5(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_int,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__6(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_uint,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__7(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_long,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__8(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_ulong,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__9(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_longlong,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__10(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_ulonglong,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__11(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_float,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__12(
        this_ptr: *mut crate::QQmlInfo,
        t: ::std::os::raw::c_double,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__13(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::std::os::raw::c_char,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__14(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::qt_core::QString,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__15(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::qt_core::QStringView,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__16(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::qt_core::QLatin1String,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__17(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::qt_core::QByteArray,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__18(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::std::ffi::c_void,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__20(
        this_ptr: *mut crate::QQmlInfo,
        m: *const ::qt_core::QTextStreamManipulator,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator__21(
        this_ptr: *mut crate::QQmlInfo,
        t: *const ::qt_core::QUrl,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlModuleRegistration_QQmlModuleRegistration(
        uri: *const ::std::os::raw::c_char,
        registerFunction: ::std::option::Option<extern "C" fn()>,
    ) -> *mut crate::QQmlModuleRegistration;

    pub fn ctr_qt_qml_ffi_QQmlModuleRegistration_dQQmlModuleRegistration(
        this_ptr: *mut crate::QQmlModuleRegistration,
    );

    pub fn ctr_qt_qml_ffi_QQmlModuleRegistration_QQmlModuleRegistration1(
        uri: *const ::std::os::raw::c_char,
        majorVersion: ::std::os::raw::c_int,
        registerFunction: ::std::option::Option<extern "C" fn()>,
    ) -> *mut crate::QQmlModuleRegistration;

    pub fn ctr_qt_qml_ffi_QQmlNetworkAccessManagerFactory_dQQmlNetworkAccessManagerFactory(
        this_ptr: *mut crate::QQmlNetworkAccessManagerFactory,
    );

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty() -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_dQQmlProperty(this_ptr: *mut crate::QQmlProperty);

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty1(
        arg1: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty2(
        arg1: *mut ::qt_core::QObject,
        arg2: *mut crate::QQmlContext,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty3(
        arg1: *mut ::qt_core::QObject,
        arg2: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty4(
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty5(
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
        arg3: *mut crate::QQmlContext,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty6(
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
        arg3: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_QQmlProperty7(
        arg1: *const crate::QQmlProperty,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_operator_(
        this_ptr: *mut crate::QQmlProperty,
        arg1: *const crate::QQmlProperty,
    ) -> *mut crate::QQmlProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_swap(
        this_ptr: *mut crate::QQmlProperty,
        other: *mut crate::QQmlProperty,
    );

    pub fn ctr_qt_qml_ffi_QQmlProperty_operator__(
        this_ptr: *const crate::QQmlProperty,
        arg1: *const crate::QQmlProperty,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_type(
        this_ptr: *const crate::QQmlProperty,
    ) -> crate::q_qml_property::Type;

    pub fn ctr_qt_qml_ffi_QQmlProperty_isValid(this_ptr: *const crate::QQmlProperty) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_isProperty(this_ptr: *const crate::QQmlProperty) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_isSignalProperty(
        this_ptr: *const crate::QQmlProperty,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_propertyType(
        this_ptr: *const crate::QQmlProperty,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlProperty_propertyMetaType(
        this_ptr: *const crate::QQmlProperty,
    ) -> *mut ::qt_core::QMetaType;

    pub fn ctr_qt_qml_ffi_QQmlProperty_propertyTypeCategory(
        this_ptr: *const crate::QQmlProperty,
    ) -> crate::q_qml_property::PropertyTypeCategory;

    pub fn ctr_qt_qml_ffi_QQmlProperty_propertyTypeName(
        this_ptr: *const crate::QQmlProperty,
    ) -> *const ::std::os::raw::c_char;

    pub fn ctr_qt_qml_ffi_QQmlProperty_name(
        this_ptr: *const crate::QQmlProperty,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlProperty_read(
        this_ptr: *const crate::QQmlProperty,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlProperty_read1(
        arg1: *const ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlProperty_read2(
        arg1: *const ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
        arg3: *mut crate::QQmlContext,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlProperty_read3(
        arg1: *const ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
        arg3: *mut crate::QQmlEngine,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlProperty_write(
        this_ptr: *const crate::QQmlProperty,
        arg1: *const ::qt_core::QVariant,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_write1(
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
        arg3: *const ::qt_core::QVariant,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_write2(
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
        arg3: *const ::qt_core::QVariant,
        arg4: *mut crate::QQmlContext,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_write3(
        arg1: *mut ::qt_core::QObject,
        arg2: *const ::qt_core::QString,
        arg3: *const ::qt_core::QVariant,
        arg4: *mut crate::QQmlEngine,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_reset(this_ptr: *const crate::QQmlProperty) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_hasNotifySignal(
        this_ptr: *const crate::QQmlProperty,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_needsNotifySignal(
        this_ptr: *const crate::QQmlProperty,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_connectNotifySignal(
        this_ptr: *const crate::QQmlProperty,
        dest: *mut ::qt_core::QObject,
        slot: *const ::std::os::raw::c_char,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_connectNotifySignal1(
        this_ptr: *const crate::QQmlProperty,
        dest: *mut ::qt_core::QObject,
        method: ::std::os::raw::c_int,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_isWritable(this_ptr: *const crate::QQmlProperty) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_isBindable(this_ptr: *const crate::QQmlProperty) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_isDesignable(this_ptr: *const crate::QQmlProperty) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_isResettable(this_ptr: *const crate::QQmlProperty) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlProperty_object(
        this_ptr: *const crate::QQmlProperty,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlProperty_index(
        this_ptr: *const crate::QQmlProperty,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlProperty_property(
        this_ptr: *const crate::QQmlProperty,
    ) -> *mut ::qt_core::QMetaProperty;

    pub fn ctr_qt_qml_ffi_QQmlProperty_method(
        this_ptr: *const crate::QQmlProperty,
    ) -> *mut ::qt_core::QMetaMethod;

    pub fn ctr_qt_qml_ffi_qHash1(
        key: *const crate::QQmlProperty,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_metaObject(
        this_ptr: *const crate::QQmlPropertyMap,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_qt_metacast(
        this_ptr: *mut crate::QQmlPropertyMap,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_qt_metacall(
        this_ptr: *mut crate::QQmlPropertyMap,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_QQmlPropertyMap(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlPropertyMap;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_dQQmlPropertyMap(this_ptr: *mut crate::QQmlPropertyMap);

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_value(
        this_ptr: *const crate::QQmlPropertyMap,
        key: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_insert(
        this_ptr: *mut crate::QQmlPropertyMap,
        key: *const ::qt_core::QString,
        value: *const ::qt_core::QVariant,
    );

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_insert1(
        this_ptr: *mut crate::QQmlPropertyMap,
        values: *const ::qt_core::QHashOfQStringQVariant,
    );

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_clear(
        this_ptr: *mut crate::QQmlPropertyMap,
        key: *const ::qt_core::QString,
    );

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_freeze(this_ptr: *mut crate::QQmlPropertyMap);

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_keys(
        this_ptr: *const crate::QQmlPropertyMap,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_count(
        this_ptr: *const crate::QQmlPropertyMap,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_size(
        this_ptr: *const crate::QQmlPropertyMap,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_isEmpty(this_ptr: *const crate::QQmlPropertyMap) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_contains(
        this_ptr: *const crate::QQmlPropertyMap,
        key: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_operator__(
        this_ptr: *mut crate::QQmlPropertyMap,
        key: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_operator__1(
        this_ptr: *const crate::QQmlPropertyMap,
        key: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QJSValue_QJSValue12() -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_dQJSNumberCoercion(
        this_ptr: *mut crate::QJSNumberCoercion,
    );

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_QJSNumberCoercion1(
        other: *const crate::QJSNumberCoercion,
    ) -> *mut crate::QJSNumberCoercion;

    pub fn ctr_qt_qml_ffi_QJSNumberCoercion_operator_(
        this_ptr: *mut crate::QJSNumberCoercion,
        other: *const crate::QJSNumberCoercion,
    ) -> *mut crate::QJSNumberCoercion;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveUndefined_dQJSPrimitiveUndefined(
        this_ptr: *mut crate::QJSPrimitiveUndefined,
    );

    pub fn ctr_qt_qml_ffi_QJSPrimitiveUndefined_QJSPrimitiveUndefined(
    ) -> *mut crate::QJSPrimitiveUndefined;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveUndefined_QJSPrimitiveUndefined1(
        other: *const crate::QJSPrimitiveUndefined,
    ) -> *mut crate::QJSPrimitiveUndefined;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveUndefined_operator_(
        this_ptr: *mut crate::QJSPrimitiveUndefined,
        other: *const crate::QJSPrimitiveUndefined,
    ) -> *mut crate::QJSPrimitiveUndefined;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveNull_dQJSPrimitiveNull(
        this_ptr: *mut crate::QJSPrimitiveNull,
    );

    pub fn ctr_qt_qml_ffi_QJSPrimitiveNull_QJSPrimitiveNull() -> *mut crate::QJSPrimitiveNull;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveNull_QJSPrimitiveNull1(
        other: *const crate::QJSPrimitiveNull,
    ) -> *mut crate::QJSPrimitiveNull;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveNull_operator_(
        this_ptr: *mut crate::QJSPrimitiveNull,
        other: *const crate::QJSPrimitiveNull,
    ) -> *mut crate::QJSPrimitiveNull;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_dQJSPrimitiveValue(
        this_ptr: *mut crate::QJSPrimitiveValue,
    );

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_QJSPrimitiveValue11(
        other: *const crate::QJSPrimitiveValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QJSPrimitiveValue_operator_2(
        this_ptr: *mut crate::QJSPrimitiveValue,
        other: *const crate::QJSPrimitiveValue,
    ) -> *mut crate::QJSPrimitiveValue;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_dQQmlDebuggingEnabler(
        this_ptr: *mut crate::QQmlDebuggingEnabler,
    );

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_QQmlDebuggingEnabler1(
    ) -> *mut crate::QQmlDebuggingEnabler;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_QQmlDebuggingEnabler2(
        other: *const crate::QQmlDebuggingEnabler,
    ) -> *mut crate::QQmlDebuggingEnabler;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_operator_(
        this_ptr: *mut crate::QQmlDebuggingEnabler,
        other: *const crate::QQmlDebuggingEnabler,
    ) -> *mut crate::QQmlDebuggingEnabler;

    pub fn ctr_qt_qml_ffi_QJSListIndexClamp_dQJSListIndexClamp(
        this_ptr: *mut crate::QJSListIndexClamp,
    );

    pub fn ctr_qt_qml_ffi_QJSListIndexClamp_QJSListIndexClamp() -> *mut crate::QJSListIndexClamp;

    pub fn ctr_qt_qml_ffi_QJSListIndexClamp_QJSListIndexClamp1(
        other: *const crate::QJSListIndexClamp,
    ) -> *mut crate::QJSListIndexClamp;

    pub fn ctr_qt_qml_ffi_QJSListIndexClamp_operator_(
        this_ptr: *mut crate::QJSListIndexClamp,
        other: *const crate::QJSListIndexClamp,
    ) -> *mut crate::QJSListIndexClamp;

    pub fn ctr_qt_qml_ffi_QJSListForInIterator_dQJSListForInIterator(
        this_ptr: *mut crate::QJSListForInIterator,
    );

    pub fn ctr_qt_qml_ffi_QJSListForInIterator_QJSListForInIterator(
    ) -> *mut crate::QJSListForInIterator;

    pub fn ctr_qt_qml_ffi_QJSListForInIterator_QJSListForInIterator1(
        other: *const crate::QJSListForInIterator,
    ) -> *mut crate::QJSListForInIterator;

    pub fn ctr_qt_qml_ffi_QJSListForInIterator_operator_(
        this_ptr: *mut crate::QJSListForInIterator,
        other: *const crate::QJSListForInIterator,
    ) -> *mut crate::QJSListForInIterator;

    pub fn ctr_qt_qml_ffi_QJSListForOfIterator_dQJSListForOfIterator(
        this_ptr: *mut crate::QJSListForOfIterator,
    );

    pub fn ctr_qt_qml_ffi_QJSListForOfIterator_QJSListForOfIterator(
    ) -> *mut crate::QJSListForOfIterator;

    pub fn ctr_qt_qml_ffi_QJSListForOfIterator_QJSListForOfIterator1(
        other: *const crate::QJSListForOfIterator,
    ) -> *mut crate::QJSListForOfIterator;

    pub fn ctr_qt_qml_ffi_QJSListForOfIterator_operator_(
        this_ptr: *mut crate::QJSListForOfIterator,
        other: *const crate::QJSListForOfIterator,
    ) -> *mut crate::QJSListForOfIterator;

    pub fn ctr_qt_qml_ffi_QQmlParserStatus_operator_(
        this_ptr: *mut crate::QQmlParserStatus,
        other: *const crate::QQmlParserStatus,
    ) -> *mut crate::QQmlParserStatus;

    pub fn ctr_qt_qml_ffi_QQmlPropertyValueSource_operator_(
        this_ptr: *mut crate::QQmlPropertyValueSource,
        other: *const crate::QQmlPropertyValueSource,
    ) -> *mut crate::QQmlPropertyValueSource;

    pub fn ctr_qt_qml_ffi_QQmlTypeNotAvailable_dQQmlTypeNotAvailable(
        this_ptr: *mut crate::QQmlTypeNotAvailable,
    );

    pub fn ctr_qt_qml_ffi_QQmlAbstractUrlInterceptor_operator_(
        this_ptr: *mut crate::QQmlAbstractUrlInterceptor,
        other: *const crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QQmlEngine_QQmlEngine1() -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine4(
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent8() -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_dPropertyPair(
        this_ptr: *mut crate::q_qml_context::PropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_PropertyPair(
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_PropertyPair1(
        other: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QQmlContext_PropertyPair_operator_(
        this_ptr: *mut crate::q_qml_context::PropertyPair,
        other: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QQmlTypesExtensionInterface_operator_(
        this_ptr: *mut crate::QQmlTypesExtensionInterface,
        other: *const crate::QQmlTypesExtensionInterface,
    ) -> *mut crate::QQmlTypesExtensionInterface;

    pub fn ctr_qt_qml_ffi_QQmlExtensionInterface_operator_(
        this_ptr: *mut crate::QQmlExtensionInterface,
        other: *const crate::QQmlExtensionInterface,
    ) -> *mut crate::QQmlExtensionInterface;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionInterface_operator_(
        this_ptr: *mut crate::QQmlEngineExtensionInterface,
        other: *const crate::QQmlEngineExtensionInterface,
    ) -> *mut crate::QQmlEngineExtensionInterface;

    pub fn ctr_qt_qml_ffi_QQmlEngineExtensionPlugin_QQmlEngineExtensionPlugin1(
    ) -> *mut crate::QQmlEngineExtensionPlugin;

    pub fn ctr_qt_qml_ffi_QQmlIncubator_QQmlIncubator1() -> *mut crate::QQmlIncubator;

    pub fn ctr_qt_qml_ffi_QQmlInfo_operator_(
        this_ptr: *mut crate::QQmlInfo,
        other: *const crate::QQmlInfo,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_QQmlNetworkAccessManagerFactory_operator_(
        this_ptr: *mut crate::QQmlNetworkAccessManagerFactory,
        other: *const crate::QQmlNetworkAccessManagerFactory,
    ) -> *mut crate::QQmlNetworkAccessManagerFactory;

    pub fn ctr_qt_qml_ffi_QQmlPropertyMap_QQmlPropertyMap1() -> *mut crate::QQmlPropertyMap;

    pub fn ctr_qt_qml_ffi_qHash2(
        flags: ::std::os::raw::c_int,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_qHash3(
        flags: ::std::os::raw::c_int,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_iterator(
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_iterator(
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_iterator(
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_iterator(
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__1(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        o: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        o: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        o: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__2(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        o: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_1(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__4(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_2(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__5(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        o: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        o: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        o: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__6(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        o: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_3(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__8(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_4(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__9(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        p: *mut crate::QJSValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        p: *mut crate::QQmlError,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        p: *mut *mut crate::QQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__10(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        p: *mut crate::q_qml_context::PropertyPair,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        j: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        j: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        j: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_5(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        j: *const crate::q_list_of_property_pair::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_6(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_j_s_value::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_qml_error::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_7(
        this_ptr: *const crate::q_list_of_property_pair::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_const_iterator1(
        o: *const crate::q_list_of_property_pair::Iterator,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        o: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        o: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        o: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        o: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        o: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        o: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        o: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        o: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        p: *const crate::QJSValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        p: *const crate::QQmlError,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        p: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        p: *const crate::q_qml_context::PropertyPair,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        j: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        j: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        j: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        j: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_j_s_value::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_qml_error::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_property_pair::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_QList() -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_QList() -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_QList(
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_QList() -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const crate::QJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const crate::QQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_swap(
        this_ptr: *mut crate::QListOfQJSValue,
        other: *mut crate::QListOfQJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_swap(
        this_ptr: *mut crate::QListOfQQmlError,
        other: *mut crate::QListOfQQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_swap(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        other: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_swap(
        this_ptr: *mut crate::QListOfPropertyPair,
        other: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_maxSize(
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_size(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_size(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_size(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_size(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_count(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_count(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_count(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_count(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_length(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_length(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_length(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_length(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_isEmpty(this_ptr: *const crate::QListOfQJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_isEmpty(this_ptr: *const crate::QListOfQQmlError)
        -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_isEmpty(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_isEmpty(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_resize(
        this_ptr: *mut crate::QListOfQJSValue,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_resize(
        this_ptr: *mut crate::QListOfQQmlError,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_resize(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_resize(
        this_ptr: *mut crate::QListOfPropertyPair,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_resize1(
        this_ptr: *mut crate::QListOfQJSValue,
        size: ::std::os::raw::c_longlong,
        c: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_resize1(
        this_ptr: *mut crate::QListOfQQmlError,
        size: ::std::os::raw::c_longlong,
        c: *const crate::QQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_resize1(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        size: ::std::os::raw::c_longlong,
        c: *const *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_resize1(
        this_ptr: *mut crate::QListOfPropertyPair,
        size: ::std::os::raw::c_longlong,
        c: *const crate::q_qml_context::PropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQJSValue,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQQmlError,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_resizeForOverwrite(
        this_ptr: *mut crate::QListOfPropertyPair,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_capacity(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_capacity(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_capacity(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_capacity(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_reserve(
        this_ptr: *mut crate::QListOfQJSValue,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_reserve(
        this_ptr: *mut crate::QListOfQQmlError,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_reserve(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_reserve(
        this_ptr: *mut crate::QListOfPropertyPair,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_squeeze(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_squeeze(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_squeeze(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_squeeze(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_detach(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_detach(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_detach(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_detach(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_isDetached(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_isDetached(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_isDetached(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_isDetached(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_isSharedWith(
        this_ptr: *const crate::QListOfQJSValue,
        other: *const crate::QListOfQJSValue,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_isSharedWith(
        this_ptr: *const crate::QListOfQQmlError,
        other: *const crate::QListOfQQmlError,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_isSharedWith(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        other: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_isSharedWith(
        this_ptr: *const crate::QListOfPropertyPair,
        other: *const crate::QListOfPropertyPair,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_data(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_data(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_data(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_data(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_data1(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_data1(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_data1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_data1(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_constData(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_constData(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_constData(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_constData(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_clear(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_clear(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_clear(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_clear(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_at(
        this_ptr: *const crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_at(
        this_ptr: *const crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_at(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_at(
        this_ptr: *const crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator__(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator__(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator__(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator__(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator__1(
        this_ptr: *const crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator__1(
        this_ptr: *const crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator__1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator__1(
        this_ptr: *const crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_append(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_append(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_append(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_append(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_append1(
        this_ptr: *mut crate::QListOfQJSValue,
        i1: *const crate::q_list_of_q_j_s_value::ConstIterator,
        i2: *const crate::q_list_of_q_j_s_value::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_append1(
        this_ptr: *mut crate::QListOfQQmlError,
        i1: *const crate::q_list_of_q_qml_error::ConstIterator,
        i2: *const crate::q_list_of_q_qml_error::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_append1(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i1: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        i2: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_append1(
        this_ptr: *mut crate::QListOfPropertyPair,
        i1: *const crate::q_list_of_property_pair::ConstIterator,
        i2: *const crate::q_list_of_property_pair::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_append2(
        this_ptr: *mut crate::QListOfQJSValue,
        l: *const crate::QListOfQJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_append2(
        this_ptr: *mut crate::QListOfQQmlError,
        l: *const crate::QListOfQQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_append2(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        l: *const crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_append2(
        this_ptr: *mut crate::QListOfPropertyPair,
        l: *const crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_prepend(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_prepend(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_prepend(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_prepend(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_insert(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
        t: *const crate::QJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_insert(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
        t: *const crate::QQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_insert(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_insert(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_insert1(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_insert1(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_insert1(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_insert1(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_insert2(
        this_ptr: *mut crate::QListOfQJSValue,
        before: *const crate::q_list_of_q_j_s_value::ConstIterator,
        t: *const crate::QJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_insert2(
        this_ptr: *mut crate::QListOfQQmlError,
        before: *const crate::q_list_of_q_qml_error::ConstIterator,
        t: *const crate::QQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_insert2(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        before: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_insert2(
        this_ptr: *mut crate::QListOfPropertyPair,
        before: *const crate::q_list_of_property_pair::ConstIterator,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_insert3(
        this_ptr: *mut crate::QListOfQJSValue,
        before: *const crate::q_list_of_q_j_s_value::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_insert3(
        this_ptr: *mut crate::QListOfQQmlError,
        before: *const crate::q_list_of_q_qml_error::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_insert3(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        before: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_insert3(
        this_ptr: *mut crate::QListOfPropertyPair,
        before: *const crate::q_list_of_property_pair::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_assign(
        this_ptr: *mut crate::QListOfQJSValue,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_assign(
        this_ptr: *mut crate::QListOfQQmlError,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_assign(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_assign(
        this_ptr: *mut crate::QListOfPropertyPair,
        n: ::std::os::raw::c_longlong,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_replace(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
        t: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_replace(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
        t: *const crate::QQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_replace(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_replace(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
        t: *const crate::q_qml_context::PropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_remove(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_remove(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_remove(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_remove(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_removeFirst(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_removeFirst(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_removeFirst(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_removeFirst(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_removeLast(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_removeLast(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_removeLast(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_removeLast(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_takeFirst(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_takeFirst(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_takeFirst(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_takeFirst(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_takeLast(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_takeLast(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_takeLast(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_takeLast(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_fill(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_fill(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_fill(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_fill(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_removeAt(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_removeAt(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_removeAt(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_removeAt(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_takeAt(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_takeAt(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_takeAt(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_takeAt(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_move(
        this_ptr: *mut crate::QListOfQJSValue,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_move(
        this_ptr: *mut crate::QListOfQQmlError,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_move(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_move(
        this_ptr: *mut crate::QListOfPropertyPair,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_begin(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_begin(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_begin(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_begin(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_end(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_end(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_end(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_end(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_begin1(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_begin1(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_begin1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_begin1(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_end1(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_end1(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_end1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_end1(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_cbegin(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_cbegin(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_cbegin(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_cbegin(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_cend(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_cend(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_cend(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_cend(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_constBegin(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_constBegin(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_constBegin(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_constBegin(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_constEnd(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_constEnd(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_constEnd(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_constEnd(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_erase(
        this_ptr: *mut crate::QListOfQJSValue,
        begin: *const crate::q_list_of_q_j_s_value::ConstIterator,
        end: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_erase(
        this_ptr: *mut crate::QListOfQQmlError,
        begin: *const crate::q_list_of_q_qml_error::ConstIterator,
        end: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_erase(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        begin: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        end: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_erase(
        this_ptr: *mut crate::QListOfPropertyPair,
        begin: *const crate::q_list_of_property_pair::ConstIterator,
        end: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_erase1(
        this_ptr: *mut crate::QListOfQJSValue,
        pos: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_erase1(
        this_ptr: *mut crate::QListOfQQmlError,
        pos: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_erase1(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        pos: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_erase1(
        this_ptr: *mut crate::QListOfPropertyPair,
        pos: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_first(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_first(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_first(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_first(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_first1(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_first1(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_first1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_first1(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_constFirst(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_constFirst(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_constFirst(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_constFirst(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_last(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_last(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_last(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_last(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_last1(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_last1(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_last1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_last1(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_constLast(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_constLast(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_constLast(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_constLast(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_startsWith(
        this_ptr: *const crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_startsWith(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_endsWith(
        this_ptr: *const crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_endsWith(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_mid(
        this_ptr: *const crate::QListOfQJSValue,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_mid(
        this_ptr: *const crate::QListOfQQmlError,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_mid(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_mid(
        this_ptr: *const crate::QListOfPropertyPair,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_first2(
        this_ptr: *const crate::QListOfQJSValue,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_first2(
        this_ptr: *const crate::QListOfQQmlError,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_first2(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_first2(
        this_ptr: *const crate::QListOfPropertyPair,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_last2(
        this_ptr: *const crate::QListOfQJSValue,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_last2(
        this_ptr: *const crate::QListOfQQmlError,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_last2(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_last2(
        this_ptr: *const crate::QListOfPropertyPair,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_sliced(
        this_ptr: *const crate::QListOfQJSValue,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_sliced(
        this_ptr: *const crate::QListOfQQmlError,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_sliced(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_sliced(
        this_ptr: *const crate::QListOfPropertyPair,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_sliced1(
        this_ptr: *const crate::QListOfQJSValue,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_sliced1(
        this_ptr: *const crate::QListOfQQmlError,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_sliced1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_sliced1(
        this_ptr: *const crate::QListOfPropertyPair,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_value(
        this_ptr: *const crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_value(
        this_ptr: *const crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_value(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_value(
        this_ptr: *const crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_value1(
        this_ptr: *const crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const crate::QJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_value1(
        this_ptr: *const crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const crate::QQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_value1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_value1(
        this_ptr: *const crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_swapItemsAt(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_swapItemsAt(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_swapItemsAt(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_swapItemsAt(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_push_back(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_push_back(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_push_back(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_push_back(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_push_front(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_push_front(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_push_front(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_push_front(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_pop_back(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_pop_back(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_pop_back(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_pop_back(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_pop_front(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_pop_front(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_pop_front(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_pop_front(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_empty(this_ptr: *const crate::QListOfQJSValue) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_empty(this_ptr: *const crate::QListOfQQmlError) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_empty(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_empty(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_front(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_front(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_front(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_front(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_front1(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_front1(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_front1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_front1(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_back(
        this_ptr: *mut crate::QListOfQJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_back(
        this_ptr: *mut crate::QListOfQQmlError,
    ) -> *mut crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_back(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_back(
        this_ptr: *mut crate::QListOfPropertyPair,
    ) -> *mut crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_back1(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *const crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_back1(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *const crate::QQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_back1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *const *mut crate::QQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_back1(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *const crate::q_qml_context::PropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_shrink_to_fit(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_shrink_to_fit(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_shrink_to_fit(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_shrink_to_fit(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_max_size(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_max_size(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_max_size(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_max_size(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator__2(
        this_ptr: *mut crate::QListOfQJSValue,
        l: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator__2(
        this_ptr: *mut crate::QListOfQQmlError,
        l: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator__2(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        l: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator__2(
        this_ptr: *mut crate::QListOfPropertyPair,
        l: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator_(
        this_ptr: *const crate::QListOfQJSValue,
        l: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator_(
        this_ptr: *const crate::QListOfQQmlError,
        l: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator_(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        l: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator_(
        this_ptr: *const crate::QListOfPropertyPair,
        l: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator_1(
        this_ptr: *mut crate::QListOfQJSValue,
        l: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator_1(
        this_ptr: *mut crate::QListOfQQmlError,
        l: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator_1(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        l: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator_1(
        this_ptr: *mut crate::QListOfPropertyPair,
        l: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator__4(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator__4(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator__4(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator__4(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator__5(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator__5(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator__5(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator__5(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator__6(
        this_ptr: *mut crate::QListOfQJSValue,
        l: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator__6(
        this_ptr: *mut crate::QListOfQQmlError,
        l: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator__6(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        l: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator__6(
        this_ptr: *mut crate::QListOfPropertyPair,
        l: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_fromList(
        list: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_fromList(
        list: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_fromList(
        list: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_fromList(
        list: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_toList(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_toList(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_toList(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_toList(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_fromVector(
        vector: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_fromVector(
        vector: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_fromVector(
        vector: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_fromVector(
        vector: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_toVector(
        this_ptr: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_toVector(
        this_ptr: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_toVector(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_toVector(
        this_ptr: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_qHash6(
        key: *const crate::QListOfQQmlAbstractUrlInterceptor,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_operator__3(
        s: *mut ::qt_core::QDataStream,
        e: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QDataStream;

    pub fn ctr_qt_qml_ffi_operator__4(
        s: *mut ::qt_core::QDataStream,
        e: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QDataStream;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_dQList(this_ptr: *mut crate::QListOfQJSValue);

    pub fn ctr_qt_qml_ffi_QList_QQmlError_dQList(this_ptr: *mut crate::QListOfQQmlError);

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_dQList(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_dQList(
        this_ptr: *mut crate::QListOfPropertyPair,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_QList3(
        other: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_QList3(
        other: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_QList3(
        other: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_QList3(
        other: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_operator_4(
        this_ptr: *mut crate::QListOfQJSValue,
        other: *const crate::QListOfQJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_operator_4(
        this_ptr: *mut crate::QListOfQQmlError,
        other: *const crate::QListOfQQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_operator_4(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        other: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_operator_4(
        this_ptr: *mut crate::QListOfPropertyPair,
        other: *const crate::QListOfPropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_diterator(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_iterator1(
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_iterator1(
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_iterator1(
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_iterator1(
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_j_s_value::Iterator,
        other: *const crate::q_list_of_q_j_s_value::Iterator,
    ) -> *mut crate::q_list_of_q_j_s_value::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_qml_error::Iterator,
        other: *const crate::q_list_of_q_qml_error::Iterator,
    ) -> *mut crate::q_list_of_q_qml_error::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::Iterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_property_pair::Iterator,
        other: *const crate::q_list_of_property_pair::Iterator,
    ) -> *mut crate::q_list_of_property_pair::Iterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_const_iterator2(
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_j_s_value::ConstIterator,
        other: *const crate::q_list_of_q_j_s_value::ConstIterator,
    ) -> *mut crate::q_list_of_q_j_s_value::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_qml_error::ConstIterator,
        other: *const crate::q_list_of_q_qml_error::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_error::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
        other: *const crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator,
    ) -> *mut crate::q_list_of_q_qml_abstract_url_interceptor::ConstIterator;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_property_pair::ConstIterator,
        other: *const crate::q_list_of_property_pair::ConstIterator,
    ) -> *mut crate::q_list_of_property_pair::ConstIterator;

    pub fn ctr_qt_qml_ffi_qHash8(flags: ::std::os::raw::c_int) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_qHash9(flags: ::std::os::raw::c_int) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_remove1(
        this_ptr: *mut crate::QListOfQJSValue,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlError_remove1(
        this_ptr: *mut crate::QListOfQQmlError,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_remove1(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_remove1(
        this_ptr: *mut crate::QListOfPropertyPair,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_qml_ffi_QList_QJSValue_fill1(
        this_ptr: *mut crate::QListOfQJSValue,
        t: *const crate::QJSValue,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_fill1(
        this_ptr: *mut crate::QListOfQQmlError,
        t: *const crate::QQmlError,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_fill1(
        this_ptr: *mut crate::QListOfQQmlAbstractUrlInterceptor,
        t: *const *mut crate::QQmlAbstractUrlInterceptor,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_fill1(
        this_ptr: *mut crate::QListOfPropertyPair,
        t: *const crate::q_qml_context::PropertyPair,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_QList_QJSValue_mid1(
        this_ptr: *const crate::QListOfQJSValue,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJSValue;

    pub fn ctr_qt_qml_ffi_QList_QQmlError_mid1(
        this_ptr: *const crate::QListOfQQmlError,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlError;

    pub fn ctr_qt_qml_ffi_QList_QQmlAbstractUrlInterceptor_ptr_mid1(
        this_ptr: *const crate::QListOfQQmlAbstractUrlInterceptor,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQQmlAbstractUrlInterceptor;

    pub fn ctr_qt_qml_ffi_QList_QQmlContext_PropertyPair_mid1(
        this_ptr: *const crate::QListOfPropertyPair,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfPropertyPair;

    pub fn ctr_qt_qml_ffi_qHash12(
        key: *const crate::QListOfQQmlAbstractUrlInterceptor,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_QJSValue_call1(this_ptr: *const crate::QJSValue) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_callWithInstance1(
        this_ptr: *const crate::QJSValue,
        instance: *const crate::QJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSValue_callAsConstructor1(
        this_ptr: *const crate::QJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_call1(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_callWithInstance1(
        this_ptr: *const crate::QJSManagedValue,
        instance: *const crate::QJSValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_callAsConstructor1(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSManagedValue_jsMetaInstantiate1(
        this_ptr: *const crate::QJSManagedValue,
    ) -> *mut crate::QJSManagedValue;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_startTcpDebugServer1(
        port: ::std::os::raw::c_int,
        mode: crate::q_qml_debugging_enabler::StartMode,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_startTcpDebugServer2(
        port: ::std::os::raw::c_int,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_connectToLocalDebugger1(
        socketFileName: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QQmlDebuggingEnabler_startDebugConnector1(
        pluginName: *const ::qt_core::QString,
    ) -> bool;

    pub fn ctr_qt_qml_ffi_QJSEngine_evaluate1(
        this_ptr: *mut crate::QJSEngine,
        program: *const ::qt_core::QString,
        fileName: *const ::qt_core::QString,
        lineNumber: ::std::os::raw::c_int,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_evaluate2(
        this_ptr: *mut crate::QJSEngine,
        program: *const ::qt_core::QString,
        fileName: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_evaluate3(
        this_ptr: *mut crate::QJSEngine,
        program: *const ::qt_core::QString,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_newArray1(
        this_ptr: *mut crate::QJSEngine,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_newErrorObject1(
        this_ptr: *mut crate::QJSEngine,
        errorType: crate::q_j_s_value::ErrorType,
    ) -> *mut crate::QJSValue;

    pub fn ctr_qt_qml_ffi_QJSEngine_installExtensions1(
        this_ptr: *mut crate::QJSEngine,
        extensions: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_QJSEngine_throwError3(
        this_ptr: *mut crate::QJSEngine,
        errorType: crate::q_j_s_value::ErrorType,
    );

    pub fn ctr_qt_qml_ffi_QJSListIndexClamp_clamp1(
        start: ::std::os::raw::c_longlong,
        max: ::std::os::raw::c_longlong,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_qml_ffi_qHash14(
        func: ::std::option::Option<
            extern "C" fn(*mut ::qt_core::QObject) -> *mut ::qt_core::QObject,
        >,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_qmlAttachedPropertiesObject1(
        arg1: *mut ::qt_core::QObject,
        func: ::std::option::Option<
            extern "C" fn(*mut ::qt_core::QObject) -> *mut ::qt_core::QObject,
        >,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_qmlRegisterModuleImport1(
        uri: *const ::std::os::raw::c_char,
        moduleMajor: ::std::os::raw::c_int,
        import: *const ::std::os::raw::c_char,
        importMajor: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_qmlRegisterModuleImport2(
        uri: *const ::std::os::raw::c_char,
        moduleMajor: ::std::os::raw::c_int,
        import: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_qmlUnregisterModuleImport1(
        uri: *const ::std::os::raw::c_char,
        moduleMajor: ::std::os::raw::c_int,
        import: *const ::std::os::raw::c_char,
        importMajor: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_qmlUnregisterModuleImport2(
        uri: *const ::std::os::raw::c_char,
        moduleMajor: ::std::os::raw::c_int,
        import: *const ::std::os::raw::c_char,
    );

    pub fn ctr_qt_qml_ffi_qmlRegisterNamespaceAndRevisions2(
        metaObject: *const ::qt_core::QMetaObject,
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
        qmlTypeIds: *mut ::qt_core::QListOfInt,
    );

    pub fn ctr_qt_qml_ffi_qmlRegisterNamespaceAndRevisions3(
        metaObject: *const ::qt_core::QMetaObject,
        uri: *const ::std::os::raw::c_char,
        versionMajor: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine5(
        url: *const ::qt_core::QUrl,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine6(
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_QQmlApplicationEngine7(
        filePath: *const ::qt_core::QString,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_QQmlApplicationEngine_loadData1(
        this_ptr: *mut crate::QQmlApplicationEngine,
        data: *const ::qt_core::QByteArray,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent9(
        arg1: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent10(
        arg1: *mut crate::QQmlEngine,
        fileName: *const ::qt_core::QString,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent11(
        arg1: *mut crate::QQmlEngine,
        fileName: *const ::qt_core::QString,
        mode: crate::q_qml_component::CompilationMode,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent12(
        arg1: *mut crate::QQmlEngine,
        url: *const ::qt_core::QUrl,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent13(
        arg1: *mut crate::QQmlEngine,
        url: *const ::qt_core::QUrl,
        mode: crate::q_qml_component::CompilationMode,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent14(
        engine: *mut crate::QQmlEngine,
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_QQmlComponent15(
        engine: *mut crate::QQmlEngine,
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
        mode: crate::q_qml_component::CompilationMode,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_QQmlComponent_create2(
        this_ptr: *mut crate::QQmlComponent,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlComponent_createWithInitialProperties1(
        this_ptr: *mut crate::QQmlComponent,
        initialProperties: *const ::qt_core::QMapOfQStringQVariant,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_QQmlComponent_create3(
        this_ptr: *mut crate::QQmlComponent,
        arg1: *mut crate::QQmlIncubator,
        context: *mut crate::QQmlContext,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_create4(
        this_ptr: *mut crate::QQmlComponent,
        arg1: *mut crate::QQmlIncubator,
    );

    pub fn ctr_qt_qml_ffi_QQmlComponent_loadFromModule1(
        this_ptr: *mut crate::QQmlComponent,
        uri: *const ::qt_core::QAnyStringView,
        typeName: *const ::qt_core::QAnyStringView,
    );

    pub fn ctr_qt_qml_ffi_QQmlContext_QQmlContext3(
        parent: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlContext_QQmlContext4(
        parent: *mut crate::QQmlContext,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_QQmlExpression_QQmlExpression3(
        arg1: *mut crate::QQmlContext,
        arg2: *mut ::qt_core::QObject,
        arg3: *const ::qt_core::QString,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_QQmlExpression_QQmlExpression4(
        arg1: *const crate::QQmlScriptString,
        arg2: *mut crate::QQmlContext,
        arg3: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_QQmlExpression_QQmlExpression5(
        arg1: *const crate::QQmlScriptString,
        arg2: *mut crate::QQmlContext,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_QQmlExpression_QQmlExpression6(
        arg1: *const crate::QQmlScriptString,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_QQmlExpression_setSourceLocation1(
        this_ptr: *mut crate::QQmlExpression,
        fileName: *const ::qt_core::QString,
        line: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_qml_ffi_QQmlExpression_evaluate1(
        this_ptr: *mut crate::QQmlExpression,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_qml_ffi_QQmlFileSelector_QQmlFileSelector2(
        engine: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlFileSelector;

    pub fn ctr_qt_qml_ffi_qHash15(key: *const crate::QQmlProperty) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_qml_ffi_static_cast_QJSEngine_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr(
        ptr: *mut crate::QJSEngine,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QJSEngine_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlTypeNotAvailable_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlTypeNotAvailable;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr1(
        ptr: *mut crate::QQmlTypeNotAvailable,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlImageProviderBase_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlImageProviderBase;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr2(
        ptr: *mut crate::QQmlImageProviderBase,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlImageProviderBase_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlImageProviderBase;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlEngine_ptr(
        ptr: *mut crate::QJSEngine,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QJSEngine_ptr1(
        ptr: *mut crate::QQmlEngine,
    ) -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlEngine_ptr(
        ptr: *mut crate::QJSEngine,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlEngine_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr3(
        ptr: *mut crate::QQmlEngine,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlEngine_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlApplicationEngine_ptr(
        ptr: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlEngine_ptr2(
        ptr: *mut crate::QQmlApplicationEngine,
    ) -> *mut crate::QQmlEngine;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlApplicationEngine_ptr(
        ptr: *mut crate::QQmlEngine,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlApplicationEngine_ptr1(
        ptr: *mut crate::QJSEngine,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QJSEngine_ptr2(
        ptr: *mut crate::QQmlApplicationEngine,
    ) -> *mut crate::QJSEngine;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlApplicationEngine_ptr1(
        ptr: *mut crate::QJSEngine,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlApplicationEngine_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr4(
        ptr: *mut crate::QQmlApplicationEngine,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlApplicationEngine_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlApplicationEngine;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlComponent_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr5(
        ptr: *mut crate::QQmlComponent,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlComponent_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlComponent;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlContext_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr6(
        ptr: *mut crate::QQmlContext,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlContext_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlContext;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlExpression_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr7(
        ptr: *mut crate::QQmlExpression,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlExpression_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlExpression;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlExtensionInterface_ptr(
        ptr: *mut crate::QQmlTypesExtensionInterface,
    ) -> *mut crate::QQmlExtensionInterface;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlTypesExtensionInterface_ptr(
        ptr: *mut crate::QQmlExtensionInterface,
    ) -> *mut crate::QQmlTypesExtensionInterface;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlExtensionInterface_ptr(
        ptr: *mut crate::QQmlTypesExtensionInterface,
    ) -> *mut crate::QQmlExtensionInterface;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlExtensionPlugin_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr8(
        ptr: *mut crate::QQmlExtensionPlugin,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlExtensionPlugin_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlExtensionPlugin_ptr1(
        ptr: *mut crate::QQmlExtensionInterface,
    ) -> *mut crate::QQmlExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlExtensionInterface_ptr1(
        ptr: *mut crate::QQmlExtensionPlugin,
    ) -> *mut crate::QQmlExtensionInterface;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlExtensionPlugin_ptr1(
        ptr: *mut crate::QQmlExtensionInterface,
    ) -> *mut crate::QQmlExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlExtensionPlugin_ptr2(
        ptr: *mut crate::QQmlTypesExtensionInterface,
    ) -> *mut crate::QQmlExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlTypesExtensionInterface_ptr1(
        ptr: *mut crate::QQmlExtensionPlugin,
    ) -> *mut crate::QQmlTypesExtensionInterface;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlExtensionPlugin_ptr2(
        ptr: *mut crate::QQmlTypesExtensionInterface,
    ) -> *mut crate::QQmlExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlEngineExtensionPlugin_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlEngineExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr9(
        ptr: *mut crate::QQmlEngineExtensionPlugin,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlEngineExtensionPlugin_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlEngineExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlEngineExtensionPlugin_ptr1(
        ptr: *mut crate::QQmlEngineExtensionInterface,
    ) -> *mut crate::QQmlEngineExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlEngineExtensionInterface_ptr(
        ptr: *mut crate::QQmlEngineExtensionPlugin,
    ) -> *mut crate::QQmlEngineExtensionInterface;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlEngineExtensionPlugin_ptr1(
        ptr: *mut crate::QQmlEngineExtensionInterface,
    ) -> *mut crate::QQmlEngineExtensionPlugin;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlFileSelector_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlFileSelector;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr10(
        ptr: *mut crate::QQmlFileSelector,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlFileSelector_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlFileSelector;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlInfo_ptr(
        ptr: *mut ::qt_core::QDebug,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_static_cast_QDebug_ptr(
        ptr: *mut crate::QQmlInfo,
    ) -> *mut ::qt_core::QDebug;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlInfo_ptr1(
        ptr: *mut ::qt_core::QIODeviceBase,
    ) -> *mut crate::QQmlInfo;

    pub fn ctr_qt_qml_ffi_static_cast_QIODeviceBase_ptr(
        ptr: *mut crate::QQmlInfo,
    ) -> *mut ::qt_core::QIODeviceBase;

    pub fn ctr_qt_qml_ffi_static_cast_QQmlPropertyMap_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlPropertyMap;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr11(
        ptr: *mut crate::QQmlPropertyMap,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_QQmlPropertyMap_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QQmlPropertyMap;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_metaObject(
        this_ptr: *const crate::SlotOfQListOfQQmlError,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_qt_metacast(
        this_ptr: *mut crate::SlotOfQListOfQQmlError,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_qt_metacall(
        this_ptr: *mut crate::SlotOfQListOfQQmlError,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const crate::QListOfQQmlError),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQListOfQQmlError;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_set(
        this_ptr: *mut crate::SlotOfQListOfQQmlError,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const crate::QListOfQQmlError),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_slot_(
        this_ptr: *mut crate::SlotOfQListOfQQmlError,
        arg0: *const crate::QListOfQQmlError,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_metaObject(
        this_ptr: *const crate::SignalOfQListOfQQmlError,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_qt_metacast(
        this_ptr: *mut crate::SignalOfQListOfQQmlError,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_qt_metacall(
        this_ptr: *mut crate::SignalOfQListOfQQmlError,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref(
    ) -> *mut crate::SignalOfQListOfQQmlError;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_emit_(
        this_ptr: *mut crate::SignalOfQListOfQQmlError,
        arg0: *const crate::QListOfQQmlError,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_metaObject(
        this_ptr: *const crate::SlotOfQObjectQUrl,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_qt_metacast(
        this_ptr: *mut crate::SlotOfQObjectQUrl,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_qt_metacall(
        this_ptr: *mut crate::SlotOfQObjectQUrl,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut ::qt_core::QObject, *const ::qt_core::QUrl),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQObjectQUrl;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_set(
        this_ptr: *mut crate::SlotOfQObjectQUrl,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut ::qt_core::QObject, *const ::qt_core::QUrl),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_slot_(
        this_ptr: *mut crate::SlotOfQObjectQUrl,
        arg0: *mut ::qt_core::QObject,
        arg1: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_metaObject(
        this_ptr: *const crate::SignalOfQObjectQUrl,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_qt_metacast(
        this_ptr: *mut crate::SignalOfQObjectQUrl,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_qt_metacall(
        this_ptr: *mut crate::SignalOfQObjectQUrl,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref(
    ) -> *mut crate::SignalOfQObjectQUrl;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_emit_(
        this_ptr: *mut crate::SignalOfQObjectQUrl,
        arg0: *mut ::qt_core::QObject,
        arg1: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_metaObject(
        this_ptr: *const crate::SlotOfQStringQVariant,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_qt_metacast(
        this_ptr: *mut crate::SlotOfQStringQVariant,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_qt_metacall(
        this_ptr: *mut crate::SlotOfQStringQVariant,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                *const ::qt_core::QString,
                *const ::qt_core::QVariant,
            ),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQStringQVariant;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_set(
        this_ptr: *mut crate::SlotOfQStringQVariant,
        callback: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                *const ::qt_core::QString,
                *const ::qt_core::QVariant,
            ),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_slot_(
        this_ptr: *mut crate::SlotOfQStringQVariant,
        arg0: *const ::qt_core::QString,
        arg1: *const ::qt_core::QVariant,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_metaObject(
        this_ptr: *const crate::SignalOfQStringQVariant,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_qt_metacast(
        this_ptr: *mut crate::SignalOfQStringQVariant,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_qt_metacall(
        this_ptr: *mut crate::SignalOfQStringQVariant,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref(
    ) -> *mut crate::SignalOfQStringQVariant;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_emit_(
        this_ptr: *mut crate::SignalOfQStringQVariant,
        arg0: *const ::qt_core::QString,
        arg1: *const ::qt_core::QVariant,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_metaObject(
        this_ptr: *const crate::SlotOfStatus,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_qt_metacast(
        this_ptr: *mut crate::SlotOfStatus,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_qt_metacall(
        this_ptr: *mut crate::SlotOfStatus,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_qml_component::Status),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfStatus;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_set(
        this_ptr: *mut crate::SlotOfStatus,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_qml_component::Status),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_slot_(
        this_ptr: *mut crate::SlotOfStatus,
        arg0: crate::q_qml_component::Status,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_metaObject(
        this_ptr: *const crate::SignalOfStatus,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_qt_metacast(
        this_ptr: *mut crate::SignalOfStatus,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_qt_metacall(
        this_ptr: *mut crate::SignalOfStatus,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status(
    ) -> *mut crate::SignalOfStatus;

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_emit_(
        this_ptr: *mut crate::SignalOfStatus,
        arg0: crate::q_qml_component::Status,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_dctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref(
        this_ptr: *mut crate::SlotOfQListOfQQmlError,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_dctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref(
        this_ptr: *mut crate::SignalOfQListOfQQmlError,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_dctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref(
        this_ptr: *mut crate::SlotOfQObjectQUrl,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_dctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref(
        this_ptr: *mut crate::SignalOfQObjectQUrl,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_dctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref(
        this_ptr: *mut crate::SlotOfQStringQVariant,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_dctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref(
        this_ptr: *mut crate::SignalOfQStringQVariant,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_dctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status(
        this_ptr: *mut crate::SlotOfStatus,
    );

    pub fn ctr_qt_qml_ffi_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_dctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status(
        this_ptr: *mut crate::SignalOfStatus,
    );

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQListOfQQmlError;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr24(
        ptr: *mut crate::SlotOfQListOfQQmlError,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_slot_wrapper_QList_QQmlError_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQListOfQQmlError;

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQListOfQQmlError;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr25(
        ptr: *mut crate::SignalOfQListOfQQmlError,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_signal_wrapper_QList_QQmlError_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQListOfQQmlError;

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQObjectQUrl;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr26(
        ptr: *mut crate::SlotOfQObjectQUrl,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_slot_wrapper_QObject_ptr_QUrl_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQObjectQUrl;

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQObjectQUrl;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr27(
        ptr: *mut crate::SignalOfQObjectQUrl,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_signal_wrapper_QObject_ptr_QUrl_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQObjectQUrl;

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQStringQVariant;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr28(
        ptr: *mut crate::SlotOfQStringQVariant,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_slot_wrapper_QString_const_ref_QVariant_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQStringQVariant;

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQStringQVariant;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr29(
        ptr: *mut crate::SignalOfQStringQVariant,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_signal_wrapper_QString_const_ref_QVariant_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQStringQVariant;

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfStatus;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr30(
        ptr: *mut crate::SlotOfStatus,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_slot_wrapper_QQmlComponent_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfStatus;

    pub fn ctr_qt_qml_ffi_static_cast_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfStatus;

    pub fn ctr_qt_qml_ffi_static_cast_QObject_ptr31(
        ptr: *mut crate::SignalOfStatus,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_qml_ffi_dynamic_cast_ctr_qt_qml_ffi_signal_wrapper_QQmlComponent_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfStatus;

}
