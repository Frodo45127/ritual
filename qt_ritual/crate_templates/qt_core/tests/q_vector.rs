use qt_core::QListOfInt;

#[test]
fn list_of_int() {
    unsafe {
        // QList<int>::new_1a creates a list with the given number of default-constructed elements
        let list = QListOfInt::new_1a(3);
        assert_eq!(list.count(), 3);
        assert_eq!(*list.at(0), 0);
        assert_eq!(*list.at(1), 0);
        assert_eq!(*list.at(2), 0);
    }
}
