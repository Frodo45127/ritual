use qt_gui::QListOfQStandardItem;

#[test]
fn list_of_pointers() {
    unsafe {
        let list = QListOfQStandardItem::new_0a();
        assert_eq!(list.count(), 0);
    }
}
