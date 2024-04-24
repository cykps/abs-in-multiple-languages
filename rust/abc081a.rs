fn main() {
	proconio::input! {
    s: u8
  };
	let s1 = s/100;
	let s2 = s/10%10;
	let s3 = s%10;

  println! {"{}", s1+s2+s3};
}