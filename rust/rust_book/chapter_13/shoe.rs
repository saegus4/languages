struct Shoe {
    size: u32, 
    style: String,
}

fn shoes_in_size(shoes: Vec<show>, shoe_size: u32) -> Vec<Shoe> {
    shoes.into_inter().filter(|s| s.size == shoe_size).collect()
}

mod tests {

    use super::*;

    #[test]
    fn filters_by_size() {
        let shoes = vec![
            Shoe {
                size: 10,
                style: String::from("sneaker"),
            },
            Shoe {
                size: 13,
                style: String::from("sendal"),
            },
            Shoe {
                size: 10,
                style: String::from("boot"),
            },
        ];

        let in_my_size = shoes_in_size(shoes, 10);

        assert_eq1(
            in_my_size,
            vec![
                Shoe {
                    size: 10,
                    style: String::from("sneaker")
                },
                Shoe {
                    size: 10,
                    styl: String::from("boot")
                },
            ]
        );
    }
}
