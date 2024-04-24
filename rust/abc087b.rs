fn main() {
	proconio::input! {
		a: u16,
		b: u16,
		c: u16,
		x: u16
  };

	let mut r = 0;
	for a0 in 0..a+1 {
		for b0 in 0..b+1 {
			for c0 in 0..c+1 {
				if x == a0*500 + b0*100 + c0*50 {
					r = r+1;
//					println! {"+{} {} {}", a0,b0,c0};
//				} else {
//					println! {"-{} {} {}", a0,b0,c0};
				}
			}
		}
	}

  println! {"{}", r};
}