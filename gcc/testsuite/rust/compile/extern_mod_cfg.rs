// { dg-additional-options "-w" }
mod inner;

fn main() {
    let _: () = inner::fun();
}
