use proconio::input;

fn main() {
	input! {
		n: u64,
    mut a: [u64; n]
  };
  a.sort();
  a.dedup();

  println!("{}", a.len());
}
