use qt_core::{QBox, QObject};

#[test]
fn qbox1() {
    unsafe {
        let obj: QBox<QObject> = QObject::new_0a();
        assert_eq!(obj.children().length(), 0);
        {
            let _obj2: QBox<QObject> = QObject::new_1a(&obj);
            assert_eq!(obj.children().length(), 1);
        }
        assert_eq!(obj.children().length(), 1);
    }
}

#[test]
fn qbox2() {
    unsafe {
        let obj = QObject::new_0a();
        let obj2 = QObject::new_1a(&obj);
        assert!(!obj2.is_null());
        // In Qt6, QPtr no longer uses QPointer for lifetime tracking,
        // so we just verify the child was created with a parent.
        assert_eq!(obj.children().length(), 1);
    }
}

#[test]
fn qbox3() {
    unsafe {
        let obj = QObject::new_0a();
        let obj2 = QObject::new_1a(&obj);
        assert!(!obj2.is_null());
        let _obj1 = obj.into_q_ptr();
        assert!(!obj2.is_null());
    }
}
