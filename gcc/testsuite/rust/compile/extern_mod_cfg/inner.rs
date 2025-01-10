#[cfg(enable_first)]
fn fun() {}

#[cfg(not(enable_first))]
fn fun() {}
