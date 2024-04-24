fn main() {
	proconio::input! {
		N: u8
  };
	let mut s:u64 = 0;
	for i in 1..N {
		proconio::input! {
			a: u64
		};
		s = s | a;
	}
	let mut j:u8 = 0;
	while s == (s >> j) << j {
		j += 1;
	}
  println! {"{}", j-1};
}