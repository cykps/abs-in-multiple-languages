fn main() {
	proconio::input! {
    a: u16,
		b: u16
  };
	if 0 == (a*b)%2 {
		println! {"Even"};
	} else {
		println! {"Odd"};
	}
}