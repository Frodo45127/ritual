extern "C" {

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_id(
        this_ptr: *const crate::QNodeIdTypePair,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_id_mut(
        this_ptr: *mut crate::QNodeIdTypePair,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_set_Qt3DCore_QNodeIdTypePair_id(
        this_ptr: *mut crate::QNodeIdTypePair,
        value: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_type(
        this_ptr: *const crate::QNodeIdTypePair,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_set_Qt3DCore_QNodeIdTypePair_type(
        this_ptr: *mut crate::QNodeIdTypePair,
        value: *const ::qt_core::QMetaObject,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractSkeleton_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_staticMetaObject() -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_QNodeId() -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_createId() -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_isNull(this_ptr: *const crate::QNodeId) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_operator__(
        this_ptr: *const crate::QNodeId,
        other: *const crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_operator_(
        this_ptr: *const crate::QNodeId,
        other: *const crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_operator_1(
        this_ptr: *const crate::QNodeId,
        other: *const crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_id(
        this_ptr: *const crate::QNodeId,
    ) -> ::std::os::raw::c_ulonglong;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_operator_bool(
        this_ptr: *const crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_operator__(
        d: *const ::qt_core::QDebug,
        id: *const crate::QNodeId,
    ) -> *mut ::qt_core::QDebug;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_qHash(
        id: *const crate::QNodeId,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_metaObject(
        this_ptr: *const crate::QAbstractAspect,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_qt_metacast(
        this_ptr: *mut crate::QAbstractAspect,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_qt_metacall(
        this_ptr: *mut crate::QAbstractAspect,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_QAbstractAspect(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_dQAbstractAspect(
        this_ptr: *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_dependencies(
        this_ptr: *const crate::QAbstractAspect,
    ) -> *mut ::qt_core::QListOfQString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractFunctor_dQAbstractFunctor(
        this_ptr: *mut crate::QAbstractFunctor,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractFunctor_id(
        this_ptr: *const crate::QAbstractFunctor,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_metaObject(
        this_ptr: *const crate::QNode,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_qt_metacast(
        this_ptr: *mut crate::QNode,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_qt_metacall(
        this_ptr: *mut crate::QNode,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_QNode(parent: *mut crate::QNode) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_dQNode(this_ptr: *mut crate::QNode);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_id(
        this_ptr: *const crate::QNode,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_parentNode(
        this_ptr: *const crate::QNode,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_notificationsBlocked(
        this_ptr: *const crate::QNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_blockNotifications(
        this_ptr: *mut crate::QNode,
        block: bool,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_childNodes(
        this_ptr: *const crate::QNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_isEnabled(this_ptr: *const crate::QNode) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_setParent(
        this_ptr: *mut crate::QNode,
        parent: *mut crate::QNode,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_setEnabled(
        this_ptr: *mut crate::QNode,
        isEnabled: bool,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_qIdForNode(node: *mut crate::QNode) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_QNodeIdTypePair(
    ) -> *mut crate::QNodeIdTypePair;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_QNodeIdTypePair1(
        _id: *const crate::QNodeId,
        _type: *const ::qt_core::QMetaObject,
    ) -> *mut crate::QNodeIdTypePair;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractSkeleton_metaObject(
        this_ptr: *const crate::QAbstractSkeleton,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractSkeleton_qt_metacast(
        this_ptr: *mut crate::QAbstractSkeleton,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractSkeleton_qt_metacall(
        this_ptr: *mut crate::QAbstractSkeleton,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractSkeleton_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractSkeleton_dQAbstractSkeleton(
        this_ptr: *mut crate::QAbstractSkeleton,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractSkeleton_jointCount(
        this_ptr: *const crate::QAbstractSkeleton,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_metaObject(
        this_ptr: *const crate::QComponent,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_qt_metacast(
        this_ptr: *mut crate::QComponent,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_qt_metacall(
        this_ptr: *mut crate::QComponent,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_QComponent(
        parent: *mut crate::QNode,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_dQComponent(this_ptr: *mut crate::QComponent);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_isShareable(
        this_ptr: *const crate::QComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_entities(
        this_ptr: *const crate::QComponent,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_setShareable(
        this_ptr: *mut crate::QComponent,
        isShareable: bool,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_metaObject(
        this_ptr: *const crate::QArmature,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_qt_metacast(
        this_ptr: *mut crate::QArmature,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_qt_metacall(
        this_ptr: *mut crate::QArmature,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_QArmature(
        parent: *mut crate::QNode,
    ) -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_dQArmature(this_ptr: *mut crate::QArmature);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_skeleton(
        this_ptr: *const crate::QArmature,
    ) -> *mut crate::QAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_setSkeleton(
        this_ptr: *mut crate::QArmature,
        skeleton: *mut crate::QAbstractSkeleton,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_metaObject(
        this_ptr: *const crate::QAspectEngine,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_qt_metacast(
        this_ptr: *mut crate::QAspectEngine,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_qt_metacall(
        this_ptr: *mut crate::QAspectEngine,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_QAspectEngine(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QAspectEngine;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_dQAspectEngine(
        this_ptr: *mut crate::QAspectEngine,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_setRunMode(
        this_ptr: *mut crate::QAspectEngine,
        mode: crate::q_aspect_engine::RunMode,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_runMode(
        this_ptr: *const crate::QAspectEngine,
    ) -> crate::q_aspect_engine::RunMode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_registerAspect(
        this_ptr: *mut crate::QAspectEngine,
        aspect: *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_registerAspect1(
        this_ptr: *mut crate::QAspectEngine,
        name: *const ::qt_core::QString,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_unregisterAspect(
        this_ptr: *mut crate::QAspectEngine,
        aspect: *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_unregisterAspect1(
        this_ptr: *mut crate::QAspectEngine,
        name: *const ::qt_core::QString,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_aspects(
        this_ptr: *const crate::QAspectEngine,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_aspect(
        this_ptr: *const crate::QAspectEngine,
        name: *const ::qt_core::QString,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_executeCommand(
        this_ptr: *mut crate::QAspectEngine,
        command: *const ::qt_core::QString,
    ) -> *mut ::qt_core::QVariant;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_processFrame(
        this_ptr: *mut crate::QAspectEngine,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_lookupNode(
        this_ptr: *const crate::QAspectEngine,
        id: *const crate::QNodeId,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_lookupNodes(
        this_ptr: *const crate::QAspectEngine,
        ids: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectJob_dQAspectJob(this_ptr: *mut crate::QAspectJob);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectJob_run(this_ptr: *mut crate::QAspectJob);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectJob_postFrame(
        this_ptr: *mut crate::QAspectJob,
        aspectEngine: *mut crate::QAspectEngine,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectJob_isRequired(
        this_ptr: *mut crate::QAspectJob,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_metaObject(
        this_ptr: *const crate::QBuffer,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_qt_metacast(
        this_ptr: *mut crate::QBuffer,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_qt_metacall(
        this_ptr: *mut crate::QBuffer,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_QBuffer(
        parent: *mut crate::QNode,
    ) -> *mut crate::QBuffer;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_dQBuffer(this_ptr: *mut crate::QBuffer);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_usage(
        this_ptr: *const crate::QBuffer,
    ) -> crate::q_buffer::UsageType;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_accessType(
        this_ptr: *const crate::QBuffer,
    ) -> crate::q_buffer::AccessType;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_setData(
        this_ptr: *mut crate::QBuffer,
        bytes: *const ::qt_core::QByteArray,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_data(
        this_ptr: *const crate::QBuffer,
    ) -> *mut ::qt_core::QByteArray;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_updateData(
        this_ptr: *mut crate::QBuffer,
        offset: ::std::os::raw::c_int,
        bytes: *const ::qt_core::QByteArray,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_setUsage(
        this_ptr: *mut crate::QBuffer,
        usage: crate::q_buffer::UsageType,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_setAccessType(
        this_ptr: *mut crate::QBuffer,
        access: crate::q_buffer::AccessType,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_metaObject(
        this_ptr: *const crate::QAttribute,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_qt_metacast(
        this_ptr: *mut crate::QAttribute,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_qt_metacall(
        this_ptr: *mut crate::QAttribute,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute(
        parent: *mut crate::QNode,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute1(
        buf: *mut crate::QBuffer,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
        offset: ::std::os::raw::c_uint,
        stride: ::std::os::raw::c_uint,
        parent: *mut crate::QNode,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute2(
        buf: *mut crate::QBuffer,
        name: *const ::qt_core::QString,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
        offset: ::std::os::raw::c_uint,
        stride: ::std::os::raw::c_uint,
        parent: *mut crate::QNode,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_dQAttribute(this_ptr: *mut crate::QAttribute);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_buffer(
        this_ptr: *const crate::QAttribute,
    ) -> *mut crate::QBuffer;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_name(
        this_ptr: *const crate::QAttribute,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_vertexBaseType(
        this_ptr: *const crate::QAttribute,
    ) -> crate::q_attribute::VertexBaseType;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_vertexSize(
        this_ptr: *const crate::QAttribute,
    ) -> ::std::os::raw::c_uint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_count(
        this_ptr: *const crate::QAttribute,
    ) -> ::std::os::raw::c_uint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_byteStride(
        this_ptr: *const crate::QAttribute,
    ) -> ::std::os::raw::c_uint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_byteOffset(
        this_ptr: *const crate::QAttribute,
    ) -> ::std::os::raw::c_uint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_divisor(
        this_ptr: *const crate::QAttribute,
    ) -> ::std::os::raw::c_uint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_attributeType(
        this_ptr: *const crate::QAttribute,
    ) -> crate::q_attribute::AttributeType;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultPositionAttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultNormalAttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultColorAttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultTextureCoordinateAttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultTangentAttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultJointIndicesAttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultJointWeightsAttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultTextureCoordinate1AttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_defaultTextureCoordinate2AttributeName(
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setBuffer(
        this_ptr: *mut crate::QAttribute,
        buffer: *mut crate::QBuffer,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setName(
        this_ptr: *mut crate::QAttribute,
        name: *const ::qt_core::QString,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setVertexBaseType(
        this_ptr: *mut crate::QAttribute,
        type_: crate::q_attribute::VertexBaseType,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setVertexSize(
        this_ptr: *mut crate::QAttribute,
        size: ::std::os::raw::c_uint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setCount(
        this_ptr: *mut crate::QAttribute,
        count: ::std::os::raw::c_uint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setByteStride(
        this_ptr: *mut crate::QAttribute,
        byteStride: ::std::os::raw::c_uint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setByteOffset(
        this_ptr: *mut crate::QAttribute,
        byteOffset: ::std::os::raw::c_uint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setDivisor(
        this_ptr: *mut crate::QAttribute,
        divisor: ::std::os::raw::c_uint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_setAttributeType(
        this_ptr: *mut crate::QAttribute,
        attributeType: crate::q_attribute::AttributeType,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNodeMapper_dQBackendNodeMapper(
        this_ptr: *mut crate::QBackendNodeMapper,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNodeMapper_create(
        this_ptr: *const crate::QBackendNodeMapper,
        id: *const crate::QNodeId,
    ) -> *mut crate::QBackendNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNodeMapper_get(
        this_ptr: *const crate::QBackendNodeMapper,
        id: *const crate::QNodeId,
    ) -> *mut crate::QBackendNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNodeMapper_destroy(
        this_ptr: *const crate::QBackendNodeMapper,
        id: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_QBackendNode(
        mode: crate::q_backend_node::Mode,
    ) -> *mut crate::QBackendNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_dQBackendNode(
        this_ptr: *mut crate::QBackendNode,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_peerId(
        this_ptr: *const crate::QBackendNode,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_setEnabled(
        this_ptr: *mut crate::QBackendNode,
        enabled: bool,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_isEnabled(
        this_ptr: *const crate::QBackendNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_mode(
        this_ptr: *const crate::QBackendNode,
    ) -> crate::q_backend_node::Mode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_syncFromFrontEnd(
        this_ptr: *mut crate::QBackendNode,
        frontEnd: *const crate::QNode,
        firstTime: bool,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_metaObject(
        this_ptr: *const crate::QGeometry,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_qt_metacast(
        this_ptr: *mut crate::QGeometry,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_qt_metacall(
        this_ptr: *mut crate::QGeometry,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_QGeometry(
        parent: *mut crate::QNode,
    ) -> *mut crate::QGeometry;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_dQGeometry(this_ptr: *mut crate::QGeometry);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_attributes(
        this_ptr: *const crate::QGeometry,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_addAttribute(
        this_ptr: *mut crate::QGeometry,
        attribute: *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_removeAttribute(
        this_ptr: *mut crate::QGeometry,
        attribute: *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_boundingVolumePositionAttribute(
        this_ptr: *const crate::QGeometry,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_minExtent(
        this_ptr: *const crate::QGeometry,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_maxExtent(
        this_ptr: *const crate::QGeometry,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_setBoundingVolumePositionAttribute(
        this_ptr: *mut crate::QGeometry,
        boundingVolumePositionAttribute: *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_metaObject(
        this_ptr: *const crate::QGeometryView,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_qt_metacast(
        this_ptr: *mut crate::QGeometryView,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_qt_metacall(
        this_ptr: *mut crate::QGeometryView,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_QGeometryView(
        parent: *mut crate::QNode,
    ) -> *mut crate::QGeometryView;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_dQGeometryView(
        this_ptr: *mut crate::QGeometryView,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_instanceCount(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_vertexCount(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_indexOffset(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_firstInstance(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_firstVertex(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_indexBufferByteOffset(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_restartIndexValue(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_verticesPerPatch(
        this_ptr: *const crate::QGeometryView,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_primitiveRestartEnabled(
        this_ptr: *const crate::QGeometryView,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_geometry(
        this_ptr: *const crate::QGeometryView,
    ) -> *mut crate::QGeometry;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_primitiveType(
        this_ptr: *const crate::QGeometryView,
    ) -> crate::q_geometry_view::PrimitiveType;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setInstanceCount(
        this_ptr: *mut crate::QGeometryView,
        instanceCount: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setVertexCount(
        this_ptr: *mut crate::QGeometryView,
        vertexCount: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setIndexOffset(
        this_ptr: *mut crate::QGeometryView,
        indexOffset: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setFirstInstance(
        this_ptr: *mut crate::QGeometryView,
        firstInstance: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setFirstVertex(
        this_ptr: *mut crate::QGeometryView,
        firstVertex: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setIndexBufferByteOffset(
        this_ptr: *mut crate::QGeometryView,
        offset: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setRestartIndexValue(
        this_ptr: *mut crate::QGeometryView,
        index: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setVerticesPerPatch(
        this_ptr: *mut crate::QGeometryView,
        verticesPerPatch: ::std::os::raw::c_int,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setPrimitiveRestartEnabled(
        this_ptr: *mut crate::QGeometryView,
        enabled: bool,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setGeometry(
        this_ptr: *mut crate::QGeometryView,
        geometry: *mut crate::QGeometry,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_setPrimitiveType(
        this_ptr: *mut crate::QGeometryView,
        primitiveType: crate::q_geometry_view::PrimitiveType,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_metaObject(
        this_ptr: *const crate::QBoundingVolume,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_qt_metacast(
        this_ptr: *mut crate::QBoundingVolume,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_qt_metacall(
        this_ptr: *mut crate::QBoundingVolume,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_QBoundingVolume(
        parent: *mut crate::QNode,
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_dQBoundingVolume(
        this_ptr: *mut crate::QBoundingVolume,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_view(
        this_ptr: *const crate::QBoundingVolume,
    ) -> *mut crate::QGeometryView;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_implicitMinPoint(
        this_ptr: *const crate::QBoundingVolume,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_implicitMaxPoint(
        this_ptr: *const crate::QBoundingVolume,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_areImplicitPointsValid(
        this_ptr: *const crate::QBoundingVolume,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_minPoint(
        this_ptr: *const crate::QBoundingVolume,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_maxPoint(
        this_ptr: *const crate::QBoundingVolume,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_setView(
        this_ptr: *mut crate::QBoundingVolume,
        view: *mut crate::QGeometryView,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_setMinPoint(
        this_ptr: *mut crate::QBoundingVolume,
        minPoint: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_setMaxPoint(
        this_ptr: *mut crate::QBoundingVolume,
        maxPoint: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_updateImplicitBounds(
        this_ptr: *mut crate::QBoundingVolume,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_metaObject(
        this_ptr: *const crate::QCoreAspect,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_qt_metacast(
        this_ptr: *mut crate::QCoreAspect,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_qt_metacall(
        this_ptr: *mut crate::QCoreAspect,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_QCoreAspect(
        parent: *mut ::qt_core::QObject,
    ) -> *mut crate::QCoreAspect;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_dQCoreAspect(this_ptr: *mut crate::QCoreAspect);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_metaObject(
        this_ptr: *const crate::QCoreSettings,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_qt_metacast(
        this_ptr: *mut crate::QCoreSettings,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_qt_metacall(
        this_ptr: *mut crate::QCoreSettings,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_QCoreSettings(
        parent: *mut crate::QNode,
    ) -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_dQCoreSettings(
        this_ptr: *mut crate::QCoreSettings,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_boundingVolumesEnabled(
        this_ptr: *const crate::QCoreSettings,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_setBoundingVolumesEnabled(
        this_ptr: *mut crate::QCoreSettings,
        boundingVolumesEnabled: bool,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_metaObject(
        this_ptr: *const crate::QEntity,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_qt_metacast(
        this_ptr: *mut crate::QEntity,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_qt_metacall(
        this_ptr: *mut crate::QEntity,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_QEntity(
        parent: *mut crate::QNode,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_dQEntity(this_ptr: *mut crate::QEntity);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_components(
        this_ptr: *const crate::QEntity,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_addComponent(
        this_ptr: *mut crate::QEntity,
        comp: *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_removeComponent(
        this_ptr: *mut crate::QEntity,
        comp: *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_parentEntity(
        this_ptr: *const crate::QEntity,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_metaObject(
        this_ptr: *const crate::QJoint,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_qt_metacast(
        this_ptr: *mut crate::QJoint,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_qt_metacall(
        this_ptr: *mut crate::QJoint,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_QJoint(
        parent: *mut crate::QNode,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_dQJoint(this_ptr: *mut crate::QJoint);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_scale(
        this_ptr: *const crate::QJoint,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_rotation(
        this_ptr: *const crate::QJoint,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_translation(
        this_ptr: *const crate::QJoint,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_inverseBindMatrix(
        this_ptr: *const crate::QJoint,
    ) -> *mut ::qt_gui::QMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_rotationX(
        this_ptr: *const crate::QJoint,
    ) -> ::std::os::raw::c_float;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_rotationY(
        this_ptr: *const crate::QJoint,
    ) -> ::std::os::raw::c_float;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_rotationZ(
        this_ptr: *const crate::QJoint,
    ) -> ::std::os::raw::c_float;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_name(
        this_ptr: *const crate::QJoint,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_addChildJoint(
        this_ptr: *mut crate::QJoint,
        joint: *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_removeChildJoint(
        this_ptr: *mut crate::QJoint,
        joint: *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_childJoints(
        this_ptr: *const crate::QJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setScale(
        this_ptr: *mut crate::QJoint,
        scale: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setRotation(
        this_ptr: *mut crate::QJoint,
        rotation: *const ::qt_gui::QQuaternion,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setTranslation(
        this_ptr: *mut crate::QJoint,
        translation: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setInverseBindMatrix(
        this_ptr: *mut crate::QJoint,
        inverseBindMatrix: *const ::qt_gui::QMatrix4X4,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setRotationX(
        this_ptr: *mut crate::QJoint,
        rotationX: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setRotationY(
        this_ptr: *mut crate::QJoint,
        rotationY: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setRotationZ(
        this_ptr: *mut crate::QJoint,
        rotationZ: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setName(
        this_ptr: *mut crate::QJoint,
        name: *const ::qt_core::QString,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_setToIdentity(this_ptr: *mut crate::QJoint);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_metaObject(
        this_ptr: *const crate::QSkeleton,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_qt_metacast(
        this_ptr: *mut crate::QSkeleton,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_qt_metacall(
        this_ptr: *mut crate::QSkeleton,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_QSkeleton(
        parent: *mut crate::QNode,
    ) -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_dQSkeleton(this_ptr: *mut crate::QSkeleton);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_rootJoint(
        this_ptr: *const crate::QSkeleton,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_setRootJoint(
        this_ptr: *mut crate::QSkeleton,
        rootJoint: *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_metaObject(
        this_ptr: *const crate::QSkeletonLoader,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_qt_metacast(
        this_ptr: *mut crate::QSkeletonLoader,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_qt_metacall(
        this_ptr: *mut crate::QSkeletonLoader,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_QSkeletonLoader(
        parent: *mut crate::QNode,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_QSkeletonLoader1(
        source: *const ::qt_core::QUrl,
        parent: *mut crate::QNode,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_dQSkeletonLoader(
        this_ptr: *mut crate::QSkeletonLoader,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_source(
        this_ptr: *const crate::QSkeletonLoader,
    ) -> *mut ::qt_core::QUrl;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_status(
        this_ptr: *const crate::QSkeletonLoader,
    ) -> crate::q_skeleton_loader::Status;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_isCreateJointsEnabled(
        this_ptr: *const crate::QSkeletonLoader,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_rootJoint(
        this_ptr: *const crate::QSkeletonLoader,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_setSource(
        this_ptr: *mut crate::QSkeletonLoader,
        source: *const ::qt_core::QUrl,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_setCreateJointsEnabled(
        this_ptr: *mut crate::QSkeletonLoader,
        enabled: bool,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_metaObject(
        this_ptr: *const crate::QTransform,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_qt_metacast(
        this_ptr: *mut crate::QTransform,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_qt_metacall(
        this_ptr: *mut crate::QTransform,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_QTransform(
        parent: *mut crate::QNode,
    ) -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_dQTransform(this_ptr: *mut crate::QTransform);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_scale(
        this_ptr: *const crate::QTransform,
    ) -> ::std::os::raw::c_float;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_scale3D(
        this_ptr: *const crate::QTransform,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_rotation(
        this_ptr: *const crate::QTransform,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_translation(
        this_ptr: *const crate::QTransform,
    ) -> *mut ::qt_gui::QVector3D;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_fromAxisAndAngle(
        axis: *const ::qt_gui::QVector3D,
        angle: ::std::os::raw::c_float,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_fromAxisAndAngle1(
        x: ::std::os::raw::c_float,
        y: ::std::os::raw::c_float,
        z: ::std::os::raw::c_float,
        angle: ::std::os::raw::c_float,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_fromAxesAndAngles(
        axis1: *const ::qt_gui::QVector3D,
        angle1: ::std::os::raw::c_float,
        axis2: *const ::qt_gui::QVector3D,
        angle2: ::std::os::raw::c_float,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_fromAxesAndAngles1(
        axis1: *const ::qt_gui::QVector3D,
        angle1: ::std::os::raw::c_float,
        axis2: *const ::qt_gui::QVector3D,
        angle2: ::std::os::raw::c_float,
        axis3: *const ::qt_gui::QVector3D,
        angle3: ::std::os::raw::c_float,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_fromAxes(
        xAxis: *const ::qt_gui::QVector3D,
        yAxis: *const ::qt_gui::QVector3D,
        zAxis: *const ::qt_gui::QVector3D,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_fromEulerAngles(
        eulerAngles: *const ::qt_gui::QVector3D,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_fromEulerAngles1(
        pitch: ::std::os::raw::c_float,
        yaw: ::std::os::raw::c_float,
        roll: ::std::os::raw::c_float,
    ) -> *mut ::qt_gui::QQuaternion;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_rotateAround(
        point: *const ::qt_gui::QVector3D,
        angle: ::std::os::raw::c_float,
        axis: *const ::qt_gui::QVector3D,
    ) -> *mut ::qt_gui::QMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_rotateFromAxes(
        xAxis: *const ::qt_gui::QVector3D,
        yAxis: *const ::qt_gui::QVector3D,
        zAxis: *const ::qt_gui::QVector3D,
    ) -> *mut ::qt_gui::QMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_matrix(
        this_ptr: *const crate::QTransform,
    ) -> *mut ::qt_gui::QMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_worldMatrix(
        this_ptr: *const crate::QTransform,
    ) -> *mut ::qt_gui::QMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_rotationX(
        this_ptr: *const crate::QTransform,
    ) -> ::std::os::raw::c_float;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_rotationY(
        this_ptr: *const crate::QTransform,
    ) -> ::std::os::raw::c_float;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_rotationZ(
        this_ptr: *const crate::QTransform,
    ) -> ::std::os::raw::c_float;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setScale(
        this_ptr: *mut crate::QTransform,
        scale: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setScale3D(
        this_ptr: *mut crate::QTransform,
        scale: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setRotation(
        this_ptr: *mut crate::QTransform,
        rotation: *const ::qt_gui::QQuaternion,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setTranslation(
        this_ptr: *mut crate::QTransform,
        translation: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setMatrix(
        this_ptr: *mut crate::QTransform,
        matrix: *const ::qt_gui::QMatrix4X4,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setRotationX(
        this_ptr: *mut crate::QTransform,
        rotationX: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setRotationY(
        this_ptr: *mut crate::QTransform,
        rotationY: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_setRotationZ(
        this_ptr: *mut crate::QTransform,
        rotationZ: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_dQNodeId(this_ptr: *mut crate::QNodeId);

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_QNodeId1(
        other: *const crate::QNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeId_operator_2(
        this_ptr: *mut crate::QNodeId,
        other: *const crate::QNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAbstractAspect_QAbstractAspect1(
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNode_QNode1() -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_dQNodeIdTypePair(
        this_ptr: *mut crate::QNodeIdTypePair,
    );

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_QNodeIdTypePair2(
        other: *const crate::QNodeIdTypePair,
    ) -> *mut crate::QNodeIdTypePair;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QNodeIdTypePair_operator_(
        this_ptr: *mut crate::QNodeIdTypePair,
        other: *const crate::QNodeIdTypePair,
    ) -> *mut crate::QNodeIdTypePair;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QComponent_QComponent1() -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QArmature_QArmature1() -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAspectEngine_QAspectEngine1() -> *mut crate::QAspectEngine;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBuffer_QBuffer1() -> *mut crate::QBuffer;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute3() -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNodeMapper_operator_(
        this_ptr: *mut crate::QBackendNodeMapper,
        other: *const crate::QBackendNodeMapper,
    ) -> *mut crate::QBackendNodeMapper;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBackendNode_QBackendNode1() -> *mut crate::QBackendNode;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometry_QGeometry1() -> *mut crate::QGeometry;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QGeometryView_QGeometryView1() -> *mut crate::QGeometryView;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QBoundingVolume_QBoundingVolume1(
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreAspect_QCoreAspect1() -> *mut crate::QCoreAspect;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QCoreSettings_QCoreSettings1() -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QEntity_QEntity1() -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QJoint_QJoint1() -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeleton_QSkeleton1() -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_QSkeletonLoader2(
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QTransform_QTransform1() -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_iterator(
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_iterator(
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_iterator(
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_iterator(
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_iterator(
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_iterator(
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_iterator(
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        o: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        o: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        o: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        o: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        o: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        o: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        o: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        o: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        o: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        o: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        o: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        o: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        o: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        o: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        p: *mut *mut crate::QNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        p: *mut crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        p: *mut *mut crate::QEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        p: *mut *mut crate::QAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        p: *mut *mut crate::QAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        p: *mut *mut crate::QComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        p: *mut *mut crate::QJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        j: *const crate::q_list_of_q_node::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        j: *const crate::q_list_of_q_node_id::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        j: *const crate::q_list_of_q_entity::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        j: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        j: *const crate::q_list_of_q_attribute::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        j: *const crate::q_list_of_q_component::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        j: *const crate::q_list_of_q_joint::Iterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_node::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_node_id::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_entity::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_attribute::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_component::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_joint::Iterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_const_iterator(
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_node::Iterator,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_node_id::Iterator,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_entity::Iterator,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_attribute::Iterator,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_component::Iterator,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_const_iterator1(
        o: *const crate::q_list_of_q_joint::Iterator,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__1(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        o: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        o: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        o: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        o: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        o: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        o: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__2(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        o: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_1(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__4(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_2(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__5(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        o: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        o: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        o: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        o: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        o: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        o: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__6(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        o: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_3(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__8(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_4(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__9(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        p: *const *mut crate::QNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        p: *const crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        p: *const *mut crate::QEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        p: *const *mut crate::QAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        p: *const *mut crate::QAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        p: *const *mut crate::QComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__10(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        p: *const *mut crate::QJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__12(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__13(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__14(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__15(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
        arg1: ::std::os::raw::c_int,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        j: *const crate::q_list_of_q_node::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        j: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        j: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        j: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        j: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        j: *const crate::q_list_of_q_component::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_5(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        j: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__16(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator__17(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_6(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_node::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_node_id::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_entity::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_attribute::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_component::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_7(
        this_ptr: *const crate::q_list_of_q_joint::ConstIterator,
        j: ::std::os::raw::c_longlong,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_QList() -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_QList() -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_QList() -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_QList(
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_QList() -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_QList() -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_QList() -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_QList1(
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const *mut crate::QNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const crate::QNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_QList2(
        size: ::std::os::raw::c_longlong,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_swap(
        this_ptr: *mut crate::QListOfQNode,
        other: *mut crate::QListOfQNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_swap(
        this_ptr: *mut crate::QListOfQNodeId,
        other: *mut crate::QListOfQNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_swap(
        this_ptr: *mut crate::QListOfQEntity,
        other: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_swap(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        other: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_swap(
        this_ptr: *mut crate::QListOfQAttribute,
        other: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_swap(
        this_ptr: *mut crate::QListOfQComponent,
        other: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_swap(
        this_ptr: *mut crate::QListOfQJoint,
        other: *mut crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_maxSize(
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_maxSize() -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_size(
        this_ptr: *const crate::QListOfQNode,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_size(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_size(
        this_ptr: *const crate::QListOfQEntity,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_size(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_size(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_size(
        this_ptr: *const crate::QListOfQComponent,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_size(
        this_ptr: *const crate::QListOfQJoint,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_count(
        this_ptr: *const crate::QListOfQNode,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_count(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_count(
        this_ptr: *const crate::QListOfQEntity,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_count(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_count(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_count(
        this_ptr: *const crate::QListOfQComponent,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_count(
        this_ptr: *const crate::QListOfQJoint,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_length(
        this_ptr: *const crate::QListOfQNode,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_length(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_length(
        this_ptr: *const crate::QListOfQEntity,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_length(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_length(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_length(
        this_ptr: *const crate::QListOfQComponent,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_length(
        this_ptr: *const crate::QListOfQJoint,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_isEmpty(
        this_ptr: *const crate::QListOfQNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_isEmpty(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_isEmpty(
        this_ptr: *const crate::QListOfQEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_isEmpty(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_isEmpty(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_isEmpty(
        this_ptr: *const crate::QListOfQComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_isEmpty(
        this_ptr: *const crate::QListOfQJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_resize(
        this_ptr: *mut crate::QListOfQNode,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_resize(
        this_ptr: *mut crate::QListOfQNodeId,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_resize(
        this_ptr: *mut crate::QListOfQEntity,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_resize(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_resize(
        this_ptr: *mut crate::QListOfQAttribute,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_resize(
        this_ptr: *mut crate::QListOfQComponent,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_resize(
        this_ptr: *mut crate::QListOfQJoint,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_resize1(
        this_ptr: *mut crate::QListOfQNode,
        size: ::std::os::raw::c_longlong,
        c: *const *mut crate::QNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_resize1(
        this_ptr: *mut crate::QListOfQNodeId,
        size: ::std::os::raw::c_longlong,
        c: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_resize1(
        this_ptr: *mut crate::QListOfQEntity,
        size: ::std::os::raw::c_longlong,
        c: *const *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_resize1(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        size: ::std::os::raw::c_longlong,
        c: *const *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_resize1(
        this_ptr: *mut crate::QListOfQAttribute,
        size: ::std::os::raw::c_longlong,
        c: *const *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_resize1(
        this_ptr: *mut crate::QListOfQComponent,
        size: ::std::os::raw::c_longlong,
        c: *const *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_resize1(
        this_ptr: *mut crate::QListOfQJoint,
        size: ::std::os::raw::c_longlong,
        c: *const *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQNode,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQNodeId,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQEntity,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQAttribute,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQComponent,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_resizeForOverwrite(
        this_ptr: *mut crate::QListOfQJoint,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_capacity(
        this_ptr: *const crate::QListOfQNode,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_capacity(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_capacity(
        this_ptr: *const crate::QListOfQEntity,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_capacity(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_capacity(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_capacity(
        this_ptr: *const crate::QListOfQComponent,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_capacity(
        this_ptr: *const crate::QListOfQJoint,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_reserve(
        this_ptr: *mut crate::QListOfQNode,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_reserve(
        this_ptr: *mut crate::QListOfQNodeId,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_reserve(
        this_ptr: *mut crate::QListOfQEntity,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_reserve(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_reserve(
        this_ptr: *mut crate::QListOfQAttribute,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_reserve(
        this_ptr: *mut crate::QListOfQComponent,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_reserve(
        this_ptr: *mut crate::QListOfQJoint,
        size: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_squeeze(this_ptr: *mut crate::QListOfQNode);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_squeeze(this_ptr: *mut crate::QListOfQNodeId);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_squeeze(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_squeeze(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_squeeze(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_squeeze(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_squeeze(
        this_ptr: *mut crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_detach(this_ptr: *mut crate::QListOfQNode);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_detach(this_ptr: *mut crate::QListOfQNodeId);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_detach(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_detach(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_detach(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_detach(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_detach(this_ptr: *mut crate::QListOfQJoint);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_isDetached(
        this_ptr: *const crate::QListOfQNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_isDetached(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_isDetached(
        this_ptr: *const crate::QListOfQEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_isDetached(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_isDetached(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_isDetached(
        this_ptr: *const crate::QListOfQComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_isDetached(
        this_ptr: *const crate::QListOfQJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_isSharedWith(
        this_ptr: *const crate::QListOfQNode,
        other: *const crate::QListOfQNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_isSharedWith(
        this_ptr: *const crate::QListOfQNodeId,
        other: *const crate::QListOfQNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_isSharedWith(
        this_ptr: *const crate::QListOfQEntity,
        other: *const crate::QListOfQEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_isSharedWith(
        this_ptr: *const crate::QListOfQAbstractAspect,
        other: *const crate::QListOfQAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_isSharedWith(
        this_ptr: *const crate::QListOfQAttribute,
        other: *const crate::QListOfQAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_isSharedWith(
        this_ptr: *const crate::QListOfQComponent,
        other: *const crate::QListOfQComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_isSharedWith(
        this_ptr: *const crate::QListOfQJoint,
        other: *const crate::QListOfQJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_data(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_data(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_data(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_data(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_data(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_data(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_data(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_data1(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_data1(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_data1(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_data1(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_data1(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_data1(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_data1(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_constData(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_constData(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_constData(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_constData(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_constData(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_constData(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_constData(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_clear(this_ptr: *mut crate::QListOfQNode);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_clear(this_ptr: *mut crate::QListOfQNodeId);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_clear(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_clear(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_clear(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_clear(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_clear(this_ptr: *mut crate::QListOfQJoint);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_at(
        this_ptr: *const crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_at(
        this_ptr: *const crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_at(
        this_ptr: *const crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_at(
        this_ptr: *const crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_at(
        this_ptr: *const crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_at(
        this_ptr: *const crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_at(
        this_ptr: *const crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator__(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator__(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator__(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator__(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator__(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator__(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator__(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator__1(
        this_ptr: *const crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator__1(
        this_ptr: *const crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator__1(
        this_ptr: *const crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator__1(
        this_ptr: *const crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator__1(
        this_ptr: *const crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator__1(
        this_ptr: *const crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator__1(
        this_ptr: *const crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_append(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_append(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_append(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_append(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_append(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_append(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_append(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_append1(
        this_ptr: *mut crate::QListOfQNode,
        i1: *const crate::q_list_of_q_node::ConstIterator,
        i2: *const crate::q_list_of_q_node::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_append1(
        this_ptr: *mut crate::QListOfQNodeId,
        i1: *const crate::q_list_of_q_node_id::ConstIterator,
        i2: *const crate::q_list_of_q_node_id::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_append1(
        this_ptr: *mut crate::QListOfQEntity,
        i1: *const crate::q_list_of_q_entity::ConstIterator,
        i2: *const crate::q_list_of_q_entity::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_append1(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i1: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        i2: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_append1(
        this_ptr: *mut crate::QListOfQAttribute,
        i1: *const crate::q_list_of_q_attribute::ConstIterator,
        i2: *const crate::q_list_of_q_attribute::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_append1(
        this_ptr: *mut crate::QListOfQComponent,
        i1: *const crate::q_list_of_q_component::ConstIterator,
        i2: *const crate::q_list_of_q_component::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_append1(
        this_ptr: *mut crate::QListOfQJoint,
        i1: *const crate::q_list_of_q_joint::ConstIterator,
        i2: *const crate::q_list_of_q_joint::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_append2(
        this_ptr: *mut crate::QListOfQNode,
        l: *const crate::QListOfQNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_append2(
        this_ptr: *mut crate::QListOfQNodeId,
        l: *const crate::QListOfQNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_append2(
        this_ptr: *mut crate::QListOfQEntity,
        l: *const crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_append2(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        l: *const crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_append2(
        this_ptr: *mut crate::QListOfQAttribute,
        l: *const crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_append2(
        this_ptr: *mut crate::QListOfQComponent,
        l: *const crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_append2(
        this_ptr: *mut crate::QListOfQJoint,
        l: *const crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_prepend(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_prepend(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_prepend(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_prepend(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_prepend(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_prepend(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_prepend(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_insert(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QNode,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_insert(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
        t: *const crate::QNodeId,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_insert(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_insert(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_insert(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_insert(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_insert(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_insert1(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QNode,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_insert1(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QNodeId,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_insert1(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_insert1(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_insert1(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_insert1(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_insert1(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_insert2(
        this_ptr: *mut crate::QListOfQNode,
        before: *const crate::q_list_of_q_node::ConstIterator,
        t: *const *mut crate::QNode,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_insert2(
        this_ptr: *mut crate::QListOfQNodeId,
        before: *const crate::q_list_of_q_node_id::ConstIterator,
        t: *const crate::QNodeId,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_insert2(
        this_ptr: *mut crate::QListOfQEntity,
        before: *const crate::q_list_of_q_entity::ConstIterator,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_insert2(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        before: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_insert2(
        this_ptr: *mut crate::QListOfQAttribute,
        before: *const crate::q_list_of_q_attribute::ConstIterator,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_insert2(
        this_ptr: *mut crate::QListOfQComponent,
        before: *const crate::q_list_of_q_component::ConstIterator,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_insert2(
        this_ptr: *mut crate::QListOfQJoint,
        before: *const crate::q_list_of_q_joint::ConstIterator,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_insert3(
        this_ptr: *mut crate::QListOfQNode,
        before: *const crate::q_list_of_q_node::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QNode,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_insert3(
        this_ptr: *mut crate::QListOfQNodeId,
        before: *const crate::q_list_of_q_node_id::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QNodeId,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_insert3(
        this_ptr: *mut crate::QListOfQEntity,
        before: *const crate::q_list_of_q_entity::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_insert3(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        before: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_insert3(
        this_ptr: *mut crate::QListOfQAttribute,
        before: *const crate::q_list_of_q_attribute::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_insert3(
        this_ptr: *mut crate::QListOfQComponent,
        before: *const crate::q_list_of_q_component::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_insert3(
        this_ptr: *mut crate::QListOfQJoint,
        before: *const crate::q_list_of_q_joint::ConstIterator,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_assign(
        this_ptr: *mut crate::QListOfQNode,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_assign(
        this_ptr: *mut crate::QListOfQNodeId,
        n: ::std::os::raw::c_longlong,
        t: *const crate::QNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_assign(
        this_ptr: *mut crate::QListOfQEntity,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_assign(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_assign(
        this_ptr: *mut crate::QListOfQAttribute,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_assign(
        this_ptr: *mut crate::QListOfQComponent,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_assign(
        this_ptr: *mut crate::QListOfQJoint,
        n: ::std::os::raw::c_longlong,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_replace(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_replace(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
        t: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_replace(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_replace(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_replace(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_replace(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_replace(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
        t: *const *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_remove(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_remove(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_remove(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_remove(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_remove(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_remove(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_remove(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_removeFirst(
        this_ptr: *mut crate::QListOfQNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_removeFirst(
        this_ptr: *mut crate::QListOfQNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_removeFirst(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_removeFirst(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_removeFirst(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_removeFirst(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_removeFirst(
        this_ptr: *mut crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_removeLast(
        this_ptr: *mut crate::QListOfQNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_removeLast(
        this_ptr: *mut crate::QListOfQNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_removeLast(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_removeLast(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_removeLast(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_removeLast(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_removeLast(
        this_ptr: *mut crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_takeFirst(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_takeFirst(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_takeFirst(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_takeFirst(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_takeFirst(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_takeFirst(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_takeFirst(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_takeLast(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_takeLast(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_takeLast(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_takeLast(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_takeLast(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_takeLast(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_takeLast(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_fill(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_fill(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_fill(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_fill(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_fill(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_fill(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_fill(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
        size: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_removeAt(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_removeAt(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_removeAt(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_removeAt(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_removeAt(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_removeAt(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_removeAt(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_takeAt(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_takeAt(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_takeAt(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_takeAt(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_takeAt(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_takeAt(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_takeAt(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_move(
        this_ptr: *mut crate::QListOfQNode,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_move(
        this_ptr: *mut crate::QListOfQNodeId,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_move(
        this_ptr: *mut crate::QListOfQEntity,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_move(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_move(
        this_ptr: *mut crate::QListOfQAttribute,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_move(
        this_ptr: *mut crate::QListOfQComponent,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_move(
        this_ptr: *mut crate::QListOfQJoint,
        from: ::std::os::raw::c_longlong,
        to: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_begin(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_begin(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_begin(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_begin(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_begin(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_begin(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_begin(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_end(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_end(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_end(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_end(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_end(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_end(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_end(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_begin1(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_begin1(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_begin1(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_begin1(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_begin1(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_begin1(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_begin1(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_end1(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_end1(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_end1(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_end1(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_end1(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_end1(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_end1(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_cbegin(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_cbegin(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_cbegin(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_cbegin(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_cbegin(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_cbegin(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_cbegin(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_cend(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_cend(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_cend(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_cend(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_cend(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_cend(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_cend(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_constBegin(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_constBegin(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_constBegin(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_constBegin(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_constBegin(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_constBegin(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_constBegin(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_constEnd(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_constEnd(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_constEnd(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_constEnd(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_constEnd(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_constEnd(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_constEnd(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_erase(
        this_ptr: *mut crate::QListOfQNode,
        begin: *const crate::q_list_of_q_node::ConstIterator,
        end: *const crate::q_list_of_q_node::ConstIterator,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_erase(
        this_ptr: *mut crate::QListOfQNodeId,
        begin: *const crate::q_list_of_q_node_id::ConstIterator,
        end: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_erase(
        this_ptr: *mut crate::QListOfQEntity,
        begin: *const crate::q_list_of_q_entity::ConstIterator,
        end: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_erase(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        begin: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
        end: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_erase(
        this_ptr: *mut crate::QListOfQAttribute,
        begin: *const crate::q_list_of_q_attribute::ConstIterator,
        end: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_erase(
        this_ptr: *mut crate::QListOfQComponent,
        begin: *const crate::q_list_of_q_component::ConstIterator,
        end: *const crate::q_list_of_q_component::ConstIterator,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_erase(
        this_ptr: *mut crate::QListOfQJoint,
        begin: *const crate::q_list_of_q_joint::ConstIterator,
        end: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_erase1(
        this_ptr: *mut crate::QListOfQNode,
        pos: *const crate::q_list_of_q_node::ConstIterator,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_erase1(
        this_ptr: *mut crate::QListOfQNodeId,
        pos: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_erase1(
        this_ptr: *mut crate::QListOfQEntity,
        pos: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_erase1(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        pos: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_erase1(
        this_ptr: *mut crate::QListOfQAttribute,
        pos: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_erase1(
        this_ptr: *mut crate::QListOfQComponent,
        pos: *const crate::q_list_of_q_component::ConstIterator,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_erase1(
        this_ptr: *mut crate::QListOfQJoint,
        pos: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_first(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_first(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_first(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_first(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_first(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_first(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_first(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_first1(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_first1(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_first1(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_first1(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_first1(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_first1(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_first1(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_constFirst(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_constFirst(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_constFirst(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_constFirst(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_constFirst(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_constFirst(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_constFirst(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_last(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_last(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_last(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_last(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_last(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_last(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_last(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_last1(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_last1(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_last1(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_last1(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_last1(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_last1(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_last1(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_constLast(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_constLast(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_constLast(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_constLast(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_constLast(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_constLast(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_constLast(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_startsWith(
        this_ptr: *const crate::QListOfQNode,
        t: *const *mut crate::QNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_startsWith(
        this_ptr: *const crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_startsWith(
        this_ptr: *const crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_startsWith(
        this_ptr: *const crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_startsWith(
        this_ptr: *const crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_startsWith(
        this_ptr: *const crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_startsWith(
        this_ptr: *const crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_endsWith(
        this_ptr: *const crate::QListOfQNode,
        t: *const *mut crate::QNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_endsWith(
        this_ptr: *const crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_endsWith(
        this_ptr: *const crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_endsWith(
        this_ptr: *const crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_endsWith(
        this_ptr: *const crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_endsWith(
        this_ptr: *const crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_endsWith(
        this_ptr: *const crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_mid(
        this_ptr: *const crate::QListOfQNode,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_mid(
        this_ptr: *const crate::QListOfQNodeId,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_mid(
        this_ptr: *const crate::QListOfQEntity,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_mid(
        this_ptr: *const crate::QListOfQAbstractAspect,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_mid(
        this_ptr: *const crate::QListOfQAttribute,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_mid(
        this_ptr: *const crate::QListOfQComponent,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_mid(
        this_ptr: *const crate::QListOfQJoint,
        pos: ::std::os::raw::c_longlong,
        len: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_first2(
        this_ptr: *const crate::QListOfQNode,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_first2(
        this_ptr: *const crate::QListOfQNodeId,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_first2(
        this_ptr: *const crate::QListOfQEntity,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_first2(
        this_ptr: *const crate::QListOfQAbstractAspect,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_first2(
        this_ptr: *const crate::QListOfQAttribute,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_first2(
        this_ptr: *const crate::QListOfQComponent,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_first2(
        this_ptr: *const crate::QListOfQJoint,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_last2(
        this_ptr: *const crate::QListOfQNode,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_last2(
        this_ptr: *const crate::QListOfQNodeId,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_last2(
        this_ptr: *const crate::QListOfQEntity,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_last2(
        this_ptr: *const crate::QListOfQAbstractAspect,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_last2(
        this_ptr: *const crate::QListOfQAttribute,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_last2(
        this_ptr: *const crate::QListOfQComponent,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_last2(
        this_ptr: *const crate::QListOfQJoint,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_sliced(
        this_ptr: *const crate::QListOfQNode,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_sliced(
        this_ptr: *const crate::QListOfQNodeId,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_sliced(
        this_ptr: *const crate::QListOfQEntity,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_sliced(
        this_ptr: *const crate::QListOfQAbstractAspect,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_sliced(
        this_ptr: *const crate::QListOfQAttribute,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_sliced(
        this_ptr: *const crate::QListOfQComponent,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_sliced(
        this_ptr: *const crate::QListOfQJoint,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_sliced1(
        this_ptr: *const crate::QListOfQNode,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_sliced1(
        this_ptr: *const crate::QListOfQNodeId,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_sliced1(
        this_ptr: *const crate::QListOfQEntity,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_sliced1(
        this_ptr: *const crate::QListOfQAbstractAspect,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_sliced1(
        this_ptr: *const crate::QListOfQAttribute,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_sliced1(
        this_ptr: *const crate::QListOfQComponent,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_sliced1(
        this_ptr: *const crate::QListOfQJoint,
        pos: ::std::os::raw::c_longlong,
        n: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_value(
        this_ptr: *const crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_value(
        this_ptr: *const crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_value(
        this_ptr: *const crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_value(
        this_ptr: *const crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_value(
        this_ptr: *const crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_value(
        this_ptr: *const crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_value(
        this_ptr: *const crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_value1(
        this_ptr: *const crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const *mut crate::QNode,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_value1(
        this_ptr: *const crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const crate::QNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_value1(
        this_ptr: *const crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const *mut crate::QEntity,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_value1(
        this_ptr: *const crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_value1(
        this_ptr: *const crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const *mut crate::QAttribute,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_value1(
        this_ptr: *const crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const *mut crate::QComponent,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_value1(
        this_ptr: *const crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
        defaultValue: *const *mut crate::QJoint,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_swapItemsAt(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_swapItemsAt(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_swapItemsAt(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_swapItemsAt(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_swapItemsAt(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_swapItemsAt(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_swapItemsAt(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
        j: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_push_back(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_push_back(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_push_back(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_push_back(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_push_back(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_push_back(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_push_back(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_push_front(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_push_front(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_push_front(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_push_front(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_push_front(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_push_front(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_push_front(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_pop_back(this_ptr: *mut crate::QListOfQNode);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_pop_back(this_ptr: *mut crate::QListOfQNodeId);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_pop_back(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_pop_back(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_pop_back(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_pop_back(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_pop_back(
        this_ptr: *mut crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_pop_front(
        this_ptr: *mut crate::QListOfQNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_pop_front(
        this_ptr: *mut crate::QListOfQNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_pop_front(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_pop_front(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_pop_front(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_pop_front(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_pop_front(
        this_ptr: *mut crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_empty(
        this_ptr: *const crate::QListOfQNode,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_empty(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_empty(
        this_ptr: *const crate::QListOfQEntity,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_empty(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_empty(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_empty(
        this_ptr: *const crate::QListOfQComponent,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_empty(
        this_ptr: *const crate::QListOfQJoint,
    ) -> bool;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_front(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_front(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_front(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_front(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_front(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_front(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_front(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_front1(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_front1(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_front1(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_front1(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_front1(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_front1(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_front1(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_back(
        this_ptr: *mut crate::QListOfQNode,
    ) -> *mut *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_back(
        this_ptr: *mut crate::QListOfQNodeId,
    ) -> *mut crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_back(
        this_ptr: *mut crate::QListOfQEntity,
    ) -> *mut *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_back(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    ) -> *mut *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_back(
        this_ptr: *mut crate::QListOfQAttribute,
    ) -> *mut *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_back(
        this_ptr: *mut crate::QListOfQComponent,
    ) -> *mut *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_back(
        this_ptr: *mut crate::QListOfQJoint,
    ) -> *mut *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_back1(
        this_ptr: *const crate::QListOfQNode,
    ) -> *const *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_back1(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *const crate::QNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_back1(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *const *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_back1(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *const *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_back1(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *const *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_back1(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *const *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_back1(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *const *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_shrink_to_fit(
        this_ptr: *mut crate::QListOfQNode,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_shrink_to_fit(
        this_ptr: *mut crate::QListOfQNodeId,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_shrink_to_fit(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_shrink_to_fit(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_shrink_to_fit(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_shrink_to_fit(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_shrink_to_fit(
        this_ptr: *mut crate::QListOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_max_size(
        this_ptr: *const crate::QListOfQNode,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_max_size(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_max_size(
        this_ptr: *const crate::QListOfQEntity,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_max_size(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_max_size(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_max_size(
        this_ptr: *const crate::QListOfQComponent,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_max_size(
        this_ptr: *const crate::QListOfQJoint,
    ) -> ::std::os::raw::c_longlong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator__2(
        this_ptr: *mut crate::QListOfQNode,
        l: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator__2(
        this_ptr: *mut crate::QListOfQNodeId,
        l: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator__2(
        this_ptr: *mut crate::QListOfQEntity,
        l: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator__2(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        l: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator__2(
        this_ptr: *mut crate::QListOfQAttribute,
        l: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator__2(
        this_ptr: *mut crate::QListOfQComponent,
        l: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator__2(
        this_ptr: *mut crate::QListOfQJoint,
        l: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator_(
        this_ptr: *const crate::QListOfQNode,
        l: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator_(
        this_ptr: *const crate::QListOfQNodeId,
        l: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator_(
        this_ptr: *const crate::QListOfQEntity,
        l: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator_(
        this_ptr: *const crate::QListOfQAbstractAspect,
        l: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator_(
        this_ptr: *const crate::QListOfQAttribute,
        l: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator_(
        this_ptr: *const crate::QListOfQComponent,
        l: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator_(
        this_ptr: *const crate::QListOfQJoint,
        l: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator_1(
        this_ptr: *mut crate::QListOfQNode,
        l: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator_1(
        this_ptr: *mut crate::QListOfQNodeId,
        l: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator_1(
        this_ptr: *mut crate::QListOfQEntity,
        l: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator_1(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        l: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator_1(
        this_ptr: *mut crate::QListOfQAttribute,
        l: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator_1(
        this_ptr: *mut crate::QListOfQComponent,
        l: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator_1(
        this_ptr: *mut crate::QListOfQJoint,
        l: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator__4(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator__4(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator__4(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator__4(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator__4(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator__4(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator__4(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator__5(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator__5(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator__5(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator__5(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator__5(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator__5(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator__5(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator__6(
        this_ptr: *mut crate::QListOfQNode,
        l: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator__6(
        this_ptr: *mut crate::QListOfQNodeId,
        l: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator__6(
        this_ptr: *mut crate::QListOfQEntity,
        l: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator__6(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        l: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator__6(
        this_ptr: *mut crate::QListOfQAttribute,
        l: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator__6(
        this_ptr: *mut crate::QListOfQComponent,
        l: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator__6(
        this_ptr: *mut crate::QListOfQJoint,
        l: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_fromList(
        list: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_fromList(
        list: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_fromList(
        list: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_fromList(
        list: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_fromList(
        list: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_fromList(
        list: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_fromList(
        list: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_toList(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_toList(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_toList(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_toList(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_toList(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_toList(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_toList(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_fromVector(
        vector: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_fromVector(
        vector: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_fromVector(
        vector: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_fromVector(
        vector: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_fromVector(
        vector: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_fromVector(
        vector: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_fromVector(
        vector: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_toVector(
        this_ptr: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_toVector(
        this_ptr: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_toVector(
        this_ptr: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_toVector(
        this_ptr: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_toVector(
        this_ptr: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_toVector(
        this_ptr: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_toVector(
        this_ptr: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_qHash(
        key: *const crate::QListOfQNode,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash1(
        key: *const crate::QListOfQNodeId,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash2(
        key: *const crate::QListOfQEntity,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash3(
        key: *const crate::QListOfQAbstractAspect,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash4(
        key: *const crate::QListOfQAttribute,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash5(
        key: *const crate::QListOfQComponent,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash6(
        key: *const crate::QListOfQJoint,
        seed: ::std::os::raw::c_ulong,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_dQList(this_ptr: *mut crate::QListOfQNode);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_dQList(this_ptr: *mut crate::QListOfQNodeId);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_dQList(
        this_ptr: *mut crate::QListOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_dQList(
        this_ptr: *mut crate::QListOfQAbstractAspect,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_dQList(
        this_ptr: *mut crate::QListOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_dQList(
        this_ptr: *mut crate::QListOfQComponent,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_dQList(this_ptr: *mut crate::QListOfQJoint);

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_QList3(
        other: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_QList3(
        other: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_QList3(
        other: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_QList3(
        other: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_QList3(
        other: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_QList3(
        other: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_QList3(
        other: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_operator_4(
        this_ptr: *mut crate::QListOfQNode,
        other: *const crate::QListOfQNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_operator_4(
        this_ptr: *mut crate::QListOfQNodeId,
        other: *const crate::QListOfQNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_operator_4(
        this_ptr: *mut crate::QListOfQEntity,
        other: *const crate::QListOfQEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_operator_4(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        other: *const crate::QListOfQAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_operator_4(
        this_ptr: *mut crate::QListOfQAttribute,
        other: *const crate::QListOfQAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_operator_4(
        this_ptr: *mut crate::QListOfQComponent,
        other: *const crate::QListOfQComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_operator_4(
        this_ptr: *mut crate::QListOfQJoint,
        other: *const crate::QListOfQJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_diterator(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_iterator1(
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_iterator1(
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_iterator1(
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_iterator1(
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_iterator1(
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_iterator1(
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_iterator1(
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_node::Iterator,
        other: *const crate::q_list_of_q_node::Iterator,
    ) -> *mut crate::q_list_of_q_node::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_node_id::Iterator,
        other: *const crate::q_list_of_q_node_id::Iterator,
    ) -> *mut crate::q_list_of_q_node_id::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_entity::Iterator,
        other: *const crate::q_list_of_q_entity::Iterator,
    ) -> *mut crate::q_list_of_q_entity::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::Iterator,
        other: *const crate::q_list_of_q_abstract_aspect::Iterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_attribute::Iterator,
        other: *const crate::q_list_of_q_attribute::Iterator,
    ) -> *mut crate::q_list_of_q_attribute::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_component::Iterator,
        other: *const crate::q_list_of_q_component::Iterator,
    ) -> *mut crate::q_list_of_q_component::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_joint::Iterator,
        other: *const crate::q_list_of_q_joint::Iterator,
    ) -> *mut crate::q_list_of_q_joint::Iterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_dconst_iterator(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_const_iterator2(
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_node::ConstIterator,
        other: *const crate::q_list_of_q_node::ConstIterator,
    ) -> *mut crate::q_list_of_q_node::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_node_id::ConstIterator,
        other: *const crate::q_list_of_q_node_id::ConstIterator,
    ) -> *mut crate::q_list_of_q_node_id::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_entity::ConstIterator,
        other: *const crate::q_list_of_q_entity::ConstIterator,
    ) -> *mut crate::q_list_of_q_entity::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_abstract_aspect::ConstIterator,
        other: *const crate::q_list_of_q_abstract_aspect::ConstIterator,
    ) -> *mut crate::q_list_of_q_abstract_aspect::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_attribute::ConstIterator,
        other: *const crate::q_list_of_q_attribute::ConstIterator,
    ) -> *mut crate::q_list_of_q_attribute::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_component::ConstIterator,
        other: *const crate::q_list_of_q_component::ConstIterator,
    ) -> *mut crate::q_list_of_q_component::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_const_iterator_operator_8(
        this_ptr: *mut crate::q_list_of_q_joint::ConstIterator,
        other: *const crate::q_list_of_q_joint::ConstIterator,
    ) -> *mut crate::q_list_of_q_joint::ConstIterator;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_remove1(
        this_ptr: *mut crate::QListOfQNode,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_remove1(
        this_ptr: *mut crate::QListOfQNodeId,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_remove1(
        this_ptr: *mut crate::QListOfQEntity,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_remove1(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_remove1(
        this_ptr: *mut crate::QListOfQAttribute,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_remove1(
        this_ptr: *mut crate::QListOfQComponent,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_remove1(
        this_ptr: *mut crate::QListOfQJoint,
        i: ::std::os::raw::c_longlong,
    );

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_fill1(
        this_ptr: *mut crate::QListOfQNode,
        t: *const *mut crate::QNode,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_fill1(
        this_ptr: *mut crate::QListOfQNodeId,
        t: *const crate::QNodeId,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_fill1(
        this_ptr: *mut crate::QListOfQEntity,
        t: *const *mut crate::QEntity,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_fill1(
        this_ptr: *mut crate::QListOfQAbstractAspect,
        t: *const *mut crate::QAbstractAspect,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_fill1(
        this_ptr: *mut crate::QListOfQAttribute,
        t: *const *mut crate::QAttribute,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_fill1(
        this_ptr: *mut crate::QListOfQComponent,
        t: *const *mut crate::QComponent,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_fill1(
        this_ptr: *mut crate::QListOfQJoint,
        t: *const *mut crate::QJoint,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNode_ptr_mid1(
        this_ptr: *const crate::QListOfQNode,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNode;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QNodeId_mid1(
        this_ptr: *const crate::QListOfQNodeId,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQNodeId;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QEntity_ptr_mid1(
        this_ptr: *const crate::QListOfQEntity,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQEntity;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAbstractAspect_ptr_mid1(
        this_ptr: *const crate::QListOfQAbstractAspect,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QAttribute_ptr_mid1(
        this_ptr: *const crate::QListOfQAttribute,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QComponent_ptr_mid1(
        this_ptr: *const crate::QListOfQComponent,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQComponent;

    pub fn ctr_qt_3d_core_ffi_QList_Qt3DCore_QJoint_ptr_mid1(
        this_ptr: *const crate::QListOfQJoint,
        pos: ::std::os::raw::c_longlong,
    ) -> *mut crate::QListOfQJoint;

    pub fn ctr_qt_3d_core_ffi_qHash7(key: *const crate::QListOfQNode) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash8(key: *const crate::QListOfQNodeId) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash9(key: *const crate::QListOfQEntity) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash10(
        key: *const crate::QListOfQAbstractAspect,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash11(
        key: *const crate::QListOfQAttribute,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash12(
        key: *const crate::QListOfQComponent,
    ) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_qHash13(key: *const crate::QListOfQJoint) -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_qHash1(id: *const crate::QNodeId)
        -> ::std::os::raw::c_ulong;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute5(
        buf: *mut crate::QBuffer,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
        offset: ::std::os::raw::c_uint,
        stride: ::std::os::raw::c_uint,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute6(
        buf: *mut crate::QBuffer,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
        offset: ::std::os::raw::c_uint,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute7(
        buf: *mut crate::QBuffer,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute8(
        buf: *mut crate::QBuffer,
        name: *const ::qt_core::QString,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
        offset: ::std::os::raw::c_uint,
        stride: ::std::os::raw::c_uint,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute9(
        buf: *mut crate::QBuffer,
        name: *const ::qt_core::QString,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
        offset: ::std::os::raw::c_uint,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QAttribute_QAttribute10(
        buf: *mut crate::QBuffer,
        name: *const ::qt_core::QString,
        vertexBaseType: crate::q_attribute::VertexBaseType,
        vertexSize: ::std::os::raw::c_uint,
        count: ::std::os::raw::c_uint,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_Qt3DCore_QSkeletonLoader_QSkeletonLoader4(
        source: *const ::qt_core::QUrl,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAbstractAspect_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr(
        ptr: *mut crate::QAbstractAspect,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QAbstractAspect_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QNode_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAbstractSkeleton_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr1(
        ptr: *mut crate::QAbstractSkeleton,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QAbstractSkeleton_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAbstractSkeleton_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr2(
        ptr: *mut crate::QAbstractSkeleton,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QAbstractSkeleton_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QComponent_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr2(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QComponent_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QComponent_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr3(
        ptr: *mut crate::QComponent,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QComponent_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QArmature_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QComponent_ptr2(
        ptr: *mut crate::QArmature,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QArmature_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QArmature_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr3(
        ptr: *mut crate::QArmature,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QArmature_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QArmature_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr4(
        ptr: *mut crate::QArmature,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QArmature_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QArmature;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAspectEngine_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAspectEngine;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr5(
        ptr: *mut crate::QAspectEngine,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QAspectEngine_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAspectEngine;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QBuffer_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr4(
        ptr: *mut crate::QBuffer,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QBuffer_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QBuffer_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr6(
        ptr: *mut crate::QBuffer,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QBuffer_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAttribute_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr5(
        ptr: *mut crate::QAttribute,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QAttribute_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAttribute_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr7(
        ptr: *mut crate::QAttribute,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QAttribute_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QGeometry_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr6(
        ptr: *mut crate::QGeometry,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QGeometry_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QGeometry_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr8(
        ptr: *mut crate::QGeometry,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QGeometry_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QGeometryView_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr7(
        ptr: *mut crate::QGeometryView,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QGeometryView_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QGeometryView_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr9(
        ptr: *mut crate::QGeometryView,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QGeometryView_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QBoundingVolume_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QComponent_ptr3(
        ptr: *mut crate::QBoundingVolume,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QBoundingVolume_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QBoundingVolume_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr8(
        ptr: *mut crate::QBoundingVolume,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QBoundingVolume_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QBoundingVolume_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr10(
        ptr: *mut crate::QBoundingVolume,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QBoundingVolume_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QBoundingVolume;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QCoreAspect_ptr(
        ptr: *mut crate::QAbstractAspect,
    ) -> *mut crate::QCoreAspect;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAbstractAspect_ptr1(
        ptr: *mut crate::QCoreAspect,
    ) -> *mut crate::QAbstractAspect;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QCoreAspect_ptr(
        ptr: *mut crate::QAbstractAspect,
    ) -> *mut crate::QCoreAspect;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QCoreAspect_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QCoreAspect;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr11(
        ptr: *mut crate::QCoreAspect,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QCoreAspect_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QCoreAspect;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QCoreSettings_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QComponent_ptr4(
        ptr: *mut crate::QCoreSettings,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QCoreSettings_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QCoreSettings_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr9(
        ptr: *mut crate::QCoreSettings,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QCoreSettings_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QCoreSettings_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr12(
        ptr: *mut crate::QCoreSettings,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QCoreSettings_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QCoreSettings;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QEntity_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr10(
        ptr: *mut crate::QEntity,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QEntity_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QEntity_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr13(
        ptr: *mut crate::QEntity,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QEntity_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QJoint_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr11(
        ptr: *mut crate::QJoint,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QJoint_ptr(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QJoint_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr14(
        ptr: *mut crate::QJoint,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QJoint_ptr1(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QSkeleton_ptr(
        ptr: *mut crate::QAbstractSkeleton,
    ) -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAbstractSkeleton_ptr2(
        ptr: *mut crate::QSkeleton,
    ) -> *mut crate::QAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QSkeleton_ptr(
        ptr: *mut crate::QAbstractSkeleton,
    ) -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QSkeleton_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr12(
        ptr: *mut crate::QSkeleton,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QSkeleton_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QSkeleton_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr15(
        ptr: *mut crate::QSkeleton,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QSkeleton_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QSkeletonLoader_ptr(
        ptr: *mut crate::QAbstractSkeleton,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QAbstractSkeleton_ptr3(
        ptr: *mut crate::QSkeletonLoader,
    ) -> *mut crate::QAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QSkeletonLoader_ptr(
        ptr: *mut crate::QAbstractSkeleton,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QSkeletonLoader_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr13(
        ptr: *mut crate::QSkeletonLoader,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QSkeletonLoader_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QSkeletonLoader_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr16(
        ptr: *mut crate::QSkeletonLoader,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QSkeletonLoader_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QSkeletonLoader;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QTransform_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QComponent_ptr5(
        ptr: *mut crate::QTransform,
    ) -> *mut crate::QComponent;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QTransform_ptr(
        ptr: *mut crate::QComponent,
    ) -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QTransform_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QNode_ptr14(
        ptr: *mut crate::QTransform,
    ) -> *mut crate::QNode;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QTransform_ptr1(
        ptr: *mut crate::QNode,
    ) -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_static_cast_Qt3DCore_QTransform_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr17(
        ptr: *mut crate::QTransform,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_Qt3DCore_QTransform_ptr2(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::QTransform;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_metaObject(
        this_ptr: *const crate::SlotOfQJoint,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_qt_metacast(
        this_ptr: *mut crate::SlotOfQJoint,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_qt_metacall(
        this_ptr: *mut crate::SlotOfQJoint,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QJoint)>,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQJoint;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_set(
        this_ptr: *mut crate::SlotOfQJoint,
        callback: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QJoint)>,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_slot_(
        this_ptr: *mut crate::SlotOfQJoint,
        arg0: *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_metaObject(
        this_ptr: *const crate::SignalOfQJoint,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_qt_metacast(
        this_ptr: *mut crate::SignalOfQJoint,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_qt_metacall(
        this_ptr: *mut crate::SignalOfQJoint,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr(
    ) -> *mut crate::SignalOfQJoint;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_emit_(
        this_ptr: *mut crate::SignalOfQJoint,
        arg0: *mut crate::QJoint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_metaObject(
        this_ptr: *const crate::SlotOfQAttribute,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_qt_metacast(
        this_ptr: *mut crate::SlotOfQAttribute,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_qt_metacall(
        this_ptr: *mut crate::SlotOfQAttribute,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QAttribute),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_set(
        this_ptr: *mut crate::SlotOfQAttribute,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QAttribute),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_slot_(
        this_ptr: *mut crate::SlotOfQAttribute,
        arg0: *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_metaObject(
        this_ptr: *const crate::SignalOfQAttribute,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_qt_metacast(
        this_ptr: *mut crate::SignalOfQAttribute,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_qt_metacall(
        this_ptr: *mut crate::SignalOfQAttribute,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr(
    ) -> *mut crate::SignalOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_emit_(
        this_ptr: *mut crate::SignalOfQAttribute,
        arg0: *mut crate::QAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_metaObject(
        this_ptr: *const crate::SlotOfQGeometryView,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_qt_metacast(
        this_ptr: *mut crate::SlotOfQGeometryView,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_qt_metacall(
        this_ptr: *mut crate::SlotOfQGeometryView,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QGeometryView),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQGeometryView;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_set(
        this_ptr: *mut crate::SlotOfQGeometryView,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QGeometryView),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_slot_(
        this_ptr: *mut crate::SlotOfQGeometryView,
        arg0: *mut crate::QGeometryView,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_metaObject(
        this_ptr: *const crate::SignalOfQGeometryView,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_qt_metacast(
        this_ptr: *mut crate::SignalOfQGeometryView,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_qt_metacall(
        this_ptr: *mut crate::SignalOfQGeometryView,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr(
    ) -> *mut crate::SignalOfQGeometryView;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_emit_(
        this_ptr: *mut crate::SignalOfQGeometryView,
        arg0: *mut crate::QGeometryView,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_metaObject(
        this_ptr: *const crate::SlotOfQQuaternion,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_qt_metacast(
        this_ptr: *mut crate::SlotOfQQuaternion,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_qt_metacall(
        this_ptr: *mut crate::SlotOfQQuaternion,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_gui::QQuaternion),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQQuaternion;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_set(
        this_ptr: *mut crate::SlotOfQQuaternion,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_gui::QQuaternion),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_slot_(
        this_ptr: *mut crate::SlotOfQQuaternion,
        arg0: *const ::qt_gui::QQuaternion,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_metaObject(
        this_ptr: *const crate::SignalOfQQuaternion,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_qt_metacast(
        this_ptr: *mut crate::SignalOfQQuaternion,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_qt_metacall(
        this_ptr: *mut crate::SignalOfQQuaternion,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref(
    ) -> *mut crate::SignalOfQQuaternion;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_emit_(
        this_ptr: *mut crate::SignalOfQQuaternion,
        arg0: *const ::qt_gui::QQuaternion,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_metaObject(
        this_ptr: *const crate::SlotOfQAbstractSkeleton,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_qt_metacast(
        this_ptr: *mut crate::SlotOfQAbstractSkeleton,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_qt_metacall(
        this_ptr: *mut crate::SlotOfQAbstractSkeleton,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QAbstractSkeleton),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_set(
        this_ptr: *mut crate::SlotOfQAbstractSkeleton,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QAbstractSkeleton),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_slot_(
        this_ptr: *mut crate::SlotOfQAbstractSkeleton,
        arg0: *mut crate::QAbstractSkeleton,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_metaObject(
        this_ptr: *const crate::SignalOfQAbstractSkeleton,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_qt_metacast(
        this_ptr: *mut crate::SignalOfQAbstractSkeleton,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_qt_metacall(
        this_ptr: *mut crate::SignalOfQAbstractSkeleton,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr(
    ) -> *mut crate::SignalOfQAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_emit_(
        this_ptr: *mut crate::SignalOfQAbstractSkeleton,
        arg0: *mut crate::QAbstractSkeleton,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_metaObject(
        this_ptr: *const crate::SlotOfUsageType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_qt_metacast(
        this_ptr: *mut crate::SlotOfUsageType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_qt_metacall(
        this_ptr: *mut crate::SlotOfUsageType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_buffer::UsageType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfUsageType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_set(
        this_ptr: *mut crate::SlotOfUsageType,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_buffer::UsageType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_slot_(
        this_ptr: *mut crate::SlotOfUsageType,
        arg0: crate::q_buffer::UsageType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_metaObject(
        this_ptr: *const crate::SignalOfUsageType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_qt_metacast(
        this_ptr: *mut crate::SignalOfUsageType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_qt_metacall(
        this_ptr: *mut crate::SignalOfUsageType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType(
    ) -> *mut crate::SignalOfUsageType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_emit_(
        this_ptr: *mut crate::SignalOfUsageType,
        arg0: crate::q_buffer::UsageType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_metaObject(
        this_ptr: *const crate::SlotOfUint,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_qt_metacast(
        this_ptr: *mut crate::SlotOfUint,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_qt_metacall(
        this_ptr: *mut crate::SlotOfUint,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_uint),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfUint;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_set(
        this_ptr: *mut crate::SlotOfUint,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_uint),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_slot_(
        this_ptr: *mut crate::SlotOfUint,
        arg0: ::std::os::raw::c_uint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_metaObject(
        this_ptr: *const crate::SignalOfUint,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_qt_metacast(
        this_ptr: *mut crate::SignalOfUint,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_qt_metacall(
        this_ptr: *mut crate::SignalOfUint,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int(
    ) -> *mut crate::SignalOfUint;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_emit_(
        this_ptr: *mut crate::SignalOfUint,
        arg0: ::std::os::raw::c_uint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_metaObject(
        this_ptr: *const crate::SlotOfQByteArray,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_qt_metacast(
        this_ptr: *mut crate::SlotOfQByteArray,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_qt_metacall(
        this_ptr: *mut crate::SlotOfQByteArray,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_core::QByteArray),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQByteArray;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_set(
        this_ptr: *mut crate::SlotOfQByteArray,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_core::QByteArray),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_slot_(
        this_ptr: *mut crate::SlotOfQByteArray,
        arg0: *const ::qt_core::QByteArray,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_metaObject(
        this_ptr: *const crate::SignalOfQByteArray,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_qt_metacast(
        this_ptr: *mut crate::SignalOfQByteArray,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_qt_metacall(
        this_ptr: *mut crate::SignalOfQByteArray,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref(
    ) -> *mut crate::SignalOfQByteArray;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_emit_(
        this_ptr: *mut crate::SignalOfQByteArray,
        arg0: *const ::qt_core::QByteArray,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_metaObject(
        this_ptr: *const crate::SlotOfQVector3D,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_qt_metacast(
        this_ptr: *mut crate::SlotOfQVector3D,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_qt_metacall(
        this_ptr: *mut crate::SlotOfQVector3D,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_slot_(
        this_ptr: *mut crate::SlotOfQVector3D,
        arg0: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_metaObject(
        this_ptr: *const crate::SignalOfQVector3D,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_qt_metacast(
        this_ptr: *mut crate::SignalOfQVector3D,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_qt_metacall(
        this_ptr: *mut crate::SignalOfQVector3D,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D(
    ) -> *mut crate::SignalOfQVector3D;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_emit_(
        this_ptr: *mut crate::SignalOfQVector3D,
        arg0: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_metaObject(
        this_ptr: *const crate::SlotOfQGeometry,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_qt_metacast(
        this_ptr: *mut crate::SlotOfQGeometry,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_qt_metacall(
        this_ptr: *mut crate::SlotOfQGeometry,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QGeometry),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQGeometry;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_set(
        this_ptr: *mut crate::SlotOfQGeometry,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QGeometry),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_slot_(
        this_ptr: *mut crate::SlotOfQGeometry,
        arg0: *mut crate::QGeometry,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_metaObject(
        this_ptr: *const crate::SignalOfQGeometry,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_qt_metacast(
        this_ptr: *mut crate::SignalOfQGeometry,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_qt_metacall(
        this_ptr: *mut crate::SignalOfQGeometry,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr(
    ) -> *mut crate::SignalOfQGeometry;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_emit_(
        this_ptr: *mut crate::SignalOfQGeometry,
        arg0: *mut crate::QGeometry,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_metaObject(
        this_ptr: *const crate::SlotOfFloat,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_qt_metacast(
        this_ptr: *mut crate::SlotOfFloat,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_qt_metacall(
        this_ptr: *mut crate::SlotOfFloat,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_ctr_qt_3d_core_ffi_slot_wrapper_float(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_float),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfFloat;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_set(
        this_ptr: *mut crate::SlotOfFloat,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_float),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_slot_(
        this_ptr: *mut crate::SlotOfFloat,
        arg0: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_metaObject(
        this_ptr: *const crate::SignalOfFloat,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_qt_metacast(
        this_ptr: *mut crate::SignalOfFloat,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_qt_metacall(
        this_ptr: *mut crate::SignalOfFloat,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_ctr_qt_3d_core_ffi_signal_wrapper_float(
    ) -> *mut crate::SignalOfFloat;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_emit_(
        this_ptr: *mut crate::SignalOfFloat,
        arg0: ::std::os::raw::c_float,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_metaObject(
        this_ptr: *const crate::SlotOfQVector3D2,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_qt_metacast(
        this_ptr: *mut crate::SlotOfQVector3D2,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_qt_metacall(
        this_ptr: *mut crate::SlotOfQVector3D2,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_gui::QVector3D),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQVector3D2;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_set(
        this_ptr: *mut crate::SlotOfQVector3D2,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_gui::QVector3D),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_slot_(
        this_ptr: *mut crate::SlotOfQVector3D2,
        arg0: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_metaObject(
        this_ptr: *const crate::SignalOfQVector3D2,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_qt_metacast(
        this_ptr: *mut crate::SignalOfQVector3D2,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_qt_metacall(
        this_ptr: *mut crate::SignalOfQVector3D2,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref(
    ) -> *mut crate::SignalOfQVector3D2;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_emit_(
        this_ptr: *mut crate::SignalOfQVector3D2,
        arg0: *const ::qt_gui::QVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_metaObject(
        this_ptr: *const crate::SlotOfQMatrix4X4,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_qt_metacast(
        this_ptr: *mut crate::SlotOfQMatrix4X4,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_qt_metacall(
        this_ptr: *mut crate::SlotOfQMatrix4X4,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_gui::QMatrix4X4),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_set(
        this_ptr: *mut crate::SlotOfQMatrix4X4,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::qt_gui::QMatrix4X4),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_slot_(
        this_ptr: *mut crate::SlotOfQMatrix4X4,
        arg0: *const ::qt_gui::QMatrix4X4,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_metaObject(
        this_ptr: *const crate::SignalOfQMatrix4X4,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_qt_metacast(
        this_ptr: *mut crate::SignalOfQMatrix4X4,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_qt_metacall(
        this_ptr: *mut crate::SignalOfQMatrix4X4,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref(
    ) -> *mut crate::SignalOfQMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_emit_(
        this_ptr: *mut crate::SignalOfQMatrix4X4,
        arg0: *const ::qt_gui::QMatrix4X4,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_metaObject(
        this_ptr: *const crate::SlotOfStatus,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_qt_metacast(
        this_ptr: *mut crate::SlotOfStatus,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_qt_metacall(
        this_ptr: *mut crate::SlotOfStatus,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_skeleton_loader::Status),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfStatus;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_set(
        this_ptr: *mut crate::SlotOfStatus,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_skeleton_loader::Status),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_slot_(
        this_ptr: *mut crate::SlotOfStatus,
        arg0: crate::q_skeleton_loader::Status,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_metaObject(
        this_ptr: *const crate::SignalOfStatus,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_qt_metacast(
        this_ptr: *mut crate::SignalOfStatus,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_qt_metacall(
        this_ptr: *mut crate::SignalOfStatus,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status(
    ) -> *mut crate::SignalOfStatus;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_emit_(
        this_ptr: *mut crate::SignalOfStatus,
        arg0: crate::q_skeleton_loader::Status,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_metaObject(
        this_ptr: *const crate::SlotOfAttributeType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_qt_metacast(
        this_ptr: *mut crate::SlotOfAttributeType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_qt_metacall(
        this_ptr: *mut crate::SlotOfAttributeType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_attribute::AttributeType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfAttributeType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_set(
        this_ptr: *mut crate::SlotOfAttributeType,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_attribute::AttributeType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_slot_(
        this_ptr: *mut crate::SlotOfAttributeType,
        arg0: crate::q_attribute::AttributeType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_metaObject(
        this_ptr: *const crate::SignalOfAttributeType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_qt_metacast(
        this_ptr: *mut crate::SignalOfAttributeType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_qt_metacall(
        this_ptr: *mut crate::SignalOfAttributeType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType(
    ) -> *mut crate::SignalOfAttributeType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_emit_(
        this_ptr: *mut crate::SignalOfAttributeType,
        arg0: crate::q_attribute::AttributeType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_metaObject(
        this_ptr: *const crate::SlotOfVertexBaseType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_qt_metacast(
        this_ptr: *mut crate::SlotOfVertexBaseType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_qt_metacall(
        this_ptr: *mut crate::SlotOfVertexBaseType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_attribute::VertexBaseType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfVertexBaseType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_set(
        this_ptr: *mut crate::SlotOfVertexBaseType,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_attribute::VertexBaseType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_slot_(
        this_ptr: *mut crate::SlotOfVertexBaseType,
        arg0: crate::q_attribute::VertexBaseType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_metaObject(
        this_ptr: *const crate::SignalOfVertexBaseType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_qt_metacast(
        this_ptr: *mut crate::SignalOfVertexBaseType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_qt_metacall(
        this_ptr: *mut crate::SignalOfVertexBaseType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType(
    ) -> *mut crate::SignalOfVertexBaseType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_emit_(
        this_ptr: *mut crate::SignalOfVertexBaseType,
        arg0: crate::q_attribute::VertexBaseType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_metaObject(
        this_ptr: *const crate::SlotOfQEntity,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_qt_metacast(
        this_ptr: *mut crate::SlotOfQEntity,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_qt_metacall(
        this_ptr: *mut crate::SlotOfQEntity,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QEntity),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQEntity;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_set(
        this_ptr: *mut crate::SlotOfQEntity,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QEntity),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_slot_(
        this_ptr: *mut crate::SlotOfQEntity,
        arg0: *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_metaObject(
        this_ptr: *const crate::SignalOfQEntity,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_qt_metacast(
        this_ptr: *mut crate::SignalOfQEntity,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_qt_metacall(
        this_ptr: *mut crate::SignalOfQEntity,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr(
    ) -> *mut crate::SignalOfQEntity;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_emit_(
        this_ptr: *mut crate::SignalOfQEntity,
        arg0: *mut crate::QEntity,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_metaObject(
        this_ptr: *const crate::SlotOfAccessType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_qt_metacast(
        this_ptr: *mut crate::SlotOfAccessType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_qt_metacall(
        this_ptr: *mut crate::SlotOfAccessType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_buffer::AccessType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfAccessType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_set(
        this_ptr: *mut crate::SlotOfAccessType,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_buffer::AccessType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_slot_(
        this_ptr: *mut crate::SlotOfAccessType,
        arg0: crate::q_buffer::AccessType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_metaObject(
        this_ptr: *const crate::SignalOfAccessType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_qt_metacast(
        this_ptr: *mut crate::SignalOfAccessType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_qt_metacall(
        this_ptr: *mut crate::SignalOfAccessType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType(
    ) -> *mut crate::SignalOfAccessType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_emit_(
        this_ptr: *mut crate::SignalOfAccessType,
        arg0: crate::q_buffer::AccessType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_metaObject(
        this_ptr: *const crate::SlotOfQBuffer,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_qt_metacast(
        this_ptr: *mut crate::SlotOfQBuffer,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_qt_metacall(
        this_ptr: *mut crate::SlotOfQBuffer,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QBuffer),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfQBuffer;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_set(
        this_ptr: *mut crate::SlotOfQBuffer,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *mut crate::QBuffer),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_slot_(
        this_ptr: *mut crate::SlotOfQBuffer,
        arg0: *mut crate::QBuffer,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_metaObject(
        this_ptr: *const crate::SignalOfQBuffer,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_qt_metacast(
        this_ptr: *mut crate::SignalOfQBuffer,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_qt_metacall(
        this_ptr: *mut crate::SignalOfQBuffer,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr(
    ) -> *mut crate::SignalOfQBuffer;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_emit_(
        this_ptr: *mut crate::SignalOfQBuffer,
        arg0: *mut crate::QBuffer,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_metaObject(
        this_ptr: *const crate::SlotOfPrimitiveType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_qt_metacast(
        this_ptr: *mut crate::SlotOfPrimitiveType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_qt_metacall(
        this_ptr: *mut crate::SlotOfPrimitiveType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType(
        parent: *mut ::qt_core::QObject,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_geometry_view::PrimitiveType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    ) -> *mut crate::SlotOfPrimitiveType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_set(
        this_ptr: *mut crate::SlotOfPrimitiveType,
        callback: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, crate::q_geometry_view::PrimitiveType),
        >,
        deleter: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
        data: *mut ::std::ffi::c_void,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_slot_(
        this_ptr: *mut crate::SlotOfPrimitiveType,
        arg0: crate::q_geometry_view::PrimitiveType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_staticMetaObject(
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_metaObject(
        this_ptr: *const crate::SignalOfPrimitiveType,
    ) -> *const ::qt_core::QMetaObject;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_qt_metacast(
        this_ptr: *mut crate::SignalOfPrimitiveType,
        arg1: *const ::std::os::raw::c_char,
    ) -> *mut ::std::ffi::c_void;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_qt_metacall(
        this_ptr: *mut crate::SignalOfPrimitiveType,
        arg1: ::qt_core::q_meta_object::Call,
        arg2: ::std::os::raw::c_int,
        arg3: *mut *mut ::std::ffi::c_void,
    ) -> ::std::os::raw::c_int;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_tr(
        s: *const ::std::os::raw::c_char,
        c: *const ::std::os::raw::c_char,
        n: ::std::os::raw::c_int,
    ) -> *mut ::qt_core::QString;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType(
    ) -> *mut crate::SignalOfPrimitiveType;

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_emit_(
        this_ptr: *mut crate::SignalOfPrimitiveType,
        arg0: crate::q_geometry_view::PrimitiveType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr(
        this_ptr: *mut crate::SlotOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr(
        this_ptr: *mut crate::SignalOfQJoint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr(
        this_ptr: *mut crate::SlotOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr(
        this_ptr: *mut crate::SignalOfQAttribute,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr(
        this_ptr: *mut crate::SlotOfQGeometryView,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr(
        this_ptr: *mut crate::SignalOfQGeometryView,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_dctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref(
        this_ptr: *mut crate::SlotOfQQuaternion,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_dctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref(
        this_ptr: *mut crate::SignalOfQQuaternion,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr(
        this_ptr: *mut crate::SlotOfQAbstractSkeleton,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr(
        this_ptr: *mut crate::SignalOfQAbstractSkeleton,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType(
        this_ptr: *mut crate::SlotOfUsageType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType(
        this_ptr: *mut crate::SignalOfUsageType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_dctr_qt_3d_core_ffi_slot_wrapper_unsigned_int(
        this_ptr: *mut crate::SlotOfUint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_dctr_qt_3d_core_ffi_signal_wrapper_unsigned_int(
        this_ptr: *mut crate::SignalOfUint,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_dctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref(
        this_ptr: *mut crate::SlotOfQByteArray,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_dctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref(
        this_ptr: *mut crate::SignalOfQByteArray,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_dctr_qt_3d_core_ffi_slot_wrapper_QVector3D(
        this_ptr: *mut crate::SlotOfQVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_dctr_qt_3d_core_ffi_signal_wrapper_QVector3D(
        this_ptr: *mut crate::SignalOfQVector3D,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr(
        this_ptr: *mut crate::SlotOfQGeometry,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr(
        this_ptr: *mut crate::SignalOfQGeometry,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_float_dctr_qt_3d_core_ffi_slot_wrapper_float(
        this_ptr: *mut crate::SlotOfFloat,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_float_dctr_qt_3d_core_ffi_signal_wrapper_float(
        this_ptr: *mut crate::SignalOfFloat,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_dctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref(
        this_ptr: *mut crate::SlotOfQVector3D2,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_dctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref(
        this_ptr: *mut crate::SignalOfQVector3D2,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_dctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref(
        this_ptr: *mut crate::SlotOfQMatrix4X4,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_dctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref(
        this_ptr: *mut crate::SignalOfQMatrix4X4,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status(
        this_ptr: *mut crate::SlotOfStatus,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status(
        this_ptr: *mut crate::SignalOfStatus,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType(
        this_ptr: *mut crate::SlotOfAttributeType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType(
        this_ptr: *mut crate::SignalOfAttributeType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType(
        this_ptr: *mut crate::SlotOfVertexBaseType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType(
        this_ptr: *mut crate::SignalOfVertexBaseType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr(
        this_ptr: *mut crate::SlotOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr(
        this_ptr: *mut crate::SignalOfQEntity,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType(
        this_ptr: *mut crate::SlotOfAccessType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType(
        this_ptr: *mut crate::SignalOfAccessType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr(
        this_ptr: *mut crate::SlotOfQBuffer,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr(
        this_ptr: *mut crate::SignalOfQBuffer,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_dctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType(
        this_ptr: *mut crate::SlotOfPrimitiveType,
    );

    pub fn ctr_qt_3d_core_ffi_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_dctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType(
        this_ptr: *mut crate::SignalOfPrimitiveType,
    );

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr36(
        ptr: *mut crate::SlotOfQJoint,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QJoint_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr37(
        ptr: *mut crate::SignalOfQJoint,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QJoint_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQJoint;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr38(
        ptr: *mut crate::SlotOfQAttribute,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr39(
        ptr: *mut crate::SignalOfQAttribute,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQAttribute;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr40(
        ptr: *mut crate::SlotOfQGeometryView,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr41(
        ptr: *mut crate::SignalOfQGeometryView,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQGeometryView;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQQuaternion;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr42(
        ptr: *mut crate::SlotOfQQuaternion,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_QQuaternion_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQQuaternion;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQQuaternion;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr43(
        ptr: *mut crate::SignalOfQQuaternion,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_QQuaternion_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQQuaternion;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr44(
        ptr: *mut crate::SlotOfQAbstractSkeleton,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAbstractSkeleton_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr45(
        ptr: *mut crate::SignalOfQAbstractSkeleton,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAbstractSkeleton_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQAbstractSkeleton;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfUsageType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr46(
        ptr: *mut crate::SlotOfUsageType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_UsageType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfUsageType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfUsageType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr47(
        ptr: *mut crate::SignalOfUsageType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_UsageType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfUsageType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfUint;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr48(
        ptr: *mut crate::SlotOfUint,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_unsigned_int_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfUint;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfUint;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr49(
        ptr: *mut crate::SignalOfUint,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_unsigned_int_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfUint;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQByteArray;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr50(
        ptr: *mut crate::SlotOfQByteArray,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_QByteArray_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQByteArray;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQByteArray;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr51(
        ptr: *mut crate::SignalOfQByteArray,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_QByteArray_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQByteArray;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQVector3D;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr52(
        ptr: *mut crate::SlotOfQVector3D,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQVector3D;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQVector3D;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr53(
        ptr: *mut crate::SignalOfQVector3D,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQVector3D;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr54(
        ptr: *mut crate::SlotOfQGeometry,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometry_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr55(
        ptr: *mut crate::SignalOfQGeometry,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometry_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQGeometry;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_float_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfFloat;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr56(
        ptr: *mut crate::SlotOfFloat,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_float_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfFloat;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_float_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfFloat;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr57(
        ptr: *mut crate::SignalOfFloat,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_float_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfFloat;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQVector3D2;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr58(
        ptr: *mut crate::SlotOfQVector3D2,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_QVector3D_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQVector3D2;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQVector3D2;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr59(
        ptr: *mut crate::SignalOfQVector3D2,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_QVector3D_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQVector3D2;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr60(
        ptr: *mut crate::SlotOfQMatrix4X4,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_QMatrix4x4_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr61(
        ptr: *mut crate::SignalOfQMatrix4X4,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_QMatrix4x4_const_ref_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQMatrix4X4;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfStatus;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr62(
        ptr: *mut crate::SlotOfStatus,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QSkeletonLoader_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfStatus;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfStatus;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr63(
        ptr: *mut crate::SignalOfStatus,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QSkeletonLoader_Status_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfStatus;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfAttributeType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr64(
        ptr: *mut crate::SlotOfAttributeType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_AttributeType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfAttributeType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfAttributeType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr65(
        ptr: *mut crate::SignalOfAttributeType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_AttributeType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfAttributeType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfVertexBaseType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr66(
        ptr: *mut crate::SlotOfVertexBaseType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QAttribute_VertexBaseType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfVertexBaseType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfVertexBaseType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr67(
        ptr: *mut crate::SignalOfVertexBaseType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QAttribute_VertexBaseType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfVertexBaseType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr68(
        ptr: *mut crate::SlotOfQEntity,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QEntity_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr69(
        ptr: *mut crate::SignalOfQEntity,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QEntity_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQEntity;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfAccessType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr70(
        ptr: *mut crate::SlotOfAccessType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_AccessType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfAccessType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfAccessType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr71(
        ptr: *mut crate::SignalOfAccessType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_AccessType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfAccessType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr72(
        ptr: *mut crate::SlotOfQBuffer,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QBuffer_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfQBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr73(
        ptr: *mut crate::SignalOfQBuffer,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QBuffer_ptr_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfQBuffer;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfPrimitiveType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr74(
        ptr: *mut crate::SlotOfPrimitiveType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_slot_wrapper_Qt3DCore_QGeometryView_PrimitiveType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SlotOfPrimitiveType;

    pub fn ctr_qt_3d_core_ffi_static_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfPrimitiveType;

    pub fn ctr_qt_3d_core_ffi_static_cast_QObject_ptr75(
        ptr: *mut crate::SignalOfPrimitiveType,
    ) -> *mut ::qt_core::QObject;

    pub fn ctr_qt_3d_core_ffi_dynamic_cast_ctr_qt_3d_core_ffi_signal_wrapper_Qt3DCore_QGeometryView_PrimitiveType_ptr(
        ptr: *mut ::qt_core::QObject,
    ) -> *mut crate::SignalOfPrimitiveType;

}
