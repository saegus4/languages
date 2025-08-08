use crate::List::{Cons, Nil};
fn main() {
    let b = Box::new(5);
    println!("b = {b}");

    enum List {
        Cons(i32, Box<List>),
        Nil,
    }

    enum Message {
        Quit, 
        Move { x: i32, y: i32 },
        Write(String),
        ChangeColor(i32, i32, i32),
    }

    let x = 5;
    let y = Box::new(x);

    assert_eq!(5, x);
    assert_eq!(5, *y);

    let x = 5;
    let y = &x;

    assert_eq!(5, x);
    assert_eq!(5, *y);
}

struct MyBox<T>(T);

impl<T> Deref for Mybox<T> {
    type Target = T;

    fn deref(&self) -> &Self::Target {
        &self.0
    }
}

impl<T> MyBox<T> {
    fn new(x: T) -> MyBox<T> {
        MyBox(x)
    }
}

struct CustomSmartPointer { 
    data: String, 
}

impl Drop for CustomSmartPointer { 
    fn drop(&mut self) {
        println!("Dropping CustomSmartPointer with data {}!", self.data);
    }
}

fn main() {
    let c = CustomSmartPointer {
        data: String::from("my stuff"),
    };

    let d = CustomSmartPointer { 
        data: String::from("other stuff"),
    };
    println!("CustomSmartPointers created.");
}

fn main() {
    let x = 5;
    let y = &mut x;
}
