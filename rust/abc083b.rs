fn main() {
	proconio::input! {
		n: u32,
		a: u32,
		b: u32
  };
	let mut r = 0;
	for i in 1..n+1{
		let s = i/10000%10 + i/1000%10 + i/100%10 + i/10%10 + i%10;
		//println! {"{} {}", i, s};
		if a <= s && s <= b {
			r += i;
		}
	}

  println! {"{}", r};
}