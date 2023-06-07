macro_rules! fnptr_impls_args {
    ($($Arg: ident),+) => {};
    () => {};
}

fnptr_impls_args! {}
fnptr_impls_args! { A }

fn main() {}